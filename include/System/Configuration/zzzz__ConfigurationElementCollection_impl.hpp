#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationElementCollection.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollectionType_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.get_CollectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationElementCollectionType (::System::Configuration::ConfigurationElementCollection::*)()>(&::System::Configuration::ConfigurationElementCollection::get_CollectionType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84ecb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.get_ElementName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::ConfigurationElementCollection::*)()>(&::System::Configuration::ConfigurationElementCollection::get_ElementName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84ecf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.get_ThrowOnDuplicate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Configuration::ConfigurationElementCollection::*)()>(&::System::Configuration::ConfigurationElementCollection::get_ThrowOnDuplicate)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84ed28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.CreateNewElement
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationElement* (::System::Configuration::ConfigurationElementCollection::*)()>(&::System::Configuration::ConfigurationElementCollection::CreateNewElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationElementCollection.GetElementKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Configuration::ConfigurationElementCollection::*)(::System::Configuration::ConfigurationElement*)>(&::System::Configuration::ConfigurationElementCollection::GetElementKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(),
                    {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 17}
                ));
    return ___internal_method;
  }
};
inline ::System::Configuration::ConfigurationElementCollectionType System::Configuration::ConfigurationElementCollection::get_CollectionType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElementCollectionType>(this, ___internal_method);
}
inline ::StringW System::Configuration::ConfigurationElementCollection::get_ElementName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Configuration::ConfigurationElementCollection::get_ThrowOnDuplicate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationElement* System::Configuration::ConfigurationElementCollection::CreateNewElement()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationElement*>(this, ___internal_method);
}
inline ::System::Object* System::Configuration::ConfigurationElementCollection::GetElementKey(::System::Configuration::ConfigurationElement*  element)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ConfigurationElementCollection*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, element);
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationElementCollection::ConfigurationElementCollection()   {
}
