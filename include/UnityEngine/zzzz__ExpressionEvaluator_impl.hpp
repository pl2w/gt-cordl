#pragma once
// IWYU pragma private; include "UnityEngine/ExpressionEvaluator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_Associativity_impl.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_Op_impl.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_PcgRandom_impl.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_Associativity_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_Op_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_PcgRandom_def.hpp"
#include "UnityEngine/zzzz__ExpressionEvaluator_def.hpp"
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.EvaluateDouble
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<::StringW>, ::by_ref<double_t>, int32_t, int32_t)>(&::UnityEngine::ExpressionEvaluator::EvaluateDouble)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0xb571ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"EvaluateDouble", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.InfixToRPN
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>)>(&::UnityEngine::ExpressionEvaluator::InfixToRPN)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xb57282c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"InfixToRPN", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.NeedToPop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Collections::Generic::Stack_1<::StringW>*, ::UnityEngine::ExpressionEvaluator_Operator*)>(&::UnityEngine::ExpressionEvaluator::NeedToPop)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb572c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"NeedToPop", {}, {::i2c::type_of<::System::Collections::Generic::Stack_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::ExpressionEvaluator_Operator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.ExpressionToTokens
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::StringW, ::by_ref<bool>)>(&::UnityEngine::ExpressionEvaluator::ExpressionToTokens)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0xb572d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"ExpressionToTokens", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsCommand)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb5723cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsCommand", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsVariable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsVariable)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb5727c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsDelayedFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsDelayedFunction)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb572c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsDelayedFunction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.IsOperator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::IsOperator)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5722ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsOperator", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.TokenToOperator
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ExpressionEvaluator_Operator* (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::TokenToOperator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb57232c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"TokenToOperator", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.PreFormatExpression
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::ExpressionEvaluator::PreFormatExpression)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb5731d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"PreFormatExpression", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.FixUnaryOperators
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (*)(::ArrayW<::StringW>)>(&::UnityEngine::ExpressionEvaluator::FixUnaryOperators)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb573390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"FixUnaryOperators", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator.EvaluateOp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::ArrayW<double_t>, ::GlobalNamespace::ExpressionEvaluator_Op, int32_t, int32_t)>(&::UnityEngine::ExpressionEvaluator::EvaluateOp)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0xb572478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"EvaluateOp", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<::GlobalNamespace::ExpressionEvaluator_Op>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ExpressionEvaluator::setStaticF_s_Random(::GlobalNamespace::ExpressionEvaluator_PcgRandom  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::ExpressionEvaluator_PcgRandom, "s_Random", ::UnityEngine::ExpressionEvaluator*>(std::forward<::GlobalNamespace::ExpressionEvaluator_PcgRandom>(value));
}
inline ::GlobalNamespace::ExpressionEvaluator_PcgRandom UnityEngine::ExpressionEvaluator::getStaticF_s_Random()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::ExpressionEvaluator_PcgRandom, "s_Random", ::UnityEngine::ExpressionEvaluator*>();
}
inline void UnityEngine::ExpressionEvaluator::setStaticF_s_Operators(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>*, "s_Operators", ::UnityEngine::ExpressionEvaluator*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>* UnityEngine::ExpressionEvaluator::getStaticF_s_Operators()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::ExpressionEvaluator_Operator*>*, "s_Operators", ::UnityEngine::ExpressionEvaluator*>();
}
template<typename T>
inline bool UnityEngine::ExpressionEvaluator::Evaluate(::StringW  expression, ::by_ref<T>  value, ::by_ref<::UnityEngine::ExpressionEvaluator_Expression*>  delayed)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                    {"Evaluate", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<::UnityEngine::ExpressionEvaluator_Expression*>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expression, value, delayed);
}
template<typename T>
inline bool UnityEngine::ExpressionEvaluator::EvaluateTokens(::ArrayW<::StringW>  tokens, ::by_ref<T>  value, int32_t  index, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                    {"EvaluateTokens", {::i2c::class_of<T>()}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokens, value, index, count);
}
inline bool UnityEngine::ExpressionEvaluator::EvaluateDouble(::ArrayW<::StringW>  tokens, ::by_ref<double_t>  value, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"EvaluateDouble", {}, {::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::by_ref<double_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tokens, value, index, count);
}
inline ::ArrayW<::StringW> UnityEngine::ExpressionEvaluator::InfixToRPN(::ArrayW<::StringW>  tokens)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"InfixToRPN", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, tokens);
}
inline bool UnityEngine::ExpressionEvaluator::NeedToPop(::System::Collections::Generic::Stack_1<::StringW>*  operatorStack, ::UnityEngine::ExpressionEvaluator_Operator*  newOperator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"NeedToPop", {}, {::i2c::type_of<::System::Collections::Generic::Stack_1<::StringW>*>(), ::i2c::type_of<::UnityEngine::ExpressionEvaluator_Operator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, operatorStack, newOperator);
}
inline ::ArrayW<::StringW> UnityEngine::ExpressionEvaluator::ExpressionToTokens(::StringW  expression, ::by_ref<bool>  hasVariables)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"ExpressionToTokens", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, expression, hasVariables);
}
inline bool UnityEngine::ExpressionEvaluator::IsCommand(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsCommand", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::ExpressionEvaluator::IsVariable(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsVariable", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::ExpressionEvaluator::IsDelayedFunction(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsDelayedFunction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline bool UnityEngine::ExpressionEvaluator::IsOperator(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"IsOperator", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, token);
}
inline ::UnityEngine::ExpressionEvaluator_Operator* UnityEngine::ExpressionEvaluator::TokenToOperator(::StringW  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"TokenToOperator", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ExpressionEvaluator_Operator*>(nullptr, ___internal_method, token);
}
inline ::StringW UnityEngine::ExpressionEvaluator::PreFormatExpression(::StringW  expression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"PreFormatExpression", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, expression);
}
inline ::ArrayW<::StringW> UnityEngine::ExpressionEvaluator::FixUnaryOperators(::ArrayW<::StringW>  tokens)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"FixUnaryOperators", {}, {::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(nullptr, ___internal_method, tokens);
}
inline double_t UnityEngine::ExpressionEvaluator::EvaluateOp(::ArrayW<double_t>  values, ::GlobalNamespace::ExpressionEvaluator_Op  op, int32_t  index, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                        {"EvaluateOp", {}, {::i2c::type_of<::ArrayW<double_t>>(), ::i2c::type_of<::GlobalNamespace::ExpressionEvaluator_Op>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, values, op, index, count);
}
template<typename T>
inline bool UnityEngine::ExpressionEvaluator::TryParse(::StringW  expression, ::by_ref<T>  result)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ExpressionEvaluator*>(),
                    {"TryParse", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, expression, result);
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator::ExpressionEvaluator()   {
}
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ExpressionEvaluator___c::*)()>(&::UnityEngine::ExpressionEvaluator___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb573d68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator___c._ExpressionToTokens_b__14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ExpressionEvaluator___c::*)(::StringW)>(&::UnityEngine::ExpressionEvaluator___c::_ExpressionToTokens_b__14_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb573d70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator___c*>(),
                        {"<ExpressionToTokens>b__14_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::ExpressionEvaluator___c::setStaticF___9(::UnityEngine::ExpressionEvaluator___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::ExpressionEvaluator___c*, "<>9", ::UnityEngine::ExpressionEvaluator___c*>(std::forward<::UnityEngine::ExpressionEvaluator___c*>(value));
}
inline ::UnityEngine::ExpressionEvaluator___c* UnityEngine::ExpressionEvaluator___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::ExpressionEvaluator___c*, "<>9", ::UnityEngine::ExpressionEvaluator___c*>();
}
inline void UnityEngine::ExpressionEvaluator___c::setStaticF___9__14_0(::System::Func_2<::StringW,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::StringW,bool>*, "<>9__14_0", ::UnityEngine::ExpressionEvaluator___c*>(std::forward<::System::Func_2<::StringW,bool>*>(value));
}
inline ::System::Func_2<::StringW,bool>* UnityEngine::ExpressionEvaluator___c::getStaticF___9__14_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::StringW,bool>*, "<>9__14_0", ::UnityEngine::ExpressionEvaluator___c*>();
}
inline void UnityEngine::ExpressionEvaluator___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::ExpressionEvaluator___c::_ExpressionToTokens_b__14_0(::StringW  f)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator___c*>(),
                        {"<ExpressionToTokens>b__14_0", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, f);
}
inline ::UnityEngine::ExpressionEvaluator___c* UnityEngine::ExpressionEvaluator___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ExpressionEvaluator___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator___c::ExpressionEvaluator___c()   {
}
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_Operator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ExpressionEvaluator_Operator::*)(::GlobalNamespace::ExpressionEvaluator_Op, int32_t, int32_t, ::GlobalNamespace::ExpressionEvaluator_Associativity)>(&::UnityEngine::ExpressionEvaluator_Operator::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb573ae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Operator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ExpressionEvaluator_Op>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ExpressionEvaluator_Associativity>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ExpressionEvaluator_Op& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_op()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op;
}
constexpr ::GlobalNamespace::ExpressionEvaluator_Op const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_op() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___op;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_op(::GlobalNamespace::ExpressionEvaluator_Op  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___op = value;
}
constexpr int32_t& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_precedence()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___precedence;
}
constexpr int32_t const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_precedence() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___precedence;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_precedence(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___precedence = value;
}
constexpr ::GlobalNamespace::ExpressionEvaluator_Associativity& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_associativity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___associativity;
}
constexpr ::GlobalNamespace::ExpressionEvaluator_Associativity const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_associativity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___associativity;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_associativity(::GlobalNamespace::ExpressionEvaluator_Associativity  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___associativity = value;
}
constexpr int32_t& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_inputs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputs;
}
constexpr int32_t const& UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_get_inputs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inputs;
}
constexpr void UnityEngine::ExpressionEvaluator_Operator::__cordl_internal_set_inputs(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inputs = value;
}
inline void UnityEngine::ExpressionEvaluator_Operator::_ctor(::GlobalNamespace::ExpressionEvaluator_Op  op, int32_t  precedence, int32_t  inputs, ::GlobalNamespace::ExpressionEvaluator_Associativity  associativity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Operator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::ExpressionEvaluator_Op>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::ExpressionEvaluator_Associativity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, precedence, inputs, associativity);
}
inline ::UnityEngine::ExpressionEvaluator_Operator* UnityEngine::ExpressionEvaluator_Operator::New_ctor(::GlobalNamespace::ExpressionEvaluator_Op  op, int32_t  precedence, int32_t  inputs, ::GlobalNamespace::ExpressionEvaluator_Associativity  associativity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ExpressionEvaluator_Operator*>(op, precedence, inputs, associativity));
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator_Operator::ExpressionEvaluator_Operator()   {
}
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_Expression._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ExpressionEvaluator_Expression::*)(::StringW)>(&::UnityEngine::ExpressionEvaluator_Expression::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb573b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_Expression.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ExpressionEvaluator_Expression::*)(::System::Object*)>(&::UnityEngine::ExpressionEvaluator_Expression::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb573bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(),
                    {::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_Expression.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::ExpressionEvaluator_Expression::*)()>(&::UnityEngine::ExpressionEvaluator_Expression::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb573c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(),
                    {::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ExpressionEvaluator_Expression.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::ExpressionEvaluator_Expression::*)()>(&::UnityEngine::ExpressionEvaluator_Expression::ToString)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb573c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(),
                    {::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(), 3}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::StringW>& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_rpnTokens()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpnTokens;
}
constexpr ::ArrayW<::StringW> const& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_rpnTokens() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rpnTokens;
}
constexpr void UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_set_rpnTokens(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rpnTokens = value;
}
constexpr bool& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_hasVariables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasVariables;
}
constexpr bool const& UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_get_hasVariables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasVariables;
}
constexpr void UnityEngine::ExpressionEvaluator_Expression::__cordl_internal_set_hasVariables(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasVariables = value;
}
inline void UnityEngine::ExpressionEvaluator_Expression::_ctor(::StringW  expression)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, expression);
}
template<typename T>
inline bool UnityEngine::ExpressionEvaluator_Expression::Evaluate(::by_ref<T>  value, int32_t  index, int32_t  count)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(),
                    {"Evaluate", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value, index, count);
}
inline bool UnityEngine::ExpressionEvaluator_Expression::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::ExpressionEvaluator_Expression::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW UnityEngine::ExpressionEvaluator_Expression::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::ExpressionEvaluator_Expression*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::ExpressionEvaluator_Expression* UnityEngine::ExpressionEvaluator_Expression::New_ctor(::StringW  expression)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ExpressionEvaluator_Expression*>(expression));
}
// Ctor Parameters []
constexpr ::UnityEngine::ExpressionEvaluator_Expression::ExpressionEvaluator_Expression()   {
}
