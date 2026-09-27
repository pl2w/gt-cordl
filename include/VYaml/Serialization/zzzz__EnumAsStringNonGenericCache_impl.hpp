#pragma once
// IWYU pragma private; include "VYaml/Serialization/EnumAsStringNonGenericCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VYaml/Serialization/zzzz__EnumAsStringNonGenericCache_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::VYaml::Serialization::EnumAsStringNonGenericCache.GetStringValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VYaml::Serialization::EnumAsStringNonGenericCache::*)(::System::Type*, ::System::Object*)>(&::VYaml::Serialization::EnumAsStringNonGenericCache::GetStringValue)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb950e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringNonGenericCache*>(),
                        {"GetStringValue", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::EnumAsStringNonGenericCache.CreateValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::System::Type*)>(&::VYaml::Serialization::EnumAsStringNonGenericCache::CreateValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb950ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringNonGenericCache*>(),
                        {"CreateValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VYaml::Serialization::EnumAsStringNonGenericCache._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VYaml::Serialization::EnumAsStringNonGenericCache::*)()>(&::VYaml::Serialization::EnumAsStringNonGenericCache::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb951000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringNonGenericCache*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>*& VYaml::Serialization::EnumAsStringNonGenericCache::__cordl_internal_get_stringValues()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringValues;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>* const& VYaml::Serialization::EnumAsStringNonGenericCache::__cordl_internal_get_stringValues() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stringValues;
}
constexpr void VYaml::Serialization::EnumAsStringNonGenericCache::__cordl_internal_set_stringValues(::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Object*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stringValues = value;
}
constexpr ::System::Func_3<::System::Object*,::System::Type*,::StringW>*& VYaml::Serialization::EnumAsStringNonGenericCache::__cordl_internal_get_valueFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueFactory;
}
constexpr ::System::Func_3<::System::Object*,::System::Type*,::StringW>* const& VYaml::Serialization::EnumAsStringNonGenericCache::__cordl_internal_get_valueFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___valueFactory;
}
constexpr void VYaml::Serialization::EnumAsStringNonGenericCache::__cordl_internal_set_valueFactory(::System::Func_3<::System::Object*,::System::Type*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___valueFactory = value;
}
inline void VYaml::Serialization::EnumAsStringNonGenericCache::setStaticF_Instance(::VYaml::Serialization::EnumAsStringNonGenericCache*  value)  {
::cordl_internals::setStaticField<::VYaml::Serialization::EnumAsStringNonGenericCache*, "Instance", ::VYaml::Serialization::EnumAsStringNonGenericCache*>(std::forward<::VYaml::Serialization::EnumAsStringNonGenericCache*>(value));
}
inline ::VYaml::Serialization::EnumAsStringNonGenericCache* VYaml::Serialization::EnumAsStringNonGenericCache::getStaticF_Instance()  {
return ::cordl_internals::getStaticField<::VYaml::Serialization::EnumAsStringNonGenericCache*, "Instance", ::VYaml::Serialization::EnumAsStringNonGenericCache*>();
}
inline ::StringW VYaml::Serialization::EnumAsStringNonGenericCache::GetStringValue(::System::Type*  type, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringNonGenericCache*>(),
                        {"GetStringValue", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type, value);
}
inline ::StringW VYaml::Serialization::EnumAsStringNonGenericCache::CreateValue(::System::Object*  value, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringNonGenericCache*>(),
                        {"CreateValue", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value, type);
}
inline void VYaml::Serialization::EnumAsStringNonGenericCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::VYaml::Serialization::EnumAsStringNonGenericCache*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VYaml::Serialization::EnumAsStringNonGenericCache* VYaml::Serialization::EnumAsStringNonGenericCache::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VYaml::Serialization::EnumAsStringNonGenericCache*>());
}
// Ctor Parameters []
constexpr ::VYaml::Serialization::EnumAsStringNonGenericCache::EnumAsStringNonGenericCache()   {
}
