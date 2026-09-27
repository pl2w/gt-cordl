#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/Cookie.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cookie)
namespace System {
struct DateTime;
}
namespace System {
class Object;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class Cookie;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::Cookie*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::Cookie*, "WebSocketSharp.Net", "Cookie");
// Dependencies System.DateTime, System.Object
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.Cookie
class CORDL_TYPE Cookie : public ::System::Object {
public:
// Declarations
 __declspec(property(put=set_Comment)) ::StringW  Comment;

 __declspec(property(put=set_CommentUri)) ::System::Uri*  CommentUri;

 __declspec(property(put=set_Discard)) bool  Discard;

 __declspec(property(put=set_Domain)) ::StringW  Domain;

 __declspec(property(get=get_Expired)) bool  Expired;

 __declspec(property(get=get_Expires, put=set_Expires)) ::System::DateTime  Expires;

 __declspec(property(put=set_HttpOnly)) bool  HttpOnly;

 __declspec(property(put=set_MaxAge)) int32_t  MaxAge;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Path, put=set_Path)) ::StringW  Path;

 __declspec(property(put=set_Port)) ::StringW  Port;

 __declspec(property(put=set_SameSite)) ::StringW  SameSite;

 __declspec(property(put=set_Secure)) bool  Secure;

 __declspec(property(get=get_Version, put=set_Version)) int32_t  Version;

/// @brief Field _comment, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__comment, put=__cordl_internal_set__comment)) ::StringW  _comment;

/// @brief Field _commentUri, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__commentUri, put=__cordl_internal_set__commentUri)) ::System::Uri*  _commentUri;

/// @brief Field _discard, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__discard, put=__cordl_internal_set__discard)) bool  _discard;

/// @brief Field _domain, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__domain, put=__cordl_internal_set__domain)) ::StringW  _domain;

/// @brief Field _emptyPorts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__emptyPorts, put=setStaticF__emptyPorts)) ::ArrayW<int32_t>  _emptyPorts;

/// @brief Field _expires, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__expires, put=__cordl_internal_set__expires)) ::System::DateTime  _expires;

/// @brief Field _httpOnly, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__httpOnly, put=__cordl_internal_set__httpOnly)) bool  _httpOnly;

/// @brief Field _name, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__name, put=__cordl_internal_set__name)) ::StringW  _name;

/// @brief Field _path, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__path, put=__cordl_internal_set__path)) ::StringW  _path;

/// @brief Field _port, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__port, put=__cordl_internal_set__port)) ::StringW  _port;

/// @brief Field _ports, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ports, put=__cordl_internal_set__ports)) ::ArrayW<int32_t>  _ports;

/// @brief Field _reservedCharsForValue, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__reservedCharsForValue, put=setStaticF__reservedCharsForValue)) ::ArrayW<char16_t>  _reservedCharsForValue;

/// @brief Field _sameSite, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__sameSite, put=__cordl_internal_set__sameSite)) ::StringW  _sameSite;

/// @brief Field _secure, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get__secure, put=__cordl_internal_set__secure)) bool  _secure;

/// @brief Field _timeStamp, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeStamp, put=__cordl_internal_set__timeStamp)) ::System::DateTime  _timeStamp;

/// @brief Field _value, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) ::StringW  _value;

/// @brief Field _version, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__version, put=__cordl_internal_set__version)) int32_t  _version;

/// @brief Method Equals, addr 0xb984d74, size 0xe4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  comparand) ;

/// @brief Method EqualsWithoutValue, addr 0xb984894, size 0x90, virtual false, abstract: false, final false
inline bool EqualsWithoutValue(::WebSocketSharp::Net::Cookie*  cookie) ;

/// @brief Method GetHashCode, addr 0xb984e58, size 0x19c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::WebSocketSharp::Net::Cookie* New_ctor() ;

static inline ::WebSocketSharp::Net::Cookie* New_ctor(::StringW  name, ::StringW  value) ;

static inline ::WebSocketSharp::Net::Cookie* New_ctor(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain) ;

/// @brief Method ToRequestString, addr 0xb984924, size 0x338, virtual false, abstract: false, final false
inline ::StringW ToRequestString(::System::Uri*  uri) ;

/// @brief Method ToString, addr 0xb984ff4, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryCreate, addr 0xb984c5c, size 0x118, virtual false, abstract: false, final false
static inline bool TryCreate(::StringW  name, ::StringW  value, ::by_ref<::WebSocketSharp::Net::Cookie*>  result) ;

constexpr ::StringW const& __cordl_internal_get__comment() const;

constexpr ::StringW& __cordl_internal_get__comment() ;

constexpr ::System::Uri* const& __cordl_internal_get__commentUri() const;

constexpr ::System::Uri*& __cordl_internal_get__commentUri() ;

constexpr bool const& __cordl_internal_get__discard() const;

constexpr bool& __cordl_internal_get__discard() ;

constexpr ::StringW const& __cordl_internal_get__domain() const;

constexpr ::StringW& __cordl_internal_get__domain() ;

constexpr ::System::DateTime const& __cordl_internal_get__expires() const;

constexpr ::System::DateTime& __cordl_internal_get__expires() ;

constexpr bool const& __cordl_internal_get__httpOnly() const;

constexpr bool& __cordl_internal_get__httpOnly() ;

constexpr ::StringW const& __cordl_internal_get__name() const;

constexpr ::StringW& __cordl_internal_get__name() ;

constexpr ::StringW const& __cordl_internal_get__path() const;

constexpr ::StringW& __cordl_internal_get__path() ;

constexpr ::StringW const& __cordl_internal_get__port() const;

constexpr ::StringW& __cordl_internal_get__port() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__ports() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__ports() ;

constexpr ::StringW const& __cordl_internal_get__sameSite() const;

constexpr ::StringW& __cordl_internal_get__sameSite() ;

constexpr bool const& __cordl_internal_get__secure() const;

constexpr bool& __cordl_internal_get__secure() ;

constexpr ::System::DateTime const& __cordl_internal_get__timeStamp() const;

constexpr ::System::DateTime& __cordl_internal_get__timeStamp() ;

constexpr ::StringW const& __cordl_internal_get__value() const;

constexpr ::StringW& __cordl_internal_get__value() ;

constexpr int32_t const& __cordl_internal_get__version() const;

constexpr int32_t& __cordl_internal_get__version() ;

constexpr void __cordl_internal_set__comment(::StringW  value) ;

constexpr void __cordl_internal_set__commentUri(::System::Uri*  value) ;

constexpr void __cordl_internal_set__discard(bool  value) ;

constexpr void __cordl_internal_set__domain(::StringW  value) ;

constexpr void __cordl_internal_set__expires(::System::DateTime  value) ;

constexpr void __cordl_internal_set__httpOnly(bool  value) ;

constexpr void __cordl_internal_set__name(::StringW  value) ;

constexpr void __cordl_internal_set__path(::StringW  value) ;

constexpr void __cordl_internal_set__port(::StringW  value) ;

constexpr void __cordl_internal_set__ports(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set__sameSite(::StringW  value) ;

constexpr void __cordl_internal_set__secure(bool  value) ;

constexpr void __cordl_internal_set__timeStamp(::System::DateTime  value) ;

constexpr void __cordl_internal_set__value(::StringW  value) ;

constexpr void __cordl_internal_set__version(int32_t  value) ;

/// @brief Method .ctor, addr 0xb9840b8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb9841c0, size 0x1c, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  value) ;

/// @brief Method .ctor, addr 0xb9841dc, size 0x2b8, virtual false, abstract: false, final false
inline void _ctor(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain) ;

static inline ::ArrayW<int32_t> getStaticF__emptyPorts() ;

static inline ::ArrayW<char16_t> getStaticF__reservedCharsForValue() ;

/// @brief Method get_Expired, addr 0xb9835d0, size 0xa8, virtual false, abstract: false, final false
inline bool get_Expired() ;

/// @brief Method get_Expires, addr 0xb984584, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_Expires() ;

/// @brief Method get_Name, addr 0xb98459c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Path, addr 0xb9845a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Path() ;

/// @brief Method get_Version, addr 0xb984848, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Version() ;

/// @brief Method hash, addr 0xb984860, size 0x34, virtual false, abstract: false, final false
static inline int32_t hash(int32_t  i, int32_t  j, int32_t  k, int32_t  l, int32_t  m) ;

/// @brief Method init, addr 0xb9840f4, size 0xcc, virtual false, abstract: false, final false
inline void init(::StringW  name, ::StringW  value, ::StringW  path, ::StringW  domain) ;

static inline void setStaticF__emptyPorts(::ArrayW<int32_t>  value) ;

static inline void setStaticF__reservedCharsForValue(::ArrayW<char16_t>  value) ;

/// @brief Method set_Comment, addr 0xb984540, size 0x8, virtual false, abstract: false, final false
inline void set_Comment(::StringW  value) ;

/// @brief Method set_CommentUri, addr 0xb984548, size 0x8, virtual false, abstract: false, final false
inline void set_CommentUri(::System::Uri*  value) ;

/// @brief Method set_Discard, addr 0xb984550, size 0x8, virtual false, abstract: false, final false
inline void set_Discard(bool  value) ;

/// @brief Method set_Domain, addr 0xb984558, size 0x2c, virtual false, abstract: false, final false
inline void set_Domain(::StringW  value) ;

/// @brief Method set_Expires, addr 0xb98458c, size 0x8, virtual false, abstract: false, final false
inline void set_Expires(::System::DateTime  value) ;

/// @brief Method set_HttpOnly, addr 0xb984594, size 0x8, virtual false, abstract: false, final false
inline void set_HttpOnly(bool  value) ;

/// @brief Method set_MaxAge, addr 0xb984494, size 0xa4, virtual false, abstract: false, final false
inline void set_MaxAge(int32_t  value) ;

/// @brief Method set_Path, addr 0xb9845ac, size 0x2c, virtual false, abstract: false, final false
inline void set_Path(::StringW  value) ;

/// @brief Method set_Port, addr 0xb9845d8, size 0x90, virtual false, abstract: false, final false
inline void set_Port(::StringW  value) ;

/// @brief Method set_SameSite, addr 0xb984538, size 0x8, virtual false, abstract: false, final false
inline void set_SameSite(::StringW  value) ;

/// @brief Method set_Secure, addr 0xb984840, size 0x8, virtual false, abstract: false, final false
inline void set_Secure(bool  value) ;

/// @brief Method set_Version, addr 0xb984850, size 0x10, virtual false, abstract: false, final false
inline void set_Version(int32_t  value) ;

/// @brief Method tryCreatePorts, addr 0xb984668, size 0x1d8, virtual false, abstract: false, final false
static inline bool tryCreatePorts(::StringW  value, ::by_ref<::ArrayW<int32_t>>  result) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Cookie() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Cookie(Cookie && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Cookie", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Cookie(Cookie const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30358};

/// @brief Field _comment, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____comment;

/// @brief Field _commentUri, offset: 0x18, size: 0x8, def value: None
 ::System::Uri*  ____commentUri;

/// @brief Field _discard, offset: 0x20, size: 0x1, def value: None
 bool  ____discard;

/// @brief Field _domain, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____domain;

/// @brief Field _expires, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ____expires;

/// @brief Field _httpOnly, offset: 0x38, size: 0x1, def value: None
 bool  ____httpOnly;

/// @brief Field _name, offset: 0x40, size: 0x8, def value: None
 ::StringW  ____name;

/// @brief Field _path, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____path;

/// @brief Field _port, offset: 0x50, size: 0x8, def value: None
 ::StringW  ____port;

/// @brief Field _ports, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____ports;

/// @brief Field _sameSite, offset: 0x60, size: 0x8, def value: None
 ::StringW  ____sameSite;

/// @brief Field _secure, offset: 0x68, size: 0x1, def value: None
 bool  ____secure;

/// @brief Field _timeStamp, offset: 0x70, size: 0x8, def value: None
 ::System::DateTime  ____timeStamp;

/// @brief Field _value, offset: 0x78, size: 0x8, def value: None
 ::StringW  ____value;

/// @brief Field _version, offset: 0x80, size: 0x4, def value: None
 int32_t  ____version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____comment) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____commentUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____discard) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____domain) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____expires) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____httpOnly) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____name) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____path) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____port) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____ports) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____sameSite) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____secure) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____timeStamp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____value) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::Cookie, ____version) == 0x80, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::Cookie) == 0x88, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
