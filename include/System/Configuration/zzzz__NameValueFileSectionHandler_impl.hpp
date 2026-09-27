#pragma once
// IWYU pragma private; include "System/Configuration/NameValueFileSectionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__NameValueFileSectionHandler_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::NameValueFileSectionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::NameValueFileSectionHandler::*)()>(&::System::Configuration::NameValueFileSectionHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueFileSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::NameValueFileSectionHandler.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::NameValueFileSectionHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Configuration::NameValueFileSectionHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueFileSectionHandler*>(),
                        {"Create", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::NameValueFileSectionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueFileSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::NameValueFileSectionHandler::Create(::System::Object*  parent, ::System::Object*  configContext, ::System::Xml::XmlNode*  section)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueFileSectionHandler*>(),
                        {"Create", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parent, configContext, section);
}
inline ::System::Configuration::NameValueFileSectionHandler* System::Configuration::NameValueFileSectionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::NameValueFileSectionHandler*>());
}
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr  System::Configuration::NameValueFileSectionHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* System::Configuration::NameValueFileSectionHandler::i___System__Configuration__IConfigurationSectionHandler() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::NameValueFileSectionHandler::NameValueFileSectionHandler()   {
}
