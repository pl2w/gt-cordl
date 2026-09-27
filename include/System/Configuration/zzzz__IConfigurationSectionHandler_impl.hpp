#pragma once
// IWYU pragma private; include "System/Configuration/IConfigurationSectionHandler.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::IConfigurationSectionHandler.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::IConfigurationSectionHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Configuration::IConfigurationSectionHandler::Create)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IConfigurationSectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::IConfigurationSectionHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::System::Object* System::Configuration::IConfigurationSectionHandler::Create(::System::Object*  parent, ::System::Object*  configContext, ::System::Xml::XmlNode*  section)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IConfigurationSectionHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parent, configContext, section);
}
