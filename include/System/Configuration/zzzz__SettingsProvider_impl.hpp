#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProvider.hpp"
#include "System/Configuration/Provider/zzzz__ProviderBase_impl.hpp"
#include "System/Configuration/zzzz__SettingsProvider_def.hpp"
#include "System/Configuration/zzzz__SettingsContext_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValueCollection_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProvider::*)()>(&::System::Configuration::SettingsProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf70c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProvider.get_ApplicationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingsProvider::*)()>(&::System::Configuration::SettingsProvider::get_ApplicationName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProvider.set_ApplicationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProvider::*)(::StringW)>(&::System::Configuration::SettingsProvider::set_ApplicationName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProvider.GetPropertyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyValueCollection* (::System::Configuration::SettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*)>(&::System::Configuration::SettingsProvider::GetPropertyValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProvider.SetPropertyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyValueCollection*)>(&::System::Configuration::SettingsProvider::SetPropertyValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Configuration::SettingsProvider::get_ApplicationName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Configuration::SettingsProvider::set_ApplicationName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::SettingsPropertyValueCollection* System::Configuration::SettingsProvider::GetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  collection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyValueCollection*>(this, ___internal_method, context, collection);
}
inline void System::Configuration::SettingsProvider::SetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyValueCollection*  collection)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, collection);
}
inline ::System::Configuration::SettingsProvider* System::Configuration::SettingsProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsProvider*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsProvider::SettingsProvider()   {
}
