#pragma once
// IWYU pragma private; include "System/Configuration/IgnoreSectionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__IgnoreSectionHandler_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::IgnoreSectionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IgnoreSectionHandler::*)()>(&::System::Configuration::IgnoreSectionHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcc7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IgnoreSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IgnoreSectionHandler.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::IgnoreSectionHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Configuration::IgnoreSectionHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfccb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IgnoreSectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::IgnoreSectionHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::IgnoreSectionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IgnoreSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::IgnoreSectionHandler::Create(::System::Object*  parent, ::System::Object*  configContext, ::System::Xml::XmlNode*  section)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IgnoreSectionHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parent, configContext, section);
}
inline ::System::Configuration::IgnoreSectionHandler* System::Configuration::IgnoreSectionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::IgnoreSectionHandler*>());
}
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr  System::Configuration::IgnoreSectionHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* System::Configuration::IgnoreSectionHandler::i___System__Configuration__IConfigurationSectionHandler() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::IgnoreSectionHandler::IgnoreSectionHandler()   {
}
