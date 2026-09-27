#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Strings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Strings)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Strings;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Strings*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Strings*, "System.Linq.Expressions", "Strings");
// Dependencies System.Object
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: System.Linq.Expressions.Strings
class CORDL_TYPE Strings : public ::System::Object {
public:
// Declarations
/// @brief Method AmbiguousJump, addr 0xa877368, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0xa872428, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method BinaryOperatorNotDefined, addr 0xa874de4, size 0x64, virtual false, abstract: false, final false
static inline ::StringW BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0xa8728d4, size 0x64, virtual false, abstract: false, final false
static inline ::StringW BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0xa8756f8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoercionOperatorNotDefined, addr 0xa874c2c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DuplicateVariable, addr 0xa87469c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW DuplicateVariable(::System::Object*  p0) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0xa872c98, size 0x64, virtual false, abstract: false, final false
static inline ::StringW DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0xa8729b4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0xa872aa4, size 0x170, virtual false, abstract: false, final false
static inline ::StringW DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0xa87594c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0xa875afc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0xa878364, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0xa875bd4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0xa877fa0, size 0x64, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0xa8780c4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0xa875a24, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0xa875cac, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeNotInvocable(::System::Object*  p0) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0xa8749d4, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0xa875e54, size 0x64, virtual false, abstract: false, final false
static inline ::StringW FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0xa876d20, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0xa878294, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW IncorrectNumberOfMethodCallArguments(::System::Object*  p0) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0xa8757c0, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW IncorrectTypeForTypeAs(::System::Object*  p0) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0xa876750, size 0x64, virtual false, abstract: false, final false
static inline ::StringW InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0xa875d74, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0xa876670, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InvalidLvalue, addr 0xa877688, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidLvalue(::System::Object*  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0xa872370, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0xa878628, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidNullValue(::System::Object*  p0) ;

/// @brief Method InvalidObjectType, addr 0xa87872c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InvalidObjectType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0xa8725b8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0xa877070, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0xa877128, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0xa876b70, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0xa876190, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MemberNotFieldOrProperty(::System::Object*  p0) ;

/// @brief Method MethodContainsGenericParameters, addr 0xa876258, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MethodContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method MethodIsGeneric, addr 0xa876320, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MethodIsGeneric(::System::Object*  p0) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0xa876c48, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0xa876df8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustRewriteChildToSameType, addr 0xa877904, size 0x64, virtual false, abstract: false, final false
static inline ::StringW MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0xa87781c, size 0x64, virtual false, abstract: false, final false
static inline ::StringW MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0xa8779e4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NonLocalJumpWithValue, addr 0xa8775a8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0xa874f9c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0xa876fa8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OutOfRange(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0xa875074, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0xa8764b0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0xa8763e8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW PropertyDoesNotHaveAccessor(::System::Object*  p0) ;

/// @brief Method PropertyNotDefinedForType, addr 0xa876590, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ReferenceEqualityNotDefined, addr 0xa874ec4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method SameKeyExistsInExpando, addr 0xa872500, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW SameKeyExistsInExpando(::System::Object*  p0) ;

/// @brief Method TypeContainsGenericParameters, addr 0xa877cec, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method TypeIsGeneric, addr 0xa877dd8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeIsGeneric(::System::Object*  p0) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0xa87316c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0xa874d04, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0xa876830, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UnhandledBinary(::System::Object*  p0) ;

/// @brief Method UnhandledUnary, addr 0xa8768f8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UnhandledUnary(::System::Object*  p0) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0xa8769c0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0xa876a98, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0xa874a9c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustBeStatic(::System::Object*  p0) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0xa874b64, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustNotBeVoid(::System::Object*  p0) ;

/// @brief Method VariableMustNotBeByRef, addr 0xa874590, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method get_AccessorsCannotHaveByRefArgs, addr 0xa8733e4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveByRefArgs() ;

/// @brief Method get_AccessorsCannotHaveVarArgs, addr 0xa873310, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveVarArgs() ;

/// @brief Method get_ArgumentCannotBeOfTypeVoid, addr 0xa876ee8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentCannotBeOfTypeVoid() ;

/// @brief Method get_ArgumentMustBeArray, addr 0xa875228, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArray() ;

/// @brief Method get_ArgumentMustBeArrayIndexType, addr 0xa8754b4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArrayIndexType() ;

/// @brief Method get_ArgumentMustBeBoolean, addr 0xa8752fc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeBoolean() ;

/// @brief Method get_ArgumentMustBeInteger, addr 0xa8753d0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeInteger() ;

/// @brief Method get_ArgumentMustBeSingleDimensionalArrayType, addr 0xa875588, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeSingleDimensionalArrayType() ;

/// @brief Method get_ArgumentMustNotHaveValueType, addr 0xa87418c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustNotHaveValueType() ;

/// @brief Method get_ArgumentTypesMustMatch, addr 0xa87564c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentTypesMustMatch() ;

/// @brief Method get_BindingCannotBeNull, addr 0xa872d80, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BindingCannotBeNull() ;

/// @brief Method get_BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0xa874928, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method get_BothAccessorsMustBeStatic, addr 0xa873bd0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BothAccessorsMustBeStatic() ;

/// @brief Method get_BoundsCannotBeLessThanOne, addr 0xa8736d8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BoundsCannotBeLessThanOne() ;

/// @brief Method get_CoalesceUsedOnNonNullType, addr 0xa875890, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CoalesceUsedOnNonNullType() ;

/// @brief Method get_CollectionModifiedWhileEnumerating, addr 0xa872688, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CollectionModifiedWhileEnumerating() ;

/// @brief Method get_CollectionReadOnly, addr 0xa87274c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CollectionReadOnly() ;

/// @brief Method get_ControlCannotEnterExpression, addr 0xa8774fc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterExpression() ;

/// @brief Method get_ControlCannotEnterTry, addr 0xa877438, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterTry() ;

/// @brief Method get_ControlCannotLeaveFilterTest, addr 0xa8772bc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFilterTest() ;

/// @brief Method get_ControlCannotLeaveFinally, addr 0xa8771f8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFinally() ;

/// @brief Method get_ConversionIsNotSupportedForArithmeticTypes, addr 0xa875154, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method get_EnumerationIsDone, addr 0xa877c30, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_EnumerationIsDone() ;

/// @brief Method get_ExpressionMustBeReadable, addr 0xa878488, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeReadable() ;

/// @brief Method get_ExpressionMustBeWriteable, addr 0xa8740b8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeWriteable() ;

/// @brief Method get_FaultCannotHaveCatchOrFinally, addr 0xa8747a0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_FaultCannotHaveCatchOrFinally() ;

/// @brief Method get_FirstArgumentMustBeCallSite, addr 0xa87323c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_FirstArgumentMustBeCallSite() ;

/// @brief Method get_IncorrectNumberOfConstructorArguments, addr 0xa877ecc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfConstructorArguments() ;

/// @brief Method get_IncorrectNumberOfIndexes, addr 0xa875f3c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfIndexes() ;

/// @brief Method get_IncorrectNumberOfLambdaArguments, addr 0xa8781d8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaArguments() ;

/// @brief Method get_IncorrectNumberOfLambdaDeclarationParameters, addr 0xa876000, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method get_IndexesOfSetGetMustMatch, addr 0xa8730c0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IndexesOfSetGetMustMatch() ;

/// @brief Method get_InvalidArgumentValue, addr 0xa87856c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_InvalidArgumentValue() ;

/// @brief Method get_InvalidUnboxType, addr 0xa873fe4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_InvalidUnboxType() ;

/// @brief Method get_LabelMustBeVoidOrHaveExpression, addr 0xa874324, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LabelMustBeVoidOrHaveExpression() ;

/// @brief Method get_LabelTypeMustBeVoid, addr 0xa8743f8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LabelTypeMustBeVoid() ;

/// @brief Method get_LambdaTypeMustBeDerivedFromSystemDelegate, addr 0xa8760d4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LambdaTypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_MustBeReducible, addr 0xa874250, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_MustBeReducible() ;

/// @brief Method get_MustReduceToDifferent, addr 0xa872810, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_MustReduceToDifferent() ;

/// @brief Method get_NoOrInvalidRuleProduced, addr 0xa873604, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_NoOrInvalidRuleProduced() ;

/// @brief Method get_NonAbstractConstructorRequired, addr 0xa877b18, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_NonAbstractConstructorRequired() ;

/// @brief Method get_OnlyStaticFieldsHaveNullInstance, addr 0xa873ca4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticFieldsHaveNullInstance() ;

/// @brief Method get_OnlyStaticMethodsHaveNullInstance, addr 0xa873e3c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method get_OnlyStaticPropertiesHaveNullInstance, addr 0xa873d78, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticPropertiesHaveNullInstance() ;

/// @brief Method get_PropertyCannotHaveRefType, addr 0xa872fec, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyCannotHaveRefType() ;

/// @brief Method get_PropertyTypeCannotBeVoid, addr 0xa873f10, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeCannotBeVoid() ;

/// @brief Method get_PropertyTypeMustMatchGetter, addr 0xa873a28, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchGetter() ;

/// @brief Method get_PropertyTypeMustMatchSetter, addr 0xa873afc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchSetter() ;

/// @brief Method get_QuotedExpressionMustBeLambda, addr 0xa8744cc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_QuotedExpressionMustBeLambda() ;

/// @brief Method get_ReducedNotCompatible, addr 0xa872e44, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ReducedNotCompatible() ;

/// @brief Method get_ReducibleMustOverrideReduce, addr 0xa8722c4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ReducibleMustOverrideReduce() ;

/// @brief Method get_RethrowRequiresCatch, addr 0xa877758, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_RethrowRequiresCatch() ;

/// @brief Method get_SetterHasNoParams, addr 0xa872f18, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_SetterHasNoParams() ;

/// @brief Method get_SetterMustBeVoid, addr 0xa873954, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_SetterMustBeVoid() ;

/// @brief Method get_TryMustHaveCatchFinallyOrFault, addr 0xa874864, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TryMustHaveCatchFinallyOrFault() ;

/// @brief Method get_TypeMustBeDerivedFromSystemDelegate, addr 0xa873540, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_TypeMustNotBeByRef, addr 0xa8737ac, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBeByRef() ;

/// @brief Method get_TypeMustNotBePointer, addr 0xa873880, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBePointer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings(Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings(Strings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23704};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Strings) == 0x10, "Size mismatch!");

} // namespace end def System::Linq::Expressions
