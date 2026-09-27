#pragma once
// IWYU pragma private; include "WebSocketSharp/ErrorEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ErrorEventArgs)
namespace System {
class Exception;
}
// Forward declare root types
namespace WebSocketSharp {
class ErrorEventArgs;
}
// Write type traits
MARK_REF_T(::WebSocketSharp::ErrorEventArgs*);
DEFINE_IL2CPP_CLASS(::WebSocketSharp::ErrorEventArgs*, "WebSocketSharp", "ErrorEventArgs");
// Dependencies System.EventArgs
namespace WebSocketSharp {
// Is value type: false
// CS Name: WebSocketSharp.ErrorEventArgs
class CORDL_TYPE ErrorEventArgs : public ::System::EventArgs {
public:
// Declarations
 __declspec(property(get=get_Message)) ::StringW  Message;

/// @brief Field _exception, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__exception, put=__cordl_internal_set__exception)) ::System::Exception*  _exception;

/// @brief Field _message, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__message, put=__cordl_internal_set__message)) ::StringW  _message;

static inline ::WebSocketSharp::ErrorEventArgs* New_ctor(::StringW  message, ::System::Exception*  exception) ;

constexpr ::System::Exception* const& __cordl_internal_get__exception() const;

constexpr ::System::Exception*& __cordl_internal_get__exception() ;

constexpr ::StringW const& __cordl_internal_get__message() const;

constexpr ::StringW& __cordl_internal_get__message() ;

constexpr void __cordl_internal_set__exception(::System::Exception*  value) ;

constexpr void __cordl_internal_set__message(::StringW  value) ;

/// @brief Method .ctor, addr 0xb977d8c, size 0x88, virtual false, abstract: false, final false
inline void _ctor(::StringW  message, ::System::Exception*  exception) ;

/// @brief Method get_Message, addr 0xb977e14, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Message() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ErrorEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ErrorEventArgs(ErrorEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ErrorEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ErrorEventArgs(ErrorEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30322};

/// @brief Field _exception, offset: 0x10, size: 0x8, def value: None
 ::System::Exception*  ____exception;

/// @brief Field _message, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____message;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WebSocketSharp::ErrorEventArgs, ____exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WebSocketSharp::ErrorEventArgs, ____message) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WebSocketSharp::ErrorEventArgs) == 0x20, "Size mismatch!");

} // namespace end def WebSocketSharp
