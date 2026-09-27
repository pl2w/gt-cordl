#pragma once
// IWYU pragma private; include "Modio/Users/User.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/API/zzzz__SearchFilter_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(User)
namespace GlobalNamespace {
template<typename F,typename T>
struct User__CrawlAllPages_d__69_2;
}
namespace GlobalNamespace {
struct User__GetMutedUsers_d__65;
}
namespace GlobalNamespace {
struct User__GetUserCreations_d__66;
}
namespace GlobalNamespace {
struct User__InitializeNewUser_d__49;
}
namespace GlobalNamespace {
struct User__SaveUserData_d__70;
}
namespace GlobalNamespace {
struct User__SyncEntitlements_d__61;
}
namespace GlobalNamespace {
struct User__SyncProfile_d__58;
}
namespace GlobalNamespace {
struct User__SyncPurchases_d__60;
}
namespace GlobalNamespace {
struct User__SyncRatings_d__64;
}
namespace GlobalNamespace {
struct User__SyncSubscriptions_d__59;
}
namespace GlobalNamespace {
struct User__SyncWallet_d__62;
}
namespace GlobalNamespace {
struct User__Sync_d__56;
}
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Modio::API::SchemaDefinitions {
template<typename T>
struct Pagination_1;
}
namespace Modio::API::SchemaDefinitions {
struct PayObject;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Users {
class Authentication;
}
namespace Modio::Users {
class LegacyUserSaveObject;
}
namespace Modio::Users {
class ModRepository;
}
namespace Modio::Users {
class UserProfile;
}
namespace Modio::Users {
class UserSaveObject;
}
namespace Modio::Users {
class User___c;
}
namespace Modio::Users {
class Wallet;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio::Users {
class User;
}
namespace Modio::Users {
class User___c;
}
// Write type traits
MARK_REF_T(::Modio::Users::User*);
MARK_REF_T(::Modio::Users::User___c*);
DEFINE_IL2CPP_CLASS(::Modio::Users::User*, "Modio.Users", "User");
DEFINE_IL2CPP_CLASS(::Modio::Users::User___c*, "Modio.Users", "User/<>c");
// Dependencies Modio.API.SearchFilter`1<T>, System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.User
class CORDL_TYPE User : public ::System::Object {
public:
// Declarations
template<typename F,typename T>
using _CrawlAllPages_d__69_2 = ::GlobalNamespace::User__CrawlAllPages_d__69_2<F, T>;

using _GetMutedUsers_d__65 = ::GlobalNamespace::User__GetMutedUsers_d__65;

using _GetUserCreations_d__66 = ::GlobalNamespace::User__GetUserCreations_d__66;

using _InitializeNewUser_d__49 = ::GlobalNamespace::User__InitializeNewUser_d__49;

using _SaveUserData_d__70 = ::GlobalNamespace::User__SaveUserData_d__70;

using _SyncEntitlements_d__61 = ::GlobalNamespace::User__SyncEntitlements_d__61;

using _SyncProfile_d__58 = ::GlobalNamespace::User__SyncProfile_d__58;

using _SyncPurchases_d__60 = ::GlobalNamespace::User__SyncPurchases_d__60;

using _SyncRatings_d__64 = ::GlobalNamespace::User__SyncRatings_d__64;

using _SyncSubscriptions_d__59 = ::GlobalNamespace::User__SyncSubscriptions_d__59;

using _SyncWallet_d__62 = ::GlobalNamespace::User__SyncWallet_d__62;

using _Sync_d__56 = ::GlobalNamespace::User__Sync_d__56;

using __c = ::Modio::Users::User___c;

 __declspec(property(get=get_HasAcceptedTermsOfUse, put=set_HasAcceptedTermsOfUse)) bool  HasAcceptedTermsOfUse;

 __declspec(property(get=get_IsAuthenticated, put=set_IsAuthenticated)) bool  IsAuthenticated;

 __declspec(property(get=get_IsInitialized, put=set_IsInitialized)) bool  IsInitialized;

 __declspec(property(get=get_IsUpdating, put=set_IsUpdating)) bool  IsUpdating;

 __declspec(property(get=get_LocalUserId, put=set_LocalUserId)) ::StringW  LocalUserId;

 __declspec(property(get=get_ModRepository, put=set_ModRepository)) ::Modio::Users::ModRepository*  ModRepository;

/// @brief Field OnUserChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserChanged, put=setStaticF_OnUserChanged)) ::System::Action_1<::Modio::Users::User*>*  OnUserChanged;

/// @brief Field OnUserSyncComplete, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnUserSyncComplete, put=setStaticF_OnUserSyncComplete)) ::System::Action*  OnUserSyncComplete;

 __declspec(property(get=get_Profile, put=set_Profile)) ::Modio::Users::UserProfile*  Profile;

 __declspec(property(get=get_Token)) ::StringW  Token;

 __declspec(property(get=get_UserId)) int64_t  UserId;

 __declspec(property(get=get_Wallet, put=set_Wallet)) ::Modio::Users::Wallet*  Wallet;

/// @brief Field <Current>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Current_k__BackingField, put=setStaticF__Current_k__BackingField)) ::Modio::Users::User*  _Current_k__BackingField;

/// @brief Field <HasAcceptedTermsOfUse>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__HasAcceptedTermsOfUse_k__BackingField, put=__cordl_internal_set__HasAcceptedTermsOfUse_k__BackingField)) bool  _HasAcceptedTermsOfUse_k__BackingField;

/// @brief Field <IsAuthenticated>k__BackingField, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsAuthenticated_k__BackingField, put=__cordl_internal_set__IsAuthenticated_k__BackingField)) bool  _IsAuthenticated_k__BackingField;

/// @brief Field <IsInitialized>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsInitialized_k__BackingField, put=__cordl_internal_set__IsInitialized_k__BackingField)) bool  _IsInitialized_k__BackingField;

/// @brief Field <IsUpdating>k__BackingField, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsUpdating_k__BackingField, put=__cordl_internal_set__IsUpdating_k__BackingField)) bool  _IsUpdating_k__BackingField;

/// @brief Field <LocalUserId>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__LocalUserId_k__BackingField, put=__cordl_internal_set__LocalUserId_k__BackingField)) ::StringW  _LocalUserId_k__BackingField;

/// @brief Field <ModRepository>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__ModRepository_k__BackingField, put=__cordl_internal_set__ModRepository_k__BackingField)) ::Modio::Users::ModRepository*  _ModRepository_k__BackingField;

/// @brief Field <Profile>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__Profile_k__BackingField, put=__cordl_internal_set__Profile_k__BackingField)) ::Modio::Users::UserProfile*  _Profile_k__BackingField;

/// @brief Field <Wallet>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Wallet_k__BackingField, put=__cordl_internal_set__Wallet_k__BackingField)) ::Modio::Users::Wallet*  _Wallet_k__BackingField;

/// @brief Field _authentication, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__authentication, put=__cordl_internal_set__authentication)) ::Modio::Users::Authentication*  _authentication;

/// @brief Field _isWritingToDisk, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isWritingToDisk, put=__cordl_internal_set__isWritingToDisk)) bool  _isWritingToDisk;

/// @brief Field _needsSavingToDisk, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__needsSavingToDisk, put=__cordl_internal_set__needsSavingToDisk)) bool  _needsSavingToDisk;

/// @brief Method ApplyDetailsFromLegacySaveObject, addr 0xa01dcd8, size 0xc0, virtual false, abstract: false, final false
inline void ApplyDetailsFromLegacySaveObject(::Modio::Users::LegacyUserSaveObject*  userSaveObject) ;

/// @brief Method ApplyDetailsFromSaveObject, addr 0xa01d938, size 0x3a0, virtual false, abstract: false, final false
inline void ApplyDetailsFromSaveObject(::Modio::Users::UserSaveObject*  userObject) ;

/// @brief Method ApplyWalletFromPurchase, addr 0xa01e518, size 0x88, virtual false, abstract: false, final false
inline void ApplyWalletFromPurchase(::Modio::API::SchemaDefinitions::PayObject  payObject) ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<CrawlAllPages>d__69`2<F, T>))]
/// @brief Method CrawlAllPages, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename F,typename T>
requires(::cordl_internals::type_constraint<F, ::Modio::API::SearchFilter_1<F>*>)
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::List_1<T>*>>* CrawlAllPages(F  filter, /* [TupleElementNames(new[] { "error", null })] */ ::System::Func_2<F,::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Nullable_1<::Modio::API::SchemaDefinitions::Pagination_1<::ArrayW<T>>>>>*>*  method) ;

/// [ModioDebugMenu(ShowInBrowserMenu = false, ShowInSettingsMenu = true)]
/// @brief Method DeleteUserData, addr 0xa01e8c8, size 0x12c, virtual false, abstract: false, final false
static inline void DeleteUserData() ;

/// @brief Method GetAuthToken, addr 0xa01dee8, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetAuthToken() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<GetMutedUsers>d__65))]
/// @brief Method GetMutedUsers, addr 0xa01e6a8, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>*>>* GetMutedUsers() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<GetUserCreations>d__66))]
/// @brief Method GetUserCreations, addr 0xa01e7b0, size 0x118, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*>>* GetUserCreations(bool  filterForGame) ;

/// @brief Method GetWritable, addr 0xa01ebfc, size 0x388, virtual false, abstract: false, final false
inline ::Modio::Users::UserSaveObject* GetWritable() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<InitializeNewUser>d__49))]
/// @brief Method InitializeNewUser, addr 0xa019e48, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* InitializeNewUser() ;

/// @brief Method LogOut, addr 0xa01e9f4, size 0x208, virtual false, abstract: false, final false
static inline void LogOut() ;

static inline ::Modio::Users::User* New_ctor() ;

/// @brief Method OnAcceptedTermsOfUse, addr 0xa01dd98, size 0xc, virtual false, abstract: false, final false
inline void OnAcceptedTermsOfUse() ;

/// @brief Method OnAnyModRepositoryChange, addr 0xa01df00, size 0x14, virtual false, abstract: false, final false
inline void OnAnyModRepositoryChange() ;

/// @brief Method OnAuthenticated, addr 0xa01dda4, size 0x38, virtual false, abstract: false, final false
inline void OnAuthenticated(::StringW  oAuthToken) ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<SaveUserData>d__70))]
/// @brief Method SaveUserData, addr 0xa01df14, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* SaveUserData() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<Sync>d__56))]
/// @brief Method Sync, addr 0xa01dddc, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Sync() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<SyncEntitlements>d__61))]
/// @brief Method SyncEntitlements, addr 0xa01e308, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SyncEntitlements() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<SyncProfile>d__58))]
/// @brief Method SyncProfile, addr 0xa01dff0, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SyncProfile() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<SyncPurchases>d__60))]
/// @brief Method SyncPurchases, addr 0xa01e200, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SyncPurchases() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<SyncRatings>d__64))]
/// @brief Method SyncRatings, addr 0xa01e5a0, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SyncRatings() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<SyncSubscriptions>d__59))]
/// @brief Method SyncSubscriptions, addr 0xa01e0f8, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SyncSubscriptions() ;

/// [AsyncStateMachine(typeof(Modio.Users.User::<SyncWallet>d__62))]
/// @brief Method SyncWallet, addr 0xa01e410, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* SyncWallet() ;

constexpr bool const& __cordl_internal_get__HasAcceptedTermsOfUse_k__BackingField() const;

constexpr bool& __cordl_internal_get__HasAcceptedTermsOfUse_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsAuthenticated_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsAuthenticated_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsInitialized_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsInitialized_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsUpdating_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsUpdating_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__LocalUserId_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__LocalUserId_k__BackingField() ;

constexpr ::Modio::Users::ModRepository* const& __cordl_internal_get__ModRepository_k__BackingField() const;

constexpr ::Modio::Users::ModRepository*& __cordl_internal_get__ModRepository_k__BackingField() ;

constexpr ::Modio::Users::UserProfile* const& __cordl_internal_get__Profile_k__BackingField() const;

constexpr ::Modio::Users::UserProfile*& __cordl_internal_get__Profile_k__BackingField() ;

constexpr ::Modio::Users::Wallet* const& __cordl_internal_get__Wallet_k__BackingField() const;

constexpr ::Modio::Users::Wallet*& __cordl_internal_get__Wallet_k__BackingField() ;

constexpr ::Modio::Users::Authentication* const& __cordl_internal_get__authentication() const;

constexpr ::Modio::Users::Authentication*& __cordl_internal_get__authentication() ;

constexpr bool const& __cordl_internal_get__isWritingToDisk() const;

constexpr bool& __cordl_internal_get__isWritingToDisk() ;

constexpr bool const& __cordl_internal_get__needsSavingToDisk() const;

constexpr bool& __cordl_internal_get__needsSavingToDisk() ;

constexpr void __cordl_internal_set__HasAcceptedTermsOfUse_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsAuthenticated_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsInitialized_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsUpdating_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LocalUserId_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__ModRepository_k__BackingField(::Modio::Users::ModRepository*  value) ;

constexpr void __cordl_internal_set__Profile_k__BackingField(::Modio::Users::UserProfile*  value) ;

constexpr void __cordl_internal_set__Wallet_k__BackingField(::Modio::Users::Wallet*  value) ;

constexpr void __cordl_internal_set__authentication(::Modio::Users::Authentication*  value) ;

constexpr void __cordl_internal_set__isWritingToDisk(bool  value) ;

constexpr void __cordl_internal_set__needsSavingToDisk(bool  value) ;

/// @brief Method .ctor, addr 0xa01d80c, size 0x12c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnUserChanged, addr 0xa01d3cc, size 0xcc, virtual false, abstract: false, final false
static inline void add_OnUserChanged(::System::Action_1<::Modio::Users::User*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnUserSyncComplete, addr 0xa01d564, size 0xbc, virtual false, abstract: false, final false
static inline void add_OnUserSyncComplete(::System::Action*  value) ;

static inline ::System::Action_1<::Modio::Users::User*>* getStaticF_OnUserChanged() ;

static inline ::System::Action* getStaticF_OnUserSyncComplete() ;

static inline ::Modio::Users::User* getStaticF__Current_k__BackingField() ;

/// [CompilerGenerated]
/// @brief Method get_Current, addr 0xa01d6dc, size 0x48, virtual false, abstract: false, final false
static inline ::Modio::Users::User* get_Current() ;

/// [CompilerGenerated]
/// @brief Method get_HasAcceptedTermsOfUse, addr 0xa01d794, size 0x8, virtual false, abstract: false, final false
inline bool get_HasAcceptedTermsOfUse() ;

/// [CompilerGenerated]
/// @brief Method get_IsAuthenticated, addr 0xa01d7a4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsAuthenticated() ;

/// [CompilerGenerated]
/// @brief Method get_IsInitialized, addr 0xa01d784, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInitialized() ;

/// [CompilerGenerated]
/// @brief Method get_IsUpdating, addr 0xa01d7b4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsUpdating() ;

/// [CompilerGenerated]
/// @brief Method get_LocalUserId, addr 0xa01d774, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_LocalUserId() ;

/// [CompilerGenerated]
/// @brief Method get_ModRepository, addr 0xa01d7e4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Users::ModRepository* get_ModRepository() ;

/// [CompilerGenerated]
/// @brief Method get_Profile, addr 0xa01d7c4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Users::UserProfile* get_Profile() ;

/// @brief Method get_Token, addr 0xa01d7f4, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Token() ;

/// @brief Method get_UserId, addr 0xa00b080, size 0x18, virtual false, abstract: false, final false
inline int64_t get_UserId() ;

/// [CompilerGenerated]
/// @brief Method get_Wallet, addr 0xa01d7d4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Users::Wallet* get_Wallet() ;

/// [CompilerGenerated]
/// @brief Method remove_OnUserChanged, addr 0xa01d498, size 0xcc, virtual false, abstract: false, final false
static inline void remove_OnUserChanged(::System::Action_1<::Modio::Users::User*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnUserSyncComplete, addr 0xa01d620, size 0xbc, virtual false, abstract: false, final false
static inline void remove_OnUserSyncComplete(::System::Action*  value) ;

static inline void setStaticF_OnUserChanged(::System::Action_1<::Modio::Users::User*>*  value) ;

static inline void setStaticF_OnUserSyncComplete(::System::Action*  value) ;

static inline void setStaticF__Current_k__BackingField(::Modio::Users::User*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Current, addr 0xa01d724, size 0x50, virtual false, abstract: false, final false
static inline void set_Current(::Modio::Users::User*  value) ;

/// [CompilerGenerated]
/// @brief Method set_HasAcceptedTermsOfUse, addr 0xa01d79c, size 0x8, virtual false, abstract: false, final false
inline void set_HasAcceptedTermsOfUse(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsAuthenticated, addr 0xa01d7ac, size 0x8, virtual false, abstract: false, final false
inline void set_IsAuthenticated(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsInitialized, addr 0xa01d78c, size 0x8, virtual false, abstract: false, final false
inline void set_IsInitialized(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsUpdating, addr 0xa01d7bc, size 0x8, virtual false, abstract: false, final false
inline void set_IsUpdating(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LocalUserId, addr 0xa01d77c, size 0x8, virtual false, abstract: false, final false
inline void set_LocalUserId(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_ModRepository, addr 0xa01d7ec, size 0x8, virtual false, abstract: false, final false
inline void set_ModRepository(::Modio::Users::ModRepository*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Profile, addr 0xa01d7cc, size 0x8, virtual false, abstract: false, final false
inline void set_Profile(::Modio::Users::UserProfile*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Wallet, addr 0xa01d7dc, size 0x8, virtual false, abstract: false, final false
inline void set_Wallet(::Modio::Users::Wallet*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr User() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
User(User && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "User", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
User(User const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17542};

/// [CompilerGenerated]
/// @brief Field <LocalUserId>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____LocalUserId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsInitialized>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____IsInitialized_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <HasAcceptedTermsOfUse>k__BackingField, offset: 0x19, size: 0x1, def value: None
 bool  ____HasAcceptedTermsOfUse_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsAuthenticated>k__BackingField, offset: 0x1a, size: 0x1, def value: None
 bool  ____IsAuthenticated_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsUpdating>k__BackingField, offset: 0x1b, size: 0x1, def value: None
 bool  ____IsUpdating_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Profile>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::Modio::Users::UserProfile*  ____Profile_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Wallet>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::Modio::Users::Wallet*  ____Wallet_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <ModRepository>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Modio::Users::ModRepository*  ____ModRepository_k__BackingField;

/// @brief Field _authentication, offset: 0x38, size: 0x8, def value: None
 ::Modio::Users::Authentication*  ____authentication;

/// @brief Field _isWritingToDisk, offset: 0x40, size: 0x1, def value: None
 bool  ____isWritingToDisk;

/// @brief Field _needsSavingToDisk, offset: 0x41, size: 0x1, def value: None
 bool  ____needsSavingToDisk;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::User, ____LocalUserId_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____IsInitialized_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____HasAcceptedTermsOfUse_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____IsAuthenticated_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____IsUpdating_k__BackingField) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____Profile_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____Wallet_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____ModRepository_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____authentication) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____isWritingToDisk) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::User, ____needsSavingToDisk) == 0x41, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::User) == 0x48, "Size mismatch!");

} // namespace end def Modio::Users
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.User/<>c
class CORDL_TYPE User___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Users::User___c*  __9;

/// @brief Field <>9__56_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__56_0, put=setStaticF___9__56_0)) ::System::Func_2<::Modio::Error*,bool>*  __9__56_0;

/// @brief Field <>9__56_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__56_1, put=setStaticF___9__56_1)) ::System::Func_2<::Modio::Error*,bool>*  __9__56_1;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>*  __9__60_0;

/// @brief Field <>9__71_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__71_0, put=setStaticF___9__71_0)) ::System::Func_2<::Modio::Mods::Mod*,int64_t>*  __9__71_0;

/// @brief Field <>9__71_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__71_1, put=setStaticF___9__71_1)) ::System::Func_2<::Modio::Mods::Mod*,int64_t>*  __9__71_1;

/// @brief Field <>9__71_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__71_2, put=setStaticF___9__71_2)) ::System::Func_2<::Modio::Mods::Mod*,int64_t>*  __9__71_2;

static inline ::Modio::Users::User___c* New_ctor() ;

/// @brief Method <GetWritable>b__71_0, addr 0xa01f0b4, size 0x14, virtual false, abstract: false, final false
inline int64_t _GetWritable_b__71_0(::Modio::Mods::Mod*  mod) ;

/// @brief Method <GetWritable>b__71_1, addr 0xa01f0c8, size 0x14, virtual false, abstract: false, final false
inline int64_t _GetWritable_b__71_1(::Modio::Mods::Mod*  mod) ;

/// @brief Method <GetWritable>b__71_2, addr 0xa01f0dc, size 0x14, virtual false, abstract: false, final false
inline int64_t _GetWritable_b__71_2(::Modio::Mods::Mod*  mod) ;

/// @brief Method <SyncPurchases>b__60_0, addr 0xa01f0a4, size 0x10, virtual false, abstract: false, final false
inline bool _SyncPurchases_b__60_0(::Modio::API::SchemaDefinitions::ModObject  modObject) ;

/// @brief Method <Sync>b__56_0, addr 0xa01eff4, size 0x58, virtual false, abstract: false, final false
inline bool _Sync_b__56_0(::Modio::Error*  error) ;

/// @brief Method <Sync>b__56_1, addr 0xa01f04c, size 0x58, virtual false, abstract: false, final false
inline bool _Sync_b__56_1(::Modio::Error*  error) ;

/// @brief Method .ctor, addr 0xa01efec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Users::User___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Error*,bool>* getStaticF___9__56_0() ;

static inline ::System::Func_2<::Modio::Error*,bool>* getStaticF___9__56_1() ;

static inline ::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>* getStaticF___9__60_0() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* getStaticF___9__71_0() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* getStaticF___9__71_1() ;

static inline ::System::Func_2<::Modio::Mods::Mod*,int64_t>* getStaticF___9__71_2() ;

static inline void setStaticF___9(::Modio::Users::User___c*  value) ;

static inline void setStaticF___9__56_0(::System::Func_2<::Modio::Error*,bool>*  value) ;

static inline void setStaticF___9__56_1(::System::Func_2<::Modio::Error*,bool>*  value) ;

static inline void setStaticF___9__60_0(::System::Func_2<::Modio::API::SchemaDefinitions::ModObject,bool>*  value) ;

static inline void setStaticF___9__71_0(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value) ;

static inline void setStaticF___9__71_1(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value) ;

static inline void setStaticF___9__71_2(::System::Func_2<::Modio::Mods::Mod*,int64_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr User___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "User___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
User___c(User___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "User___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
User___c(User___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17529};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Users::User___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Users
