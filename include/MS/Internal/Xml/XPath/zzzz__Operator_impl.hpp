#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Operator.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_Op_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_AstType_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Operator_Op_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operator._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Operator::*)(::GlobalNamespace::Operator_Op, ::MS::Internal::Xml::XPath::AstNode*, ::MS::Internal::Xml::XPath::AstNode*)>(&::MS::Internal::Xml::XPath::Operator::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xab87e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Operator_Op>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operator.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AstNode_AstType (::MS::Internal::Xml::XPath::Operator::*)()>(&::MS::Internal::Xml::XPath::Operator::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xab87ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(),
                    {::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Operator.get_ReturnType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Operator::*)()>(&::MS::Internal::Xml::XPath::Operator::get_ReturnType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xab87ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(),
                    {::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Operator_Op& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opType;
}
constexpr ::GlobalNamespace::Operator_Op const& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opType;
}
constexpr void MS::Internal::Xml::XPath::Operator::__cordl_internal_set__opType(::GlobalNamespace::Operator_Op  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opType = value;
}
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opnd1;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opnd1;
}
constexpr void MS::Internal::Xml::XPath::Operator::__cordl_internal_set__opnd1(::MS::Internal::Xml::XPath::AstNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opnd1 = value;
}
constexpr ::MS::Internal::Xml::XPath::AstNode*& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opnd2;
}
constexpr ::MS::Internal::Xml::XPath::AstNode* const& MS::Internal::Xml::XPath::Operator::__cordl_internal_get__opnd2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____opnd2;
}
constexpr void MS::Internal::Xml::XPath::Operator::__cordl_internal_set__opnd2(::MS::Internal::Xml::XPath::AstNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____opnd2 = value;
}
inline void MS::Internal::Xml::XPath::Operator::setStaticF_s_invertOp(::ArrayW<::GlobalNamespace::Operator_Op>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::Operator_Op>, "s_invertOp", ::MS::Internal::Xml::XPath::Operator*>(std::forward<::ArrayW<::GlobalNamespace::Operator_Op>>(value));
}
inline ::ArrayW<::GlobalNamespace::Operator_Op> MS::Internal::Xml::XPath::Operator::getStaticF_s_invertOp()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::Operator_Op>, "s_invertOp", ::MS::Internal::Xml::XPath::Operator*>();
}
inline void MS::Internal::Xml::XPath::Operator::_ctor(::GlobalNamespace::Operator_Op  op, ::MS::Internal::Xml::XPath::AstNode*  opnd1, ::MS::Internal::Xml::XPath::AstNode*  opnd2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Operator_Op>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op, opnd1, opnd2);
}
inline ::GlobalNamespace::AstNode_AstType MS::Internal::Xml::XPath::Operator::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AstNode_AstType>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Operator::get_ReturnType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MS::Internal::Xml::XPath::Operator*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Operator* MS::Internal::Xml::XPath::Operator::New_ctor(::GlobalNamespace::Operator_Op  op, ::MS::Internal::Xml::XPath::AstNode*  opnd1, ::MS::Internal::Xml::XPath::AstNode*  opnd2)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Operator*>(op, opnd1, opnd2));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Operator::Operator()   {
}
