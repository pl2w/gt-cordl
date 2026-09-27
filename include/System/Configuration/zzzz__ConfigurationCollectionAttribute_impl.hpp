#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationCollectionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationCollectionAttribute_def.hpp"
#include "System/Configuration/zzzz__ConfigurationElementCollectionType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationCollectionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationCollectionAttribute::*)(::System::Type*)>(&::System::Configuration::ConfigurationCollectionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa84ed60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationCollectionAttribute.set_AddItemName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationCollectionAttribute::*)(::StringW)>(&::System::Configuration::ConfigurationCollectionAttribute::set_AddItemName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa84ed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_AddItemName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationCollectionAttribute.set_ClearItemsName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationCollectionAttribute::*)(::StringW)>(&::System::Configuration::ConfigurationCollectionAttribute::set_ClearItemsName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa84ed68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_ClearItemsName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationCollectionAttribute.set_CollectionType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationCollectionAttribute::*)(::System::Configuration::ConfigurationElementCollectionType)>(&::System::Configuration::ConfigurationCollectionAttribute::set_CollectionType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa84ed6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_CollectionType", {}, {::i2c::type_of<::System::Configuration::ConfigurationElementCollectionType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationCollectionAttribute.set_RemoveItemName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationCollectionAttribute::*)(::StringW)>(&::System::Configuration::ConfigurationCollectionAttribute::set_RemoveItemName)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa84ed70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_RemoveItemName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::ConfigurationCollectionAttribute::_ctor(::System::Type*  itemType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, itemType);
}
inline void System::Configuration::ConfigurationCollectionAttribute::set_AddItemName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_AddItemName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ConfigurationCollectionAttribute::set_ClearItemsName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_ClearItemsName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ConfigurationCollectionAttribute::set_CollectionType(::System::Configuration::ConfigurationElementCollectionType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_CollectionType", {}, {::i2c::type_of<::System::Configuration::ConfigurationElementCollectionType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Configuration::ConfigurationCollectionAttribute::set_RemoveItemName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationCollectionAttribute*>(),
                        {"set_RemoveItemName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationCollectionAttribute* System::Configuration::ConfigurationCollectionAttribute::New_ctor(::System::Type*  itemType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ConfigurationCollectionAttribute*>(itemType));
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationCollectionAttribute::ConfigurationCollectionAttribute()   {
}
