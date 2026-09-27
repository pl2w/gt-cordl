#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_Associativity_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_Op_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_PcgRandom_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ExpressionEvaluator)
namespace GlobalNamespace {
struct ExpressionEvaluator_Associativity;
}
namespace GlobalNamespace {
struct ExpressionEvaluator_Op;
}
namespace GlobalNamespace {
struct ExpressionEvaluator_PcgRandom;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine {
class ExpressionEvaluator_Expression;
}
namespace UnityEngine {
class ExpressionEvaluator_Operator;
}
namespace UnityEngine {
class ExpressionEvaluator___c;
}
// Forward declare root types
namespace UnityEngine {
class ExpressionEvaluator;
}
namespace UnityEngine {
class ExpressionEvaluator_Expression;
}
namespace UnityEngine {
class ExpressionEvaluator_Operator;
}
namespace UnityEngine {
class ExpressionEvaluator___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::ExpressionEvaluator*);
MARK_REF_T(::UnityEngine::ExpressionEvaluator_Expression*);
MARK_REF_T(::UnityEngine::ExpressionEvaluator_Operator*);
MARK_REF_T(::UnityEngine::ExpressionEvaluator___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::ExpressionEvaluator*, "UnityEngine", "ExpressionEvaluator");
DEFINE_IL2CPP_CLASS(::UnityEngine::ExpressionEvaluator_Expression*, "UnityEngine", "ExpressionEvaluator/Expression");
DEFINE_IL2CPP_CLASS(::UnityEngine::ExpressionEvaluator_Operator*, "UnityEngine", "ExpressionEvaluator/Operator");
DEFINE_IL2CPP_CLASS(::UnityEngine::ExpressionEvaluator___c*, "UnityEngine", "ExpressionEvaluator/<>c");
// [MovedFrom(true, "UnityEditor", "UnityEditor", null)]
// Dependencies System.Object, UnityEngine.ExpressionEvaluator::PcgRandom
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator
class CORDL_TYPE ExpressionEvaluator : public ::System::Object {
public:
// Declarations
using Associativity = ::GlobalNamespace::ExpressionEvaluator_Associativity;

using Op = ::GlobalNamespace::ExpressionEvaluator_Op;

using PcgRandom = ::GlobalNamespace::ExpressionEvaluator_PcgRandom;

using Expression = ::UnityEngine::ExpressionEvaluator_Expression;

using Operator = ::UnityEngine::ExpressionEvaluator_Operator;

using __c = ::UnityEngine::ExpressionEvaluator___c;

/// @brief Field s_Operators, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Operators, put=setStaticF_s_Operators)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>*  s_Operators;

/// @brief Field s_Random, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_Random, put=setStaticF_s_Random)) ::GlobalNamespace::ExpressionEvaluator_PcgRandom  s_Random;

/// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool Evaluate(::StringW  expression, ::by_ref<T>  value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*>  delayed) ;

/// @brief Method EvaluateDouble, addr 0xb571ddc, size 0x4d0, virtual false, abstract: false, final false
static inline bool EvaluateDouble(::ArrayW<::StringW>  tokens, ::by_ref<double_t>  value, int32_t  index, int32_t  count) ;

/// @brief Method EvaluateOp, addr 0xb572478, size 0x350, virtual false, abstract: false, final false
static inline double_t EvaluateOp(::ArrayW<double_t>  values, ::GlobalNamespace::ExpressionEvaluator_Op  op, int32_t  index, int32_t  count) ;

/// @brief Method EvaluateTokens, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool EvaluateTokens(::ArrayW<::StringW>  tokens, ::by_ref<T>  value, int32_t  index, int32_t  count) ;

/// @brief Method ExpressionToTokens, addr 0xb572d88, size 0x450, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> ExpressionToTokens(::StringW  expression, ::by_ref<bool>  hasVariables) ;

/// @brief Method FixUnaryOperators, addr 0xb573390, size 0x184, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> FixUnaryOperators(::ArrayW<::StringW>  tokens) ;

/// @brief Method InfixToRPN, addr 0xb57282c, size 0x404, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> InfixToRPN(::ArrayW<::StringW>  tokens) ;

/// @brief Method IsCommand, addr 0xb5723cc, size 0xac, virtual false, abstract: false, final false
static inline bool IsCommand(::StringW  token) ;

/// @brief Method IsDelayedFunction, addr 0xb572c30, size 0x6c, virtual false, abstract: false, final false
static inline bool IsDelayedFunction(::StringW  token) ;

/// @brief Method IsOperator, addr 0xb5722ac, size 0x80, virtual false, abstract: false, final false
static inline bool IsOperator(::StringW  token) ;

/// @brief Method IsVariable, addr 0xb5727c8, size 0x64, virtual false, abstract: false, final false
static inline bool IsVariable(::StringW  token) ;

/// @brief Method NeedToPop, addr 0xb572c9c, size 0xec, virtual false, abstract: false, final false
static inline bool NeedToPop(::System::Collections::Generic::Stack_1<::StringW>*  operatorStack, ::UnityEngine::ExpressionEvaluator_Operator*  newOperator) ;

/// @brief Method PreFormatExpression, addr 0xb5731d8, size 0x1b8, virtual false, abstract: false, final false
static inline ::StringW PreFormatExpression(::StringW  expression) ;

/// @brief Method TokenToOperator, addr 0xb57232c, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::ExpressionEvaluator_Operator* TokenToOperator(::StringW  token) ;

/// @brief Method TryParse, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline bool TryParse(::StringW  expression, ::by_ref<T>  result) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>* getStaticF_s_Operators() ;

static inline ::GlobalNamespace::ExpressionEvaluator_PcgRandom getStaticF_s_Random() ;

static inline void setStaticF_s_Operators(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>*  value) ;

static inline void setStaticF_s_Random(::GlobalNamespace::ExpressionEvaluator_PcgRandom  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpressionEvaluator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpressionEvaluator(ExpressionEvaluator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpressionEvaluator(ExpressionEvaluator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14834};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ExpressionEvaluator) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator/<>c
class CORDL_TYPE ExpressionEvaluator___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::ExpressionEvaluator___c*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Func_2<::StringW,bool>*  __9__14_0;

static inline ::UnityEngine::ExpressionEvaluator___c* New_ctor() ;

/// @brief Method <ExpressionToTokens>b__14_0, addr 0xb573d70, size 0x80, virtual false, abstract: false, final false
inline bool _ExpressionToTokens_b__14_0(::StringW  f) ;

/// @brief Method .ctor, addr 0xb573d68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::ExpressionEvaluator___c* getStaticF___9() ;

static inline ::System::Func_2<::StringW,bool>* getStaticF___9__14_0() ;

static inline void setStaticF___9(::UnityEngine::ExpressionEvaluator___c*  value) ;

static inline void setStaticF___9__14_0(::System::Func_2<::StringW,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpressionEvaluator___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpressionEvaluator___c(ExpressionEvaluator___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpressionEvaluator___c(ExpressionEvaluator___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14833};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::ExpressionEvaluator___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object, UnityEngine.ExpressionEvaluator::Associativity, UnityEngine.ExpressionEvaluator::Op
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator/Operator
class CORDL_TYPE ExpressionEvaluator_Operator : public ::System::Object {
public:
// Declarations
/// @brief Field associativity, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_associativity, put=__cordl_internal_set_associativity)) ::GlobalNamespace::ExpressionEvaluator_Associativity  associativity;

/// @brief Field inputs, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_inputs, put=__cordl_internal_set_inputs)) int32_t  inputs;

/// @brief Field op, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_op, put=__cordl_internal_set_op)) ::GlobalNamespace::ExpressionEvaluator_Op  op;

/// @brief Field precedence, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_precedence, put=__cordl_internal_set_precedence)) int32_t  precedence;

static inline ::UnityEngine::ExpressionEvaluator_Operator* New_ctor(::GlobalNamespace::ExpressionEvaluator_Op  op, int32_t  precedence, int32_t  inputs, ::GlobalNamespace::ExpressionEvaluator_Associativity  associativity) ;

constexpr ::GlobalNamespace::ExpressionEvaluator_Associativity const& __cordl_internal_get_associativity() const;

constexpr ::GlobalNamespace::ExpressionEvaluator_Associativity& __cordl_internal_get_associativity() ;

constexpr int32_t const& __cordl_internal_get_inputs() const;

constexpr int32_t& __cordl_internal_get_inputs() ;

constexpr ::GlobalNamespace::ExpressionEvaluator_Op const& __cordl_internal_get_op() const;

constexpr ::GlobalNamespace::ExpressionEvaluator_Op& __cordl_internal_get_op() ;

constexpr int32_t const& __cordl_internal_get_precedence() const;

constexpr int32_t& __cordl_internal_get_precedence() ;

constexpr void __cordl_internal_set_associativity(::GlobalNamespace::ExpressionEvaluator_Associativity  value) ;

constexpr void __cordl_internal_set_inputs(int32_t  value) ;

constexpr void __cordl_internal_set_op(::GlobalNamespace::ExpressionEvaluator_Op  value) ;

constexpr void __cordl_internal_set_precedence(int32_t  value) ;

/// @brief Method .ctor, addr 0xb573ae8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::ExpressionEvaluator_Op  op, int32_t  precedence, int32_t  inputs, ::GlobalNamespace::ExpressionEvaluator_Associativity  associativity) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpressionEvaluator_Operator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Operator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpressionEvaluator_Operator(ExpressionEvaluator_Operator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Operator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpressionEvaluator_Operator(ExpressionEvaluator_Operator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14832};

/// @brief Field op, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::ExpressionEvaluator_Op  ___op;

/// @brief Field precedence, offset: 0x14, size: 0x4, def value: None
 int32_t  ___precedence;

/// @brief Field associativity, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::ExpressionEvaluator_Associativity  ___associativity;

/// @brief Field inputs, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___inputs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___op) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___precedence) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___associativity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Operator, ___inputs) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ExpressionEvaluator_Operator) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.ExpressionEvaluator/Expression
class CORDL_TYPE ExpressionEvaluator_Expression : public ::System::Object {
public:
// Declarations
/// @brief Field hasVariables, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasVariables, put=__cordl_internal_set_hasVariables)) bool  hasVariables;

/// @brief Field rpnTokens, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_rpnTokens, put=__cordl_internal_set_rpnTokens)) ::ArrayW<::StringW>  rpnTokens;

/// @brief Method Equals, addr 0xb573bb4, size 0xa4, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Evaluate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool Evaluate(::by_ref<T>  value, int32_t  index, int32_t  count) ;

/// @brief Method GetHashCode, addr 0xb573c58, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::ExpressionEvaluator_Expression* New_ctor(::StringW  expression) ;

/// @brief Method ToString, addr 0xb573c74, size 0x4c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get_hasVariables() const;

constexpr bool& __cordl_internal_get_hasVariables() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_rpnTokens() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_rpnTokens() ;

constexpr void __cordl_internal_set_hasVariables(bool  value) ;

constexpr void __cordl_internal_set_rpnTokens(::ArrayW<::StringW>  value) ;

/// @brief Method .ctor, addr 0xb573b28, size 0x8c, virtual false, abstract: false, final false
inline void _ctor(::StringW  expression) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExpressionEvaluator_Expression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Expression", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ExpressionEvaluator_Expression(ExpressionEvaluator_Expression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExpressionEvaluator_Expression", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExpressionEvaluator_Expression(ExpressionEvaluator_Expression const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14828};

/// @brief Field rpnTokens, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___rpnTokens;

/// @brief Field hasVariables, offset: 0x18, size: 0x1, def value: None
 bool  ___hasVariables;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Expression, ___rpnTokens) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ExpressionEvaluator_Expression, ___hasVariables) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::ExpressionEvaluator_Expression) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
