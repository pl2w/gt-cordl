#pragma once
// IWYU pragma private; include "System/Configuration/AppSettingsReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__AppSettingsReader_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Configuration::AppSettingsReader._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::AppSettingsReader::*)()>(&::System::Configuration::AppSettingsReader::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::AppSettingsReader*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::AppSettingsReader.GetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::AppSettingsReader::*)(::StringW, ::System::Type*)>(&::System::Configuration::AppSettingsReader::GetValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::AppSettingsReader*>(),
                        {"GetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::AppSettingsReader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::AppSettingsReader*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::AppSettingsReader::GetValue(::StringW  key, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::AppSettingsReader*>(),
                        {"GetValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, key, type);
}
inline ::System::Configuration::AppSettingsReader* System::Configuration::AppSettingsReader::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::AppSettingsReader*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::AppSettingsReader::AppSettingsReader()   {
}
