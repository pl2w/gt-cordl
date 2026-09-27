#pragma once
// IWYU pragma private; include "MS/Internal/Xml/XPath/AstNode.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_def.hpp"
#include "MS/Internal/Xml/XPath/zzzz__AstNode_AstType_def.hpp"
#include "System/Xml/XPath/zzzz__XPathResultType_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AstNode_AstType (::MS::Internal::Xml::XPath::AstNode::*)()>(&::MS::Internal::Xml::XPath::AstNode::get_Type)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(),
                    {::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode.get_ReturnType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XPath::XPathResultType (::MS::Internal::Xml::XPath::AstNode::*)()>(&::MS::Internal::Xml::XPath::AstNode::get_ReturnType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(),
                    {::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::XPath::AstNode._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::MS::Internal::Xml::XPath::AstNode::*)()>(&::MS::Internal::Xml::XPath::AstNode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xab87868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::AstNode_AstType MS::Internal::Xml::XPath::AstNode::get_Type()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AstNode_AstType>(this, ___internal_method);
}
inline ::System::Xml::XPath::XPathResultType MS::Internal::Xml::XPath::AstNode::get_ReturnType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XPath::XPathResultType>(this, ___internal_method);
}
inline void MS::Internal::Xml::XPath::AstNode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::MS::Internal::Xml::XPath::AstNode*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::MS::Internal::Xml::XPath::AstNode* MS::Internal::Xml::XPath::AstNode::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::MS::Internal::Xml::XPath::AstNode*>());
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::XPath::AstNode::AstNode()   {
}
