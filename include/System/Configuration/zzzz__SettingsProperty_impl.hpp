#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProperty.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__SettingsProperty_def.hpp"
#include "System/Configuration/zzzz__SettingsAttributeDictionary_def.hpp"
#include "System/Configuration/zzzz__SettingsProvider_def.hpp"
#include "System/Configuration/zzzz__SettingsSerializeAs_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::System::Configuration::SettingsProperty*)>(&::System::Configuration::SettingsProperty::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::StringW)>(&::System::Configuration::SettingsProperty::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::StringW, ::System::Type*, ::System::Configuration::SettingsProvider*, bool, ::System::Object*, ::System::Configuration::SettingsSerializeAs, ::System::Configuration::SettingsAttributeDictionary*, bool, bool)>(&::System::Configuration::SettingsProperty::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6cd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Configuration::SettingsProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Configuration::SettingsSerializeAs>(), ::i2c::type_of<::System::Configuration::SettingsAttributeDictionary*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsAttributeDictionary* (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_Attributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6d0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_DefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_DefaultValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_DefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::System::Object*)>(&::System::Configuration::SettingsProperty::set_DefaultValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_IsReadOnly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_IsReadOnly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(bool)>(&::System::Configuration::SettingsProperty::set_IsReadOnly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::StringW)>(&::System::Configuration::SettingsProperty::set_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_PropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_PropertyType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_PropertyType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::System::Type*)>(&::System::Configuration::SettingsProperty::set_PropertyType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_Provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsProvider* (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_Provider)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_Provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::System::Configuration::SettingsProvider*)>(&::System::Configuration::SettingsProperty::set_Provider)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_SerializeAs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsSerializeAs (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_SerializeAs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_SerializeAs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(::System::Configuration::SettingsSerializeAs)>(&::System::Configuration::SettingsProperty::set_SerializeAs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                    {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_ThrowOnErrorDeserializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_ThrowOnErrorDeserializing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf6fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"get_ThrowOnErrorDeserializing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_ThrowOnErrorDeserializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(bool)>(&::System::Configuration::SettingsProperty::set_ThrowOnErrorDeserializing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf701c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"set_ThrowOnErrorDeserializing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.get_ThrowOnErrorSerializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsProperty::*)()>(&::System::Configuration::SettingsProperty::get_ThrowOnErrorSerializing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"get_ThrowOnErrorSerializing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProperty.set_ThrowOnErrorSerializing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProperty::*)(bool)>(&::System::Configuration::SettingsProperty::set_ThrowOnErrorSerializing)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf708c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"set_ThrowOnErrorSerializing", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsProperty::_ctor(::System::Configuration::SettingsProperty*  propertyToCopy)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, propertyToCopy);
}
inline void System::Configuration::SettingsProperty::_ctor(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline void System::Configuration::SettingsProperty::_ctor(::StringW  name, ::System::Type*  propertyType, ::System::Configuration::SettingsProvider*  provider, bool  isReadOnly, ::System::Object*  defaultValue, ::System::Configuration::SettingsSerializeAs  serializeAs, ::System::Configuration::SettingsAttributeDictionary*  attributes, bool  throwOnErrorDeserializing, bool  throwOnErrorSerializing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Configuration::SettingsProvider*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Configuration::SettingsSerializeAs>(), ::i2c::type_of<::System::Configuration::SettingsAttributeDictionary*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, propertyType, provider, isReadOnly, defaultValue, serializeAs, attributes, throwOnErrorDeserializing, throwOnErrorSerializing);
}
inline ::System::Configuration::SettingsAttributeDictionary* System::Configuration::SettingsProperty::get_Attributes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsAttributeDictionary*>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::SettingsProperty::get_DefaultValue()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_DefaultValue(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Configuration::SettingsProperty::get_IsReadOnly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_IsReadOnly(bool  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Configuration::SettingsProperty::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_Name(::StringW  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Type* System::Configuration::SettingsProperty::get_PropertyType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_PropertyType(::System::Type*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::SettingsProvider* System::Configuration::SettingsProperty::get_Provider()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsProvider*>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_Provider(::System::Configuration::SettingsProvider*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::SettingsSerializeAs System::Configuration::SettingsProperty::get_SerializeAs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsSerializeAs>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_SerializeAs(::System::Configuration::SettingsSerializeAs  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingsProperty*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Configuration::SettingsProperty::get_ThrowOnErrorDeserializing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"get_ThrowOnErrorDeserializing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_ThrowOnErrorDeserializing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"set_ThrowOnErrorDeserializing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Configuration::SettingsProperty::get_ThrowOnErrorSerializing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"get_ThrowOnErrorSerializing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::SettingsProperty::set_ThrowOnErrorSerializing(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProperty*>(),
                        {"set_ThrowOnErrorSerializing", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::SettingsProperty* System::Configuration::SettingsProperty::New_ctor(::System::Configuration::SettingsProperty*  propertyToCopy)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsProperty*>(propertyToCopy));
}
inline ::System::Configuration::SettingsProperty* System::Configuration::SettingsProperty::New_ctor(::StringW  name)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsProperty*>(name));
}
inline ::System::Configuration::SettingsProperty* System::Configuration::SettingsProperty::New_ctor(::StringW  name, ::System::Type*  propertyType, ::System::Configuration::SettingsProvider*  provider, bool  isReadOnly, ::System::Object*  defaultValue, ::System::Configuration::SettingsSerializeAs  serializeAs, ::System::Configuration::SettingsAttributeDictionary*  attributes, bool  throwOnErrorDeserializing, bool  throwOnErrorSerializing)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsProperty*>(name, propertyType, provider, isReadOnly, defaultValue, serializeAs, attributes, throwOnErrorDeserializing, throwOnErrorSerializing));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsProperty::SettingsProperty()   {
}
