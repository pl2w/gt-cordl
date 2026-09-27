#pragma once
// IWYU pragma private; include "System/Configuration/DictionarySectionHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__DictionarySectionHandler_def.hpp"
#include "System/Configuration/zzzz__IConfigurationSectionHandler_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::DictionarySectionHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::DictionarySectionHandler::*)()>(&::System::Configuration::DictionarySectionHandler::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::DictionarySectionHandler.get_KeyAttributeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::DictionarySectionHandler::*)()>(&::System::Configuration::DictionarySectionHandler::get_KeyAttributeName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::DictionarySectionHandler.get_ValueAttributeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::DictionarySectionHandler::*)()>(&::System::Configuration::DictionarySectionHandler::get_ValueAttributeName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcb2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::DictionarySectionHandler.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::DictionarySectionHandler::*)(::System::Object*, ::System::Object*, ::System::Xml::XmlNode*)>(&::System::Configuration::DictionarySectionHandler::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(),
                    {::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(), 7}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::DictionarySectionHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Configuration::DictionarySectionHandler::get_KeyAttributeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Configuration::DictionarySectionHandler::get_ValueAttributeName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::DictionarySectionHandler::Create(::System::Object*  parent, ::System::Object*  context, ::System::Xml::XmlNode*  section)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::DictionarySectionHandler*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, parent, context, section);
}
inline ::System::Configuration::DictionarySectionHandler* System::Configuration::DictionarySectionHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::DictionarySectionHandler*>());
}
/// @brief Convert operator to "::System::Configuration::IConfigurationSectionHandler"
constexpr  System::Configuration::DictionarySectionHandler::operator ::System::Configuration::IConfigurationSectionHandler*() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IConfigurationSectionHandler"
constexpr ::System::Configuration::IConfigurationSectionHandler* System::Configuration::DictionarySectionHandler::i___System__Configuration__IConfigurationSectionHandler() noexcept {
return static_cast<::System::Configuration::IConfigurationSectionHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::DictionarySectionHandler::DictionarySectionHandler()   {
}
