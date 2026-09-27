#pragma once
// IWYU pragma private; include "System/Configuration/SettingsPropertyValue.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__SettingsPropertyValue_def.hpp"
#include "System/Configuration/zzzz__SettingsProperty_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValue::*)(::System::Configuration::SettingsProperty*)>(&::System::Configuration::SettingsPropertyValue::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf739c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.get_Deserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsPropertyValue::*)()>(&::System::Configuration::SettingsPropertyValue::get_Deserialized)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf73d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_Deserialized", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.set_Deserialized
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValue::*)(bool)>(&::System::Configuration::SettingsPropertyValue::set_Deserialized)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf740c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_Deserialized", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.get_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsPropertyValue::*)()>(&::System::Configuration::SettingsPropertyValue::get_IsDirty)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_IsDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.set_IsDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValue::*)(bool)>(&::System::Configuration::SettingsPropertyValue::set_IsDirty)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf747c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingsPropertyValue::*)()>(&::System::Configuration::SettingsPropertyValue::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf74b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.get_Property
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsProperty* (::System::Configuration::SettingsPropertyValue::*)()>(&::System::Configuration::SettingsPropertyValue::get_Property)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf74ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_Property", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.get_PropertyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsPropertyValue::*)()>(&::System::Configuration::SettingsPropertyValue::get_PropertyValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_PropertyValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.set_PropertyValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValue::*)(::System::Object*)>(&::System::Configuration::SettingsPropertyValue::set_PropertyValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf755c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_PropertyValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.get_SerializedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingsPropertyValue::*)()>(&::System::Configuration::SettingsPropertyValue::get_SerializedValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_SerializedValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.set_SerializedValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsPropertyValue::*)(::System::Object*)>(&::System::Configuration::SettingsPropertyValue::set_SerializedValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf75cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_SerializedValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsPropertyValue.get_UsingDefaultValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::SettingsPropertyValue::*)()>(&::System::Configuration::SettingsPropertyValue::get_UsingDefaultValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_UsingDefaultValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsPropertyValue::_ctor(::System::Configuration::SettingsProperty*  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsProperty*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property);
}
inline bool System::Configuration::SettingsPropertyValue::get_Deserialized()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_Deserialized", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyValue::set_Deserialized(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_Deserialized", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Configuration::SettingsPropertyValue::get_IsDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_IsDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyValue::set_IsDirty(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_IsDirty", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Configuration::SettingsPropertyValue::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Configuration::SettingsProperty* System::Configuration::SettingsPropertyValue::get_Property()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_Property", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsProperty*>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::SettingsPropertyValue::get_PropertyValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_PropertyValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyValue::set_PropertyValue(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_PropertyValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* System::Configuration::SettingsPropertyValue::get_SerializedValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_SerializedValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void System::Configuration::SettingsPropertyValue::set_SerializedValue(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"set_SerializedValue", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Configuration::SettingsPropertyValue::get_UsingDefaultValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsPropertyValue*>(),
                        {"get_UsingDefaultValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Configuration::SettingsPropertyValue* System::Configuration::SettingsPropertyValue::New_ctor(::System::Configuration::SettingsProperty*  property)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsPropertyValue*>(property));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsPropertyValue::SettingsPropertyValue()   {
}
