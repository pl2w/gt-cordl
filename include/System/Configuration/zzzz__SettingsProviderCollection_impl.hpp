#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProviderCollection.hpp"
#include "System/Configuration/Provider/zzzz__ProviderCollection_impl.hpp"
#include "System/Configuration/zzzz__SettingsProviderCollection_def.hpp"
#include "System/Configuration/Provider/zzzz__ProviderBase_def.hpp"
#include "System/Configuration/zzzz__SettingsProvider_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsProviderCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProviderCollection::*)()>(&::System::Configuration::SettingsProviderCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf76ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProviderCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsProvider* (::System::Configuration::SettingsProviderCollection::*)(::StringW)>(&::System::Configuration::SettingsProviderCollection::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf76e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProviderCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProviderCollection::*)(::System::Configuration::Provider::ProviderBase*)>(&::System::Configuration::SettingsProviderCollection::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf771c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProviderCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProviderCollection*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsProviderCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::SettingsProvider* System::Configuration::SettingsProviderCollection::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsProvider*>(this, ___internal_method, name);
}
inline void System::Configuration::SettingsProviderCollection::Add(::System::Configuration::Provider::ProviderBase*  provider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProviderCollection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline ::System::Configuration::SettingsProviderCollection* System::Configuration::SettingsProviderCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsProviderCollection*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsProviderCollection::SettingsProviderCollection()   {
}
