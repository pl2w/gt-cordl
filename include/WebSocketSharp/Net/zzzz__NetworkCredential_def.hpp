#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/NetworkCredential.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(NetworkCredential)
// Forward declare root types
namespace WebSocketSharp::Net {
class NetworkCredential;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::NetworkCredential*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::NetworkCredential*, "WebSocketSharp.Net", "NetworkCredential");
// Dependencies System.Object
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.NetworkCredential
class CORDL_TYPE NetworkCredential : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Domain)) ::StringW  Domain;

 __declspec(property(get=get_Password)) ::StringW  Password;

 __declspec(property(get=get_Username)) ::StringW  Username;

/// @brief Field _domain, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__domain, put=__cordl_internal_set__domain)) ::StringW  _domain;

/// @brief Field _noRoles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__noRoles, put=setStaticF__noRoles)) ::ArrayW<::StringW>  _noRoles;

/// @brief Field _password, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__password, put=__cordl_internal_set__password)) ::StringW  _password;

/// @brief Field _roles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__roles, put=__cordl_internal_set__roles)) ::ArrayW<::StringW>  _roles;

/// @brief Field _username, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__username, put=__cordl_internal_set__username)) ::StringW  _username;

constexpr ::StringW const& __cordl_internal_get__domain() const;

constexpr ::StringW& __cordl_internal_get__domain() ;

constexpr ::StringW const& __cordl_internal_get__password() const;

constexpr ::StringW& __cordl_internal_get__password() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get__roles() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get__roles() ;

constexpr ::StringW const& __cordl_internal_get__username() const;

constexpr ::StringW& __cordl_internal_get__username() ;

constexpr void __cordl_internal_set__domain(::StringW  value) ;

constexpr void __cordl_internal_set__password(::StringW  value) ;

constexpr void __cordl_internal_set__roles(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set__username(::StringW  value) ;

static inline ::ArrayW<::StringW> getStaticF__noRoles() ;

/// @brief Method get_Domain, addr 0xb9894ac, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_Domain() ;

/// @brief Method get_Password, addr 0xb9894d0, size 0x24, virtual false, abstract: false, final false
inline ::StringW get_Password() ;

/// @brief Method get_Username, addr 0xb9894f4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Username() ;

static inline void setStaticF__noRoles(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetworkCredential() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NetworkCredential(NetworkCredential && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetworkCredential", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetworkCredential(NetworkCredential const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30366};

/// @brief Field _domain, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____domain;

/// @brief Field _password, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____password;

/// @brief Field _roles, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW>  ____roles;

/// @brief Field _username, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____username;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::NetworkCredential, ____domain) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::NetworkCredential, ____password) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::NetworkCredential, ____roles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::NetworkCredential, ____username) == 0x28, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::NetworkCredential) == 0x30, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
