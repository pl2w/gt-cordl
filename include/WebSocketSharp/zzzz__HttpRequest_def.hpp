#pragma once
// IWYU pragma private; include "WebSocketSharp/HttpRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WebSocketSharp/zzzz__HttpBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HttpRequest)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System::IO {
class Stream;
}
namespace System {
class Uri;
}
namespace System {
class Version;
}
namespace WebSocketSharp::Net {
class CookieCollection;
}
namespace WebSocketSharp {
class HttpResponse;
}
// Forward declare root types
namespace WebSocketSharp {
class HttpRequest;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::HttpRequest*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::HttpRequest*, "WebSocketSharp", "HttpRequest");
// Dependencies WebSocketSharp.HttpBase
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.HttpRequest
class CORDL_TYPE HttpRequest : public ::WebSocketSharp::HttpBase {
public:
// Declarations
/// @brief Field _method, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__method, put=__cordl_internal_set__method)) ::StringW  _method;

/// @brief Field _uri, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__uri, put=__cordl_internal_set__uri)) ::StringW  _uri;

/// @brief Method CreateConnectRequest, addr 0xb97e9c8, size 0x128, virtual false, abstract: false, final false
static inline ::WebSocketSharp::HttpRequest* CreateConnectRequest(::System::Uri*  uri) ;

/// @brief Method CreateWebSocketRequest, addr 0xb97b3b8, size 0x1bc, virtual false, abstract: false, final false
static inline ::WebSocketSharp::HttpRequest* CreateWebSocketRequest(::System::Uri*  uri) ;

/// @brief Method GetResponse, addr 0xb97e5c0, size 0xd8, virtual false, abstract: false, final false
inline ::WebSocketSharp::HttpResponse* GetResponse(::System::IO::Stream*  stream, int32_t  millisecondsTimeout) ;

static inline ::WebSocketSharp::HttpRequest* New_ctor(::StringW  method, ::StringW  uri) ;

static inline ::WebSocketSharp::HttpRequest* New_ctor(::StringW  method, ::StringW  uri, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers) ;

/// @brief Method SetCookies, addr 0xb97b5bc, size 0x3b4, virtual false, abstract: false, final false
inline void SetCookies(::WebSocketSharp::Net::CookieCollection*  cookies) ;

/// @brief Method ToString, addr 0xb983678, size 0x2a0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get__method() const;

constexpr ::StringW& __cordl_internal_get__method() ;

constexpr ::StringW const& __cordl_internal_get__uri() const;

constexpr ::StringW& __cordl_internal_get__uri() ;

constexpr void __cordl_internal_set__method(::StringW  value) ;

constexpr void __cordl_internal_set__uri(::StringW  value) ;

/// @brief Method .ctor, addr 0xb9833e0, size 0xec, virtual false, abstract: false, final false
inline void _ctor(::StringW  method, ::StringW  uri) ;

/// @brief Method .ctor, addr 0xb983398, size 0x48, virtual false, abstract: false, final false
inline void _ctor(::StringW  method, ::StringW  uri, ::System::Version*  version, ::System::Collections::Specialized::NameValueCollection*  headers) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HttpRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HttpRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HttpRequest(HttpRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HttpRequest(HttpRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30355};

/// @brief Field _method, offset: 0x28, size: 0x8, def value: None
 ::StringW  ____method;

/// @brief Field _uri, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____uri;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::HttpRequest, ____method) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::HttpRequest, ____uri) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::HttpRequest) == 0x38, "Size mismatch!");

} // namespace end def WebSocketSharp
