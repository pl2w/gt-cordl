#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipServerApiClient.hpp"
#include "GlobalNamespace/zzzz__MothershipApiClient_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__MothershipServerApiClient_def.hpp"
#include "GlobalNamespace/zzzz__AccountLinkLookupVector_def.hpp"
#include "GlobalNamespace/zzzz__AddSharedGroupMembersCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BulkGetAccountLinksCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BulkGetPlayersCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__CreateAccountAssociationDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__CreateSharedGroupCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__DeleteSharedGroupCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__DeleteUserDataCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ExplicitAccountLinkCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetFileCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetLastTransactionCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetProgressionTreesForPlayerCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetSharedGroupDataCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetUserDataCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__GetUserInventoryCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListAccountAssociationsCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListBansBulkCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListGameSessionsCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListMothershipTitleDataCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ListUserDataCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__LockProgressionTreeNodeServerCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__MatchmakingPlayerVector_def.hpp"
#include "GlobalNamespace/zzzz__MothershipWriteEventsRequest_def.hpp"
#include "GlobalNamespace/zzzz__PlatformAndSkuVector_def.hpp"
#include "GlobalNamespace/zzzz__PlayerLookupVector_def.hpp"
#include "GlobalNamespace/zzzz__RegisterGameSessionCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__RemoveSharedGroupMembersCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__RunTransactionCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__SendNotificationCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ServerConsumeConsumableCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ServerCreateBanCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ServerCreateReportCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ServerGetBulkSubscriptionsCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ServerGetPermissionsCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ServerRefreshSubscriptionsForPlayerCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ServerValidateUsernameCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__SetUserDataCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__StartMatchBackfillCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__StopMatchmakingCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__StringKeyValueMap_def.hpp"
#include "GlobalNamespace/zzzz__StringVector_def.hpp"
#include "GlobalNamespace/zzzz__UnlockProgressionTreeNodeCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__UnregisterGameSessionCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__UpdateGameSessionCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__UpdateSharedGroupDataCompleteServerDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__VerifyTokenCompleteDelegateWrapper_def.hpp"
#include "GlobalNamespace/zzzz__WriteEventsCompleteServerDelegateWrapper_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MothershipServerApiClient::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x52be6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipServerApiClient*)>(&::GlobalNamespace::MothershipServerApiClient::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x52be788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipServerApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::MothershipServerApiClient*)>(&::GlobalNamespace::MothershipServerApiClient::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x52be7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipServerApiClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(bool)>(&::GlobalNamespace::MothershipServerApiClient::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x52be864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                    {::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, bool)>(&::GlobalNamespace::MothershipServerApiClient::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52be9d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetVerifyTokenCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::VerifyTokenCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetVerifyTokenCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52beadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetVerifyTokenCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::VerifyTokenCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.VerifyToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::VerifyToken)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52bebf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"VerifyToken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetBulkGetAccountLinksCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::BulkGetAccountLinksCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetBulkGetAccountLinksCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52becec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetBulkGetAccountLinksCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::BulkGetAccountLinksCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.BulkGetAccountLinks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::AccountLinkLookupVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::BulkGetAccountLinks)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52bee00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"BulkGetAccountLinks", {}, {::i2c::type_of<::GlobalNamespace::AccountLinkLookupVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetBulkGetPlayersCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::BulkGetPlayersCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetBulkGetPlayersCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetBulkGetPlayersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::BulkGetPlayersCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.BulkGetPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::PlayerLookupVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::BulkGetPlayers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52bf020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"BulkGetPlayers", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetCreateExplicitAccountLinkCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ExplicitAccountLinkCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetCreateExplicitAccountLinkCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bf12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetCreateExplicitAccountLinkCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ExplicitAccountLinkCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.CreateExplicitAccountLink
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::CreateExplicitAccountLink)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x52bf240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"CreateExplicitAccountLink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetListAccountAssociationsCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ListAccountAssociationsCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetListAccountAssociationsCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bf378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListAccountAssociationsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListAccountAssociationsCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ListAccountAssociationsForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ListAccountAssociationsForPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52bf48c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListAccountAssociationsForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetCreateAccountAssociationsCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::CreateAccountAssociationDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetCreateAccountAssociationsCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bf578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetCreateAccountAssociationsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateAccountAssociationDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.CreateAccountAssociation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::CreateAccountAssociation)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x52bf68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"CreateAccountAssociation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetSetUserDataCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::SetUserDataCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetSetUserDataCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bf7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetSetUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, int32_t, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::SetUserData)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bf8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetGetUserDataCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::GetUserDataCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetGetUserDataCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bf9d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.GetUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::GetUserData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52bfaec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetDeleteUserDataCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::DeleteUserDataCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetDeleteUserDataCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bfbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetDeleteUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::DeleteUserDataCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.DeleteUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::DeleteUserData)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52bfd04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"DeleteUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetListUserDataCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ListUserDataCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetListUserDataCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52bfe08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListUserDataCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ListUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ListUserData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52bff1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetCreateSharedGroupCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::CreateSharedGroupCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetCreateSharedGroupCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c0008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetCreateSharedGroupCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateSharedGroupCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.CreateSharedGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::CreateSharedGroup)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52c011c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"CreateSharedGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetGetSharedGroupDataCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::GetSharedGroupDataCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetGetSharedGroupDataCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c0220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetSharedGroupDataCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.GetSharedGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, bool, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::GetSharedGroupData)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x52c0334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetUpdateSharedGroupDataCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::UpdateSharedGroupDataCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetUpdateSharedGroupDataCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c0474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUpdateSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UpdateSharedGroupDataCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.UpdateSharedGroupData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringKeyValueMap*, ::GlobalNamespace::StringKeyValueMap*, ::GlobalNamespace::StringVector*, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::UpdateSharedGroupData)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x52c0588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UpdateSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetAddSharedGroupMembersCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::AddSharedGroupMembersCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetAddSharedGroupMembersCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c06f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetAddSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.AddSharedGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::AddSharedGroupMembers)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x52c080c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"AddSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetRemoveSharedGroupMembersCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::RemoveSharedGroupMembersCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetRemoveSharedGroupMembersCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c0940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRemoveSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.RemoveSharedGroupMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::RemoveSharedGroupMembers)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x52c0a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RemoveSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetDeleteSharedGroupCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::DeleteSharedGroupCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetDeleteSharedGroupCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c0b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetDeleteSharedGroupCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::DeleteSharedGroupCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.DeleteSharedGroup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::DeleteSharedGroup)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52c0c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"DeleteSharedGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetGetUserInventoryCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::GetUserInventoryCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetGetUserInventoryCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c0da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetUserInventoryCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserInventoryCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.GetUserInventory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::GetUserInventory)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52c0eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetRunTransactionCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::RunTransactionCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetRunTransactionCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c0fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRunTransactionCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RunTransactionCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.RunTransaction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::RunTransaction)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c10cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RunTransaction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.RunTransactionWithRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::RunTransactionWithRef)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x52c11e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RunTransactionWithRef", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetGetLastTransactionRunCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::GetLastTransactionCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetGetLastTransactionRunCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c1310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetLastTransactionRunCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetLastTransactionCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.GetLastTransactionRun
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::GetLastTransactionRun)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c1424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetLastTransactionRun", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetConsumeConsumableCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ServerConsumeConsumableCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetConsumeConsumableCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c1538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetConsumeConsumableCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerConsumeConsumableCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ConsumeConsumable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ConsumeConsumable)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c164c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ConsumeConsumable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetListMothershipTitleDataCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetListMothershipTitleDataCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c1760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListMothershipTitleDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ListMothershipTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ListMothershipTitleData)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x52c1874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListMothershipTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetAcceptLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::StringW)>(&::GlobalNamespace::MothershipServerApiClient::SetAcceptLanguage)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52c19a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetAcceptLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetWriteEventsCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::WriteEventsCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetWriteEventsCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c1a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetWriteEventsCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::WriteEventsCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.WriteEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::MothershipWriteEventsRequest*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::WriteEvents)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52c1b94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"WriteEvents", {}, {::i2c::type_of<::GlobalNamespace::MothershipWriteEventsRequest*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetListBansBulkCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ListBansBulkCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetListBansBulkCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c1ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListBansBulkCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListBansBulkCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ListBansBulk
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::StringVector*, int32_t, bool, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ListBansBulk)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x52c1db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListBansBulk", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetServerCreateReportCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ServerCreateReportCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetServerCreateReportCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c1ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerCreateReportCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerCreateReportCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerCreateReport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, int32_t, ::StringW, bool, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerCreateReport)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x52c1fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerCreateReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetServerValidateUsernameCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ServerValidateUsernameCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetServerValidateUsernameCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c211c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerValidateUsernameCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerValidateUsernameCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerValidateUsername
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerValidateUsername)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52c2230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerValidateUsername", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetServerCreateBanCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ServerCreateBanCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetServerCreateBanCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c231c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerCreateBanCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerCreateBanCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerCreateBan
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, int32_t, ::StringW, int32_t, bool, ::StringW, ::StringW, bool, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerCreateBan)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x52c2430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerCreateBan", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetSendNotificationServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::SendNotificationCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetSendNotificationServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c2574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetSendNotificationServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::SendNotificationCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SendNotification
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::StringVector*, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::SendNotification)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x52c2688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SendNotification", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c27ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.GetProgressionTrackValuesForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::GetProgressionTrackValuesForPlayer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52c28c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetProgressionTrackValuesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c29c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.IncrementProgressionTrackForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, int32_t, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::IncrementProgressionTrackForPlayer)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x52c2ad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"IncrementProgressionTrackForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::UnlockProgressionTreeNodeCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c2bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UnlockProgressionTreeNodeCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.UnlockProgressionTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::UnlockProgressionTreeNode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52c2d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UnlockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ForceUnlockProgressionTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ForceUnlockProgressionTreeNode)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x52c2e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ForceUnlockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::GetProgressionTreesForPlayerCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c2f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.GetProgressionTreesForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::GetProgressionTreesForPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52c302c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetProgressionTreesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetLockProgressionTreeNodeCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::LockProgressionTreeNodeServerCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetLockProgressionTreeNodeCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c3118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetLockProgressionTreeNodeCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::LockProgressionTreeNodeServerCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.LockProgressionTreeNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, bool, bool, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::LockProgressionTreeNode)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x52c322c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"LockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetServerGetPermissionsCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ServerGetPermissionsCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetServerGetPermissionsCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c3368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerGetPermissionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerGetPermissionsCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerGetPermissions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerGetPermissions)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52c347c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerGetPermissions", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetRefreshSubscriptionsForPlayerCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetRefreshSubscriptionsForPlayerCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c3588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRefreshSubscriptionsForPlayerCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.RefreshSubscriptionsForPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::RefreshSubscriptionsForPlayer)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52c369c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RefreshSubscriptionsForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetServerBulkGetSubscriptionsCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ServerGetBulkSubscriptionsCompleteDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetServerBulkGetSubscriptionsCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c3788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerBulkGetSubscriptionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerGetBulkSubscriptionsCompleteDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerBulkGetSubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::StringVector*, ::GlobalNamespace::PlatformAndSkuVector*, ::GlobalNamespace::StringVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerBulkGetSubscriptions)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x52c389c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerBulkGetSubscriptions", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::GlobalNamespace::PlatformAndSkuVector*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetListGameSessionsCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::ListGameSessionsCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetListGameSessionsCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c39fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListGameSessionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListGameSessionsCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ListGameSessions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(int32_t, int32_t, ::StringW, ::StringW, int32_t, int32_t, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ListGameSessions)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x52c3b10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListGameSessions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetUpdateGameSessionCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::UpdateGameSessionCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetUpdateGameSessionCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c3c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUpdateGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UpdateGameSessionCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.UpdateGameSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, int32_t, ::GlobalNamespace::StringKeyValueMap*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::UpdateGameSession)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x52c3d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UpdateGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetRegisterGameSessionCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::RegisterGameSessionCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetRegisterGameSessionCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c3e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRegisterGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.RegisterGameSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::StringW, ::StringW, int32_t, ::StringW, int32_t, ::StringW, ::StringW, ::GlobalNamespace::StringKeyValueMap*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::RegisterGameSession)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x52c3f94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RegisterGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetUnregisterGameSessionCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::UnregisterGameSessionCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetUnregisterGameSessionCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c40f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUnregisterGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UnregisterGameSessionCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.UnregisterGameSession
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::UnregisterGameSession)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52c4208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UnregisterGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetGetFileCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::GetFileCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetGetFileCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c42f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetFileCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetFileCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerGetFileById
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerGetFileById)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52c4408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerGetFileById", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerGetFileByNameOrAliasAndVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerGetFileByNameOrAliasAndVersion)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x52c44f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerGetFileByNameOrAliasAndVersion", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetServerStartMatchBackfillCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::StartMatchBackfillCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetServerStartMatchBackfillCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c45f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerStartMatchBackfillCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StartMatchBackfillCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerStartMatchBackfill
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::StringW, ::GlobalNamespace::MatchmakingPlayerVector*, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerStartMatchBackfill)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x52c4704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerStartMatchBackfill", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MatchmakingPlayerVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.SetServerStopMatchmakingCompleteDelegateWrapper
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MothershipServerApiClient::*)(::GlobalNamespace::StopMatchmakingCompleteServerDelegateWrapper*)>(&::GlobalNamespace::MothershipServerApiClient::SetServerStopMatchmakingCompleteDelegateWrapper)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x52c4828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerStopMatchmakingCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StopMatchmakingCompleteServerDelegateWrapper*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MothershipServerApiClient.ServerStopMatchmaking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MothershipServerApiClient::*)(::StringW, ::System::IntPtr)>(&::GlobalNamespace::MothershipServerApiClient::ServerStopMatchmaking)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x52c493c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerStopMatchmaking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::MothershipServerApiClient::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::MothershipServerApiClient::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::MothershipServerApiClient::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::MothershipServerApiClient::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipServerApiClient::getCPtr(::GlobalNamespace::MothershipServerApiClient*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::MothershipServerApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::MothershipServerApiClient::swigRelease(::GlobalNamespace::MothershipServerApiClient*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::MothershipServerApiClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::MothershipServerApiClient::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void GlobalNamespace::MothershipServerApiClient::_ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  apiKey, bool  enableRetryQueue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUrl, titleId, envId, apiKey, enableRetryQueue);
}
inline void GlobalNamespace::MothershipServerApiClient::SetVerifyTokenCompleteDelegateWrapper(::GlobalNamespace::VerifyTokenCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetVerifyTokenCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::VerifyTokenCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::VerifyToken(::StringW  mothershipPlayerId, ::StringW  token, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"VerifyToken", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mothershipPlayerId, token, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetBulkGetAccountLinksCompleteDelegateWrapper(::GlobalNamespace::BulkGetAccountLinksCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetBulkGetAccountLinksCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::BulkGetAccountLinksCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::BulkGetAccountLinks(::GlobalNamespace::AccountLinkLookupVector*  lookups, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"BulkGetAccountLinks", {}, {::i2c::type_of<::GlobalNamespace::AccountLinkLookupVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lookups, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetBulkGetPlayersCompleteDelegateWrapper(::GlobalNamespace::BulkGetPlayersCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetBulkGetPlayersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::BulkGetPlayersCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::BulkGetPlayers(::GlobalNamespace::PlayerLookupVector*  lookups, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"BulkGetPlayers", {}, {::i2c::type_of<::GlobalNamespace::PlayerLookupVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, lookups, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetCreateExplicitAccountLinkCompleteDelegateWrapper(::GlobalNamespace::ExplicitAccountLinkCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetCreateExplicitAccountLinkCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ExplicitAccountLinkCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::CreateExplicitAccountLink(::StringW  titleId, ::StringW  envId, ::StringW  playerId, ::StringW  externalServiceName, ::StringW  appScopedAccountId, ::StringW  orgScopedAccountId, ::StringW  username, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"CreateExplicitAccountLink", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, playerId, externalServiceName, appScopedAccountId, orgScopedAccountId, username, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetListAccountAssociationsCompleteDelegateWrapper(::GlobalNamespace::ListAccountAssociationsCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListAccountAssociationsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListAccountAssociationsCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ListAccountAssociationsForPlayer(::StringW  mothershipPlayerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListAccountAssociationsForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mothershipPlayerId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetCreateAccountAssociationsCompleteDelegateWrapper(::GlobalNamespace::CreateAccountAssociationDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetCreateAccountAssociationsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateAccountAssociationDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::CreateAccountAssociation(::StringW  mothershipPlayerId, ::StringW  externalServiceName, ::StringW  externalServiceOrgScopedId, ::StringW  externalServiceUserId, ::StringW  externalServiceUserName, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"CreateAccountAssociation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mothershipPlayerId, externalServiceName, externalServiceOrgScopedId, externalServiceUserId, externalServiceUserName, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetSetUserDataCompleteServerDelegateWrapper(::GlobalNamespace::SetUserDataCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetSetUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::SetUserDataCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::SetUserData(::StringW  userId, ::StringW  keyName, ::StringW  value, int32_t  generation, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, keyName, value, generation, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetGetUserDataCompleteServerDelegateWrapper(::GlobalNamespace::GetUserDataCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserDataCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::GetUserData(::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, keyName, metadataId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetDeleteUserDataCompleteServerDelegateWrapper(::GlobalNamespace::DeleteUserDataCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetDeleteUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::DeleteUserDataCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::DeleteUserData(::StringW  userId, ::StringW  keyName, ::StringW  metadataId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"DeleteUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, keyName, metadataId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetListUserDataCompleteServerDelegateWrapper(::GlobalNamespace::ListUserDataCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListUserDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListUserDataCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ListUserData(::StringW  userId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListUserData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, userId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetCreateSharedGroupCompleteDelegateWrapper(::GlobalNamespace::CreateSharedGroupCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetCreateSharedGroupCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::CreateSharedGroupCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::CreateSharedGroup(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"CreateSharedGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, sharedGroupId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetGetSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::GetSharedGroupDataCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetSharedGroupDataCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::GetSharedGroupData(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  keys, bool  getMembers, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, sharedGroupId, keys, getMembers, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetUpdateSharedGroupDataCompleteDelegateWrapper(::GlobalNamespace::UpdateSharedGroupDataCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUpdateSharedGroupDataCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UpdateSharedGroupDataCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::UpdateSharedGroupData(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringKeyValueMap*  data, ::GlobalNamespace::StringKeyValueMap*  customTags, ::GlobalNamespace::StringVector*  keysToRemove, ::StringW  permission, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UpdateSharedGroupData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, sharedGroupId, data, customTags, keysToRemove, permission, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetAddSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::AddSharedGroupMembersCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetAddSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::AddSharedGroupMembersCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::AddSharedGroupMembers(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"AddSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, sharedGroupId, mothershipIds, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetRemoveSharedGroupMembersCompleteDelegateWrapper(::GlobalNamespace::RemoveSharedGroupMembersCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRemoveSharedGroupMembersCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RemoveSharedGroupMembersCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::RemoveSharedGroupMembers(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::GlobalNamespace::StringVector*  mothershipIds, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RemoveSharedGroupMembers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, sharedGroupId, mothershipIds, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetDeleteSharedGroupCompleteDelegateWrapper(::GlobalNamespace::DeleteSharedGroupCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetDeleteSharedGroupCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::DeleteSharedGroupCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::DeleteSharedGroup(::StringW  titleId, ::StringW  envId, ::StringW  sharedGroupId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"DeleteSharedGroup", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, sharedGroupId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetGetUserInventoryCompleteServerDelegateWrapper(::GlobalNamespace::GetUserInventoryCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetUserInventoryCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetUserInventoryCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::GetUserInventory(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetUserInventory", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, userId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetRunTransactionCompleteServerDelegateWrapper(::GlobalNamespace::RunTransactionCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRunTransactionCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RunTransactionCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::RunTransaction(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::StringW  transactionId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RunTransaction", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, userId, transactionId, userData);
}
inline bool GlobalNamespace::MothershipServerApiClient::RunTransactionWithRef(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::StringW  transactionId, ::StringW  refId, ::StringW  externalServiceName, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RunTransactionWithRef", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, userId, transactionId, refId, externalServiceName, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetGetLastTransactionRunCompleteServerDelegateWrapper(::GlobalNamespace::GetLastTransactionCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetLastTransactionRunCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetLastTransactionCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::GetLastTransactionRun(::StringW  titleId, ::StringW  envId, ::StringW  userId, ::StringW  transactionId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetLastTransactionRun", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, userId, transactionId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetConsumeConsumableCompleteServerDelegateWrapper(::GlobalNamespace::ServerConsumeConsumableCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetConsumeConsumableCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerConsumeConsumableCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ConsumeConsumable(::StringW  titleId, ::StringW  envId, ::StringW  callerId, ::StringW  entitlementId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ConsumeConsumable", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, callerId, entitlementId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetListMothershipTitleDataCompleteServerDelegateWrapper(::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListMothershipTitleDataCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListMothershipTitleDataCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ListMothershipTitleData(::StringW  titleId, ::StringW  envId, ::StringW  deploymentId, ::GlobalNamespace::StringVector*  keys, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListMothershipTitleData", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, deploymentId, keys, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetAcceptLanguage(::StringW  language)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetAcceptLanguage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, language);
}
inline void GlobalNamespace::MothershipServerApiClient::SetWriteEventsCompleteServerDelegateWrapper(::GlobalNamespace::WriteEventsCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetWriteEventsCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::WriteEventsCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::WriteEvents(::GlobalNamespace::MothershipWriteEventsRequest*  request, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"WriteEvents", {}, {::i2c::type_of<::GlobalNamespace::MothershipWriteEventsRequest*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, request, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetListBansBulkCompleteServerDelegateWrapper(::GlobalNamespace::ListBansBulkCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListBansBulkCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListBansBulkCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ListBansBulk(::GlobalNamespace::StringVector*  playerIds, int32_t  category, bool  includeExpired, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListBansBulk", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerIds, category, includeExpired, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetServerCreateReportCompleteDelegateWrapper(::GlobalNamespace::ServerCreateReportCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerCreateReportCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerCreateReportCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerCreateReport(::StringW  reportingUserId, ::StringW  reportedUserId, int32_t  category, ::StringW  platform, bool  moddedClient, ::StringW  metadata, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerCreateReport", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, reportingUserId, reportedUserId, category, platform, moddedClient, metadata, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetServerValidateUsernameCompleteDelegateWrapper(::GlobalNamespace::ServerValidateUsernameCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerValidateUsernameCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerValidateUsernameCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerValidateUsername(::StringW  username, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerValidateUsername", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, username, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetServerCreateBanCompleteDelegateWrapper(::GlobalNamespace::ServerCreateBanCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerCreateBanCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerCreateBanCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerCreateBan(::StringW  playerId, int32_t  category, ::StringW  reason, int32_t  durationMinutes, bool  orgWide, ::StringW  metadata, ::StringW  source, bool  isHardwareBan, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerCreateBan", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, category, reason, durationMinutes, orgWide, metadata, source, isHardwareBan, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetSendNotificationServerDelegateWrapper(::GlobalNamespace::SendNotificationCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetSendNotificationServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::SendNotificationCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::SendNotification(::GlobalNamespace::StringVector*  playerIds, ::StringW  title, ::StringW  body, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SendNotification", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerIds, title, body, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTrackValuesForPlayerCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::GetProgressionTrackValuesForPlayer(::StringW  titleId, ::StringW  envId, ::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetProgressionTrackValuesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, playerId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetIncrementProgressionTrackForPlayerCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::IncrementProgressionTrackForPlayerCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::IncrementProgressionTrackForPlayer(::StringW  titleId, ::StringW  envId, ::StringW  playerId, ::StringW  trackId, int32_t  additionalProgress, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"IncrementProgressionTrackForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, playerId, trackId, additionalProgress, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper(::GlobalNamespace::UnlockProgressionTreeNodeCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUnlockProgressionTreeNodeCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UnlockProgressionTreeNodeCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::UnlockProgressionTreeNode(::StringW  treeId, ::StringW  nodeId, ::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UnlockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, treeId, nodeId, playerId, userData);
}
inline bool GlobalNamespace::MothershipServerApiClient::ForceUnlockProgressionTreeNode(::StringW  treeId, ::StringW  nodeId, ::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ForceUnlockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, treeId, nodeId, playerId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper(::GlobalNamespace::GetProgressionTreesForPlayerCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetProgressionTreesForPlayerCompleteServerDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetProgressionTreesForPlayerCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::GetProgressionTreesForPlayer(::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"GetProgressionTreesForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetLockProgressionTreeNodeCompleteDelegateWrapper(::GlobalNamespace::LockProgressionTreeNodeServerCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetLockProgressionTreeNodeCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::LockProgressionTreeNodeServerCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::LockProgressionTreeNode(::StringW  titleId, ::StringW  envId, ::StringW  treeId, ::StringW  nodeId, ::StringW  playerId, bool  refund_costs, bool  rewind_rewards, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"LockProgressionTreeNode", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, titleId, envId, treeId, nodeId, playerId, refund_costs, rewind_rewards, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetServerGetPermissionsCompleteDelegateWrapper(::GlobalNamespace::ServerGetPermissionsCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerGetPermissionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerGetPermissionsCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerGetPermissions(::GlobalNamespace::StringVector*  playerIds, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerGetPermissions", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerIds, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetRefreshSubscriptionsForPlayerCompleteDelegateWrapper(::GlobalNamespace::ServerRefreshSubscriptionsForPlayerCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRefreshSubscriptionsForPlayerCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerRefreshSubscriptionsForPlayerCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::RefreshSubscriptionsForPlayer(::StringW  playerId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RefreshSubscriptionsForPlayer", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetServerBulkGetSubscriptionsCompleteDelegateWrapper(::GlobalNamespace::ServerGetBulkSubscriptionsCompleteDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerBulkGetSubscriptionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ServerGetBulkSubscriptionsCompleteDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerBulkGetSubscriptions(::GlobalNamespace::StringVector*  players, ::GlobalNamespace::PlatformAndSkuVector*  platformSkus, ::GlobalNamespace::StringVector*  catalogIds, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerBulkGetSubscriptions", {}, {::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::GlobalNamespace::PlatformAndSkuVector*>(), ::i2c::type_of<::GlobalNamespace::StringVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, players, platformSkus, catalogIds, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetListGameSessionsCompleteDelegateWrapper(::GlobalNamespace::ListGameSessionsCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetListGameSessionsCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::ListGameSessionsCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ListGameSessions(int32_t  page_size, int32_t  page_offset, ::StringW  region, ::StringW  partition, int32_t  min_empty_slots, int32_t  max_empty_slots, ::StringW  session_name_search, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ListGameSessions", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, page_size, page_offset, region, partition, min_empty_slots, max_empty_slots, session_name_search, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetUpdateGameSessionCompleteDelegateWrapper(::GlobalNamespace::UpdateGameSessionCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUpdateGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UpdateGameSessionCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::UpdateGameSession(::StringW  id, int32_t  currentPlayerCount, ::GlobalNamespace::StringKeyValueMap*  extraProperties, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UpdateGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, currentPlayerCount, extraProperties, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetRegisterGameSessionCompleteDelegateWrapper(::GlobalNamespace::RegisterGameSessionCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetRegisterGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::RegisterGameSessionCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::RegisterGameSession(::StringW  gameSessionId, ::StringW  provider, ::StringW  gameSessionName, ::StringW  ip, int32_t  port, ::StringW  requiredTags, int32_t  maxPlayerCount, ::StringW  region, ::StringW  partition, ::GlobalNamespace::StringKeyValueMap*  extraProperties, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"RegisterGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StringKeyValueMap*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, gameSessionId, provider, gameSessionName, ip, port, requiredTags, maxPlayerCount, region, partition, extraProperties, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetUnregisterGameSessionCompleteDelegateWrapper(::GlobalNamespace::UnregisterGameSessionCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetUnregisterGameSessionCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::UnregisterGameSessionCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::UnregisterGameSession(::StringW  id, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"UnregisterGameSession", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetGetFileCompleteDelegateWrapper(::GlobalNamespace::GetFileCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetGetFileCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::GetFileCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerGetFileById(::StringW  fileId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerGetFileById", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fileId, userData);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerGetFileByNameOrAliasAndVersion(::StringW  fileNameOrAlias, ::StringW  versionOrLatest, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerGetFileByNameOrAliasAndVersion", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, fileNameOrAlias, versionOrLatest, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetServerStartMatchBackfillCompleteDelegateWrapper(::GlobalNamespace::StartMatchBackfillCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerStartMatchBackfillCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StartMatchBackfillCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerStartMatchBackfill(::StringW  ticketId, ::StringW  gamemode, ::GlobalNamespace::MatchmakingPlayerVector*  players, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerStartMatchBackfill", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::MatchmakingPlayerVector*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ticketId, gamemode, players, userData);
}
inline void GlobalNamespace::MothershipServerApiClient::SetServerStopMatchmakingCompleteDelegateWrapper(::GlobalNamespace::StopMatchmakingCompleteServerDelegateWrapper*  wrapper)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"SetServerStopMatchmakingCompleteDelegateWrapper", {}, {::i2c::type_of<::GlobalNamespace::StopMatchmakingCompleteServerDelegateWrapper*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, wrapper);
}
inline bool GlobalNamespace::MothershipServerApiClient::ServerStopMatchmaking(::StringW  ticketId, ::System::IntPtr  userData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MothershipServerApiClient*>(),
                        {"ServerStopMatchmaking", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ticketId, userData);
}
inline ::GlobalNamespace::MothershipServerApiClient* GlobalNamespace::MothershipServerApiClient::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipServerApiClient*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::MothershipServerApiClient* GlobalNamespace::MothershipServerApiClient::New_ctor(::StringW  baseUrl, ::StringW  titleId, ::StringW  envId, ::StringW  apiKey, bool  enableRetryQueue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MothershipServerApiClient*>(baseUrl, titleId, envId, apiKey, enableRetryQueue));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MothershipServerApiClient::MothershipServerApiClient()   {
}
