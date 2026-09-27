#pragma once
// IWYU pragma private; include "System/Configuration/SettingsBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__SettingsBase_def.hpp"
#include "System/Configuration/zzzz__SettingsContext_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValueCollection_def.hpp"
#include "System/Configuration/zzzz__SettingsProviderCollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsBase::*)()>(&::System::Configuration::SettingsBase::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf65d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsContext* (::System::Configuration::SettingsBase::*)()>(&::System::Configuration::SettingsBase::get_Context)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf660c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::SettingsBase*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.get_IsSynchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsBase::*)()>(&::System::Configuration::SettingsBase::get_IsSynchronized)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsBase::*)(::StringW)>(&::System::Configuration::SettingsBase::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf667c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::SettingsBase*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.set_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsBase::*)(::StringW, ::System::Object*)>(&::System::Configuration::SettingsBase::set_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf66b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::SettingsBase*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyCollection* (::System::Configuration::SettingsBase::*)()>(&::System::Configuration::SettingsBase::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf66ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::SettingsBase*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.get_PropertyValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsPropertyValueCollection* (::System::Configuration::SettingsBase::*)()>(&::System::Configuration::SettingsBase::get_PropertyValues)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::SettingsBase*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.get_Providers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsProviderCollection* (::System::Configuration::SettingsBase::*)()>(&::System::Configuration::SettingsBase::get_Providers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf675c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::SettingsBase*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsBase::*)(::System::Configuration::SettingsContext*, ::System::Configuration::SettingsPropertyCollection*, ::System::Configuration::SettingsProviderCollection*)>(&::System::Configuration::SettingsBase::Initialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>(), ::i2c::type_of<::System::Configuration::SettingsPropertyCollection*>(), ::i2c::type_of<::System::Configuration::SettingsProviderCollection*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.Save
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsBase::*)()>(&::System::Configuration::SettingsBase::Save)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf67cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                    {::i2c::class_of<::System::Configuration::SettingsBase*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsBase.Synchronized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsBase* (*)(::System::Configuration::SettingsBase*)>(&::System::Configuration::SettingsBase::Synchronized)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {"Synchronized", {}, {::i2c::type_of<::System::Configuration::SettingsBase*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::SettingsContext* System::Configuration::SettingsBase::get_Context()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsContext*>(this, ___internal_method);
}
inline bool System::Configuration::SettingsBase::get_IsSynchronized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {"get_IsSynchronized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::SettingsBase::get_Item(::StringW  propertyName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsBase*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, propertyName);
}
inline void System::Configuration::SettingsBase::set_Item(::StringW  propertyName, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsBase*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyName, value);
}
inline ::System::Configuration::SettingsPropertyCollection* System::Configuration::SettingsBase::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsBase*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SettingsPropertyValueCollection* System::Configuration::SettingsBase::get_PropertyValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsBase*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsPropertyValueCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SettingsProviderCollection* System::Configuration::SettingsBase::get_Providers()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsBase*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsProviderCollection*>(this, ___internal_method);
}
inline void System::Configuration::SettingsBase::Initialize(::System::Configuration::SettingsContext*  context, ::System::Configuration::SettingsPropertyCollection*  properties, ::System::Configuration::SettingsProviderCollection*  providers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {"Initialize", {}, {::i2c::type_of<::System::Configuration::SettingsContext*>(), ::i2c::type_of<::System::Configuration::SettingsPropertyCollection*>(), ::i2c::type_of<::System::Configuration::SettingsProviderCollection*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, properties, providers);
}
inline void System::Configuration::SettingsBase::Save()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsBase*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::SettingsBase* System::Configuration::SettingsBase::Synchronized(::System::Configuration::SettingsBase*  settingsBase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsBase*>(),
                        {"Synchronized", {}, {::i2c::type_of<::System::Configuration::SettingsBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsBase*>(nullptr, ___internal_method, settingsBase);
}
inline ::System::Configuration::SettingsBase* System::Configuration::SettingsBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsBase*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsBase::SettingsBase()   {
}
