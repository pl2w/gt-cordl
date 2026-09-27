#pragma once
// IWYU pragma private; include "WebSocketSharp/HttpResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WebSocketSharp/zzzz__HttpBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(HttpResponse)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System {
class Version;
}
namespace WebSocketSharp::Net {
class CookieCollection;
}
// Forward declare root types
namespace WebSocketSharp {
class HttpResponse;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::HttpResponse*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::HttpResponse*, "WebSocketSharp", "HttpResponse");
// Dependencies WebSocketSharp.HttpBase
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.HttpResponse
class CORDL_TYPE HttpResponse : public ::WebSocketSharp::HttpBase {
public:
// Declarations
 __declspec(property(get=get_Cookies)) ::WebSocketSharp::Net::CookieCollection*  Cookies;

 __declspec(property(get=get_HasConnectionClose)) bool  HasConnectionClose;

 __declspec(property(get=get_IsProxyAuthenticationRequired)) bool  IsProxyAuthenticationRequired;

 __declspec(property(get=get_IsRedirect)) bool  IsRedirect;

 __declspec(property(get=get_IsUnauthorized)) bool  IsUnauthorized;

 __declspec(property(get=get_IsWebSocketResponse)) bool  IsWebSocketResponse;

 __declspec(property(get=get_StatusCode)) ::StringW  StatusCode;

/// @brief Field _code, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__code, put=__cordl_internal_set__code)) ::StringW  _code;

/// @brief Field _reason, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__reason, put=__cordl_internal_set__reason)) ::StringW  _reason;

static inline ::WebSocketSharp::HttpResponse* New_ctor(::StringW  code, ::StringW  reason, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers) ;

/// @brief Method Parse, addr 0xb983960, size 0x220, virtual false, abstract: false, final false
static inline ::WebSocketSharp::HttpResponse* Parse(::ArrayW<::StringW>  headerParts) ;

/// @brief Method ToString, addr 0xb983d3c, size 0x2a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__code() const;

constexpr ::StringW& __cordl_internal_get__code() ;

constexpr ::StringW const& __cordl_internal_get__reason() const;

constexpr ::StringW& __cordl_internal_get__reason() ;

constexpr void __cordl_internal_set__code(::StringW  value) ;

constexpr void __cordl_internal_set__reason(::StringW  value) ;

/// @brief Method .ctor, addr 0xb983918, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  code, ::StringW  reason, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers) ;

/// @brief Method get_Cookies, addr 0xb97c158, size 0x5c, virtual false, abstract: false, final false
inline ::WebSocketSharp::Net::CookieCollection* get_Cookies() ;

/// @brief Method get_HasConnectionClose, addr 0xb97e534, size 0x8c, virtual false, abstract: false, final false
inline bool get_HasConnectionClose() ;

/// @brief Method get_IsProxyAuthenticationRequired, addr 0xb97eaf0, size 0x4c, virtual false, abstract: false, final false
inline bool get_IsProxyAuthenticationRequired() ;

/// @brief Method get_IsRedirect, addr 0xb978ec8, size 0x84, virtual false, abstract: false, final false
inline bool get_IsRedirect() ;

/// @brief Method get_IsUnauthorized, addr 0xb978f4c, size 0x4c, virtual false, abstract: false, final false
inline bool get_IsUnauthorized() ;

/// @brief Method get_IsWebSocketResponse, addr 0xb978f98, size 0xec, virtual false, abstract: false, final false
inline bool get_IsWebSocketResponse() ;

/// @brief Method get_StatusCode, addr 0xb97eb4c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StatusCode() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpResponse(HttpResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpResponse(HttpResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30356};

/// @brief Field _code, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____code;

/// @brief Field _reason, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____reason;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::HttpResponse, ____code) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::HttpResponse, ____reason) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::HttpResponse) == 0x38, "Size mismatch!");

} // namespace end def WebSocketSharp
