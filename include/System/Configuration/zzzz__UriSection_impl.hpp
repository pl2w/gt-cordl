#pragma once
// IWYU pragma private; include "System/Configuration/UriSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Configuration/zzzz__UriSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__IdnElement_def.hpp"
#include "System/Configuration/zzzz__IriParsingElement_def.hpp"
#include "System/Configuration/zzzz__SchemeSettingElementCollection_def.hpp"
//  Writing Method size for method: ::System::Configuration::UriSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::UriSection::*)()>(&::System::Configuration::UriSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::UriSection.get_Idn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::IdnElement* (::System::Configuration::UriSection::*)()>(&::System::Configuration::UriSection::get_Idn)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {"get_Idn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::UriSection.get_IriParsing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::IriParsingElement* (::System::Configuration::UriSection::*)()>(&::System::Configuration::UriSection::get_IriParsing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {"get_IriParsing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::UriSection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::UriSection::*)()>(&::System::Configuration::UriSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::UriSection*>(),
                    {::i2c::class_of<::System::Configuration::UriSection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::UriSection.get_SchemeSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SchemeSettingElementCollection* (::System::Configuration::UriSection::*)()>(&::System::Configuration::UriSection::get_SchemeSettings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {"get_SchemeSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::UriSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::IdnElement* System::Configuration::UriSection::get_Idn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {"get_Idn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::IdnElement*>(this, ___internal_method);
}
inline ::System::Configuration::IriParsingElement* System::Configuration::UriSection::get_IriParsing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {"get_IriParsing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::IriParsingElement*>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::UriSection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::UriSection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SchemeSettingElementCollection* System::Configuration::UriSection::get_SchemeSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UriSection*>(),
                        {"get_SchemeSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SchemeSettingElementCollection*>(this, ___internal_method);
}
inline ::System::Configuration::UriSection* System::Configuration::UriSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::UriSection*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::UriSection::UriSection()   {
}
