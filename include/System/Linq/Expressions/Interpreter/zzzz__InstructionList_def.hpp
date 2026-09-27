#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionList.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RuntimeLabel_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InstructionList)
namespace GlobalNamespace {
struct DebugView_InstructionList_InstructionView;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Linq::Expressions::Interpreter {
class BranchLabel;
}
namespace System::Linq::Expressions::Interpreter {
class ByRefUpdater;
}
namespace System::Linq::Expressions::Interpreter {
class EnterTryFaultInstruction;
}
namespace System::Linq::Expressions::Interpreter {
struct InstructionArray;
}
namespace System::Linq::Expressions::Interpreter {
class InstructionList_DebugView;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class LightDelegateCreator;
}
namespace System::Linq::Expressions::Interpreter {
class OffsetInstruction;
}
namespace System::Linq::Expressions::Interpreter {
struct RuntimeLabel;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::CompilerServices {
template<typename T>
class StrongBox_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class InstructionList;
}
namespace System::Linq::Expressions::Interpreter {
class InstructionList_DebugView;
}
// Write type traits
MARK_REF_T(::System::Linq::Expressions::Interpreter::InstructionList*);
MARK_REF_T(::System::Linq::Expressions::Interpreter::InstructionList_DebugView*);
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::InstructionList*, "System.Linq.Expressions.Interpreter", "InstructionList");
DEFINE_IL2CPP_CLASS(::System::Linq::Expressions::Interpreter::InstructionList_DebugView*, "System.Linq.Expressions.Interpreter", "InstructionList/DebugView");
// [DebuggerTypeProxy(typeof(System.Linq.Expressions.Interpreter.InstructionList::DebugView))]
// Dependencies System.Linq.Expressions.Interpreter.Instruction, System.Linq.Expressions.Interpreter.RuntimeLabel, System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InstructionList
class CORDL_TYPE InstructionList : public ::System::Object {
public:
// Declarations
using DebugView = ::System::Linq::Expressions::Interpreter::InstructionList_DebugView;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_CurrentContinuationsDepth)) int32_t  CurrentContinuationsDepth;

 __declspec(property(get=get_CurrentStackDepth)) int32_t  CurrentStackDepth;

/// @brief Field _currentContinuationsDepth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentContinuationsDepth, put=__cordl_internal_set__currentContinuationsDepth)) int32_t  _currentContinuationsDepth;

/// @brief Field _currentStackDepth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentStackDepth, put=__cordl_internal_set__currentStackDepth)) int32_t  _currentStackDepth;

/// @brief Field _debugCookies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugCookies, put=__cordl_internal_set__debugCookies)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  _debugCookies;

/// @brief Field _instructions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instructions, put=__cordl_internal_set__instructions)) ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*  _instructions;

/// @brief Field _labels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__labels, put=__cordl_internal_set__labels)) ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*  _labels;

/// @brief Field _maxContinuationDepth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxContinuationDepth, put=__cordl_internal_set__maxContinuationDepth)) int32_t  _maxContinuationDepth;

/// @brief Field _maxStackDepth, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxStackDepth, put=__cordl_internal_set__maxStackDepth)) int32_t  _maxStackDepth;

/// @brief Field _objects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__objects, put=__cordl_internal_set__objects)) ::System::Collections::Generic::List_1<::System::Object*>*  _objects;

/// @brief Field _runtimeLabelCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__runtimeLabelCount, put=__cordl_internal_set__runtimeLabelCount)) int32_t  _runtimeLabelCount;

/// @brief Field s_Ints, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Ints, put=setStaticF_s_Ints)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_Ints;

/// @brief Field s_assignLocal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_assignLocal, put=setStaticF_s_assignLocal)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_assignLocal;

/// @brief Field s_assignLocalBoxed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_assignLocalBoxed, put=setStaticF_s_assignLocalBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_assignLocalBoxed;

/// @brief Field s_assignLocalToClosure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_assignLocalToClosure, put=setStaticF_s_assignLocalToClosure)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_assignLocalToClosure;

/// @brief Field s_emptyRuntimeLabels, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_emptyRuntimeLabels, put=setStaticF_s_emptyRuntimeLabels)) ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>  s_emptyRuntimeLabels;

/// @brief Field s_false, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_false, put=setStaticF_s_false)) ::System::Linq::Expressions::Interpreter::Instruction*  s_false;

/// @brief Field s_loadFields, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_loadFields, put=setStaticF_s_loadFields)) ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*  s_loadFields;

/// @brief Field s_loadLocal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_loadLocal, put=setStaticF_s_loadLocal)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_loadLocal;

/// @brief Field s_loadLocalBoxed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_loadLocalBoxed, put=setStaticF_s_loadLocalBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_loadLocalBoxed;

/// @brief Field s_loadLocalFromClosure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_loadLocalFromClosure, put=setStaticF_s_loadLocalFromClosure)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_loadLocalFromClosure;

/// @brief Field s_loadLocalFromClosureBoxed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_loadLocalFromClosureBoxed, put=setStaticF_s_loadLocalFromClosureBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_loadLocalFromClosureBoxed;

/// @brief Field s_loadObjectCached, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_loadObjectCached, put=setStaticF_s_loadObjectCached)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_loadObjectCached;

/// @brief Field s_null, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_null, put=setStaticF_s_null)) ::System::Linq::Expressions::Interpreter::Instruction*  s_null;

/// @brief Field s_storeLocal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_storeLocal, put=setStaticF_s_storeLocal)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_storeLocal;

/// @brief Field s_storeLocalBoxed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_storeLocalBoxed, put=setStaticF_s_storeLocalBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  s_storeLocalBoxed;

/// @brief Field s_true, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_true, put=setStaticF_s_true)) ::System::Linq::Expressions::Interpreter::Instruction*  s_true;

/// @brief Method AssignLocalBoxed, addr 0xa893198, size 0x1d0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* AssignLocalBoxed(int32_t  index) ;

/// @brief Method BuildRuntimeLabels, addr 0xa891aac, size 0x250, virtual false, abstract: false, final false
inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> BuildRuntimeLabels() ;

/// @brief Method Emit, addr 0xa8916b4, size 0xb4, virtual false, abstract: false, final false
inline void Emit(::System::Linq::Expressions::Interpreter::Instruction*  instruction) ;

/// @brief Method EmitAdd, addr 0xa893d00, size 0x38, virtual false, abstract: false, final false
inline void EmitAdd(::System::Type*  type, bool  checked) ;

/// @brief Method EmitAnd, addr 0xa893e14, size 0x24, virtual false, abstract: false, final false
inline void EmitAnd(::System::Type*  type) ;

/// @brief Method EmitArrayLength, addr 0xa895ea0, size 0x60, virtual false, abstract: false, final false
inline void EmitArrayLength() ;

/// @brief Method EmitAssignLocal, addr 0xa892d6c, size 0x1e0, virtual false, abstract: false, final false
inline void EmitAssignLocal(int32_t  index) ;

/// @brief Method EmitAssignLocalBoxed, addr 0xa89312c, size 0x6c, virtual false, abstract: false, final false
inline void EmitAssignLocalBoxed(int32_t  index) ;

/// @brief Method EmitAssignLocalToClosure, addr 0xa8935a4, size 0x1e0, virtual false, abstract: false, final false
inline void EmitAssignLocalToClosure(int32_t  index) ;

/// @brief Method EmitBranch, addr 0xa89687c, size 0x40, virtual false, abstract: false, final false
inline void EmitBranch(::System::Linq::Expressions::Interpreter::OffsetInstruction*  instruction, ::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method EmitBranch, addr 0xa8968bc, size 0x6c, virtual false, abstract: false, final false
inline void EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method EmitBranch, addr 0xa896928, size 0x84, virtual false, abstract: false, final false
inline void EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  label, bool  hasResult, bool  hasValue) ;

/// @brief Method EmitBranchFalse, addr 0xa896a84, size 0x6c, virtual false, abstract: false, final false
inline void EmitBranchFalse(::System::Linq::Expressions::Interpreter::BranchLabel*  elseLabel) ;

/// @brief Method EmitBranchTrue, addr 0xa896a18, size 0x6c, virtual false, abstract: false, final false
inline void EmitBranchTrue(::System::Linq::Expressions::Interpreter::BranchLabel*  elseLabel) ;

/// @brief Method EmitByRefCall, addr 0xa896420, size 0xb0, virtual false, abstract: false, final false
inline void EmitByRefCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*>  parameters, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>  byrefArgs) ;

/// @brief Method EmitByRefNew, addr 0xa895d50, size 0x84, virtual false, abstract: false, final false
inline void EmitByRefNew(::System::Reflection::ConstructorInfo*  constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*>  parameters, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*>  updaters) ;

/// @brief Method EmitCall, addr 0xa896378, size 0x80, virtual false, abstract: false, final false
inline void EmitCall(::System::Reflection::MethodInfo*  method) ;

/// @brief Method EmitCall, addr 0xa8963f8, size 0x28, virtual false, abstract: false, final false
inline void EmitCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*>  parameters) ;

/// @brief Method EmitCast, addr 0xa895b48, size 0x24, virtual false, abstract: false, final false
inline void EmitCast(::System::Type*  toType) ;

/// @brief Method EmitCastReferenceToEnum, addr 0xa895bd8, size 0x6c, virtual false, abstract: false, final false
inline void EmitCastReferenceToEnum(::System::Type*  toType) ;

/// @brief Method EmitCastToEnum, addr 0xa895b6c, size 0x6c, virtual false, abstract: false, final false
inline void EmitCastToEnum(::System::Type*  toType) ;

/// @brief Method EmitCoalescingBranch, addr 0xa8969ac, size 0x6c, virtual false, abstract: false, final false
inline void EmitCoalescingBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  leftNotNull) ;

/// @brief Method EmitConvertToUnderlying, addr 0xa895ad4, size 0x74, virtual false, abstract: false, final false
inline void EmitConvertToUnderlying(::System::TypeCode  to, bool  isLiftedToNull) ;

/// @brief Method EmitCreateDelegate, addr 0xa895dd4, size 0x6c, virtual false, abstract: false, final false
inline void EmitCreateDelegate(::System::Linq::Expressions::Interpreter::LightDelegateCreator*  creator) ;

/// @brief Method EmitDecrement, addr 0xa895f68, size 0x24, virtual false, abstract: false, final false
inline void EmitDecrement(::System::Type*  type) ;

/// @brief Method EmitDefaultValue, addr 0xa895c68, size 0x6c, virtual false, abstract: false, final false
inline void EmitDefaultValue(::System::Type*  type) ;

/// @brief Method EmitDiv, addr 0xa893da8, size 0x24, virtual false, abstract: false, final false
inline void EmitDiv(::System::Type*  type) ;

/// @brief Method EmitDup, addr 0xa8923ac, size 0x60, virtual false, abstract: false, final false
inline void EmitDup() ;

/// @brief Method EmitEnterExceptionFilter, addr 0xa896f04, size 0x60, virtual false, abstract: false, final false
inline void EmitEnterExceptionFilter() ;

/// @brief Method EmitEnterExceptionHandlerNonVoid, addr 0xa896fc4, size 0x60, virtual false, abstract: false, final false
inline void EmitEnterExceptionHandlerNonVoid() ;

/// @brief Method EmitEnterExceptionHandlerVoid, addr 0xa897024, size 0x60, virtual false, abstract: false, final false
inline void EmitEnterExceptionHandlerVoid() ;

/// @brief Method EmitEnterFault, addr 0xa896e20, size 0x84, virtual false, abstract: false, final false
inline void EmitEnterFault(::System::Linq::Expressions::Interpreter::BranchLabel*  faultStartLabel) ;

/// @brief Method EmitEnterFinally, addr 0xa896d3c, size 0x84, virtual false, abstract: false, final false
inline void EmitEnterFinally(::System::Linq::Expressions::Interpreter::BranchLabel*  finallyStartLabel) ;

/// @brief Method EmitEnterTryCatch, addr 0xa896c94, size 0x20, virtual false, abstract: false, final false
inline void EmitEnterTryCatch() ;

/// @brief Method EmitEnterTryFault, addr 0xa896cb4, size 0x88, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* EmitEnterTryFault(::System::Linq::Expressions::Interpreter::BranchLabel*  tryEnd) ;

/// @brief Method EmitEnterTryFinally, addr 0xa896c70, size 0x24, virtual false, abstract: false, final false
inline void EmitEnterTryFinally(::System::Linq::Expressions::Interpreter::BranchLabel*  finallyStartLabel) ;

/// @brief Method EmitEqual, addr 0xa89424c, size 0x28, virtual false, abstract: false, final false
inline void EmitEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitExclusiveOr, addr 0xa893df0, size 0x24, virtual false, abstract: false, final false
inline void EmitExclusiveOr(::System::Type*  type) ;

/// @brief Method EmitGetArrayItem, addr 0xa893aec, size 0x60, virtual false, abstract: false, final false
inline void EmitGetArrayItem() ;

/// @brief Method EmitGoto, addr 0xa8967d8, size 0xa4, virtual false, abstract: false, final false
inline void EmitGoto(::System::Linq::Expressions::Interpreter::BranchLabel*  label, bool  hasResult, bool  hasValue, bool  labelTargetGetsValue) ;

/// @brief Method EmitGreaterThan, addr 0xa895984, size 0x24, virtual false, abstract: false, final false
inline void EmitGreaterThan(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitGreaterThanOrEqual, addr 0xa8959a8, size 0x24, virtual false, abstract: false, final false
inline void EmitGreaterThanOrEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitIncrement, addr 0xa895f48, size 0x20, virtual false, abstract: false, final false
inline void EmitIncrement(::System::Type*  type) ;

/// @brief Method EmitInitializeLocal, addr 0xa89379c, size 0x108, virtual false, abstract: false, final false
inline void EmitInitializeLocal(int32_t  index, ::System::Type*  type) ;

/// @brief Method EmitInitializeParameter, addr 0xa893900, size 0x6c, virtual false, abstract: false, final false
inline void EmitInitializeParameter(int32_t  index) ;

/// @brief Method EmitIntSwitch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void EmitIntSwitch(::System::Collections::Generic::Dictionary_2<T,int32_t>*  cases) ;

/// @brief Method EmitLeaveExceptionFilter, addr 0xa896f64, size 0x60, virtual false, abstract: false, final false
inline void EmitLeaveExceptionFilter() ;

/// @brief Method EmitLeaveExceptionHandler, addr 0xa897084, size 0x8c, virtual false, abstract: false, final false
inline void EmitLeaveExceptionHandler(bool  hasValue, ::System::Linq::Expressions::Interpreter::BranchLabel*  tryExpressionEndLabel) ;

/// @brief Method EmitLeaveFault, addr 0xa896ea4, size 0x60, virtual false, abstract: false, final false
inline void EmitLeaveFault() ;

/// @brief Method EmitLeaveFinally, addr 0xa896dc0, size 0x60, virtual false, abstract: false, final false
inline void EmitLeaveFinally() ;

/// @brief Method EmitLeftShift, addr 0xa893e5c, size 0x20, virtual false, abstract: false, final false
inline void EmitLeftShift(::System::Type*  type) ;

/// @brief Method EmitLessThan, addr 0xa89429c, size 0x24, virtual false, abstract: false, final false
inline void EmitLessThan(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitLessThanOrEqual, addr 0xa894e10, size 0x24, virtual false, abstract: false, final false
inline void EmitLessThanOrEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitLoad, addr 0xa891cfc, size 0x8, virtual false, abstract: false, final false
inline void EmitLoad(::System::Object*  value) ;

/// @brief Method EmitLoad, addr 0xa891d04, size 0x524, virtual false, abstract: false, final false
inline void EmitLoad(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method EmitLoad, addr 0xa892228, size 0x184, virtual false, abstract: false, final false
inline void EmitLoad(bool  value) ;

/// @brief Method EmitLoadField, addr 0xa896064, size 0x1c, virtual false, abstract: false, final false
inline void EmitLoadField(::System::Reflection::FieldInfo*  field) ;

/// @brief Method EmitLoadLocal, addr 0xa892590, size 0x1e0, virtual false, abstract: false, final false
inline void EmitLoadLocal(int32_t  index) ;

/// @brief Method EmitLoadLocalBoxed, addr 0xa892770, size 0x6c, virtual false, abstract: false, final false
inline void EmitLoadLocalBoxed(int32_t  index) ;

/// @brief Method EmitLoadLocalFromClosure, addr 0xa8929ac, size 0x1e0, virtual false, abstract: false, final false
inline void EmitLoadLocalFromClosure(int32_t  index) ;

/// @brief Method EmitLoadLocalFromClosureBoxed, addr 0xa892b8c, size 0x1e0, virtual false, abstract: false, final false
inline void EmitLoadLocalFromClosureBoxed(int32_t  index) ;

/// @brief Method EmitModulo, addr 0xa893dcc, size 0x24, virtual false, abstract: false, final false
inline void EmitModulo(::System::Type*  type) ;

/// @brief Method EmitMul, addr 0xa893d70, size 0x38, virtual false, abstract: false, final false
inline void EmitMul(::System::Type*  type, bool  checked) ;

/// @brief Method EmitNegate, addr 0xa895f00, size 0x24, virtual false, abstract: false, final false
inline void EmitNegate(::System::Type*  type) ;

/// @brief Method EmitNegateChecked, addr 0xa895f24, size 0x24, virtual false, abstract: false, final false
inline void EmitNegateChecked(::System::Type*  type) ;

/// @brief Method EmitNew, addr 0xa895cd4, size 0x7c, virtual false, abstract: false, final false
inline void EmitNew(::System::Reflection::ConstructorInfo*  constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*>  parameters) ;

/// @brief Method EmitNewArray, addr 0xa893bac, size 0x6c, virtual false, abstract: false, final false
inline void EmitNewArray(::System::Type*  elementType) ;

/// @brief Method EmitNewArrayBounds, addr 0xa893c18, size 0x74, virtual false, abstract: false, final false
inline void EmitNewArrayBounds(::System::Type*  elementType, int32_t  rank) ;

/// @brief Method EmitNewArrayInit, addr 0xa893c8c, size 0x74, virtual false, abstract: false, final false
inline void EmitNewArrayInit(::System::Type*  elementType, int32_t  elementCount) ;

/// @brief Method EmitNewRuntimeVariables, addr 0xa893a80, size 0x6c, virtual false, abstract: false, final false
inline void EmitNewRuntimeVariables(int32_t  count) ;

/// @brief Method EmitNot, addr 0xa895c44, size 0x24, virtual false, abstract: false, final false
inline void EmitNot(::System::Type*  type) ;

/// @brief Method EmitNotEqual, addr 0xa894274, size 0x28, virtual false, abstract: false, final false
inline void EmitNotEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitNullableCall, addr 0xa8964d0, size 0x54, virtual false, abstract: false, final false
inline void EmitNullableCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*>  parameters) ;

/// @brief Method EmitNumericConvertChecked, addr 0xa8959cc, size 0x84, virtual false, abstract: false, final false
inline void EmitNumericConvertChecked(::System::TypeCode  from, ::System::TypeCode  to, bool  isLiftedToNull) ;

/// @brief Method EmitNumericConvertUnchecked, addr 0xa895a50, size 0x84, virtual false, abstract: false, final false
inline void EmitNumericConvertUnchecked(::System::TypeCode  from, ::System::TypeCode  to, bool  isLiftedToNull) ;

/// @brief Method EmitOr, addr 0xa893e38, size 0x24, virtual false, abstract: false, final false
inline void EmitOr(::System::Type*  type) ;

/// @brief Method EmitPop, addr 0xa89240c, size 0x60, virtual false, abstract: false, final false
inline void EmitPop() ;

/// @brief Method EmitRethrow, addr 0xa896bb0, size 0x60, virtual false, abstract: false, final false
inline void EmitRethrow() ;

/// @brief Method EmitRethrowVoid, addr 0xa896c10, size 0x60, virtual false, abstract: false, final false
inline void EmitRethrowVoid() ;

/// @brief Method EmitRightShift, addr 0xa894228, size 0x24, virtual false, abstract: false, final false
inline void EmitRightShift(::System::Type*  type) ;

/// @brief Method EmitSetArrayItem, addr 0xa893b4c, size 0x60, virtual false, abstract: false, final false
inline void EmitSetArrayItem() ;

/// @brief Method EmitStoreField, addr 0xa8962d0, size 0xa8, virtual false, abstract: false, final false
inline void EmitStoreField(::System::Reflection::FieldInfo*  field) ;

/// @brief Method EmitStoreLocal, addr 0xa892f4c, size 0x1e0, virtual false, abstract: false, final false
inline void EmitStoreLocal(int32_t  index) ;

/// @brief Method EmitStoreLocalBoxed, addr 0xa893368, size 0x6c, virtual false, abstract: false, final false
inline void EmitStoreLocalBoxed(int32_t  index) ;

/// @brief Method EmitStoreLocalToClosure, addr 0xa893784, size 0x18, virtual false, abstract: false, final false
inline void EmitStoreLocalToClosure(int32_t  index) ;

/// @brief Method EmitStringSwitch, addr 0xa897110, size 0x74, virtual false, abstract: false, final false
inline void EmitStringSwitch(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  cases, ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*  nullCase) ;

/// @brief Method EmitSub, addr 0xa893d38, size 0x38, virtual false, abstract: false, final false
inline void EmitSub(::System::Type*  type, bool  checked) ;

/// @brief Method EmitThrow, addr 0xa896af0, size 0x60, virtual false, abstract: false, final false
inline void EmitThrow() ;

/// @brief Method EmitThrowVoid, addr 0xa896b50, size 0x60, virtual false, abstract: false, final false
inline void EmitThrowVoid() ;

/// @brief Method EmitTypeAs, addr 0xa895ff8, size 0x6c, virtual false, abstract: false, final false
inline void EmitTypeAs(::System::Type*  type) ;

/// @brief Method EmitTypeEquals, addr 0xa895e40, size 0x60, virtual false, abstract: false, final false
inline void EmitTypeEquals() ;

/// @brief Method EmitTypeIs, addr 0xa895f8c, size 0x6c, virtual false, abstract: false, final false
inline void EmitTypeIs(::System::Type*  type) ;

/// @brief Method EnsureLabelIndex, addr 0xa896730, size 0x4c, virtual false, abstract: false, final false
inline int32_t EnsureLabelIndex(::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method FixupBranch, addr 0xa89664c, size 0xe4, virtual false, abstract: false, final false
inline void FixupBranch(int32_t  branchIndex, int32_t  offset) ;

/// @brief Method GetInstruction, addr 0xa89197c, size 0x58, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::Instruction* GetInstruction(int32_t  index) ;

/// @brief Method GetLoadField, addr 0xa896080, size 0x250, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::Instruction* GetLoadField(::System::Reflection::FieldInfo*  field) ;

/// @brief Method InitImmutableRefBox, addr 0xa893a24, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* InitImmutableRefBox(int32_t  index) ;

/// @brief Method InitReference, addr 0xa8938a4, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* InitReference(int32_t  index) ;

/// @brief Method LoadLocalBoxed, addr 0xa8927dc, size 0x1d0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* LoadLocalBoxed(int32_t  index) ;

/// @brief Method MakeLabel, addr 0xa896524, size 0x128, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::BranchLabel* MakeLabel() ;

/// @brief Method MarkLabel, addr 0xa8967b8, size 0x20, virtual false, abstract: false, final false
inline void MarkLabel(::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method MarkRuntimeLabel, addr 0xa89677c, size 0x3c, virtual false, abstract: false, final false
inline int32_t MarkRuntimeLabel() ;

static inline ::System::Linq::Expressions::Interpreter::InstructionList* New_ctor() ;

/// @brief Method Parameter, addr 0xa89396c, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* Parameter(int32_t  index) ;

/// @brief Method ParameterBox, addr 0xa8939c8, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* ParameterBox(int32_t  index) ;

/// @brief Method StoreLocalBoxed, addr 0xa8933d4, size 0x1d0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* StoreLocalBoxed(int32_t  index) ;

/// @brief Method SwitchToBoxed, addr 0xa89246c, size 0x124, virtual false, abstract: false, final false
inline void SwitchToBoxed(int32_t  index, int32_t  instructionIndex) ;

/// @brief Method ToArray, addr 0xa8919d4, size 0xd8, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::InstructionArray ToArray() ;

/// @brief Method UnEmit, addr 0xa891814, size 0x110, virtual false, abstract: false, final false
inline void UnEmit() ;

/// @brief Method UpdateStackDepth, addr 0xa891768, size 0xac, virtual false, abstract: false, final false
inline void UpdateStackDepth(::System::Linq::Expressions::Interpreter::Instruction*  instruction) ;

constexpr int32_t const& __cordl_internal_get__currentContinuationsDepth() const;

constexpr int32_t& __cordl_internal_get__currentContinuationsDepth() ;

constexpr int32_t const& __cordl_internal_get__currentStackDepth() const;

constexpr int32_t& __cordl_internal_get__currentStackDepth() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>* const& __cordl_internal_get__debugCookies() const;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*& __cordl_internal_get__debugCookies() ;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>* const& __cordl_internal_get__instructions() const;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*& __cordl_internal_get__instructions() ;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>* const& __cordl_internal_get__labels() const;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*& __cordl_internal_get__labels() ;

constexpr int32_t const& __cordl_internal_get__maxContinuationDepth() const;

constexpr int32_t& __cordl_internal_get__maxContinuationDepth() ;

constexpr int32_t const& __cordl_internal_get__maxStackDepth() const;

constexpr int32_t& __cordl_internal_get__maxStackDepth() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* const& __cordl_internal_get__objects() const;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__objects() ;

constexpr int32_t const& __cordl_internal_get__runtimeLabelCount() const;

constexpr int32_t& __cordl_internal_get__runtimeLabelCount() ;

constexpr void __cordl_internal_set__currentContinuationsDepth(int32_t  value) ;

constexpr void __cordl_internal_set__currentStackDepth(int32_t  value) ;

constexpr void __cordl_internal_set__debugCookies(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__instructions(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*  value) ;

constexpr void __cordl_internal_set__labels(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*  value) ;

constexpr void __cordl_internal_set__maxContinuationDepth(int32_t  value) ;

constexpr void __cordl_internal_set__maxStackDepth(int32_t  value) ;

constexpr void __cordl_internal_set__objects(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__runtimeLabelCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xa897184, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_Ints() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_assignLocal() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_assignLocalBoxed() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_assignLocalToClosure() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel> getStaticF_s_emptyRuntimeLabels() ;

static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_false() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>* getStaticF_s_loadFields() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_loadLocal() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_loadLocalBoxed() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_loadLocalFromClosure() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_loadLocalFromClosureBoxed() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_loadObjectCached() ;

static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_null() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_storeLocal() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*> getStaticF_s_storeLocalBoxed() ;

static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_true() ;

/// @brief Method get_Count, addr 0xa891924, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_CurrentContinuationsDepth, addr 0xa891974, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentContinuationsDepth() ;

/// @brief Method get_CurrentStackDepth, addr 0xa89196c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentStackDepth() ;

static inline void setStaticF_s_Ints(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_assignLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_assignLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_assignLocalToClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_emptyRuntimeLabels(::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel>  value) ;

static inline void setStaticF_s_false(::System::Linq::Expressions::Interpreter::Instruction*  value) ;

static inline void setStaticF_s_loadFields(::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*  value) ;

static inline void setStaticF_s_loadLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_loadLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_loadLocalFromClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_loadLocalFromClosureBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_loadObjectCached(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_null(::System::Linq::Expressions::Interpreter::Instruction*  value) ;

static inline void setStaticF_s_storeLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_storeLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*>  value) ;

static inline void setStaticF_s_true(::System::Linq::Expressions::Interpreter::Instruction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstructionList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstructionList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstructionList(InstructionList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstructionList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstructionList(InstructionList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23868};

/// @brief Field _instructions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*  ____instructions;

/// @brief Field _objects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____objects;

/// @brief Field _currentStackDepth, offset: 0x20, size: 0x4, def value: None
 int32_t  ____currentStackDepth;

/// @brief Field _maxStackDepth, offset: 0x24, size: 0x4, def value: None
 int32_t  ____maxStackDepth;

/// @brief Field _currentContinuationsDepth, offset: 0x28, size: 0x4, def value: None
 int32_t  ____currentContinuationsDepth;

/// @brief Field _maxContinuationDepth, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____maxContinuationDepth;

/// @brief Field _runtimeLabelCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ____runtimeLabelCount;

/// @brief Field _labels, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*  ____labels;

/// @brief Field _debugCookies, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  ____debugCookies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____instructions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____objects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____currentStackDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____maxStackDepth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____currentContinuationsDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____maxContinuationDepth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____runtimeLabelCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____labels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____debugCookies) == 0x40, "Offset mismatch!");

static_assert(sizeof(::System::Linq::Expressions::Interpreter::InstructionList) == 0x48, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
// Dependencies System.Object
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: System.Linq.Expressions.Interpreter.InstructionList/DebugView
class CORDL_TYPE InstructionList_DebugView : public ::System::Object {
public:
// Declarations
using InstructionView = ::GlobalNamespace::DebugView_InstructionList_InstructionView;

/// @brief Method GetInstructionViews, addr 0xa891084, size 0x5fc, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::DebugView_InstructionList_InstructionView> GetInstructionViews(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*  instructions, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*  objects, ::System::Func_2<int32_t,int32_t>*  labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  debugCookies) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstructionList_DebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstructionList_DebugView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InstructionList_DebugView(InstructionList_DebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstructionList_DebugView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstructionList_DebugView(InstructionList_DebugView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23867};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Linq::Expressions::Interpreter::InstructionList_DebugView) == 0x10, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
