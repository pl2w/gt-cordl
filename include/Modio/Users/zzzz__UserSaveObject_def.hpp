#pragma once
// IWYU pragma private; include "Modio/Users/UserSaveObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserSaveObject)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Modio::Users {
class UserSaveObject;
}
// Write type traits
MARK_REF_T(::Modio::Users::UserSaveObject*);
DEFINE_IL2CPP_CLASS(::Modio::Users::UserSaveObject*, "Modio.Users", "UserSaveObject");
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.UserSaveObject
class CORDL_TYPE UserSaveObject : public ::System::Object {
public:
// Declarations
/// @brief Field AuthExpiration, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthExpiration, put=__cordl_internal_set_AuthExpiration)) int64_t  AuthExpiration;

/// @brief Field AuthToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_AuthToken, put=__cordl_internal_set_AuthToken)) ::StringW  AuthToken;

/// @brief Field DisabledMods, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisabledMods, put=__cordl_internal_set_DisabledMods)) ::System::Collections::Generic::List_1<int64_t>*  DisabledMods;

/// @brief Field LocalUserId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_LocalUserId, put=__cordl_internal_set_LocalUserId)) ::StringW  LocalUserId;

/// @brief Field PurchasedMods, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_PurchasedMods, put=__cordl_internal_set_PurchasedMods)) ::System::Collections::Generic::List_1<int64_t>*  PurchasedMods;

/// @brief Field SubscribedMods, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_SubscribedMods, put=__cordl_internal_set_SubscribedMods)) ::System::Collections::Generic::List_1<int64_t>*  SubscribedMods;

/// @brief Field UserId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_UserId, put=__cordl_internal_set_UserId)) int64_t  UserId;

/// @brief Field Username, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Username, put=__cordl_internal_set_Username)) ::StringW  Username;

static inline ::Modio::Users::UserSaveObject* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_AuthExpiration() const;

constexpr int64_t& __cordl_internal_get_AuthExpiration() ;

constexpr ::StringW const& __cordl_internal_get_AuthToken() const;

constexpr ::StringW& __cordl_internal_get_AuthToken() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_DisabledMods() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_DisabledMods() ;

constexpr ::StringW const& __cordl_internal_get_LocalUserId() const;

constexpr ::StringW& __cordl_internal_get_LocalUserId() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_PurchasedMods() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_PurchasedMods() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_SubscribedMods() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_SubscribedMods() ;

constexpr int64_t const& __cordl_internal_get_UserId() const;

constexpr int64_t& __cordl_internal_get_UserId() ;

constexpr ::StringW const& __cordl_internal_get_Username() const;

constexpr ::StringW& __cordl_internal_get_Username() ;

constexpr void __cordl_internal_set_AuthExpiration(int64_t  value) ;

constexpr void __cordl_internal_set_AuthToken(::StringW  value) ;

constexpr void __cordl_internal_set_DisabledMods(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_LocalUserId(::StringW  value) ;

constexpr void __cordl_internal_set_PurchasedMods(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_SubscribedMods(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_UserId(int64_t  value) ;

constexpr void __cordl_internal_set_Username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa0252b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserSaveObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserSaveObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UserSaveObject(UserSaveObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserSaveObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserSaveObject(UserSaveObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17543};

/// @brief Field LocalUserId, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___LocalUserId;

/// @brief Field Username, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___Username;

/// @brief Field UserId, offset: 0x20, size: 0x8, def value: None
 int64_t  ___UserId;

/// @brief Field AuthToken, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___AuthToken;

/// @brief Field AuthExpiration, offset: 0x30, size: 0x8, def value: None
 int64_t  ___AuthExpiration;

/// @brief Field SubscribedMods, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___SubscribedMods;

/// @brief Field DisabledMods, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___DisabledMods;

/// @brief Field PurchasedMods, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___PurchasedMods;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::UserSaveObject, ___LocalUserId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserSaveObject, ___Username) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserSaveObject, ___UserId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserSaveObject, ___AuthToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserSaveObject, ___AuthExpiration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserSaveObject, ___SubscribedMods) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserSaveObject, ___DisabledMods) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::UserSaveObject, ___PurchasedMods) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::UserSaveObject) == 0x50, "Size mismatch!");

} // namespace end def Modio::Users
