#pragma once
// IWYU pragma private; include "WebSocketSharp/Net/AuthenticationBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/Net/zzzz__AuthenticationSchemes_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AuthenticationBase)
namespace System::Collections::Specialized {
class NameValueCollection;
}
namespace WebSocketSharp::Net {
struct AuthenticationSchemes;
}
// Forward declare root types
namespace WebSocketSharp::Net {
class AuthenticationBase;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::Net::AuthenticationBase*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::Net::AuthenticationBase*, "WebSocketSharp.Net", "AuthenticationBase");
// Dependencies System.Object, WebSocketSharp.Net.AuthenticationSchemes
namespace WebSocketSharp::Net {
// Is value type: false
// CS Name: WebSocketSharp.Net.AuthenticationBase
class CORDL_TYPE AuthenticationBase : public ::System::Object {
public:
// Declarations
/// @brief Field Parameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Parameters, put=__cordl_internal_set_Parameters)) ::System::Collections::Specialized::NameValueCollection*  Parameters;

 __declspec(property(get=get_Scheme)) ::WebSocketSharp::Net::AuthenticationSchemes  Scheme;

/// @brief Field _scheme, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__scheme, put=__cordl_internal_set__scheme)) ::WebSocketSharp::Net::AuthenticationSchemes  _scheme;

/// @brief Method CreateNonceValue, addr 0xb98a75c, size 0x160, virtual false, abstract: false, final false
static inline ::StringW CreateNonceValue() ;

static inline ::WebSocketSharp::Net::AuthenticationBase* New_ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters) ;

/// @brief Method ParseParameters, addr 0xb98970c, size 0x4d8, virtual false, abstract: false, final false
static inline ::System::Collections::Specialized::NameValueCollection* ParseParameters(::StringW  value) ;

/// @brief Method ToBasicString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW ToBasicString() ;

/// @brief Method ToDigestString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW ToDigestString() ;

/// @brief Method ToString, addr 0xb98b378, size 0x44, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Collections::Specialized::NameValueCollection* const& __cordl_internal_get_Parameters() const;

constexpr ::System::Collections::Specialized::NameValueCollection*& __cordl_internal_get_Parameters() ;

constexpr ::WebSocketSharp::Net::AuthenticationSchemes const& __cordl_internal_get__scheme() const;

constexpr ::WebSocketSharp::Net::AuthenticationSchemes& __cordl_internal_get__scheme() ;

constexpr void __cordl_internal_set_Parameters(::System::Collections::Specialized::NameValueCollection*  value) ;

constexpr void __cordl_internal_set__scheme(::WebSocketSharp::Net::AuthenticationSchemes  value) ;

/// @brief Method .ctor, addr 0xb989534, size 0x38, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::Net::AuthenticationSchemes  scheme, ::System::Collections::Specialized::NameValueCollection*  parameters) ;

/// @brief Method get_Scheme, addr 0xb98a124, size 0x8, virtual false, abstract: false, final false
inline ::WebSocketSharp::Net::AuthenticationSchemes get_Scheme() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AuthenticationBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AuthenticationBase(AuthenticationBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticationBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AuthenticationBase(AuthenticationBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30370};

/// @brief Field _scheme, offset: 0x10, size: 0x4, def value: None
 ::WebSocketSharp::Net::AuthenticationSchemes  ____scheme;

/// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Specialized::NameValueCollection*  ___Parameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::Net::AuthenticationBase, ____scheme) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::Net::AuthenticationBase, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::Net::AuthenticationBase) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp::Net
