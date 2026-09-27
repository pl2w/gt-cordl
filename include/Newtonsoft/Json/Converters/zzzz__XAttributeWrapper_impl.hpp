#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/XAttributeWrapper.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XObjectWrapper_impl.hpp"
#include "Newtonsoft/Json/Converters/zzzz__XAttributeWrapper_def.hpp"
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "System/Xml/Linq/zzzz__XAttribute_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XAttributeWrapper.get_Attribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Linq::XAttribute* (::Newtonsoft::Json::Converters::XAttributeWrapper::*)()>(&::Newtonsoft::Json::Converters::XAttributeWrapper::get_Attribute)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa3f5344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                        {"get_Attribute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XAttributeWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Converters::XAttributeWrapper::*)(::System::Xml::Linq::XAttribute*)>(&::Newtonsoft::Json::Converters::XAttributeWrapper::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa3f4870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Linq::XAttribute*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XAttributeWrapper.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XAttributeWrapper::*)()>(&::Newtonsoft::Json::Converters::XAttributeWrapper::get_Value)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa3f53bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XAttributeWrapper.get_LocalName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XAttributeWrapper::*)()>(&::Newtonsoft::Json::Converters::XAttributeWrapper::get_LocalName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa3f53d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XAttributeWrapper.get_NamespaceUri
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Converters::XAttributeWrapper::*)()>(&::Newtonsoft::Json::Converters::XAttributeWrapper::get_NamespaceUri)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa3f53fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Converters::XAttributeWrapper.get_ParentNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Newtonsoft::Json::Converters::IXmlNode* (::Newtonsoft::Json::Converters::XAttributeWrapper::*)()>(&::Newtonsoft::Json::Converters::XAttributeWrapper::get_ParentNode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xa3f5420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                    {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 17}
                ));
    return ___internal_method;
  }
};
inline ::System::Xml::Linq::XAttribute* Newtonsoft::Json::Converters::XAttributeWrapper::get_Attribute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                        {"get_Attribute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Linq::XAttribute*>(this, ___internal_method);
}
inline void Newtonsoft::Json::Converters::XAttributeWrapper::_ctor(::System::Xml::Linq::XAttribute*  attribute)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Xml::Linq::XAttribute*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attribute);
}
inline ::StringW Newtonsoft::Json::Converters::XAttributeWrapper::get_Value()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XAttributeWrapper::get_LocalName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Converters::XAttributeWrapper::get_NamespaceUri()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Converters::IXmlNode* Newtonsoft::Json::Converters::XAttributeWrapper::get_ParentNode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Newtonsoft::Json::Converters::XAttributeWrapper*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::Converters::IXmlNode*>(this, ___internal_method);
}
/// @brief [NullableContext(1)]
inline ::Newtonsoft::Json::Converters::XAttributeWrapper* Newtonsoft::Json::Converters::XAttributeWrapper::New_ctor(::System::Xml::Linq::XAttribute*  attribute)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Converters::XAttributeWrapper*>(attribute));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Converters::XAttributeWrapper::XAttributeWrapper()   {
}
