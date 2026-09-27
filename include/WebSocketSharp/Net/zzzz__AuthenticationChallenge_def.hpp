#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/AuthenticationChallenge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "WebSocketSharp/Net/zzzz__AuthenticationBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AuthenticationChallenge)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace WebSocketSharp::Net {
struct AuthenticationSchemes;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class AuthenticationChallenge;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::AuthenticationChallenge*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::AuthenticationChallenge*, "WebSocketSharp.Net", "AuthenticationChallenge");
// Dependencies WebSocketSharp.Net.AuthenticationBase
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.AuthenticationChallenge
class CORDL_TYPE AuthenticationChallenge : public ::WebSocketSharp::Net::AuthenticationBase {
public:
// Declarations
static inline ::WebSocketSharp::Net::AuthenticationChallenge* New_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters) ;

/// @brief Method Parse, addr 0xb98956c, size 0x1a0, virtual false, abstract: false, final false
static inline ::WebSocketSharp::Net::AuthenticationChallenge* Parse(::StringW  value) ;

/// @brief Method ToBasicString, addr 0xb989be4, size 0x7c, virtual true, abstract: false, final false
inline ::StringW ToBasicString() ;

/// @brief Method ToDigestString, addr 0xb989c60, size 0x2dc, virtual true, abstract: false, final false
inline ::StringW ToDigestString() ;

/// @brief Method .ctor, addr 0xb9894fc, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationChallenge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationChallenge", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationChallenge(AuthenticationChallenge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationChallenge", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationChallenge(AuthenticationChallenge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30367};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WebSocketSharp::Net::AuthenticationChallenge) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
