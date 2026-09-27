#pragma once
// IWYU pragma private; include "System/Configuration/SettingElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Configuration/zzzz__SettingElementCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollectionType_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__SettingElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingElementCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElementCollection::*)()>(&::System::Configuration::SettingElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.get_CollectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationElementCollectionType (::System::Configuration::SettingElementCollection::*)()>(&::System::Configuration::SettingElementCollection::get_CollectionType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.get_ElementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingElementCollection::*)()>(&::System::Configuration::SettingElementCollection::get_ElementName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElementCollection::*)(::System::Configuration::SettingElement*)>(&::System::Configuration::SettingElementCollection::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Configuration::SettingElement*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElementCollection::*)()>(&::System::Configuration::SettingElementCollection::Clear)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.CreateNewElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationElement* (::System::Configuration::SettingElementCollection::*)()>(&::System::Configuration::SettingElementCollection::CreateNewElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.Get
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingElement* (::System::Configuration::SettingElementCollection::*)(::StringW)>(&::System::Configuration::SettingElementCollection::Get)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.GetElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SettingElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&::System::Configuration::SettingElementCollection::GetElementKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingElementCollection.Remove
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingElementCollection::*)(::System::Configuration::SettingElement*)>(&::System::Configuration::SettingElementCollection::Remove)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Configuration::SettingElement*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingElementCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationElementCollectionType System::Configuration::SettingElementCollection::get_CollectionType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElementCollectionType>(this, ___internal_method);
}
inline ::StringW System::Configuration::SettingElementCollection::get_ElementName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Configuration::SettingElementCollection::Add(::System::Configuration::SettingElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Add", {}, {::i2c::type_of<::System::Configuration::SettingElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline void System::Configuration::SettingElementCollection::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationElement* System::Configuration::SettingElementCollection::CreateNewElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElement*>(this, ___internal_method);
}
inline ::System::Configuration::SettingElement* System::Configuration::SettingElementCollection::Get(::StringW  elementKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Get", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingElement*>(this, ___internal_method, elementKey);
}
inline ::System::Object* System::Configuration::SettingElementCollection::GetElementKey(::System::Configuration::ConfigurationElement*  element)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SettingElementCollection*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, element);
}
inline void System::Configuration::SettingElementCollection::Remove(::System::Configuration::SettingElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingElementCollection*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Configuration::SettingElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
inline ::System::Configuration::SettingElementCollection* System::Configuration::SettingElementCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingElementCollection*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingElementCollection::SettingElementCollection()   {
}
