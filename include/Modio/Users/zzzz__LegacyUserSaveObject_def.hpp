#pragma once
// IWYU pragma private; include "Modio/Users/LegacyUserSaveObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyUserSaveObject)
namespace Modio::Users {
class LegacyUserObject;
}
// Forward declare root types
namespace Modio::Users {
class LegacyUserSaveObject;
}
// Write type traits
MARK_REF_T(::Modio::Users::LegacyUserSaveObject*);
DEFINE_IL2CPP_CLASS(::Modio::Users::LegacyUserSaveObject*, "Modio.Users", "LegacyUserSaveObject");
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.LegacyUserSaveObject
class CORDL_TYPE LegacyUserSaveObject : public ::System::Object {
public:
// Declarations
/// @brief Field oAuthExpiryDate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_oAuthExpiryDate, put=__cordl_internal_set_oAuthExpiryDate)) int64_t  oAuthExpiryDate;

/// @brief Field oAuthToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_oAuthToken, put=__cordl_internal_set_oAuthToken)) ::StringW  oAuthToken;

/// @brief Field oAuthTokenWasRejected, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_oAuthTokenWasRejected, put=__cordl_internal_set_oAuthTokenWasRejected)) bool  oAuthTokenWasRejected;

/// @brief Field userObject, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_userObject, put=__cordl_internal_set_userObject)) ::Modio::Users::LegacyUserObject*  userObject;

static inline ::Modio::Users::LegacyUserSaveObject* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_oAuthExpiryDate() const;

constexpr int64_t& __cordl_internal_get_oAuthExpiryDate() ;

constexpr ::StringW const& __cordl_internal_get_oAuthToken() const;

constexpr ::StringW& __cordl_internal_get_oAuthToken() ;

constexpr bool const& __cordl_internal_get_oAuthTokenWasRejected() const;

constexpr bool& __cordl_internal_get_oAuthTokenWasRejected() ;

constexpr ::Modio::Users::LegacyUserObject* const& __cordl_internal_get_userObject() const;

constexpr ::Modio::Users::LegacyUserObject*& __cordl_internal_get_userObject() ;

constexpr void __cordl_internal_set_oAuthExpiryDate(int64_t  value) ;

constexpr void __cordl_internal_set_oAuthToken(::StringW  value) ;

constexpr void __cordl_internal_set_oAuthTokenWasRejected(bool  value) ;

constexpr void __cordl_internal_set_userObject(::Modio::Users::LegacyUserObject*  value) ;

/// @brief Method .ctor, addr 0xa0252c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyUserSaveObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyUserSaveObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyUserSaveObject(LegacyUserSaveObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyUserSaveObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyUserSaveObject(LegacyUserSaveObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17545};

/// @brief Field oAuthToken, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___oAuthToken;

/// @brief Field oAuthExpiryDate, offset: 0x18, size: 0x8, def value: None
 int64_t  ___oAuthExpiryDate;

/// @brief Field oAuthTokenWasRejected, offset: 0x20, size: 0x1, def value: None
 bool  ___oAuthTokenWasRejected;

/// @brief Field userObject, offset: 0x28, size: 0x8, def value: None
 ::Modio::Users::LegacyUserObject*  ___userObject;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::LegacyUserSaveObject, ___oAuthToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserSaveObject, ___oAuthExpiryDate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserSaveObject, ___oAuthTokenWasRejected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserSaveObject, ___userObject) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::LegacyUserSaveObject) == 0x30, "Size mismatch!");

} // namespace end def Modio::Users
