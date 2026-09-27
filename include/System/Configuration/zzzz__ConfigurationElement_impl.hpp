#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElement.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationSaveMode_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::ConfigurationElement::*)()>(&::System::Configuration::ConfigurationElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.DeserializeElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)(::System::Xml::XmlReader*, bool)>(&::System::Configuration::ConfigurationElement::DeserializeElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84ea18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.InitializeDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)()>(&::System::Configuration::ConfigurationElement::InitializeDefault)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84ea50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.IsModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::ConfigurationElement::*)()>(&::System::Configuration::ConfigurationElement::IsModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84ea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.PostDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)()>(&::System::Configuration::ConfigurationElement::PostDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84eac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)(::System::Configuration::ConfigurationElement*)>(&::System::Configuration::ConfigurationElement::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84eaf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.ResetModified
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)()>(&::System::Configuration::ConfigurationElement::ResetModified)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84eb30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.SerializeToXmlElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::ConfigurationElement::*)(::System::Xml::XmlWriter*, ::StringW)>(&::System::Configuration::ConfigurationElement::SerializeToXmlElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84eb68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElement.Unmerge
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationElement::*)(::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationElement*, ::System::Configuration::ConfigurationSaveMode)>(&::System::Configuration::ConfigurationElement::Unmerge)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84eba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElement*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 12}
                ));
    return ___internal_method;
  }
};
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::ConfigurationElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline void System::Configuration::ConfigurationElement::DeserializeElement(::System::Xml::XmlReader*  reader, bool  serializeCollectionKey)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, serializeCollectionKey);
}
inline void System::Configuration::ConfigurationElement::InitializeDefault()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Configuration::ConfigurationElement::IsModified()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::ConfigurationElement::PostDeserialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::ConfigurationElement::Reset(::System::Configuration::ConfigurationElement*  parentElement)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentElement);
}
inline void System::Configuration::ConfigurationElement::ResetModified()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Configuration::ConfigurationElement::SerializeToXmlElement(::System::Xml::XmlWriter*  writer, ::StringW  elementName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, writer, elementName);
}
inline void System::Configuration::ConfigurationElement::Unmerge(::System::Configuration::ConfigurationElement*  sourceElement, ::System::Configuration::ConfigurationElement*  parentElement, ::System::Configuration::ConfigurationSaveMode  saveMode)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElement*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sourceElement, parentElement, saveMode);
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationElement::ConfigurationElement()   {
}
