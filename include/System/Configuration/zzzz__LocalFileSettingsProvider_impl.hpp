#pragma once
// IWYU pragma private; include "System/Configuration/LocalFileSettingsProvider.hpp"
#include "System/Configuration/zzzz__SettingsProvider_impl.hpp"
#include "System/Configuration/zzzz__LocalFileSettingsProvider_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/Configuration/zzzz__IApplicationSettingsProvider_def.hpp"
#include "System/Configuration/zzzz__SettingsContext_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValueCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValue_def.hpp"
#include "System/Configuration/zzzz__SettingsProperty_def.hpp"
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::LocalFileSettingsProvider::*)()>(&::System::Configuration::LocalFileSettingsProvider::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.get_ApplicationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::LocalFileSettingsProvider::*)()>(&::System::Configuration::LocalFileSettingsProvider::get_ApplicationName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfce04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.set_ApplicationName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::LocalFileSettingsProvider::*)(::StringW)>(&::System::Configuration::LocalFileSettingsProvider::set_ApplicationName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfce3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.GetPreviousVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyValue* (::System::Configuration::LocalFileSettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsProperty*)>(&::System::Configuration::LocalFileSettingsProvider::GetPreviousVersion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfce74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {"GetPreviousVersion", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>(), ::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.GetPropertyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyValueCollection* (::System::Configuration::LocalFileSettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*)>(&::System::Configuration::LocalFileSettingsProvider::GetPropertyValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfceac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::LocalFileSettingsProvider::*)(::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Configuration::LocalFileSettingsProvider::Initialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::LocalFileSettingsProvider::*)(::System::Configuration::SettingsContext*)>(&::System::Configuration::LocalFileSettingsProvider::Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcf1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {"Reset", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.SetPropertyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::LocalFileSettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyValueCollection*)>(&::System::Configuration::LocalFileSettingsProvider::SetPropertyValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                    {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::LocalFileSettingsProvider.Upgrade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::LocalFileSettingsProvider::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*)>(&::System::Configuration::LocalFileSettingsProvider::Upgrade)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcf8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {"Upgrade", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>(), ::i2c::type_of<::System::Configuration::SettingsPropertyCollection*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::LocalFileSettingsProvider::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Configuration::LocalFileSettingsProvider::get_ApplicationName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Configuration::LocalFileSettingsProvider::set_ApplicationName(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::SettingsPropertyValue* System::Configuration::LocalFileSettingsProvider::GetPreviousVersion(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {"GetPreviousVersion", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>(), ::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyValue*>(this, ___internal_method, context, property);
}
inline ::System::Configuration::SettingsPropertyValueCollection* System::Configuration::LocalFileSettingsProvider::GetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyValueCollection*>(this, ___internal_method, context, properties);
}
inline void System::Configuration::LocalFileSettingsProvider::Initialize(::StringW  name, ::System::Collections::Specialized::NameValueCollection*  values)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, values);
}
inline void System::Configuration::LocalFileSettingsProvider::Reset(::System::Configuration::SettingsContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {"Reset", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline void System::Configuration::LocalFileSettingsProvider::SetPropertyValues(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyValueCollection*  values)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, values);
}
inline void System::Configuration::LocalFileSettingsProvider::Upgrade(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::LocalFileSettingsProvider*>(),
                        {"Upgrade", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>(), ::i2c::type_of<::System::Configuration::SettingsPropertyCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, properties);
}
inline ::System::Configuration::LocalFileSettingsProvider* System::Configuration::LocalFileSettingsProvider::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::LocalFileSettingsProvider*>());
}
/// @brief Convert operator to "::System::Configuration::IApplicationSettingsProvider"
constexpr  System::Configuration::LocalFileSettingsProvider::operator ::System::Configuration::IApplicationSettingsProvider*() noexcept {
return static_cast<::System::Configuration::IApplicationSettingsProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Configuration::IApplicationSettingsProvider"
constexpr ::System::Configuration::IApplicationSettingsProvider* System::Configuration::LocalFileSettingsProvider::i___System__Configuration__IApplicationSettingsProvider() noexcept {
return static_cast<::System::Configuration::IApplicationSettingsProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Configuration::LocalFileSettingsProvider::LocalFileSettingsProvider()   {
}
