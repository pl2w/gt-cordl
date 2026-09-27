#pragma once
// IWYU pragma private; include "Modio/Users/User.hpp"
#include "Modio/API/zzzz__SearchFilter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__Pagination_1_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__PayObject_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Users/zzzz__Authentication_def.hpp"
#include "Modio/Users/zzzz__LegacyUserSaveObject_def.hpp"
#include "Modio/Users/zzzz__ModRepository_def.hpp"
#include "Modio/Users/zzzz__UserProfile_def.hpp"
#include "Modio/Users/zzzz__UserSaveObject_def.hpp"
#include "Modio/Users/zzzz__User__CrawlAllPages_d__69_2_def.hpp"
#include "Modio/Users/zzzz__User__GetMutedUsers_d__65_def.hpp"
#include "Modio/Users/zzzz__User__GetUserCreations_d__66_def.hpp"
#include "Modio/Users/zzzz__User__InitializeNewUser_d__49_def.hpp"
#include "Modio/Users/zzzz__User__SaveUserData_d__70_def.hpp"
#include "Modio/Users/zzzz__User__SyncEntitlements_d__61_def.hpp"
#include "Modio/Users/zzzz__User__SyncProfile_d__58_def.hpp"
#include "Modio/Users/zzzz__User__SyncPurchases_d__60_def.hpp"
#include "Modio/Users/zzzz__User__SyncRatings_d__64_def.hpp"
#include "Modio/Users/zzzz__User__SyncSubscriptions_d__59_def.hpp"
#include "Modio/Users/zzzz__User__SyncWallet_d__62_def.hpp"
#include "Modio/Users/zzzz__User__Sync_d__56_def.hpp"
#include "Modio/Users/zzzz__User_def.hpp"
#include "Modio/Users/zzzz__Wallet_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Modio::Users::User.add_OnUserChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Modio::Users::User*>*)>(&::Modio::Users::User::add_OnUserChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa01d3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"add_OnUserChanged", {}, {::i2c::type_of<::System::Action_1<::Modio::Users::User*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.remove_OnUserChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::Modio::Users::User*>*)>(&::Modio::Users::User::remove_OnUserChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa01d498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"remove_OnUserChanged", {}, {::i2c::type_of<::System::Action_1<::Modio::Users::User*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.add_OnUserSyncComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::Users::User::add_OnUserSyncComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa01d564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"add_OnUserSyncComplete", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.remove_OnUserSyncComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::Modio::Users::User::remove_OnUserSyncComplete)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa01d620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"remove_OnUserSyncComplete", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::User* (*)()>(&::Modio::Users::User::get_Current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa01d6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Users::User*)>(&::Modio::Users::User::set_Current)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa01d724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_Current", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::User::*)()>(&::Modio::Users::User::get_LocalUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_LocalUserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_LocalUserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::StringW)>(&::Modio::Users::User::set_LocalUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d77c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_UserId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Users::User::*)()>(&::Modio::Users::User::get_UserId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa00b080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_UserId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::User::*)()>(&::Modio::Users::User::get_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_IsInitialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(bool)>(&::Modio::Users::User::set_IsInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_HasAcceptedTermsOfUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::User::*)()>(&::Modio::Users::User::get_HasAcceptedTermsOfUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_HasAcceptedTermsOfUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_HasAcceptedTermsOfUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(bool)>(&::Modio::Users::User::set_HasAcceptedTermsOfUse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_HasAcceptedTermsOfUse", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::User::*)()>(&::Modio::Users::User::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_IsAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(bool)>(&::Modio::Users::User::set_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_IsAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_IsUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::User::*)()>(&::Modio::Users::User::get_IsUpdating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_IsUpdating", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_IsUpdating
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(bool)>(&::Modio::Users::User::set_IsUpdating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_IsUpdating", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_Profile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::UserProfile* (::Modio::Users::User::*)()>(&::Modio::Users::User::get_Profile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Profile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_Profile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::Modio::Users::UserProfile*)>(&::Modio::Users::User::set_Profile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_Profile", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_Wallet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::Wallet* (::Modio::Users::User::*)()>(&::Modio::Users::User::get_Wallet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Wallet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_Wallet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::Modio::Users::Wallet*)>(&::Modio::Users::User::set_Wallet)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_Wallet", {}, {::i2c::type_of<::Modio::Users::Wallet*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_ModRepository
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::ModRepository* (::Modio::Users::User::*)()>(&::Modio::Users::User::get_ModRepository)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_ModRepository", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.set_ModRepository
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::Modio::Users::ModRepository*)>(&::Modio::Users::User::set_ModRepository)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01d7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_ModRepository", {}, {::i2c::type_of<::Modio::Users::ModRepository*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.get_Token
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::User::*)()>(&::Modio::Users::User::get_Token)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa01d7f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Token", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.InitializeNewUser
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)()>(&::Modio::Users::User::InitializeNewUser)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xa019e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"InitializeNewUser", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)()>(&::Modio::Users::User::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa01d80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.ApplyDetailsFromSaveObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::Modio::Users::UserSaveObject*)>(&::Modio::Users::User::ApplyDetailsFromSaveObject)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xa01d938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"ApplyDetailsFromSaveObject", {}, {::i2c::type_of<::Modio::Users::UserSaveObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.ApplyDetailsFromLegacySaveObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::Modio::Users::LegacyUserSaveObject*)>(&::Modio::Users::User::ApplyDetailsFromLegacySaveObject)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa01dcd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"ApplyDetailsFromLegacySaveObject", {}, {::i2c::type_of<::Modio::Users::LegacyUserSaveObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.OnAcceptedTermsOfUse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)()>(&::Modio::Users::User::OnAcceptedTermsOfUse)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa01dd98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"OnAcceptedTermsOfUse", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.OnAuthenticated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::StringW)>(&::Modio::Users::User::OnAuthenticated)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa01dda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"OnAuthenticated", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.GetAuthToken
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Modio::Users::User::*)()>(&::Modio::Users::User::GetAuthToken)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa01dee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetAuthToken", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.Sync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::User::*)()>(&::Modio::Users::User::Sync)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa01dddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"Sync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.OnAnyModRepositoryChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)()>(&::Modio::Users::User::OnAnyModRepositoryChange)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa01df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"OnAnyModRepositoryChange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.SyncProfile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::User::*)()>(&::Modio::Users::User::SyncProfile)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa01dff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncProfile", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.SyncSubscriptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::User::*)()>(&::Modio::Users::User::SyncSubscriptions)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa01e0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncSubscriptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.SyncPurchases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::User::*)()>(&::Modio::Users::User::SyncPurchases)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa01e200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncPurchases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.SyncEntitlements
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::User::*)()>(&::Modio::Users::User::SyncEntitlements)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa01e308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncEntitlements", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.SyncWallet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::User::*)()>(&::Modio::Users::User::SyncWallet)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa01e410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncWallet", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.ApplyWalletFromPurchase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User::*)(::Modio::API::SchemaDefinitions::PayObject)>(&::Modio::Users::User::ApplyWalletFromPurchase)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa01e518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"ApplyWalletFromPurchase", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::PayObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.SyncRatings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (::Modio::Users::User::*)()>(&::Modio::Users::User::SyncRatings)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa01e5a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncRatings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.GetMutedUsers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>*>>* (::Modio::Users::User::*)()>(&::Modio::Users::User::GetMutedUsers)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa01e6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetMutedUsers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.GetUserCreations
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>* (::Modio::Users::User::*)(bool)>(&::Modio::Users::User::GetUserCreations)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa01e7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetUserCreations", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.DeleteUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Users::User::DeleteUserData)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xa01e8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"DeleteUserData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.LogOut
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Users::User::LogOut)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa01e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"LogOut", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.SaveUserData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Modio::Users::User::*)()>(&::Modio::Users::User::SaveUserData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa01df14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SaveUserData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User.GetWritable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Users::UserSaveObject* (::Modio::Users::User::*)()>(&::Modio::Users::User::GetWritable)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xa01ebfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetWritable", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Users::User::__cordl_internal_get__LocalUserId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalUserId_k__BackingField;
}
constexpr ::StringW const& Modio::Users::User::__cordl_internal_get__LocalUserId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LocalUserId_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__LocalUserId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LocalUserId_k__BackingField = value;
}
constexpr bool& Modio::Users::User::__cordl_internal_get__IsInitialized_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr bool const& Modio::Users::User::__cordl_internal_get__IsInitialized_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsInitialized_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__IsInitialized_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsInitialized_k__BackingField = value;
}
constexpr bool& Modio::Users::User::__cordl_internal_get__HasAcceptedTermsOfUse_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAcceptedTermsOfUse_k__BackingField;
}
constexpr bool const& Modio::Users::User::__cordl_internal_get__HasAcceptedTermsOfUse_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HasAcceptedTermsOfUse_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__HasAcceptedTermsOfUse_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HasAcceptedTermsOfUse_k__BackingField = value;
}
constexpr bool& Modio::Users::User::__cordl_internal_get__IsAuthenticated_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAuthenticated_k__BackingField;
}
constexpr bool const& Modio::Users::User::__cordl_internal_get__IsAuthenticated_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsAuthenticated_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__IsAuthenticated_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsAuthenticated_k__BackingField = value;
}
constexpr bool& Modio::Users::User::__cordl_internal_get__IsUpdating_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUpdating_k__BackingField;
}
constexpr bool const& Modio::Users::User::__cordl_internal_get__IsUpdating_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsUpdating_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__IsUpdating_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsUpdating_k__BackingField = value;
}
constexpr ::Modio::Users::UserProfile*& Modio::Users::User::__cordl_internal_get__Profile_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Profile_k__BackingField;
}
constexpr ::Modio::Users::UserProfile* const& Modio::Users::User::__cordl_internal_get__Profile_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Profile_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__Profile_k__BackingField(::Modio::Users::UserProfile*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Profile_k__BackingField = value;
}
constexpr ::Modio::Users::Wallet*& Modio::Users::User::__cordl_internal_get__Wallet_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wallet_k__BackingField;
}
constexpr ::Modio::Users::Wallet* const& Modio::Users::User::__cordl_internal_get__Wallet_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Wallet_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__Wallet_k__BackingField(::Modio::Users::Wallet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Wallet_k__BackingField = value;
}
constexpr ::Modio::Users::ModRepository*& Modio::Users::User::__cordl_internal_get__ModRepository_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ModRepository_k__BackingField;
}
constexpr ::Modio::Users::ModRepository* const& Modio::Users::User::__cordl_internal_get__ModRepository_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ModRepository_k__BackingField;
}
constexpr void Modio::Users::User::__cordl_internal_set__ModRepository_k__BackingField(::Modio::Users::ModRepository*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ModRepository_k__BackingField = value;
}
constexpr ::Modio::Users::Authentication*& Modio::Users::User::__cordl_internal_get__authentication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authentication;
}
constexpr ::Modio::Users::Authentication* const& Modio::Users::User::__cordl_internal_get__authentication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____authentication;
}
constexpr void Modio::Users::User::__cordl_internal_set__authentication(::Modio::Users::Authentication*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____authentication = value;
}
constexpr bool& Modio::Users::User::__cordl_internal_get__isWritingToDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWritingToDisk;
}
constexpr bool const& Modio::Users::User::__cordl_internal_get__isWritingToDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isWritingToDisk;
}
constexpr void Modio::Users::User::__cordl_internal_set__isWritingToDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isWritingToDisk = value;
}
constexpr bool& Modio::Users::User::__cordl_internal_get__needsSavingToDisk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needsSavingToDisk;
}
constexpr bool const& Modio::Users::User::__cordl_internal_get__needsSavingToDisk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____needsSavingToDisk;
}
constexpr void Modio::Users::User::__cordl_internal_set__needsSavingToDisk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____needsSavingToDisk = value;
}
inline void Modio::Users::User::setStaticF_OnUserChanged(::System::Action_1<::Modio::Users::User*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Modio::Users::User*>*, "OnUserChanged", ::Modio::Users::User*>(std::forward<::System::Action_1<::Modio::Users::User*>*>(value));
}
inline ::System::Action_1<::Modio::Users::User*>* Modio::Users::User::getStaticF_OnUserChanged()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Modio::Users::User*>*, "OnUserChanged", ::Modio::Users::User*>();
}
inline void Modio::Users::User::setStaticF_OnUserSyncComplete(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "OnUserSyncComplete", ::Modio::Users::User*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* Modio::Users::User::getStaticF_OnUserSyncComplete()  {
return ::cordl_internals::getStaticField<::System::Action*, "OnUserSyncComplete", ::Modio::Users::User*>();
}
inline void Modio::Users::User::setStaticF__Current_k__BackingField(::Modio::Users::User*  value)  {
::cordl_internals::setStaticField<::Modio::Users::User*, "<Current>k__BackingField", ::Modio::Users::User*>(std::forward<::Modio::Users::User*>(value));
}
inline ::Modio::Users::User* Modio::Users::User::getStaticF__Current_k__BackingField()  {
return ::cordl_internals::getStaticField<::Modio::Users::User*, "<Current>k__BackingField", ::Modio::Users::User*>();
}
inline void Modio::Users::User::add_OnUserChanged(::System::Action_1<::Modio::Users::User*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"add_OnUserChanged", {}, {::i2c::type_of<::System::Action_1<::Modio::Users::User*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Users::User::remove_OnUserChanged(::System::Action_1<::Modio::Users::User*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"remove_OnUserChanged", {}, {::i2c::type_of<::System::Action_1<::Modio::Users::User*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Users::User::add_OnUserSyncComplete(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"add_OnUserSyncComplete", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::Users::User::remove_OnUserSyncComplete(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"remove_OnUserSyncComplete", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Modio::Users::User* Modio::Users::User::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::User*>(nullptr, ___internal_method);
}
inline void Modio::Users::User::set_Current(::Modio::Users::User*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_Current", {}, {::i2c::type_of<::Modio::Users::User*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW Modio::Users::User::get_LocalUserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_LocalUserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Modio::Users::User::set_LocalUserId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_LocalUserId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t Modio::Users::User::get_UserId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_UserId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline bool Modio::Users::User::get_IsInitialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_IsInitialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Users::User::set_IsInitialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_IsInitialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Users::User::get_HasAcceptedTermsOfUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_HasAcceptedTermsOfUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Users::User::set_HasAcceptedTermsOfUse(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_HasAcceptedTermsOfUse", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Users::User::get_IsAuthenticated()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_IsAuthenticated", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Users::User::set_IsAuthenticated(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_IsAuthenticated", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Modio::Users::User::get_IsUpdating()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_IsUpdating", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::Users::User::set_IsUpdating(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_IsUpdating", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Users::UserProfile* Modio::Users::User::get_Profile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Profile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::UserProfile*>(this, ___internal_method);
}
inline void Modio::Users::User::set_Profile(::Modio::Users::UserProfile*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_Profile", {}, {::i2c::type_of<::Modio::Users::UserProfile*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Users::Wallet* Modio::Users::User::get_Wallet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Wallet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::Wallet*>(this, ___internal_method);
}
inline void Modio::Users::User::set_Wallet(::Modio::Users::Wallet*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_Wallet", {}, {::i2c::type_of<::Modio::Users::Wallet*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Modio::Users::ModRepository* Modio::Users::User::get_ModRepository()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_ModRepository", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::ModRepository*>(this, ___internal_method);
}
inline void Modio::Users::User::set_ModRepository(::Modio::Users::ModRepository*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"set_ModRepository", {}, {::i2c::type_of<::Modio::Users::ModRepository*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Modio::Users::User::get_Token()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"get_Token", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Modio::Users::User::InitializeNewUser()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"InitializeNewUser", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method);
}
inline void Modio::Users::User::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Users::User::ApplyDetailsFromSaveObject(::Modio::Users::UserSaveObject*  userObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"ApplyDetailsFromSaveObject", {}, {::i2c::type_of<::Modio::Users::UserSaveObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userObject);
}
inline void Modio::Users::User::ApplyDetailsFromLegacySaveObject(::Modio::Users::LegacyUserSaveObject*  userSaveObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"ApplyDetailsFromLegacySaveObject", {}, {::i2c::type_of<::Modio::Users::LegacyUserSaveObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userSaveObject);
}
inline void Modio::Users::User::OnAcceptedTermsOfUse()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"OnAcceptedTermsOfUse", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Users::User::OnAuthenticated(::StringW  oAuthToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"OnAuthenticated", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, oAuthToken);
}
inline ::StringW Modio::Users::User::GetAuthToken()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetAuthToken", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::User::Sync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"Sync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::Users::User::OnAnyModRepositoryChange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"OnAnyModRepositoryChange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::User::SyncProfile()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncProfile", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::User::SyncSubscriptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncSubscriptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::User::SyncPurchases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncPurchases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::User::SyncEntitlements()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncEntitlements", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::User::SyncWallet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncWallet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline void Modio::Users::User::ApplyWalletFromPurchase(::Modio::API::SchemaDefinitions::PayObject  payObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"ApplyWalletFromPurchase", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::PayObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, payObject);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Users::User::SyncRatings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SyncRatings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>*>>* Modio::Users::User::GetMutedUsers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetMutedUsers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>*>>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>* Modio::Users::User::GetUserCreations(bool  filterForGame)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetUserCreations", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>*>(this, ___internal_method, filterForGame);
}
inline void Modio::Users::User::DeleteUserData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"DeleteUserData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Modio::Users::User::LogOut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"LogOut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename F,typename T>
requires(::cordl_internals::type_constraint<F, ::Modio::API::SearchFilter_1<F>*>)
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>* Modio::Users::User::CrawlAllPages(F  filter, /* [TupleElementNames(new[] { "error", null })] */ ::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*  method)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Modio::Users::User*>(),
                    {"CrawlAllPages", {::i2c::class_of<F>(), ::i2c::class_of<T>()}, {::i2c::type_of<F>(), ::i2c::type_of<::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<F>(), ::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>*>(nullptr, ___internal_method, filter, method);
}
inline ::System::Threading::Tasks::Task* Modio::Users::User::SaveUserData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"SaveUserData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::Modio::Users::UserSaveObject* Modio::Users::User::GetWritable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User*>(),
                        {"GetWritable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Users::UserSaveObject*>(this, ___internal_method);
}
inline ::Modio::Users::User* Modio::Users::User::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::User*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::User::User()   {
}
//  Writing Method size for method: ::Modio::Users::User___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Users::User___c::*)()>(&::Modio::Users::User___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa01efec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User___c._Sync_b__56_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::User___c::*)(::Modio::Error*)>(&::Modio::Users::User___c::_Sync_b__56_0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa01eff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<Sync>b__56_0", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User___c._Sync_b__56_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::User___c::*)(::Modio::Error*)>(&::Modio::Users::User___c::_Sync_b__56_1)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa01f04c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<Sync>b__56_1", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User___c._SyncPurchases_b__60_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::Users::User___c::*)(::Modio::API::SchemaDefinitions::ModObject)>(&::Modio::Users::User___c::_SyncPurchases_b__60_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa01f0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<SyncPurchases>b__60_0", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User___c._GetWritable_b__71_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Users::User___c::*)(::Modio::Mods::Mod*)>(&::Modio::Users::User___c::_GetWritable_b__71_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa01f0b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<GetWritable>b__71_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User___c._GetWritable_b__71_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Users::User___c::*)(::Modio::Mods::Mod*)>(&::Modio::Users::User___c::_GetWritable_b__71_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa01f0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<GetWritable>b__71_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Users::User___c._GetWritable_b__71_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Users::User___c::*)(::Modio::Mods::Mod*)>(&::Modio::Users::User___c::_GetWritable_b__71_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa01f0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<GetWritable>b__71_2", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Users::User___c::setStaticF___9(::Modio::Users::User___c*  value)  {
::cordl_internals::setStaticField<::Modio::Users::User___c*, "<>9", ::Modio::Users::User___c*>(std::forward<::Modio::Users::User___c*>(value));
}
inline ::Modio::Users::User___c* Modio::Users::User___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::Users::User___c*, "<>9", ::Modio::Users::User___c*>();
}
inline void Modio::Users::User___c::setStaticF___9__56_0(::System::Func_2<::Modio::Error*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Error*,bool>*, "<>9__56_0", ::Modio::Users::User___c*>(std::forward<::System::Func_2<::Modio::Error*,bool>*>(value));
}
inline ::System::Func_2<::Modio::Error*,bool>* Modio::Users::User___c::getStaticF___9__56_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Error*,bool>*, "<>9__56_0", ::Modio::Users::User___c*>();
}
inline void Modio::Users::User___c::setStaticF___9__56_1(::System::Func_2<::Modio::Error*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Error*,bool>*, "<>9__56_1", ::Modio::Users::User___c*>(std::forward<::System::Func_2<::Modio::Error*,bool>*>(value));
}
inline ::System::Func_2<::Modio::Error*,bool>* Modio::Users::User___c::getStaticF___9__56_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Error*,bool>*, "<>9__56_1", ::Modio::Users::User___c*>();
}
inline void Modio::Users::User___c::setStaticF___9__60_0(::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>*, "<>9__60_0", ::Modio::Users::User___c*>(std::forward<::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>*>(value));
}
inline ::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>* Modio::Users::User___c::getStaticF___9__60_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>*, "<>9__60_0", ::Modio::Users::User___c*>();
}
inline void Modio::Users::User___c::setStaticF___9__71_0(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__71_0", ::Modio::Users::User___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,int64_t>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* Modio::Users::User___c::getStaticF___9__71_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__71_0", ::Modio::Users::User___c*>();
}
inline void Modio::Users::User___c::setStaticF___9__71_1(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__71_1", ::Modio::Users::User___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,int64_t>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* Modio::Users::User___c::getStaticF___9__71_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__71_1", ::Modio::Users::User___c*>();
}
inline void Modio::Users::User___c::setStaticF___9__71_2(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__71_2", ::Modio::Users::User___c*>(std::forward<::System::Func_2<::Modio::Mods::Mod*,int64_t>*>(value));
}
inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* Modio::Users::User___c::getStaticF___9__71_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Modio::Mods::Mod*,int64_t>*, "<>9__71_2", ::Modio::Users::User___c*>();
}
inline void Modio::Users::User___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::Users::User___c::_Sync_b__56_0(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<Sync>b__56_0", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, error);
}
inline bool Modio::Users::User___c::_Sync_b__56_1(::Modio::Error*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<Sync>b__56_1", {}, {::i2c::type_of<::Modio::Error*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, error);
}
inline bool Modio::Users::User___c::_SyncPurchases_b__60_0(::Modio::API::SchemaDefinitions::ModObject  modObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<SyncPurchases>b__60_0", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, modObject);
}
inline int64_t Modio::Users::User___c::_GetWritable_b__71_0(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<GetWritable>b__71_0", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mod);
}
inline int64_t Modio::Users::User___c::_GetWritable_b__71_1(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<GetWritable>b__71_1", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mod);
}
inline int64_t Modio::Users::User___c::_GetWritable_b__71_2(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Users::User___c*>(),
                        {"<GetWritable>b__71_2", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, mod);
}
inline ::Modio::Users::User___c* Modio::Users::User___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Users::User___c*>());
}
// Ctor Parameters []
constexpr ::Modio::Users::User___c::User___c()   {
}
