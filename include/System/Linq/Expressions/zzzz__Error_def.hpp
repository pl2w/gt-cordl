#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Error.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Error;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Error*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Error*, "System.Linq.Expressions", "Error");
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Error
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief Method AccessorsCannotHaveByRefArgs, addr 0xa873350, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName) ;

/// @brief Method AccessorsCannotHaveByRefArgs, addr 0xa873424, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName, int32_t  index) ;

/// @brief Method AccessorsCannotHaveVarArgs, addr 0xa87327c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveVarArgs(::StringW  paramName) ;

/// @brief Method AmbiguousJump, addr 0xa8772fc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0xa8723bc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method ArgumentCannotBeOfTypeVoid, addr 0xa876e54, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentCannotBeOfTypeVoid(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArray, addr 0xa875194, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArray(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArrayIndexType, addr 0xa875420, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArrayIndexType(::StringW  paramName) ;

/// @brief Method ArgumentMustBeBoolean, addr 0xa875268, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeBoolean(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0xa87533c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0xa875410, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName, int32_t  index) ;

/// @brief Method ArgumentMustBeSingleDimensionalArrayType, addr 0xa8754f4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::StringW  paramName) ;

/// @brief Method ArgumentMustNotHaveValueType, addr 0xa8740f8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustNotHaveValueType(::StringW  paramName) ;

/// @brief Method ArgumentOutOfRange, addr 0xa870288, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentOutOfRange(::StringW  paramName) ;

/// @brief Method ArgumentTypesMustMatch, addr 0xa8755c8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypesMustMatch() ;

/// @brief Method BinaryOperatorNotDefined, addr 0xa874d60, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0xa872850, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BindingCannotBeNull, addr 0xa872cfc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BindingCannotBeNull() ;

/// @brief Method BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0xa8748a4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method BothAccessorsMustBeStatic, addr 0xa873b3c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* BothAccessorsMustBeStatic(::StringW  paramName) ;

/// @brief Method BoundsCannotBeLessThanOne, addr 0xa873644, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* BoundsCannotBeLessThanOne(::StringW  paramName) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0xa87568c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoalesceUsedOnNonNullType, addr 0xa87580c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CoalesceUsedOnNonNullType() ;

/// @brief Method CoercionOperatorNotDefined, addr 0xa874bb0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method CollectionModifiedWhileEnumerating, addr 0xa872604, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionModifiedWhileEnumerating() ;

/// @brief Method CollectionReadOnly, addr 0xa8726c8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionReadOnly() ;

/// @brief Method ControlCannotEnterExpression, addr 0xa877478, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterExpression() ;

/// @brief Method ControlCannotEnterTry, addr 0xa8773b4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterTry() ;

/// @brief Method ControlCannotLeaveFilterTest, addr 0xa877238, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFilterTest() ;

/// @brief Method ControlCannotLeaveFinally, addr 0xa877174, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFinally() ;

/// @brief Method ConversionIsNotSupportedForArithmeticTypes, addr 0xa8750d0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method DuplicateVariable, addr 0xa874620, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method DuplicateVariable, addr 0xa8746e8, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0xa872c14, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0xa872938, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0xa872a10, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method EnumerationIsDone, addr 0xa877bac, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* EnumerationIsDone() ;

/// @brief Method ExpressionMustBeReadable, addr 0xa8783f4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName) ;

/// @brief Method ExpressionMustBeReadable, addr 0xa8784c8, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionMustBeWriteable, addr 0xa874024, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeWriteable(::StringW  paramName) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0xa8758d0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0xa875a80, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0xa8782e0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0xa8783c0, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0xa875b58, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0xa877f0c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0xa878004, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0xa878040, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0xa878120, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0xa8759a8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0xa875c30, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeNotInvocable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0xa874968, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FaultCannotHaveCatchOrFinally, addr 0xa87470c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* FaultCannotHaveCatchOrFinally(::StringW  paramName) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0xa875dd0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method FirstArgumentMustBeCallSite, addr 0xa8731b8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* FirstArgumentMustBeCallSite() ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0xa876ca4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method GetParamName, addr 0xa873434, size 0x88, virtual false, abstract: false, final false
static inline ::StringW GetParamName(::StringW  paramName, int32_t  index) ;

/// @brief Method IncorrectNumberOfConstructorArguments, addr 0xa877e48, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfConstructorArguments() ;

/// @brief Method IncorrectNumberOfIndexes, addr 0xa875eb8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfIndexes() ;

/// @brief Method IncorrectNumberOfLambdaArguments, addr 0xa878154, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaArguments() ;

/// @brief Method IncorrectNumberOfLambdaDeclarationParameters, addr 0xa875f7c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0xa878218, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0xa875744, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectTypeForTypeAs(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IndexesOfSetGetMustMatch, addr 0xa87302c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* IndexesOfSetGetMustMatch(::StringW  paramName) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0xa8766cc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0xa875cf8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0xa8765ec, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method InvalidArgumentValue, addr 0xa8784d8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidArgumentValue(::StringW  paramName) ;

/// @brief Method InvalidLvalue, addr 0xa8775f4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0xa872304, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0xa8785ac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNullValue(::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidProgram, addr 0xa877b58, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidProgram() ;

/// @brief Method InvalidTypeException, addr 0xa878674, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTypeException(::System::Object*  value, ::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidUnboxType, addr 0xa873f50, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidUnboxType(::StringW  paramName) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0xa87254c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelMustBeVoidOrHaveExpression, addr 0xa874290, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LabelMustBeVoidOrHaveExpression(::StringW  paramName) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0xa877004, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0xa8770bc, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LabelTypeMustBeVoid, addr 0xa874364, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTypeMustBeVoid(::StringW  paramName) ;

/// @brief Method LambdaTypeMustBeDerivedFromSystemDelegate, addr 0xa876040, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::StringW  paramName) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0xa876af4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0xa876114, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MemberNotFieldOrProperty(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodContainsGenericParameters, addr 0xa8761dc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodIsGeneric, addr 0xa8762a4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0xa876bcc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0xa876d7c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustBeReducible, addr 0xa8741cc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustBeReducible() ;

/// @brief Method MustReduceToDifferent, addr 0xa87278c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustReduceToDifferent() ;

/// @brief Method MustRewriteChildToSameType, addr 0xa877880, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0xa877798, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0xa877968, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NoOrInvalidRuleProduced, addr 0xa873580, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* NoOrInvalidRuleProduced() ;

/// @brief Method NonAbstractConstructorRequired, addr 0xa877a94, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* NonAbstractConstructorRequired() ;

/// @brief Method NonLocalJumpWithValue, addr 0xa87753c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method NotSupported, addr 0xa877a40, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* NotSupported() ;

/// @brief Method OnlyStaticFieldsHaveNullInstance, addr 0xa873c10, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticFieldsHaveNullInstance(::StringW  paramName) ;

/// @brief Method OnlyStaticMethodsHaveNullInstance, addr 0xa873db8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method OnlyStaticPropertiesHaveNullInstance, addr 0xa873ce4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::StringW  paramName) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0xa874f20, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0xa876f28, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* OutOfRange(::StringW  paramName, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0xa874ff8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0xa876434, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyCannotHaveRefType, addr 0xa872f58, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyCannotHaveRefType(::StringW  paramName) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0xa87636c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method PropertyNotDefinedForType, addr 0xa87650c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method PropertyTypeCannotBeVoid, addr 0xa873e7c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeCannotBeVoid(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchGetter, addr 0xa873994, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchGetter(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchSetter, addr 0xa873a68, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchSetter(::StringW  paramName) ;

/// @brief Method QuotedExpressionMustBeLambda, addr 0xa874438, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* QuotedExpressionMustBeLambda(::StringW  paramName) ;

/// @brief Method ReducedNotCompatible, addr 0xa872dc0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ReducedNotCompatible() ;

/// @brief Method ReducibleMustOverrideReduce, addr 0xa872240, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ReducibleMustOverrideReduce() ;

/// @brief Method ReferenceEqualityNotDefined, addr 0xa874e48, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method RethrowRequiresCatch, addr 0xa8776d4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* RethrowRequiresCatch() ;

/// @brief Method SameKeyExistsInExpando, addr 0xa872474, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* SameKeyExistsInExpando(::System::Object*  key) ;

/// @brief Method SetterHasNoParams, addr 0xa872e84, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* SetterHasNoParams(::StringW  paramName) ;

/// @brief Method SetterMustBeVoid, addr 0xa8738c0, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* SetterMustBeVoid(::StringW  paramName) ;

/// @brief Method TryMustHaveCatchFinallyOrFault, addr 0xa8747e0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* TryMustHaveCatchFinallyOrFault() ;

/// @brief Method TypeContainsGenericParameters, addr 0xa877c70, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeContainsGenericParameters, addr 0xa877d38, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeIsGeneric, addr 0xa877d5c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeIsGeneric, addr 0xa877e24, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeMustBeDerivedFromSystemDelegate, addr 0xa8734bc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method TypeMustNotBeByRef, addr 0xa873718, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBeByRef(::StringW  paramName) ;

/// @brief Method TypeMustNotBePointer, addr 0xa8737ec, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBePointer(::StringW  paramName) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0xa873100, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0xa874c88, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0xa8767b4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledBinary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UnhandledUnary, addr 0xa87687c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledUnary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0xa876944, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0xa876a1c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0xa874a20, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0xa874ae8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0xa87450c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0xa8745ec, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Error() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Error(Error && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Error(Error const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23640};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Error) == 0x10, "Size mismatch!");

} // namespace end def System::Linq::Expressions
