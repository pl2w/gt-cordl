#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/Function.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_FunctionType_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_AstType_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__Function_FunctionType_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Function::*)(::GlobalNamespace::Function_FunctionType, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*)>(&::MS::Internal::Xml::XPath::Function::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xab879f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Function_FunctionType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Function::*)(::StringW, ::StringW, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*)>(&::MS::Internal::Xml::XPath::Function::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xab87a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::Function::*)(::GlobalNamespace::Function_FunctionType, ::MS::Internal::Xml::XPath::AstNode*)>(&::MS::Internal::Xml::XPath::Function::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xab87b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Function_FunctionType>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AstNode_AstType (::MS::Internal::Xml::XPath::Function::*)()>(&::MS::Internal::Xml::XPath::Function::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xab87c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                    {::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::Function.get_ReturnType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::Function::*)()>(&::MS::Internal::Xml::XPath::Function::get_ReturnType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xab87c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                    {::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(), 5}
                ));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::Function_FunctionType& MS::Internal::Xml::XPath::Function::__cordl_internal_get__functionType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____functionType;
}
constexpr ::GlobalNamespace::Function_FunctionType const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__functionType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____functionType;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__functionType(::GlobalNamespace::Function_FunctionType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____functionType = value;
}
constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*& MS::Internal::Xml::XPath::Function::__cordl_internal_get__argumentList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____argumentList;
}
constexpr ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>* const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__argumentList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____argumentList;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__argumentList(::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____argumentList = value;
}
constexpr ::StringW& MS::Internal::Xml::XPath::Function::__cordl_internal_get__name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____name;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____name = value;
}
constexpr ::StringW& MS::Internal::Xml::XPath::Function::__cordl_internal_get__prefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr ::StringW const& MS::Internal::Xml::XPath::Function::__cordl_internal_get__prefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr void MS::Internal::Xml::XPath::Function::__cordl_internal_set__prefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefix = value;
}
inline void MS::Internal::Xml::XPath::Function::setStaticF_ReturnTypes(::ArrayW<::System::Xml::XPath::XPathResultType>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "ReturnTypes", ::MS::Internal::Xml::XPath::Function*>(std::forward<::ArrayW<::System::Xml::XPath::XPathResultType>>(value));
}
inline ::ArrayW<::System::Xml::XPath::XPathResultType> MS::Internal::Xml::XPath::Function::getStaticF_ReturnTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::XPath::XPathResultType>, "ReturnTypes", ::MS::Internal::Xml::XPath::Function*>();
}
inline void MS::Internal::Xml::XPath::Function::_ctor(::GlobalNamespace::Function_FunctionType  ftype, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Function_FunctionType>(), ::i2c::type_of<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ftype, argumentList);
}
inline void MS::Internal::Xml::XPath::Function::_ctor(::StringW  prefix, ::StringW  name, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, name, argumentList);
}
inline void MS::Internal::Xml::XPath::Function::_ctor(::GlobalNamespace::Function_FunctionType  ftype, ::MS::Internal::Xml::XPath::AstNode*  arg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(),
                        {".ctor", {}, {::i2c::type_of<::GlobalNamespace::Function_FunctionType>(), ::i2c::type_of<::MS::Internal::Xml::XPath::AstNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ftype, arg);
}
inline ::GlobalNamespace::AstNode_AstType MS::Internal::Xml::XPath::Function::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AstNode_AstType>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::Function::get_ReturnType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MS::Internal::Xml::XPath::Function*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::Function* MS::Internal::Xml::XPath::Function::New_ctor(::GlobalNamespace::Function_FunctionType  ftype, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Function*>(ftype, argumentList));
}
inline ::MS::Internal::Xml::XPath::Function* MS::Internal::Xml::XPath::Function::New_ctor(::StringW  prefix, ::StringW  name, ::System::Collections::Generic::List_1<::MS::Internal::Xml::XPath::AstNode*>*  argumentList)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Function*>(prefix, name, argumentList));
}
inline ::MS::Internal::Xml::XPath::Function* MS::Internal::Xml::XPath::Function::New_ctor(::GlobalNamespace::Function_FunctionType  ftype, ::MS::Internal::Xml::XPath::AstNode*  arg)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::Function*>(ftype, arg));
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::Function::Function()   {
}
