#pragma once
// IWYU pragma private; include "System/Configuration/SchemeSettingElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_impl.hpp"
#include "System/Configuration/zzzz__SchemeSettingElementCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollectionType_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/Configuration/zzzz__SchemeSettingElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::SchemeSettingElementCollection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SchemeSettingElementCollection::*)()>(&::System::Configuration::SchemeSettingElementCollection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElementCollection.get_CollectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationElementCollectionType (::System::Configuration::SchemeSettingElementCollection::*)()>(&::System::Configuration::SchemeSettingElementCollection::get_CollectionType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElementCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SchemeSettingElement* (::System::Configuration::SchemeSettingElementCollection::*)(int32_t)>(&::System::Configuration::SchemeSettingElementCollection::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd268;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElementCollection.get_Item
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SchemeSettingElement* (::System::Configuration::SchemeSettingElementCollection::*)(::StringW)>(&::System::Configuration::SchemeSettingElementCollection::get_Item)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElementCollection.CreateNewElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationElement* (::System::Configuration::SchemeSettingElementCollection::*)()>(&::System::Configuration::SchemeSettingElementCollection::CreateNewElement)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd2d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElementCollection.GetElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::SchemeSettingElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&::System::Configuration::SchemeSettingElementCollection::GetElementKey)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElementCollection.IndexOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Configuration::SchemeSettingElementCollection::*)(::System::Configuration::SchemeSettingElement*)>(&::System::Configuration::SchemeSettingElementCollection::IndexOf)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Configuration::SchemeSettingElement*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SchemeSettingElementCollection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationElementCollectionType System::Configuration::SchemeSettingElementCollection::get_CollectionType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElementCollectionType>(this, ___internal_method);
}
inline ::System::Configuration::SchemeSettingElement* System::Configuration::SchemeSettingElementCollection::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SchemeSettingElement*>(this, ___internal_method, index);
}
inline ::System::Configuration::SchemeSettingElement* System::Configuration::SchemeSettingElementCollection::get_Item(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {"get_Item", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SchemeSettingElement*>(this, ___internal_method, name);
}
inline ::System::Configuration::ConfigurationElement* System::Configuration::SchemeSettingElementCollection::CreateNewElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElement*>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::SchemeSettingElementCollection::GetElementKey(::System::Configuration::ConfigurationElement*  element)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, element);
}
inline int32_t System::Configuration::SchemeSettingElementCollection::IndexOf(::System::Configuration::SchemeSettingElement*  element)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElementCollection*>(),
                        {"IndexOf", {}, {::i2c::type_of<::System::Configuration::SchemeSettingElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, element);
}
inline ::System::Configuration::SchemeSettingElementCollection* System::Configuration::SchemeSettingElementCollection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SchemeSettingElementCollection*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SchemeSettingElementCollection::SchemeSettingElementCollection()   {
}
