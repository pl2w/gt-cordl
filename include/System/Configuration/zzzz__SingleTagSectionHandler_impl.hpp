#pragma once
// IWYU pragma private; include "System/Configuration/SingleTagSectionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__SingleTagSectionHandler_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SingleTagSectionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SingleTagSectionHandler::*)()>(&::System::Configuration::SingleTagSectionHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd78c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SingleTagSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SingleTagSectionHandler.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SingleTagSectionHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Configuration::SingleTagSectionHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd7c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SingleTagSectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::SingleTagSectionHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SingleTagSectionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SingleTagSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::SingleTagSectionHandler::Create(::System::Object*  parent, ::System::Object*  context, ::System::Xml::XmlNode*  section)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SingleTagSectionHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parent, context, section);
}
inline ::System::Configuration::SingleTagSectionHandler* System::Configuration::SingleTagSectionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SingleTagSectionHandler*>());
}
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr  System::Configuration::SingleTagSectionHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* System::Configuration::SingleTagSectionHandler::i___System__Configuration__IConfigurationSectionHandler() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::SingleTagSectionHandler::SingleTagSectionHandler()   {
}
