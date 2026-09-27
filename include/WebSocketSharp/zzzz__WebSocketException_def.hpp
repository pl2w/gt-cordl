#pragma once
// IWYU pragma private; include "WebSocketSharp/WebSocketException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "WebSocketSharp/zzzz__CloseStatusCode_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(WebSocketException)
namespace System {
class Exception;
}
namespace WebSocketSharp {
struct CloseStatusCode;
}
// Forward declare root types
namespace WebSocketSharp {
class WebSocketException;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::WebSocketException*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::WebSocketException*, "WebSocketSharp", "WebSocketException");
// Dependencies System.Exception, WebSocketSharp.CloseStatusCode
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.WebSocketException
class CORDL_TYPE WebSocketException : public ::System::Exception {
public:
// Declarations
 __declspec(property(get=get_Code)) ::WebSocketSharp::CloseStatusCode  Code;

/// @brief Field _code, offset 0x8c, size 0x2 
 __declspec(property(get=__cordl_internal_get__code, put=__cordl_internal_set__code)) ::WebSocketSharp::CloseStatusCode  _code;

static inline ::WebSocketSharp::WebSocketException* New_ctor(::WebSocketSharp::CloseStatusCode  code) ;

static inline ::WebSocketSharp::WebSocketException* New_ctor(::WebSocketSharp::CloseStatusCode  code, ::System::Exception*  innerException) ;

static inline ::WebSocketSharp::WebSocketException* New_ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message) ;

static inline ::WebSocketSharp::WebSocketException* New_ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message, ::System::Exception*  innerException) ;

static inline ::WebSocketSharp::WebSocketException* New_ctor(::StringW  message) ;

static inline ::WebSocketSharp::WebSocketException* New_ctor(::StringW  message, ::System::Exception*  innerException) ;

constexpr ::WebSocketSharp::CloseStatusCode const& __cordl_internal_get__code() const;

constexpr ::WebSocketSharp::CloseStatusCode& __cordl_internal_get__code() ;

constexpr void __cordl_internal_set__code(::WebSocketSharp::CloseStatusCode  value) ;

/// @brief Method .ctor, addr 0xb977c50, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::CloseStatusCode  code) ;

/// @brief Method .ctor, addr 0xb97eb54, size 0xc, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::CloseStatusCode  code, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xb97c13c, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message) ;

/// @brief Method .ctor, addr 0xb97fb8c, size 0xb0, virtual false, abstract: false, final false
inline void _ctor(::WebSocketSharp::CloseStatusCode  code, ::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method .ctor, addr 0xb97eb3c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message) ;

/// @brief Method .ctor, addr 0xb97fc3c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  innerException) ;

/// @brief Method get_Code, addr 0xb97c2d8, size 0x8, virtual false, abstract: false, final false
inline ::WebSocketSharp::CloseStatusCode get_Code() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WebSocketException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WebSocketException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WebSocketException(WebSocketException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WebSocketException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WebSocketException(WebSocketException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30338};

/// @brief Field _code, offset: 0x8c, size: 0x2, def value: None
 ::WebSocketSharp::CloseStatusCode  ____code;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::WebSocketException, ____code) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::WebSocketException) == 0x90, "Size mismatch!");

} // namespace end def WebSocketSharp
