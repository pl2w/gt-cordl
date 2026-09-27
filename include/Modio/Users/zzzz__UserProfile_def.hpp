#pragma once
// IWYU pragma private; include "Modio/Users/UserProfile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserProfile)
namespace GlobalNamespace {
struct UserProfile_AvatarResolution;
}
namespace GlobalNamespace {
struct UserProfile__Mute_d__39;
}
namespace GlobalNamespace {
struct UserProfile__Report_d__41;
}
namespace GlobalNamespace {
struct UserProfile__UnMute_d__40;
}
namespace Modio::API::SchemaDefinitions {
struct UserObject;
}
namespace Modio::Images {
template<typename TResolution>
class ModioImageSource_1;
}
namespace Modio::Reports {
struct ReportType;
}
namespace Modio::Users {
class Wallet;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Modio::Users {
class UserProfile;
}
// Write type traits
MARK_REF_T(::Modio::Users::UserProfile*);
DEFINE_IL2CPP_CLASS(::Modio::Users::UserProfile*, "Modio.Users", "UserProfile");
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.UserProfile
class CORDL_TYPE UserProfile : public ::System::Object {
public:
// Declarations
using AvatarResolution = ::GlobalNamespace::UserProfile_AvatarResolution;

using _Mute_d__39 = ::GlobalNamespace::UserProfile__Mute_d__39;

using _Report_d__41 = ::GlobalNamespace::UserProfile__Report_d__41;

using _UnMute_d__40 = ::GlobalNamespace::UserProfile__UnMute_d__40;

 __declspec(property(get=get_Avatar, put=set_Avatar)) ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*  Avatar;

 __declspec(property(get=get_Language, put=set_Language)) ::StringW  Language;

/// @brief Field OnProfileUpdated, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnProfileUpdated, put=__cordl_internal_set_OnProfileUpdated)) ::System::Action*  OnProfileUpdated;

 __declspec(property(get=get_PortalUsername, put=set_PortalUsername)) ::StringW  PortalUsername;

 __declspec(property(get=get_Timezone, put=set_Timezone)) ::StringW  Timezone;

 __declspec(property(get=get_UserId, put=set_UserId)) int64_t  UserId;

 __declspec(property(get=get_Username, put=set_Username)) ::StringW  Username;

/// @brief Field <Avatar>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Avatar_k__BackingField, put=__cordl_internal_set__Avatar_k__BackingField)) ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*  _Avatar_k__BackingField;

/// @brief Field <Language>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__Language_k__BackingField, put=__cordl_internal_set__Language_k__BackingField)) ::StringW  _Language_k__BackingField;

/// @brief Field <PortalUsername>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__PortalUsername_k__BackingField, put=__cordl_internal_set__PortalUsername_k__BackingField)) ::StringW  _PortalUsername_k__BackingField;

/// @brief Field <Timezone>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Timezone_k__BackingField, put=__cordl_internal_set__Timezone_k__BackingField)) ::StringW  _Timezone_k__BackingField;

/// @brief Field <UserId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__UserId_k__BackingField, put=__cordl_internal_set__UserId_k__BackingField)) int64_t  _UserId_k__BackingField;

/// @brief Field <Username>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Username_k__BackingField, put=__cordl_internal_set__Username_k__BackingField)) ::StringW  _Username_k__BackingField;

/// @brief Field _cache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cache, put=setStaticF__cache)) ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>*  _cache;

/// @brief Convert operator to "::System::IEquatable_1<::Modio::Users::UserProfile*>"
constexpr operator  ::System::IEquatable_1<::Modio::Users::UserProfile*>*() noexcept;

/// @brief Method ApplyDetailsFromUserObject, addr 0xa022858, size 0x1e8, virtual false, abstract: false, final false
inline void ApplyDetailsFromUserObject(::Modio::API::SchemaDefinitions::UserObject  userObject) ;

/// @brief Method Equals, addr 0xa025698, size 0xfc, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xa025668, size 0x30, virtual true, abstract: false, final true
inline bool Equals(::Modio::Users::UserProfile*  other) ;

/// @brief Method Get, addr 0xa025544, size 0x100, virtual false, abstract: false, final false
static inline ::Modio::Users::UserProfile* Get(::Modio::API::SchemaDefinitions::UserObject  user) ;

/// @brief Method GetHashCode, addr 0xa025404, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetWallet, addr 0xa025450, size 0x74, virtual false, abstract: false, final false
inline ::Modio::Users::Wallet* GetWallet() ;

/// [AsyncStateMachine(typeof(Modio.Users.UserProfile::<Mute>d__39))]
/// @brief Method Mute, addr 0xa025794, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Mute() ;

static inline ::Modio::Users::UserProfile* New_ctor() ;

static inline ::Modio::Users::UserProfile* New_ctor(::Modio::API::SchemaDefinitions::UserObject  userObject) ;

/// [AsyncStateMachine(typeof(Modio.Users.UserProfile::<Report>d__41))]
/// @brief Method Report, addr 0xa0259a4, size 0x144, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Report(::Modio::Reports::ReportType  reportType, ::StringW  contact, ::StringW  summary) ;

/// [AsyncStateMachine(typeof(Modio.Users.UserProfile::<UnMute>d__40))]
/// @brief Method UnMute, addr 0xa02589c, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* UnMute() ;

constexpr ::System::Action* const& __cordl_internal_get_OnProfileUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnProfileUpdated() ;

constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>* const& __cordl_internal_get__Avatar_k__BackingField() const;

constexpr ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*& __cordl_internal_get__Avatar_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Language_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Language_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__PortalUsername_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__PortalUsername_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Timezone_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Timezone_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__UserId_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__UserId_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__Username_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__Username_k__BackingField() ;

constexpr void __cordl_internal_set_OnProfileUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set__Avatar_k__BackingField(::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*  value) ;

constexpr void __cordl_internal_set__Language_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__PortalUsername_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__Timezone_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__UserId_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__Username_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0xa02553c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa0254f4, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::Modio::API::SchemaDefinitions::UserObject  userObject) ;

/// [CompilerGenerated]
/// @brief Method add_OnProfileUpdated, addr 0xa0252cc, size 0x9c, virtual false, abstract: false, final false
inline void add_OnProfileUpdated(::System::Action*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>* getStaticF__cache() ;

/// [CompilerGenerated]
/// @brief Method get_Avatar, addr 0xa0254c4, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>* get_Avatar() ;

/// [CompilerGenerated]
/// @brief Method get_Language, addr 0xa0254e4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Language() ;

/// [CompilerGenerated]
/// @brief Method get_PortalUsername, addr 0xa025440, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_PortalUsername() ;

/// [CompilerGenerated]
/// @brief Method get_Timezone, addr 0xa0254d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Timezone() ;

/// [CompilerGenerated]
/// @brief Method get_UserId, addr 0xa025430, size 0x8, virtual false, abstract: false, final false
inline int64_t get_UserId() ;

/// [CompilerGenerated]
/// @brief Method get_Username, addr 0xa025420, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Username() ;

/// @brief Convert to "::System::IEquatable_1<::Modio::Users::UserProfile*>"
constexpr ::System::IEquatable_1<::Modio::Users::UserProfile*>* i___System__IEquatable_1___Modio__Users__UserProfile__() noexcept;

/// @brief Method op_Equality, addr 0xa025644, size 0x8, virtual false, abstract: false, final false
static inline bool op_Equality(::Modio::Users::UserProfile*  left, ::Modio::Users::UserProfile*  right) ;

/// @brief Method op_Inequality, addr 0xa02564c, size 0x1c, virtual false, abstract: false, final false
static inline bool op_Inequality(::Modio::Users::UserProfile*  left, ::Modio::Users::UserProfile*  right) ;

/// [CompilerGenerated]
/// @brief Method remove_OnProfileUpdated, addr 0xa025368, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnProfileUpdated(::System::Action*  value) ;

static inline void setStaticF__cache(::System::Collections::Generic::Dictionary_2<int64_t,::Modio::Users::UserProfile*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Avatar, addr 0xa0254cc, size 0x8, virtual false, abstract: false, final false
inline void set_Avatar(::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Language, addr 0xa0254ec, size 0x8, virtual false, abstract: false, final false
inline void set_Language(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PortalUsername, addr 0xa025448, size 0x8, virtual false, abstract: false, final false
inline void set_PortalUsername(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_Timezone, addr 0xa0254dc, size 0x8, virtual false, abstract: false, final false
inline void set_Timezone(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_UserId, addr 0xa025438, size 0x8, virtual false, abstract: false, final false
inline void set_UserId(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_Username, addr 0xa025428, size 0x8, virtual false, abstract: false, final false
inline void set_Username(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserProfile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserProfile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserProfile(UserProfile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserProfile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserProfile(UserProfile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17550};

/// [CompilerGenerated]
/// @brief Field OnProfileUpdated, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___OnProfileUpdated;

/// [CompilerGenerated]
/// @brief Field <Username>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____Username_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <UserId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 int64_t  ____UserId_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PortalUsername>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____PortalUsername_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Avatar>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::Modio::Images::ModioImageSource_1<::GlobalNamespace::UserProfile_AvatarResolution>*  ____Avatar_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Timezone>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____Timezone_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <Language>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____Language_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::UserProfile, ___OnProfileUpdated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserProfile, ____Username_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserProfile, ____UserId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserProfile, ____PortalUsername_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserProfile, ____Avatar_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserProfile, ____Timezone_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserProfile, ____Language_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::UserProfile) == 0x48, "Size mismatch!");

} // namespace end def Modio::Users
