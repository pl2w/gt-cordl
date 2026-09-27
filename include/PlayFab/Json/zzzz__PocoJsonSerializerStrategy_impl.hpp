#pragma once
// IWYU pragma private; include "PlayFab/Json/PocoJsonSerializerStrategy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "PlayFab/Json/zzzz__PocoJsonSerializerStrategy_def.hpp"
#include "PlayFab/Json/zzzz__IJsonSerializerStrategy_def.hpp"
#include "PlayFab/Json/zzzz__JsonProperty_def.hpp"
#include "PlayFab/Json/zzzz__ReflectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Enum_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::PocoJsonSerializerStrategy::*)()>(&::PlayFab::Json::PocoJsonSerializerStrategy::_ctor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa83afb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.MapClrMemberNameToJsonFieldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Reflection::MemberInfo*)>(&::PlayFab::Json::PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa83b1a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.MapClrMemberNameToJsonFieldName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Reflection::MemberInfo*, ::by_ref<::StringW>, ::by_ref<::PlayFab::Json::JsonProperty*>)>(&::PlayFab::Json::PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xa83b2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.ContructorDelegateFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_ConstructorDelegate* (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Type*)>(&::PlayFab::Json::PocoJsonSerializerStrategy::ContructorDelegateFactory)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa83b498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.GetterValueFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>* (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Type*)>(&::PlayFab::Json::PocoJsonSerializerStrategy::GetterValueFactory)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0xa83b5b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.SetterValueFactory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>* (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Type*)>(&::PlayFab::Json::PocoJsonSerializerStrategy::SetterValueFactory)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0xa83be38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.TrySerializeNonPrimitiveObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Object*, ::by_ref<::System::Object*>)>(&::PlayFab::Json::PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xa83c760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.DeserializeObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Object*, ::System::Type*)>(&::PlayFab::Json::PocoJsonSerializerStrategy::DeserializeObject)> {
  constexpr static std::size_t size = 0x17cc;
  constexpr static std::size_t addrs = 0xa83c7bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.SerializeEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Enum*)>(&::PlayFab::Json::PocoJsonSerializerStrategy::SerializeEnum)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa83e92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.TrySerializeKnownTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Object*, ::by_ref<::System::Object*>)>(&::PlayFab::Json::PocoJsonSerializerStrategy::TrySerializeKnownTypes)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0xa83e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::PocoJsonSerializerStrategy.TrySerializeUnknownTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::PlayFab::Json::PocoJsonSerializerStrategy::*)(::System::Object*, ::by_ref<::System::Object*>)>(&::PlayFab::Json::PocoJsonSerializerStrategy::TrySerializeUnknownTypes)> {
  constexpr static std::size_t size = 0x61c;
  constexpr static std::size_t addrs = 0xa83ecf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                    {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 15}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>*& PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_get_ConstructorCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstructorCache;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>* const& PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_get_ConstructorCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConstructorCache;
}
constexpr void PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_set_ConstructorCache(::System::Collections::Generic::IDictionary_2<::System::Type*,::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConstructorCache = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>*& PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_get_GetCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetCache;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>* const& PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_get_GetCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___GetCache;
}
constexpr void PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_set_GetCache(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___GetCache = value;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>*& PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_get_SetCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetCache;
}
constexpr ::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>* const& PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_get_SetCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetCache;
}
constexpr void PlayFab::Json::PocoJsonSerializerStrategy::__cordl_internal_set_SetCache(::System::Collections::Generic::IDictionary_2<::System::Type*,::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetCache = value;
}
inline void PlayFab::Json::PocoJsonSerializerStrategy::setStaticF_EmptyTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "EmptyTypes", ::PlayFab::Json::PocoJsonSerializerStrategy*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> PlayFab::Json::PocoJsonSerializerStrategy::getStaticF_EmptyTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "EmptyTypes", ::PlayFab::Json::PocoJsonSerializerStrategy*>();
}
inline void PlayFab::Json::PocoJsonSerializerStrategy::setStaticF_ArrayConstructorParameterTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "ArrayConstructorParameterTypes", ::PlayFab::Json::PocoJsonSerializerStrategy*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> PlayFab::Json::PocoJsonSerializerStrategy::getStaticF_ArrayConstructorParameterTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "ArrayConstructorParameterTypes", ::PlayFab::Json::PocoJsonSerializerStrategy*>();
}
inline void PlayFab::Json::PocoJsonSerializerStrategy::setStaticF_Iso8601Format(::ArrayW<::StringW>  value)  {
::cordl_internals::setStaticField<::ArrayW<::StringW>, "Iso8601Format", ::PlayFab::Json::PocoJsonSerializerStrategy*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> PlayFab::Json::PocoJsonSerializerStrategy::getStaticF_Iso8601Format()  {
return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "Iso8601Format", ::PlayFab::Json::PocoJsonSerializerStrategy*>();
}
inline void PlayFab::Json::PocoJsonSerializerStrategy::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW PlayFab::Json::PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(::System::Reflection::MemberInfo*  memberInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, memberInfo);
}
inline void PlayFab::Json::PocoJsonSerializerStrategy::MapClrMemberNameToJsonFieldName(::System::Reflection::MemberInfo*  memberInfo, ::by_ref<::StringW>  jsonName, ::by_ref<::PlayFab::Json::JsonProperty*>  jsonProp)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberInfo, jsonName, jsonProp);
}
inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* PlayFab::Json::PocoJsonSerializerStrategy::ContructorDelegateFactory(::System::Type*  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(this, ___internal_method, key);
}
inline ::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>* PlayFab::Json::PocoJsonSerializerStrategy::GetterValueFactory(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::System::Reflection::MemberInfo*,::PlayFab::Json::ReflectionUtils_GetDelegate*>*>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>* PlayFab::Json::PocoJsonSerializerStrategy::SetterValueFactory(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW,::System::Collections::Generic::KeyValuePair_2<::System::Type*,::PlayFab::Json::ReflectionUtils_SetDelegate*>>*>(this, ___internal_method, type);
}
inline bool PlayFab::Json::PocoJsonSerializerStrategy::TrySerializeNonPrimitiveObject(::System::Object*  input, ::by_ref<::System::Object*>  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, output);
}
inline ::System::Object* PlayFab::Json::PocoJsonSerializerStrategy::DeserializeObject(::System::Object*  value, ::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type);
}
inline ::System::Object* PlayFab::Json::PocoJsonSerializerStrategy::SerializeEnum(::System::Enum*  p)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, p);
}
inline bool PlayFab::Json::PocoJsonSerializerStrategy::TrySerializeKnownTypes(::System::Object*  input, ::by_ref<::System::Object*>  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, output);
}
inline bool PlayFab::Json::PocoJsonSerializerStrategy::TrySerializeUnknownTypes(::System::Object*  input, ::by_ref<::System::Object*>  output)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::PocoJsonSerializerStrategy*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, input, output);
}
inline ::PlayFab::Json::PocoJsonSerializerStrategy* PlayFab::Json::PocoJsonSerializerStrategy::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::PocoJsonSerializerStrategy*>());
}
/// @brief Convert operator to "::PlayFab::Json::IJsonSerializerStrategy"
constexpr  PlayFab::Json::PocoJsonSerializerStrategy::operator ::PlayFab::Json::IJsonSerializerStrategy*() noexcept {
return static_cast<::PlayFab::Json::IJsonSerializerStrategy*>(static_cast<void*>(this));
}
/// @brief Convert to "::PlayFab::Json::IJsonSerializerStrategy"
constexpr ::PlayFab::Json::IJsonSerializerStrategy* PlayFab::Json::PocoJsonSerializerStrategy::i___PlayFab__Json__IJsonSerializerStrategy() noexcept {
return static_cast<::PlayFab::Json::IJsonSerializerStrategy*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::PlayFab::Json::PocoJsonSerializerStrategy::PocoJsonSerializerStrategy()   {
}
