#pragma once
// IWYU pragma private; include "System/Configuration/SettingValueElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Configuration/zzzz__SettingValueElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingValueElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingValueElement::*)()>(&::System::Configuration::SettingValueElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::SettingValueElement::*)()>(&::System::Configuration::SettingValueElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.get_ValueXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Configuration::SettingValueElement::*)()>(&::System::Configuration::SettingValueElement::get_ValueXml)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                        {"get_ValueXml", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.set_ValueXml
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingValueElement::*)(::System::Xml::XmlNode*)>(&::System::Configuration::SettingValueElement::set_ValueXml)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                        {"set_ValueXml", {}, {::i2c::type_of<::System::Xml::XmlNode*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.DeserializeElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingValueElement::*)(::System::Xml::XmlReader*, bool)>(&::System::Configuration::SettingValueElement::DeserializeElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.IsModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingValueElement::*)()>(&::System::Configuration::SettingValueElement::IsModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingValueElement::*)(::System::Configuration::ConfigurationElement*)>(&::System::Configuration::SettingValueElement::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.ResetModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingValueElement::*)()>(&::System::Configuration::SettingValueElement::ResetModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.SerializeToXmlElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingValueElement::*)(::System::Xml::XmlWriter*, ::StringW)>(&::System::Configuration::SettingValueElement::SerializeToXmlElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingValueElement.Unmerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingValueElement::*)(::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationSaveMode)>(&::System::Configuration::SettingValueElement::Unmerge)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 12}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingValueElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::SettingValueElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Xml::XmlNode* System::Configuration::SettingValueElement::get_ValueXml()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                        {"get_ValueXml", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method);
}
inline void System::Configuration::SettingValueElement::set_ValueXml(::System::Xml::XmlNode*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingValueElement*>(),
                        {"set_ValueXml", {}, {::i2c::type_of<::System::Xml::XmlNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::SettingValueElement::DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, serializeCollectionKey);
}
inline bool System::Configuration::SettingValueElement::IsModified()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::SettingValueElement::Reset(::System::Configuration::ConfigurationElement*  parentElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentElement);
}
inline void System::Configuration::SettingValueElement::ResetModified()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Configuration::SettingValueElement::SerializeToXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  elementName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, elementName);
}
inline void System::Configuration::SettingValueElement::Unmerge(::System::Configuration::ConfigurationElement*  sourceElement, ::System::Configuration::ConfigurationElement*  parentElement, ::System::Configuration::ConfigurationSaveMode  saveMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingValueElement*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceElement, parentElement, saveMode);
}
inline ::System::Configuration::SettingValueElement* System::Configuration::SettingValueElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingValueElement*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingValueElement::SettingValueElement()   {
}
