#pragma once
// IWYU pragma private; include "System/Data/ExprException.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExprException)
namespace System::Data {
class EvaluateException;
}
namespace System::Data {
class InvalidExpressionException;
}
namespace System::Data {
class OperatorInfo;
}
namespace System::Data {
class SyntaxErrorException;
}
namespace System::Data {
struct Tokens;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class OverflowException;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExprException;
}
// Write type traits
MARK_REF_T(::System::Data::ExprException*);
DEFINE_IL2CPP_CLASS(::System::Data::ExprException*, "System.Data", "ExprException");
// Dependencies System.Object
namespace System::Data {
// Is value type: false
// CS Name: System.Data.ExprException
class CORDL_TYPE ExprException : public ::System::Object {
public:
// Declarations
/// @brief Method AggregateArgument, addr 0xa9444cc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateArgument() ;

/// @brief Method AggregateUnbound, addr 0xa94450c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateUnbound(::StringW  expr) ;

/// @brief Method AmbiguousBinop, addr 0xa9441f0, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method ArgumentType, addr 0xa943fb8, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentType(::StringW  function, int32_t  arg, ::System::Type*  type) ;

/// @brief Method ArgumentTypeInteger, addr 0xa944080, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypeInteger(::StringW  function, int32_t  arg) ;

/// @brief Method BindFailure, addr 0xa94447c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* BindFailure(::StringW  relationName) ;

/// @brief Method ComputeNotAggregate, addr 0xa9445ec, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ComputeNotAggregate(::StringW  expr) ;

/// @brief Method DatatypeConvertion, addr 0xa943c44, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* DatatypeConvertion(::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method DatavalueConvertion, addr 0xa943cd0, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* DatavalueConvertion(::System::Object*  value, ::System::Type*  type, ::System::Exception*  innerException) ;

/// @brief Method EvalNoContext, addr 0xa94455c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EvalNoContext() ;

/// @brief Method ExpressionTooComplex, addr 0xa94388c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTooComplex() ;

/// @brief Method ExpressionUnbound, addr 0xa94459c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionUnbound(::StringW  expr) ;

/// @brief Method FilterConvertion, addr 0xa94463c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* FilterConvertion(::StringW  expr) ;

/// @brief Method FunctionArgumentCount, addr 0xa9439fc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentCount(::StringW  name) ;

/// @brief Method FunctionArgumentOutOfRange, addr 0xa943824, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentOutOfRange(::StringW  arg, ::StringW  func) ;

/// @brief Method InWithoutList, addr 0xa943ecc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutList() ;

/// @brief Method InWithoutParentheses, addr 0xa943e8c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutParentheses() ;

/// @brief Method InvalidDate, addr 0xa943dac, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidDate(::StringW  date) ;

/// @brief Method InvalidHoursArgument, addr 0xa94471c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidHoursArgument() ;

/// @brief Method InvalidIsSyntax, addr 0xa943f0c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidIsSyntax() ;

/// @brief Method InvalidMinutesArgument, addr 0xa94475c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMinutesArgument() ;

/// @brief Method InvalidName, addr 0xa943d5c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidName(::StringW  name) ;

/// @brief Method InvalidNameBracketing, addr 0xa94433c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNameBracketing(::StringW  name) ;

/// @brief Method InvalidPattern, addr 0xa943e3c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidPattern(::StringW  pat) ;

/// @brief Method InvalidString, addr 0xa94391c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidString(::StringW  str) ;

/// @brief Method InvalidTimeZoneRange, addr 0xa94479c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTimeZoneRange() ;

/// @brief Method InvalidType, addr 0xa9446cc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidType(::StringW  typeName) ;

/// @brief Method InvokeArgument, addr 0xa9435a4, size 0x44, virtual false, abstract: false, final false
static inline ::System::Exception* InvokeArgument() ;

/// @brief Method LookupArgument, addr 0xa94468c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* LookupArgument() ;

/// @brief Method MismatchKindandTimeSpan, addr 0xa9447dc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MismatchKindandTimeSpan() ;

/// @brief Method MissingOperand, addr 0xa943638, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperand(::System::Data::OperatorInfo*  before) ;

/// @brief Method MissingOperandBefore, addr 0xa94438c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperandBefore(::StringW  op) ;

/// @brief Method MissingOperator, addr 0xa943784, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperator(::StringW  token) ;

/// @brief Method MissingRightParen, addr 0xa943a4c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MissingRightParen() ;

/// @brief Method NYI, addr 0xa9435e8, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* NYI(::StringW  moreinfo) ;

/// @brief Method NonConstantArgument, addr 0xa943dfc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NonConstantArgument() ;

/// @brief Method Overflow, addr 0xa943f4c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* Overflow(::System::Type*  type) ;

/// @brief Method SyntaxError, addr 0xa9439bc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SyntaxError() ;

/// @brief Method TooManyRightParentheses, addr 0xa9443dc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TooManyRightParentheses() ;

/// @brief Method TypeMismatch, addr 0xa9437d4, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatch(::StringW  expr) ;

/// @brief Method TypeMismatchInBinop, addr 0xa944124, size 0xcc, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatchInBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method UnboundName, addr 0xa9438cc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UnboundName(::StringW  name) ;

/// @brief Method UndefinedFunction, addr 0xa94396c, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UndefinedFunction(::StringW  name) ;

/// @brief Method UnknownToken, addr 0xa943b30, size 0x114, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::System::Data::Tokens  tokExpected, ::System::Data::Tokens  tokCurr, int32_t  position) ;

/// @brief Method UnknownToken, addr 0xa943a8c, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::StringW  token, int32_t  position) ;

/// @brief Method UnresolvedRelation, addr 0xa94441c, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnresolvedRelation(::StringW  name, ::StringW  expr) ;

/// @brief Method UnsupportedDataType, addr 0xa94481c, size 0x74, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedDataType(::System::Type*  type) ;

/// @brief Method UnsupportedOperator, addr 0xa9442bc, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedOperator(int32_t  op) ;

/// @brief Method _Eval, addr 0xa9434d4, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error) ;

/// @brief Method _Eval, addr 0xa94353c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error, ::System::Exception*  innerException) ;

/// @brief Method _Expr, addr 0xa943404, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::InvalidExpressionException* _Expr(::StringW  error) ;

/// @brief Method _Overflow, addr 0xa94339c, size 0x68, virtual false, abstract: false, final false
static inline ::System::OverflowException* _Overflow(::StringW  error) ;

/// @brief Method _Syntax, addr 0xa94346c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::SyntaxErrorException* _Syntax(::StringW  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExprException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExprException(ExprException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExprException(ExprException const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21024};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Data::ExprException) == 0x10, "Size mismatch!");

} // namespace end def System::Data
