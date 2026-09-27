#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/AuthenticationResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AuthenticationResponse)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace WebSocketSharp::Net {
class AuthenticationChallenge;
}
namespace WebSocketSharp::Net {
class AuthenticationResponse___c;
}
namespace WebSocketSharp::Net {
struct AuthenticationSchemes;
}
namespace WebSocketSharp::Net {
class NetworkCredential;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class AuthenticationResponse;
}
namespace WebSocketSharp::Net {
class AuthenticationResponse___c;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::AuthenticationResponse*);
MARK_REF_T(::WebSocketSharp::Net::AuthenticationResponse___c*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::AuthenticationResponse*, "WebSocketSharp.Net", "AuthenticationResponse");
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::AuthenticationResponse___c*, "WebSocketSharp.Net", "AuthenticationResponse/<>c");
// Dependencies WebSocketSharp.Net.AuthenticationBase
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.AuthenticationResponse
class CORDL_TYPE AuthenticationResponse : public ::WebSocketSharp::Net::AuthenticationBase {
public:
// Declarations
using __c = ::WebSocketSharp::Net::AuthenticationResponse___c;

 __declspec(property(get=get_NonceCount)) uint32_t  NonceCount;

/// @brief Field _nonceCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__nonceCount, put=__cordl_internal_set__nonceCount)) uint32_t  _nonceCount;

/// @brief Method CreateRequestDigest, addr 0xb98a8bc, size 0x49c, virtual false, abstract: false, final false
static inline ::StringW CreateRequestDigest(::System::Collections::Specialized::NameValueCollection*  parameters) ;

static inline ::WebSocketSharp::Net::AuthenticationResponse* New_ctor(::WebSocketSharp::Net::AuthenticationChallenge*  challenge, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount) ;

static inline ::WebSocketSharp::Net::AuthenticationResponse* New_ctor(::WebSocketSharp::Net::NetworkCredential*  credentials) ;

static inline ::WebSocketSharp::Net::AuthenticationResponse* New_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount) ;

/// @brief Method ToBasicString, addr 0xb98ad58, size 0x134, virtual true, abstract: false, final false
inline ::StringW ToBasicString() ;

/// @brief Method ToDigestString, addr 0xb98ae8c, size 0x414, virtual true, abstract: false, final false
inline ::StringW ToDigestString() ;

constexpr uint32_t const& __cordl_internal_get__nonceCount() const;

constexpr uint32_t& __cordl_internal_get__nonceCount() ;

constexpr void __cordl_internal_set__nonceCount(uint32_t  value) ;

/// @brief Method .ctor, addr 0xb98a100, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Net::AuthenticationChallenge*  challenge, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount) ;

/// @brief Method .ctor, addr 0xb989f3c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Net::NetworkCredential*  credentials) ;

/// @brief Method .ctor, addr 0xb989fb0, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters, ::WebSocketSharp::Net::NetworkCredential*  credentials, uint32_t  nonceCount) ;

/// @brief Method createA1, addr 0xb98a460, size 0x64, virtual false, abstract: false, final false
static inline ::StringW createA1(::StringW  username, ::StringW  password, ::StringW  realm) ;

/// @brief Method createA1, addr 0xb98a4c4, size 0x8c, virtual false, abstract: false, final false
static inline ::StringW createA1(::StringW  username, ::StringW  password, ::StringW  realm, ::StringW  nonce, ::StringW  cnonce) ;

/// @brief Method createA2, addr 0xb98a690, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW createA2(::StringW  method, ::StringW  uri) ;

/// @brief Method createA2, addr 0xb98a6ec, size 0x70, virtual false, abstract: false, final false
static inline ::StringW createA2(::StringW  method, ::StringW  uri, ::StringW  entity) ;

/// @brief Method get_NonceCount, addr 0xb98a450, size 0x10, virtual false, abstract: false, final false
inline uint32_t get_NonceCount() ;

/// @brief Method hash, addr 0xb98a550, size 0x140, virtual false, abstract: false, final false
static inline ::StringW hash(::StringW  value) ;

/// @brief Method initAsDigest, addr 0xb98a12c, size 0x324, virtual false, abstract: false, final false
inline void initAsDigest() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationResponse(AuthenticationResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationResponse(AuthenticationResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30369};

/// @brief Field _nonceCount, offset: 0x20, size: 0x4, def value: None
 uint32_t  ____nonceCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::AuthenticationResponse, ____nonceCount) == 0x20, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::AuthenticationResponse) == 0x28, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
// [CompilerGenerated]
// Dependencies System.Object
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.AuthenticationResponse/<>c
class CORDL_TYPE AuthenticationResponse___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::WebSocketSharp::Net::AuthenticationResponse___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Func_2<::StringW,bool>*  __9__24_0;

static inline ::WebSocketSharp::Net::AuthenticationResponse___c* New_ctor() ;

/// @brief Method .ctor, addr 0xb98b308, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <initAsDigest>b__24_0, addr 0xb98b310, size 0x68, virtual false, abstract: false, final false
inline bool _initAsDigest_b__24_0(::StringW  qop) ;

static inline ::WebSocketSharp::Net::AuthenticationResponse___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__24_0() ;

static inline void setStaticF___9(::WebSocketSharp::Net::AuthenticationResponse___c*  value) ;

static inline void setStaticF___9__24_0(::System::Func_2<::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationResponse___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationResponse___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationResponse___c(AuthenticationResponse___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationResponse___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationResponse___c(AuthenticationResponse___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30368};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WebSocketSharp::Net::AuthenticationResponse___c) == 0x10, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
