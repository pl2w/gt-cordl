#pragma once
// IWYU pragma private; include "Modio/Users/LegacyUserObject.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LegacyUserObject)
// Forward declare root types
namespace Modio::Users {
class LegacyUserObject;
}
// Write type traits
MARK_REF_T(::Modio::Users::LegacyUserObject*);
DEFINE_IL2CPP_CLASS(::Modio::Users::LegacyUserObject*, "Modio.Users", "LegacyUserObject");
// Dependencies System.Object
namespace Modio::Users {
// Is value type: false
// CS Name: Modio.Users.LegacyUserObject
class CORDL_TYPE LegacyUserObject : public ::System::Object {
public:
// Declarations
/// @brief Field date_online, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_date_online, put=__cordl_internal_set_date_online)) int64_t  date_online;

/// @brief Field display_name_portal, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_display_name_portal, put=__cordl_internal_set_display_name_portal)) ::StringW  display_name_portal;

/// @brief Field id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) int64_t  id;

/// @brief Field language, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_language, put=__cordl_internal_set_language)) ::StringW  language;

/// @brief Field name_id, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name_id, put=__cordl_internal_set_name_id)) ::StringW  name_id;

/// @brief Field profile_url, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_profile_url, put=__cordl_internal_set_profile_url)) ::StringW  profile_url;

/// @brief Field timezone, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_timezone, put=__cordl_internal_set_timezone)) ::StringW  timezone;

/// @brief Field username, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_username, put=__cordl_internal_set_username)) ::StringW  username;

static inline ::Modio::Users::LegacyUserObject* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_date_online() const;

constexpr int64_t& __cordl_internal_get_date_online() ;

constexpr ::StringW const& __cordl_internal_get_display_name_portal() const;

constexpr ::StringW& __cordl_internal_get_display_name_portal() ;

constexpr int64_t const& __cordl_internal_get_id() const;

constexpr int64_t& __cordl_internal_get_id() ;

constexpr ::StringW const& __cordl_internal_get_language() const;

constexpr ::StringW& __cordl_internal_get_language() ;

constexpr ::StringW const& __cordl_internal_get_name_id() const;

constexpr ::StringW& __cordl_internal_get_name_id() ;

constexpr ::StringW const& __cordl_internal_get_profile_url() const;

constexpr ::StringW& __cordl_internal_get_profile_url() ;

constexpr ::StringW const& __cordl_internal_get_timezone() const;

constexpr ::StringW& __cordl_internal_get_timezone() ;

constexpr ::StringW const& __cordl_internal_get_username() const;

constexpr ::StringW& __cordl_internal_get_username() ;

constexpr void __cordl_internal_set_date_online(int64_t  value) ;

constexpr void __cordl_internal_set_display_name_portal(::StringW  value) ;

constexpr void __cordl_internal_set_id(int64_t  value) ;

constexpr void __cordl_internal_set_language(::StringW  value) ;

constexpr void __cordl_internal_set_name_id(::StringW  value) ;

constexpr void __cordl_internal_set_profile_url(::StringW  value) ;

constexpr void __cordl_internal_set_timezone(::StringW  value) ;

constexpr void __cordl_internal_set_username(::StringW  value) ;

/// @brief Method .ctor, addr 0xa0252bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LegacyUserObject() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LegacyUserObject", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LegacyUserObject(LegacyUserObject && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LegacyUserObject", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LegacyUserObject(LegacyUserObject const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17544};

/// @brief Field id, offset: 0x10, size: 0x8, def value: None
 int64_t  ___id;

/// @brief Field name_id, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name_id;

/// @brief Field username, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___username;

/// @brief Field display_name_portal, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___display_name_portal;

/// @brief Field date_online, offset: 0x30, size: 0x8, def value: None
 int64_t  ___date_online;

/// @brief Field timezone, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___timezone;

/// @brief Field language, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___language;

/// @brief Field profile_url, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___profile_url;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Users::LegacyUserObject, ___id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserObject, ___name_id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserObject, ___username) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserObject, ___display_name_portal) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserObject, ___date_online) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserObject, ___timezone) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserObject, ___language) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Users::LegacyUserObject, ___profile_url) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Modio::Users::LegacyUserObject) == 0x50, "Size mismatch!");

} // namespace end def Modio::Users
