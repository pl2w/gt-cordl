#pragma once
// IWYU pragma private; include "System/Configuration/NameValueSectionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__NameValueSectionHandler_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::NameValueSectionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::NameValueSectionHandler::*)()>(&::System::Configuration::NameValueSectionHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::NameValueSectionHandler.get_KeyAttributeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::NameValueSectionHandler::*)()>(&::System::Configuration::NameValueSectionHandler::get_KeyAttributeName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::NameValueSectionHandler.get_ValueAttributeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::NameValueSectionHandler::*)()>(&::System::Configuration::NameValueSectionHandler::get_ValueAttributeName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd0a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::NameValueSectionHandler.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::NameValueSectionHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Configuration::NameValueSectionHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(),
                        {"Create", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlNode*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::NameValueSectionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Configuration::NameValueSectionHandler::get_KeyAttributeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Configuration::NameValueSectionHandler::get_ValueAttributeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::NameValueSectionHandler::Create(::System::Object*  parent, ::System::Object*  context, ::System::Xml::XmlNode*  section)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NameValueSectionHandler*>(),
                        {"Create", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::XmlNode*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parent, context, section);
}
inline ::System::Configuration::NameValueSectionHandler* System::Configuration::NameValueSectionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::NameValueSectionHandler*>());
}
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr  System::Configuration::NameValueSectionHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* System::Configuration::NameValueSectionHandler::i___System__Configuration__IConfigurationSectionHandler() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::NameValueSectionHandler::NameValueSectionHandler()   {
}
