#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LightCompiler.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightCompiler)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Linq::Expressions::Interpreter {
class ByRefUpdater;
}
namespace System::Linq::Expressions::Interpreter {
class DebugInfo;
}
namespace System::Linq::Expressions::Interpreter {
template<typename TKey,typename TValue>
class HybridReferenceDictionary_2;
}
namespace System::Linq::Expressions::Interpreter {
class InstructionList;
}
namespace System::Linq::Expressions::Interpreter {
class Interpreter;
}
namespace System::Linq::Expressions::Interpreter {
class LabelInfo;
}
namespace System::Linq::Expressions::Interpreter {
class LabelScopeInfo;
}
namespace System::Linq::Expressions::Interpreter {
struct LabelScopeKind;
}
namespace System::Linq::Expressions::Interpreter {
class LightCompiler_QuoteVisitor;
}
namespace System::Linq::Expressions::Interpreter {
class LightCompiler___c;
}
namespace System::Linq::Expressions::Interpreter {
class LightDelegateCreator;
}
namespace System::Linq::Expressions::Interpreter {
struct LocalDefinition;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariable;
}
namespace System::Linq::Expressions::Interpreter {
class LocalVariables;
}
namespace System::Linq::Expressions {
class BinaryExpression;
}
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class CatchBlock;
}
namespace System::Linq::Expressions {
class ElementInit;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class IArgumentProvider;
}
namespace System::Linq::Expressions {
class IndexExpression;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
namespace System::Linq::Expressions {
class LambdaExpression;
}
namespace System::Linq::Expressions {
class MemberBinding;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System::Linq::Expressions {
class StackGuard;
}
namespace System::Linq::Expressions {
class SwitchCase;
}
namespace System::Linq::Expressions {
class SwitchExpression;
}
namespace System::Linq::Expressions {
class TryExpression;
}
namespace System::Linq::Expressions {
class UnaryExpression;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class LightCompiler;
}
namespace System::Linq::Expressions::Interpreter {
class LightCompiler_QuoteVisitor;
}
namespace System::Linq::Expressions::Interpreter {
class LightCompiler___c;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Interpreter::LightCompiler*);
MARK_REF_T(::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*);
MARK_REF_T(::System::Linq::Expressions::Interpreter::LightCompiler___c*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::LightCompiler*, "System.Linq.Expressions.Interpreter", "LightCompiler");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor*, "System.Linq.Expressions.Interpreter", "LightCompiler/QuoteVisitor");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::LightCompiler___c*, "System.Linq.Expressions.Interpreter", "LightCompiler/<>c");
// Dependencies System.Linq.Expressions.Interpreter.LocalDefinition, System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LightCompiler
class CORDL_TYPE LightCompiler : public ::System::Object {
public:
// Declarations
using QuoteVisitor = ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor;

using __c = ::System::Linq::Expressions::Interpreter::LightCompiler___c;

 __declspec(property(get=get_Instructions)) ::System::Linq::Expressions::Interpreter::InstructionList*  Instructions;

/// @brief Field _debugInfos, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugInfos, put=__cordl_internal_set__debugInfos)) ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*  _debugInfos;

/// @brief Field _exceptionForRethrowStack, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__exceptionForRethrowStack, put=__cordl_internal_set__exceptionForRethrowStack)) ::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*  _exceptionForRethrowStack;

/// @brief Field _guard, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__guard, put=__cordl_internal_set__guard)) ::System::Linq::Expressions::StackGuard*  _guard;

/// @brief Field _instructions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instructions, put=__cordl_internal_set__instructions)) ::System::Linq::Expressions::Interpreter::InstructionList*  _instructions;

/// @brief Field _labelBlock, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__labelBlock, put=__cordl_internal_set__labelBlock)) ::System::Linq::Expressions::Interpreter::LabelScopeInfo*  _labelBlock;

/// @brief Field _locals, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__locals, put=__cordl_internal_set__locals)) ::System::Linq::Expressions::Interpreter::LocalVariables*  _locals;

/// @brief Field _parent, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__parent, put=__cordl_internal_set__parent)) ::System::Linq::Expressions::Interpreter::LightCompiler*  _parent;

/// @brief Field _treeLabels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__treeLabels, put=__cordl_internal_set__treeLabels)) ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*  _treeLabels;

/// @brief Field s_emptyLocals, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_emptyLocals, put=setStaticF_s_emptyLocals)) ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>  s_emptyLocals;

/// @brief Method CheckRethrow, addr 0xa8a2e18, size 0x54, virtual false, abstract: false, final false
inline void CheckRethrow() ;

/// @brief Method Compile, addr 0xa89bc54, size 0x50, virtual false, abstract: false, final false
inline void Compile(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method Compile, addr 0xa89cbdc, size 0xc, virtual false, abstract: false, final false
inline void Compile(::System::Linq::Expressions::Expression*  expr, bool  asVoid) ;

/// @brief Method CompileAddress, addr 0xa89efb0, size 0x984, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileAddress(::System::Linq::Expressions::Expression*  node, int32_t  index) ;

/// @brief Method CompileAndAlsoBinaryExpression, addr 0xa8a0470, size 0x88, virtual false, abstract: false, final false
inline void CompileAndAlsoBinaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileArithmetic, addr 0xa89e528, size 0x1f8, virtual false, abstract: false, final false
inline void CompileArithmetic(::System::Linq::Expressions::ExpressionType  nodeType, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method CompileArrayIndexAddress, addr 0xa8a424c, size 0x200, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileArrayIndexAddress(::System::Linq::Expressions::Expression*  array, ::System::Linq::Expressions::Expression*  index, int32_t  argumentIndex) ;

/// @brief Method CompileAsVoid, addr 0xa89cc84, size 0x154, virtual false, abstract: false, final false
inline void CompileAsVoid(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileAssignBinaryExpression, addr 0xa89d734, size 0x14c, virtual false, abstract: false, final false
inline void CompileAssignBinaryExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid) ;

/// @brief Method CompileBinaryExpression, addr 0xa89d880, size 0xca8, virtual false, abstract: false, final false
inline void CompileBinaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileBlockEnd, addr 0xa89cbe8, size 0x9c, virtual false, abstract: false, final false
inline void CompileBlockEnd(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>  locals) ;

/// @brief Method CompileBlockExpression, addr 0xa89c644, size 0x140, virtual false, abstract: false, final false
inline void CompileBlockExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid) ;

/// @brief Method CompileBlockStart, addr 0xa89c784, size 0x458, virtual false, abstract: false, final false
inline ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> CompileBlockStart(::System::Linq::Expressions::BlockExpression*  node) ;

/// @brief Method CompileCoalesceBinaryExpression, addr 0xa8a5b90, size 0x5b8, virtual false, abstract: false, final false
inline void CompileCoalesceBinaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileComparison, addr 0xa89e800, size 0x194, virtual false, abstract: false, final false
inline void CompileComparison(::System::Linq::Expressions::BinaryExpression*  node) ;

/// @brief Method CompileConditionalExpression, addr 0xa8a1008, size 0x234, virtual false, abstract: false, final false
inline void CompileConditionalExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid) ;

/// @brief Method CompileConstantExpression, addr 0xa89bfa8, size 0xa4, virtual false, abstract: false, final false
inline void CompileConstantExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileConvertToType, addr 0xa89f934, size 0x538, virtual false, abstract: false, final false
inline void CompileConvertToType(::System::Type*  typeFrom, ::System::Type*  typeTo, bool  isChecked, bool  isLiftedToNull) ;

/// @brief Method CompileConvertUnaryExpression, addr 0xa89e994, size 0x61c, virtual false, abstract: false, final false
inline void CompileConvertUnaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileDebugInfoExpression, addr 0xa8a5504, size 0x1a8, virtual false, abstract: false, final false
inline void CompileDebugInfoExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileDefaultExpression, addr 0xa89c04c, size 0x34, virtual false, abstract: false, final false
inline void CompileDefaultExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileDefaultExpression, addr 0xa89c080, size 0xf4, virtual false, abstract: false, final false
inline void CompileDefaultExpression(::System::Type*  type) ;

/// @brief Method CompileEqual, addr 0xa89e720, size 0x70, virtual false, abstract: false, final false
inline void CompileEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftedToNull) ;

/// @brief Method CompileGetBoxedVariable, addr 0xa89c48c, size 0x58, virtual false, abstract: false, final false
inline void CompileGetBoxedVariable(::System::Linq::Expressions::ParameterExpression*  variable) ;

/// @brief Method CompileGetVariable, addr 0xa89c2e8, size 0x40, virtual false, abstract: false, final false
inline void CompileGetVariable(::System::Linq::Expressions::ParameterExpression*  variable) ;

/// @brief Method CompileGotoExpression, addr 0xa8a25f8, size 0x1b0, virtual false, abstract: false, final false
inline void CompileGotoExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileIndexAssignment, addr 0xa89cf9c, size 0x29c, virtual false, abstract: false, final false
inline void CompileIndexAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid) ;

/// @brief Method CompileIndexExpression, addr 0xa89cdd8, size 0xcc, virtual false, abstract: false, final false
inline void CompileIndexExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileIntSwitchExpression, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void CompileIntSwitchExpression(::System::Linq::Expressions::SwitchExpression*  node) ;

/// @brief Method CompileInvocationExpression, addr 0xa8a6148, size 0x268, virtual false, abstract: false, final false
inline void CompileInvocationExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileLabelExpression, addr 0xa8a2478, size 0x180, virtual false, abstract: false, final false
inline void CompileLabelExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileLambdaExpression, addr 0xa8a5984, size 0x20c, virtual false, abstract: false, final false
inline void CompileLambdaExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileLiftedLogicalBinaryExpression, addr 0xa8a0838, size 0x6e8, virtual false, abstract: false, final false
inline void CompileLiftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  node, bool  andAlso) ;

/// @brief Method CompileListInit, addr 0xa8a642c, size 0x390, virtual false, abstract: false, final false
inline void CompileListInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*  initializers) ;

/// @brief Method CompileListInitExpression, addr 0xa8a63b0, size 0x7c, virtual false, abstract: false, final false
inline void CompileListInitExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileLogicalBinaryExpression, addr 0xa8a04f8, size 0x154, virtual false, abstract: false, final false
inline void CompileLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  b, bool  andAlso) ;

/// @brief Method CompileLoopExpression, addr 0xa8a123c, size 0x190, virtual false, abstract: false, final false
inline void CompileLoopExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileMember, addr 0xa8a4e24, size 0x388, virtual false, abstract: false, final false
inline void CompileMember(::System::Linq::Expressions::Expression*  from, ::System::Reflection::MemberInfo*  member, bool  forBinding) ;

/// @brief Method CompileMemberAssignment, addr 0xa89d300, size 0x388, virtual false, abstract: false, final false
inline void CompileMemberAssignment(bool  asVoid, ::System::Reflection::MemberInfo*  refMember, ::System::Linq::Expressions::Expression*  value, bool  forBinding) ;

/// @brief Method CompileMemberAssignment, addr 0xa89d238, size 0xc8, virtual false, abstract: false, final false
inline void CompileMemberAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid) ;

/// @brief Method CompileMemberExpression, addr 0xa8a4d84, size 0xa0, virtual false, abstract: false, final false
inline void CompileMemberExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileMemberInit, addr 0xa8a6838, size 0x4c8, virtual false, abstract: false, final false
inline void CompileMemberInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*  bindings) ;

/// @brief Method CompileMemberInitExpression, addr 0xa8a67bc, size 0x7c, virtual false, abstract: false, final false
inline void CompileMemberInitExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileMethodCallExpression, addr 0xa8a3c40, size 0x9c, virtual false, abstract: false, final false
inline void CompileMethodCallExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileMethodCallExpression, addr 0xa8a3cdc, size 0x570, virtual false, abstract: false, final false
inline void CompileMethodCallExpression(::System::Linq::Expressions::Expression*  object, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::IArgumentProvider*  arguments) ;

/// @brief Method CompileMethodLogicalBinaryExpression, addr 0xa8a06d4, size 0x164, virtual false, abstract: false, final false
inline void CompileMethodLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  expr, bool  andAlso) ;

/// @brief Method CompileMultiDimArrayAccess, addr 0xa8a45d0, size 0x408, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* CompileMultiDimArrayAccess(::System::Linq::Expressions::Expression*  array, ::System::Linq::Expressions::IArgumentProvider*  arguments, int32_t  index) ;

/// @brief Method CompileNewArrayExpression, addr 0xa8a51ac, size 0x358, virtual false, abstract: false, final false
inline void CompileNewArrayExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileNewExpression, addr 0xa8a49d8, size 0x3ac, virtual false, abstract: false, final false
inline void CompileNewExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileNoLabelPush, addr 0xa8a7618, size 0x6a0, virtual false, abstract: false, final false
inline void CompileNoLabelPush(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileNotEqual, addr 0xa89e790, size 0x70, virtual false, abstract: false, final false
inline void CompileNotEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftedToNull) ;

/// @brief Method CompileNotExpression, addr 0xa89fe6c, size 0x58, virtual false, abstract: false, final false
inline void CompileNotExpression(::System::Linq::Expressions::UnaryExpression*  node) ;

/// @brief Method CompileOrElseBinaryExpression, addr 0xa8a064c, size 0x88, virtual false, abstract: false, final false
inline void CompileOrElseBinaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileParameterExpression, addr 0xa89c5c0, size 0x84, virtual false, abstract: false, final false
inline void CompileParameterExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileQuoteUnaryExpression, addr 0xa8a6e88, size 0x2a8, virtual false, abstract: false, final false
inline void CompileQuoteUnaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileRuntimeVariablesExpression, addr 0xa8a56ac, size 0x2d8, virtual false, abstract: false, final false
inline void CompileRuntimeVariablesExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileSetVariable, addr 0xa89c4e4, size 0xdc, virtual false, abstract: false, final false
inline void CompileSetVariable(::System::Linq::Expressions::ParameterExpression*  variable, bool  isVoid) ;

/// @brief Method CompileStringSwitchExpression, addr 0xa8a1e50, size 0x628, virtual false, abstract: false, final false
inline void CompileStringSwitchExpression(::System::Linq::Expressions::SwitchExpression*  node) ;

/// @brief Method CompileSwitchExpression, addr 0xa8a14f0, size 0x960, virtual false, abstract: false, final false
inline void CompileSwitchExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileThrowUnaryExpression, addr 0xa8a2e6c, size 0x108, virtual false, abstract: false, final false
inline void CompileThrowUnaryExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid) ;

/// @brief Method CompileTop, addr 0xa89ba84, size 0x1d0, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::LightDelegateCreator* CompileTop(::System::Linq::Expressions::LambdaExpression*  node) ;

/// @brief Method CompileTryExpression, addr 0xa8a2f74, size 0xab8, virtual false, abstract: false, final false
inline void CompileTryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileTryFaultExpression, addr 0xa8a3a2c, size 0x214, virtual false, abstract: false, final false
inline void CompileTryFaultExpression(::System::Linq::Expressions::TryExpression*  expr) ;

/// @brief Method CompileTypeAsExpression, addr 0xa8a0280, size 0x4c, virtual false, abstract: false, final false
inline void CompileTypeAsExpression(::System::Linq::Expressions::UnaryExpression*  node) ;

/// @brief Method CompileTypeEqualExpression, addr 0xa8a7254, size 0x1b0, virtual false, abstract: false, final false
inline void CompileTypeEqualExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileTypeIsExpression, addr 0xa8a7404, size 0x214, virtual false, abstract: false, final false
inline void CompileTypeIsExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileUnaryExpression, addr 0xa89fec4, size 0x2d8, virtual false, abstract: false, final false
inline void CompileUnaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileUnboxUnaryExpression, addr 0xa8a7130, size 0x124, virtual false, abstract: false, final false
inline void CompileUnboxUnaryExpression(::System::Linq::Expressions::Expression*  expr) ;

/// @brief Method CompileUnliftedLogicalBinaryExpression, addr 0xa8a0f20, size 0xe8, virtual false, abstract: false, final false
inline void CompileUnliftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  expr, bool  andAlso) ;

/// @brief Method CompileVariableAssignment, addr 0xa89d688, size 0xac, virtual false, abstract: false, final false
inline void CompileVariableAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid) ;

/// @brief Method DefineBlockLabels, addr 0xa8a2ce4, size 0x134, virtual false, abstract: false, final false
inline void DefineBlockLabels(::System::Linq::Expressions::Expression*  node) ;

/// @brief Method DefineLabel, addr 0xa8a1450, size 0x84, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::LabelInfo* DefineLabel(::System::Linq::Expressions::LabelTarget*  node) ;

/// @brief Method EmitCopyValueType, addr 0xa89c3a8, size 0x88, virtual false, abstract: false, final false
inline void EmitCopyValueType(::System::Type*  valueType) ;

/// @brief Method EmitIndexGet, addr 0xa89ceac, size 0xf0, virtual false, abstract: false, final false
inline void EmitIndexGet(::System::Linq::Expressions::IndexExpression*  index) ;

/// @brief Method EmitThisForMethodCall, addr 0xa89cea4, size 0x8, virtual false, abstract: false, final false
inline void EmitThisForMethodCall(::System::Linq::Expressions::Expression*  node) ;

/// @brief Method EmitUnaryBoolCheck, addr 0xa8a02cc, size 0x1a4, virtual false, abstract: false, final false
inline void EmitUnaryBoolCheck(::System::Linq::Expressions::UnaryExpression*  node) ;

/// @brief Method EmitUnaryMethodCall, addr 0xa8a019c, size 0xe4, virtual false, abstract: false, final false
inline void EmitUnaryMethodCall(::System::Linq::Expressions::UnaryExpression*  node) ;

/// @brief Method EnsureAvailableForClosure, addr 0xa89c174, size 0x120, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::LocalVariable* EnsureAvailableForClosure(::System::Linq::Expressions::ParameterExpression*  expr) ;

/// @brief Method EnsureLabel, addr 0xa8a27dc, size 0xd0, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::LabelInfo* EnsureLabel(::System::Linq::Expressions::LabelTarget*  node) ;

/// @brief Method GetMemberType, addr 0xa8a6d00, size 0x188, virtual false, abstract: false, final false
static inline ::System::Type* GetMemberType(::System::Reflection::MemberInfo*  member) ;

/// @brief Method LoadLocalNoValueTypeCopy, addr 0xa89c328, size 0x80, virtual false, abstract: false, final false
inline void LoadLocalNoValueTypeCopy(::System::Linq::Expressions::ParameterExpression*  variable) ;

/// @brief Method MakeInterpreter, addr 0xa89bca4, size 0x304, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::Interpreter* MakeInterpreter(::StringW  lambdaName) ;

/// @brief Method MaybeMutableValueType, addr 0xa89c430, size 0x5c, virtual false, abstract: false, final false
inline bool MaybeMutableValueType(::System::Type*  type) ;

static inline ::System::Linq::Expressions::Interpreter::LightCompiler* New_ctor() ;

static inline ::System::Linq::Expressions::Interpreter::LightCompiler* New_ctor(::System::Linq::Expressions::Interpreter::LightCompiler*  parent) ;

/// @brief Method PopLabelBlock, addr 0xa8a14d4, size 0x1c, virtual false, abstract: false, final false
inline void PopLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind  kind) ;

/// @brief Method PushLabelBlock, addr 0xa8a13cc, size 0x84, virtual false, abstract: false, final false
inline void PushLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind  type) ;

/// @brief Method ReferenceLabel, addr 0xa8a27a8, size 0x34, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::LabelInfo* ReferenceLabel(::System::Linq::Expressions::LabelTarget*  node) ;

/// @brief Method ResolveLocal, addr 0xa89c294, size 0x54, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::LocalVariable* ResolveLocal(::System::Linq::Expressions::ParameterExpression*  variable) ;

/// @brief Method ShouldWritebackNode, addr 0xa8a444c, size 0x184, virtual false, abstract: false, final false
static inline bool ShouldWritebackNode(::System::Linq::Expressions::Expression*  node) ;

/// @brief Method TryPushLabelBlock, addr 0xa8a28ac, size 0x438, virtual false, abstract: false, final false
inline bool TryPushLabelBlock(::System::Linq::Expressions::Expression*  node) ;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>* const& __cordl_internal_get__debugInfos() const;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*& __cordl_internal_get__debugInfos() ;

constexpr ::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>* const& __cordl_internal_get__exceptionForRethrowStack() const;

constexpr ::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*& __cordl_internal_get__exceptionForRethrowStack() ;

constexpr ::System::Linq::Expressions::StackGuard* const& __cordl_internal_get__guard() const;

constexpr ::System::Linq::Expressions::StackGuard*& __cordl_internal_get__guard() ;

constexpr ::System::Linq::Expressions::Interpreter::InstructionList* const& __cordl_internal_get__instructions() const;

constexpr ::System::Linq::Expressions::Interpreter::InstructionList*& __cordl_internal_get__instructions() ;

constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo* const& __cordl_internal_get__labelBlock() const;

constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo*& __cordl_internal_get__labelBlock() ;

constexpr ::System::Linq::Expressions::Interpreter::LocalVariables* const& __cordl_internal_get__locals() const;

constexpr ::System::Linq::Expressions::Interpreter::LocalVariables*& __cordl_internal_get__locals() ;

constexpr ::System::Linq::Expressions::Interpreter::LightCompiler* const& __cordl_internal_get__parent() const;

constexpr ::System::Linq::Expressions::Interpreter::LightCompiler*& __cordl_internal_get__parent() ;

constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>* const& __cordl_internal_get__treeLabels() const;

constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*& __cordl_internal_get__treeLabels() ;

constexpr void __cordl_internal_set__debugInfos(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*  value) ;

constexpr void __cordl_internal_set__exceptionForRethrowStack(::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*  value) ;

constexpr void __cordl_internal_set__guard(::System::Linq::Expressions::StackGuard*  value) ;

constexpr void __cordl_internal_set__instructions(::System::Linq::Expressions::Interpreter::InstructionList*  value) ;

constexpr void __cordl_internal_set__labelBlock(::System::Linq::Expressions::Interpreter::LabelScopeInfo*  value) ;

constexpr void __cordl_internal_set__locals(::System::Linq::Expressions::Interpreter::LocalVariables*  value) ;

constexpr void __cordl_internal_set__parent(::System::Linq::Expressions::Interpreter::LightCompiler*  value) ;

constexpr void __cordl_internal_set__treeLabels(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*  value) ;

/// @brief Method .ctor, addr 0xa89b824, size 0x22c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xa89ba50, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(::System::Linq::Expressions::Interpreter::LightCompiler*  parent) ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition> getStaticF_s_emptyLocals() ;

/// @brief Method get_Instructions, addr 0xa89ba7c, size 0x8, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::InstructionList* get_Instructions() ;

static inline void setStaticF_s_emptyLocals(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCompiler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCompiler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCompiler(LightCompiler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCompiler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCompiler(LightCompiler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23919};

/// @brief Field _instructions, offset: 0x10, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::InstructionList*  ____instructions;

/// @brief Field _locals, offset: 0x18, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::LocalVariables*  ____locals;

/// @brief Field _debugInfos, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*  ____debugInfos;

/// @brief Field _treeLabels, offset: 0x28, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*  ____treeLabels;

/// @brief Field _labelBlock, offset: 0x30, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::LabelScopeInfo*  ____labelBlock;

/// @brief Field _exceptionForRethrowStack, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*  ____exceptionForRethrowStack;

/// @brief Field _parent, offset: 0x40, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::LightCompiler*  ____parent;

/// @brief Field _guard, offset: 0x48, size: 0x8, def value: None
 ::System::Linq::Expressions::StackGuard*  ____guard;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____instructions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____locals) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____debugInfos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____treeLabels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____labelBlock) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____exceptionForRethrowStack) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____parent) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler, ____guard) == 0x48, "Offset mismatch!");

static_assert(sizeof(::System::Linq::Expressions::Interpreter::LightCompiler) == 0x50, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
// [CompilerGenerated]
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LightCompiler/<>c
class CORDL_TYPE LightCompiler___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::Linq::Expressions::Interpreter::LightCompiler___c*  __9;

/// @brief Field <>9__101_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__101_0, put=setStaticF___9__101_0)) ::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*  __9__101_0;

/// @brief Field <>9__56_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__56_0, put=setStaticF___9__56_0)) ::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*  __9__56_0;

/// @brief Field <>9__56_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__56_1, put=setStaticF___9__56_1)) ::System::Func_2<::System::Linq::Expressions::Expression*,bool>*  __9__56_1;

static inline ::System::Linq::Expressions::Interpreter::LightCompiler___c* New_ctor() ;

/// @brief Method <CompileNoLabelPush>b__101_0, addr 0xa8a8904, size 0x1c, virtual false, abstract: false, final false
inline void _CompileNoLabelPush_b__101_0(::System::Linq::Expressions::Interpreter::LightCompiler*  _cordl_this, ::System::Linq::Expressions::Expression*  e) ;

/// @brief Method <CompileSwitchExpression>b__56_0, addr 0xa8a8788, size 0x104, virtual false, abstract: false, final false
inline bool _CompileSwitchExpression_b__56_0(::System::Linq::Expressions::SwitchCase*  c) ;

/// @brief Method <CompileSwitchExpression>b__56_1, addr 0xa8a888c, size 0x78, virtual false, abstract: false, final false
inline bool _CompileSwitchExpression_b__56_1(::System::Linq::Expressions::Expression*  t) ;

/// @brief Method .ctor, addr 0xa8a8780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Linq::Expressions::Interpreter::LightCompiler___c* getStaticF___9() ;

static inline ::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>* getStaticF___9__101_0() ;

static inline ::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>* getStaticF___9__56_0() ;

static inline ::System::Func_2<::System::Linq::Expressions::Expression*,bool>* getStaticF___9__56_1() ;

static inline void setStaticF___9(::System::Linq::Expressions::Interpreter::LightCompiler___c*  value) ;

static inline void setStaticF___9__101_0(::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*  value) ;

static inline void setStaticF___9__56_0(::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*  value) ;

static inline void setStaticF___9__56_1(::System::Func_2<::System::Linq::Expressions::Expression*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCompiler___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCompiler___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCompiler___c(LightCompiler___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCompiler___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCompiler___c(LightCompiler___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23918};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Interpreter::LightCompiler___c) == 0x10, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
// Dependencies System.Linq.Expressions.ExpressionVisitor
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
class CORDL_TYPE LightCompiler_QuoteVisitor : public ::System::Linq::Expressions::ExpressionVisitor {
public:
// Declarations
/// @brief Field _definedParameters, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__definedParameters, put=__cordl_internal_set__definedParameters)) ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*  _definedParameters;

/// @brief Field _hoistedParameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__hoistedParameters, put=__cordl_internal_set__hoistedParameters)) ::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*  _hoistedParameters;

static inline ::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor* New_ctor() ;

/// @brief Method PopParameters, addr 0xa8a81ac, size 0x348, virtual false, abstract: false, final false
inline void PopParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters) ;

/// @brief Method PushParameters, addr 0xa8a7e68, size 0x344, virtual false, abstract: false, final false
inline void PushParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters) ;

/// @brief Method VisitBlock, addr 0xa8a7e00, size 0x68, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::Expression* VisitBlock(::System::Linq::Expressions::BlockExpression*  node) ;

/// @brief Method VisitCatchBlock, addr 0xa8a84f4, size 0x148, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::CatchBlock* VisitCatchBlock(::System::Linq::Expressions::CatchBlock*  node) ;

/// @brief Method VisitLambda, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
inline ::System::Linq::Expressions::Expression* VisitLambda(::System::Linq::Expressions::Expression_1<T>*  node) ;

/// @brief Method VisitParameter, addr 0xa8a7d74, size 0x8c, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::Expression* VisitParameter(::System::Linq::Expressions::ParameterExpression*  node) ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>* const& __cordl_internal_get__definedParameters() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*& __cordl_internal_get__definedParameters() ;

constexpr ::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>* const& __cordl_internal_get__hoistedParameters() const;

constexpr ::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*& __cordl_internal_get__hoistedParameters() ;

constexpr void __cordl_internal_set__definedParameters(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*  value) ;

constexpr void __cordl_internal_set__hoistedParameters(::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*  value) ;

/// @brief Method .ctor, addr 0xa8a863c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightCompiler_QuoteVisitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightCompiler_QuoteVisitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LightCompiler_QuoteVisitor(LightCompiler_QuoteVisitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightCompiler_QuoteVisitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightCompiler_QuoteVisitor(LightCompiler_QuoteVisitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23917};

/// @brief Field _definedParameters, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*  ____definedParameters;

/// @brief Field _hoistedParameters, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*  ____hoistedParameters;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor, ____definedParameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor, ____hoistedParameters) == 0x18, "Offset mismatch!");

static_assert(sizeof(::System::Linq::Expressions::Interpreter::LightCompiler_QuoteVisitor) == 0x20, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
