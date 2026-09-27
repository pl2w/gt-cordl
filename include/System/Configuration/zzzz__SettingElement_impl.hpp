#pragma once
// IWYU pragma private; include "System/Configuration/SettingElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Configuration/zzzz__SettingElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__SettingValueElement_def.hpp"
#include "System/Configuration/zzzz__SettingsSerializeAs_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElement::*)()>(&::System::Configuration::SettingElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElement::*)(::StringW, ::System::Configuration::SettingsSerializeAs)>(&::System::Configuration::SettingElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Configuration::SettingsSerializeAs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingElement::*)()>(&::System::Configuration::SettingElement::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElement::*)(::StringW)>(&::System::Configuration::SettingElement::set_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::SettingElement::*)()>(&::System::Configuration::SettingElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingElement*>(),
                    {::i2c::class_of<::System::Configuration::SettingElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement.get_SerializeAs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsSerializeAs (::System::Configuration::SettingElement::*)()>(&::System::Configuration::SettingElement::get_SerializeAs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"get_SerializeAs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement.set_SerializeAs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElement::*)(::System::Configuration::SettingsSerializeAs)>(&::System::Configuration::SettingElement::set_SerializeAs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"set_SerializeAs", {}, {::i2c::type_of<::System::Configuration::SettingsSerializeAs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingValueElement* (::System::Configuration::SettingElement::*)()>(&::System::Configuration::SettingElement::get_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc5e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElement.set_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElement::*)(::System::Configuration::SettingValueElement*)>(&::System::Configuration::SettingElement::set_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"set_Value", {}, {::i2c::type_of<::System::Configuration::SettingValueElement*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::SettingElement::_ctor(::StringW  name, ::System::Configuration::SettingsSerializeAs  serializeAs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Configuration::SettingsSerializeAs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, serializeAs);
}
inline ::StringW System::Configuration::SettingElement::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Configuration::SettingElement::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::SettingElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SettingsSerializeAs System::Configuration::SettingElement::get_SerializeAs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"get_SerializeAs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsSerializeAs>(this, ___internal_method);
}
inline void System::Configuration::SettingElement::set_SerializeAs(::System::Configuration::SettingsSerializeAs  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"set_SerializeAs", {}, {::i2c::type_of<::System::Configuration::SettingsSerializeAs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::SettingValueElement* System::Configuration::SettingElement::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingValueElement*>(this, ___internal_method);
}
inline void System::Configuration::SettingElement::set_Value(::System::Configuration::SettingValueElement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElement*>(),
                        {"set_Value", {}, {::i2c::type_of<::System::Configuration::SettingValueElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::SettingElement* System::Configuration::SettingElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingElement*>());
}
inline ::System::Configuration::SettingElement* System::Configuration::SettingElement::New_ctor(::StringW  name, ::System::Configuration::SettingsSerializeAs  serializeAs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingElement*>(name, serializeAs));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingElement::SettingElement()   {
}
