#pragma once
// IWYU pragma private; include "LitJson/Lexer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Lexer)
namespace LitJson {
class FsmContext;
}
namespace LitJson {
class Lexer_StateHandler;
}
namespace System::IO {
class TextReader;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace LitJson {
class Lexer;
}
namespace LitJson {
class Lexer_StateHandler;
}
// Write type traits
MARK_REF_T(::LitJson::Lexer*);
MARK_REF_T(::LitJson::Lexer_StateHandler*);
DEFINE_IL2CPP_CLASS(::LitJson::Lexer*, "LitJson", "Lexer");
DEFINE_IL2CPP_CLASS(::LitJson::Lexer_StateHandler*, "LitJson", "Lexer/StateHandler");
// Dependencies LitJson.Lexer::StateHandler, System.Object
namespace LitJson {
// Is value type: false
// CS Name: LitJson.Lexer
class CORDL_TYPE Lexer : public ::System::Object {
public:
// Declarations
using StateHandler = ::LitJson::Lexer_StateHandler;

 __declspec(property(get=get_AllowComments, put=set_AllowComments)) bool  AllowComments;

 __declspec(property(get=get_AllowSingleQuotedStrings, put=set_AllowSingleQuotedStrings)) bool  AllowSingleQuotedStrings;

 __declspec(property(get=get_EndOfInput)) bool  EndOfInput;

 __declspec(property(get=get_StringValue)) ::StringW  StringValue;

 __declspec(property(get=get_Token)) int32_t  Token;

/// @brief Field allow_comments, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_allow_comments, put=__cordl_internal_set_allow_comments)) bool  allow_comments;

/// @brief Field allow_single_quoted_strings, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_allow_single_quoted_strings, put=__cordl_internal_set_allow_single_quoted_strings)) bool  allow_single_quoted_strings;

/// @brief Field end_of_input, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_end_of_input, put=__cordl_internal_set_end_of_input)) bool  end_of_input;

/// @brief Field fsm_context, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_fsm_context, put=__cordl_internal_set_fsm_context)) ::LitJson::FsmContext*  fsm_context;

/// @brief Field fsm_handler_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fsm_handler_table, put=setStaticF_fsm_handler_table)) ::ArrayW<::LitJson::Lexer_StateHandler*>  fsm_handler_table;

/// @brief Field fsm_return_table, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_fsm_return_table, put=setStaticF_fsm_return_table)) ::ArrayW<int32_t>  fsm_return_table;

/// @brief Field input_buffer, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_input_buffer, put=__cordl_internal_set_input_buffer)) int32_t  input_buffer;

/// @brief Field input_char, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_input_char, put=__cordl_internal_set_input_char)) int32_t  input_char;

/// @brief Field reader, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_reader, put=__cordl_internal_set_reader)) ::System::IO::TextReader*  reader;

/// @brief Field state, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) int32_t  state;

/// @brief Field string_buffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_string_buffer, put=__cordl_internal_set_string_buffer)) ::System::Text::StringBuilder*  string_buffer;

/// @brief Field string_value, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_string_value, put=__cordl_internal_set_string_value)) ::StringW  string_value;

/// @brief Field token, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_token, put=__cordl_internal_set_token)) int32_t  token;

/// @brief Field unichar, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_unichar, put=__cordl_internal_set_unichar)) int32_t  unichar;

/// @brief Method GetChar, addr 0x5b6a9e4, size 0x30, virtual false, abstract: false, final false
inline bool GetChar() ;

/// @brief Method HexValue, addr 0x5b6a56c, size 0xb8, virtual false, abstract: false, final false
static inline int32_t HexValue(int32_t  digit) ;

static inline ::LitJson::Lexer* New_ctor(::System::IO::TextReader*  reader) ;

/// @brief Method NextChar, addr 0x5b6ba70, size 0x30, virtual false, abstract: false, final false
inline int32_t NextChar() ;

/// @brief Method NextToken, addr 0x5b69054, size 0x1cc, virtual false, abstract: false, final false
inline bool NextToken() ;

/// @brief Method PopulateFsmTables, addr 0x5b69c18, size 0x954, virtual false, abstract: false, final false
static inline void PopulateFsmTables() ;

/// @brief Method ProcessEscChar, addr 0x5b6a72c, size 0xdc, virtual false, abstract: false, final false
static inline char16_t ProcessEscChar(int32_t  esc_char) ;

/// @brief Method State1, addr 0x5b6a808, size 0x1dc, virtual false, abstract: false, final false
static inline bool State1(::LitJson::FsmContext*  ctx) ;

/// @brief Method State10, addr 0x5b6b018, size 0x68, virtual false, abstract: false, final false
static inline bool State10(::LitJson::FsmContext*  ctx) ;

/// @brief Method State11, addr 0x5b6b080, size 0x6c, virtual false, abstract: false, final false
static inline bool State11(::LitJson::FsmContext*  ctx) ;

/// @brief Method State12, addr 0x5b6b0ec, size 0x68, virtual false, abstract: false, final false
static inline bool State12(::LitJson::FsmContext*  ctx) ;

/// @brief Method State13, addr 0x5b6b154, size 0x68, virtual false, abstract: false, final false
static inline bool State13(::LitJson::FsmContext*  ctx) ;

/// @brief Method State14, addr 0x5b6b1bc, size 0x68, virtual false, abstract: false, final false
static inline bool State14(::LitJson::FsmContext*  ctx) ;

/// @brief Method State15, addr 0x5b6b224, size 0x6c, virtual false, abstract: false, final false
static inline bool State15(::LitJson::FsmContext*  ctx) ;

/// @brief Method State16, addr 0x5b6b290, size 0x68, virtual false, abstract: false, final false
static inline bool State16(::LitJson::FsmContext*  ctx) ;

/// @brief Method State17, addr 0x5b6b2f8, size 0x68, virtual false, abstract: false, final false
static inline bool State17(::LitJson::FsmContext*  ctx) ;

/// @brief Method State18, addr 0x5b6b360, size 0x6c, virtual false, abstract: false, final false
static inline bool State18(::LitJson::FsmContext*  ctx) ;

/// @brief Method State19, addr 0x5b6b3cc, size 0xa8, virtual false, abstract: false, final false
static inline bool State19(::LitJson::FsmContext*  ctx) ;

/// @brief Method State2, addr 0x5b6aa14, size 0xa8, virtual false, abstract: false, final false
static inline bool State2(::LitJson::FsmContext*  ctx) ;

/// @brief Method State20, addr 0x5b6b474, size 0x6c, virtual false, abstract: false, final false
static inline bool State20(::LitJson::FsmContext*  ctx) ;

/// @brief Method State21, addr 0x5b6b4e0, size 0x140, virtual false, abstract: false, final false
static inline bool State21(::LitJson::FsmContext*  ctx) ;

/// @brief Method State22, addr 0x5b6b620, size 0x170, virtual false, abstract: false, final false
static inline bool State22(::LitJson::FsmContext*  ctx) ;

/// @brief Method State23, addr 0x5b6b790, size 0xa8, virtual false, abstract: false, final false
static inline bool State23(::LitJson::FsmContext*  ctx) ;

/// @brief Method State24, addr 0x5b6b838, size 0x74, virtual false, abstract: false, final false
static inline bool State24(::LitJson::FsmContext*  ctx) ;

/// @brief Method State25, addr 0x5b6b8ac, size 0x7c, virtual false, abstract: false, final false
static inline bool State25(::LitJson::FsmContext*  ctx) ;

/// @brief Method State26, addr 0x5b6b928, size 0x68, virtual false, abstract: false, final false
static inline bool State26(::LitJson::FsmContext*  ctx) ;

/// @brief Method State27, addr 0x5b6b990, size 0x68, virtual false, abstract: false, final false
static inline bool State27(::LitJson::FsmContext*  ctx) ;

/// @brief Method State28, addr 0x5b6b9f8, size 0x78, virtual false, abstract: false, final false
static inline bool State28(::LitJson::FsmContext*  ctx) ;

/// @brief Method State3, addr 0x5b6aabc, size 0x130, virtual false, abstract: false, final false
static inline bool State3(::LitJson::FsmContext*  ctx) ;

/// @brief Method State4, addr 0x5b6abf8, size 0xf4, virtual false, abstract: false, final false
static inline bool State4(::LitJson::FsmContext*  ctx) ;

/// @brief Method State5, addr 0x5b6acec, size 0x7c, virtual false, abstract: false, final false
static inline bool State5(::LitJson::FsmContext*  ctx) ;

/// @brief Method State6, addr 0x5b6ad68, size 0xf8, virtual false, abstract: false, final false
static inline bool State6(::LitJson::FsmContext*  ctx) ;

/// @brief Method State7, addr 0x5b6ae60, size 0x94, virtual false, abstract: false, final false
static inline bool State7(::LitJson::FsmContext*  ctx) ;

/// @brief Method State8, addr 0x5b6aef4, size 0xbc, virtual false, abstract: false, final false
static inline bool State8(::LitJson::FsmContext*  ctx) ;

/// @brief Method State9, addr 0x5b6afb0, size 0x68, virtual false, abstract: false, final false
static inline bool State9(::LitJson::FsmContext*  ctx) ;

/// @brief Method UngetChar, addr 0x5b6abec, size 0xc, virtual false, abstract: false, final false
inline void UngetChar() ;

constexpr bool const& __cordl_internal_get_allow_comments() const;

constexpr bool& __cordl_internal_get_allow_comments() ;

constexpr bool const& __cordl_internal_get_allow_single_quoted_strings() const;

constexpr bool& __cordl_internal_get_allow_single_quoted_strings() ;

constexpr bool const& __cordl_internal_get_end_of_input() const;

constexpr bool& __cordl_internal_get_end_of_input() ;

constexpr ::LitJson::FsmContext* const& __cordl_internal_get_fsm_context() const;

constexpr ::LitJson::FsmContext*& __cordl_internal_get_fsm_context() ;

constexpr int32_t const& __cordl_internal_get_input_buffer() const;

constexpr int32_t& __cordl_internal_get_input_buffer() ;

constexpr int32_t const& __cordl_internal_get_input_char() const;

constexpr int32_t& __cordl_internal_get_input_char() ;

constexpr ::System::IO::TextReader* const& __cordl_internal_get_reader() const;

constexpr ::System::IO::TextReader*& __cordl_internal_get_reader() ;

constexpr int32_t const& __cordl_internal_get_state() const;

constexpr int32_t& __cordl_internal_get_state() ;

constexpr ::System::Text::StringBuilder* const& __cordl_internal_get_string_buffer() const;

constexpr ::System::Text::StringBuilder*& __cordl_internal_get_string_buffer() ;

constexpr ::StringW const& __cordl_internal_get_string_value() const;

constexpr ::StringW& __cordl_internal_get_string_value() ;

constexpr int32_t const& __cordl_internal_get_token() const;

constexpr int32_t& __cordl_internal_get_token() ;

constexpr int32_t const& __cordl_internal_get_unichar() const;

constexpr int32_t& __cordl_internal_get_unichar() ;

constexpr void __cordl_internal_set_allow_comments(bool  value) ;

constexpr void __cordl_internal_set_allow_single_quoted_strings(bool  value) ;

constexpr void __cordl_internal_set_end_of_input(bool  value) ;

constexpr void __cordl_internal_set_fsm_context(::LitJson::FsmContext*  value) ;

constexpr void __cordl_internal_set_input_buffer(int32_t  value) ;

constexpr void __cordl_internal_set_input_char(int32_t  value) ;

constexpr void __cordl_internal_set_reader(::System::IO::TextReader*  value) ;

constexpr void __cordl_internal_set_state(int32_t  value) ;

constexpr void __cordl_internal_set_string_buffer(::System::Text::StringBuilder*  value) ;

constexpr void __cordl_internal_set_string_value(::StringW  value) ;

constexpr void __cordl_internal_set_token(int32_t  value) ;

constexpr void __cordl_internal_set_unichar(int32_t  value) ;

/// @brief Method .ctor, addr 0x5b68958, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::System::IO::TextReader*  reader) ;

static inline ::ArrayW<::LitJson::Lexer_StateHandler*> getStaticF_fsm_handler_table() ;

static inline ::ArrayW<int32_t> getStaticF_fsm_return_table() ;

/// @brief Method get_AllowComments, addr 0x5b69bdc, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowComments() ;

/// @brief Method get_AllowSingleQuotedStrings, addr 0x5b69bec, size 0x8, virtual false, abstract: false, final false
inline bool get_AllowSingleQuotedStrings() ;

/// @brief Method get_EndOfInput, addr 0x5b69bfc, size 0x8, virtual false, abstract: false, final false
inline bool get_EndOfInput() ;

/// @brief Method get_StringValue, addr 0x5b69c0c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_StringValue() ;

/// @brief Method get_Token, addr 0x5b69c04, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Token() ;

static inline void setStaticF_fsm_handler_table(::ArrayW<::LitJson::Lexer_StateHandler*>  value) ;

static inline void setStaticF_fsm_return_table(::ArrayW<int32_t>  value) ;

/// @brief Method set_AllowComments, addr 0x5b69be4, size 0x8, virtual false, abstract: false, final false
inline void set_AllowComments(bool  value) ;

/// @brief Method set_AllowSingleQuotedStrings, addr 0x5b69bf4, size 0x8, virtual false, abstract: false, final false
inline void set_AllowSingleQuotedStrings(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lexer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Lexer(Lexer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lexer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lexer(Lexer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3841};

/// @brief Field allow_comments, offset: 0x10, size: 0x1, def value: None
 bool  ___allow_comments;

/// @brief Field allow_single_quoted_strings, offset: 0x11, size: 0x1, def value: None
 bool  ___allow_single_quoted_strings;

/// @brief Field end_of_input, offset: 0x12, size: 0x1, def value: None
 bool  ___end_of_input;

/// @brief Field fsm_context, offset: 0x18, size: 0x8, def value: None
 ::LitJson::FsmContext*  ___fsm_context;

/// @brief Field input_buffer, offset: 0x20, size: 0x4, def value: None
 int32_t  ___input_buffer;

/// @brief Field input_char, offset: 0x24, size: 0x4, def value: None
 int32_t  ___input_char;

/// @brief Field reader, offset: 0x28, size: 0x8, def value: None
 ::System::IO::TextReader*  ___reader;

/// @brief Field state, offset: 0x30, size: 0x4, def value: None
 int32_t  ___state;

/// @brief Field string_buffer, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  ___string_buffer;

/// @brief Field string_value, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___string_value;

/// @brief Field token, offset: 0x48, size: 0x4, def value: None
 int32_t  ___token;

/// @brief Field unichar, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___unichar;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::LitJson::Lexer, ___allow_comments) == 0x10, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___allow_single_quoted_strings) == 0x11, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___end_of_input) == 0x12, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___fsm_context) == 0x18, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___input_buffer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___input_char) == 0x24, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___reader) == 0x28, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___state) == 0x30, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___string_buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___string_value) == 0x40, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___token) == 0x48, "Offset mismatch!");

static_assert(offsetof(::LitJson::Lexer, ___unichar) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::LitJson::Lexer) == 0x50, "Size mismatch!");

} // namespace end def LitJson
// Dependencies System.MulticastDelegate
namespace LitJson {
// Is value type: false
// CS Name: LitJson.Lexer/StateHandler
class CORDL_TYPE Lexer_StateHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x5b6bab4, size 0x20, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::LitJson::FsmContext*  ctx, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x5b6bad4, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x5b6baa0, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::LitJson::FsmContext*  ctx) ;

static inline ::LitJson::Lexer_StateHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x5b6a624, size 0x108, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Lexer_StateHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Lexer_StateHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Lexer_StateHandler(Lexer_StateHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Lexer_StateHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Lexer_StateHandler(Lexer_StateHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::LitJson::Lexer_StateHandler) == 0x80, "Size mismatch!");

} // namespace end def LitJson
