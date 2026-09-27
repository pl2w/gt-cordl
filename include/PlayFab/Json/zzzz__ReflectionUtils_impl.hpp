#pragma once
// IWYU pragma private; include "PlayFab/Json/ReflectionUtils.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/Json/zzzz__ReflectionUtils_def.hpp"
#include "PlayFab/Json/zzzz__ReflectionUtils_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetTypeInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetTypeInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa83f4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetTypeInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Reflection::MemberInfo*, ::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetAttribute)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa83f4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetGenericListElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetGenericListElementType)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0xa83e3f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGenericListElementType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetAttribute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Attribute* (*)(::System::Type*, ::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetAttribute)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa83f5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetAttribute", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetGenericTypeArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetGenericTypeArguments)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa83e1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGenericTypeArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.IsTypeGeneric
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::IsTypeGeneric)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa83f584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsTypeGeneric", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.IsTypeGenericeCollectionInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::IsTypeGenericeCollectionInterface)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xa83e20c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsTypeGenericeCollectionInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.IsAssignableFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::PlayFab::Json::ReflectionUtils::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa83e37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsAssignableFrom", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.IsTypeDictionary
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::IsTypeDictionary)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xa83e06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsTypeDictionary", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.IsNullableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::IsNullableType)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa83df88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsNullableType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.ToNullableType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::System::Object*, ::System::Type*)>(&::PlayFab::Json::ReflectionUtils::ToNullableType)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa83e860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"ToNullableType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.IsValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::IsValueType)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa83f68c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetConstructors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetConstructors)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa83f6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructors", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetConstructorInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::PlayFab::Json::ReflectionUtils::GetConstructorInfo)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xa83f700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructorInfo", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetProperties)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa83bd30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*)>(&::PlayFab::Json::ReflectionUtils::GetFields)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa83bdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetGetterMethodInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Reflection::PropertyInfo*)>(&::PlayFab::Json::ReflectionUtils::GetGetterMethodInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa83bd50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetterMethodInfo", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetSetterMethodInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Reflection::PropertyInfo*)>(&::PlayFab::Json::ReflectionUtils::GetSetterMethodInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa83c698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetterMethodInfo", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetContructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_ConstructorDelegate* (*)(::System::Reflection::ConstructorInfo*)>(&::PlayFab::Json::ReflectionUtils::GetContructor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa83fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetContructor", {}, {::i2c::type_of<::System::Reflection::ConstructorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetContructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_ConstructorDelegate* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::PlayFab::Json::ReflectionUtils::GetContructor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa83b554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetContructor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetConstructorByReflection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_ConstructorDelegate* (*)(::System::Reflection::ConstructorInfo*)>(&::PlayFab::Json::ReflectionUtils::GetConstructorByReflection)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa83fb5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructorByReflection", {}, {::i2c::type_of<::System::Reflection::ConstructorInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetConstructorByReflection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_ConstructorDelegate* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::PlayFab::Json::ReflectionUtils::GetConstructorByReflection)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa83fc14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructorByReflection", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetGetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_GetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&::PlayFab::Json::ReflectionUtils::GetGetMethod)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa83bd70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethod", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetGetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_GetDelegate* (*)(::System::Reflection::FieldInfo*)>(&::PlayFab::Json::ReflectionUtils::GetGetMethod)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa83bde4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethod", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetGetMethodByReflection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_GetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&::PlayFab::Json::ReflectionUtils::GetGetMethodByReflection)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa83fdf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetGetMethodByReflection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_GetDelegate* (*)(::System::Reflection::FieldInfo*)>(&::PlayFab::Json::ReflectionUtils::GetGetMethodByReflection)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa83feec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetSetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_SetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&::PlayFab::Json::ReflectionUtils::GetSetMethod)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa83c6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethod", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetSetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_SetDelegate* (*)(::System::Reflection::FieldInfo*)>(&::PlayFab::Json::ReflectionUtils::GetSetMethod)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa83c70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethod", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetSetMethodByReflection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_SetDelegate* (*)(::System::Reflection::PropertyInfo*)>(&::PlayFab::Json::ReflectionUtils::GetSetMethodByReflection)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa8400bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils.GetSetMethodByReflection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::PlayFab::Json::ReflectionUtils_SetDelegate* (*)(::System::Reflection::FieldInfo*)>(&::PlayFab::Json::ReflectionUtils::GetSetMethodByReflection)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa8401b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils::*)()>(&::PlayFab::Json::ReflectionUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::Json::ReflectionUtils::setStaticF_EmptyObjects(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "EmptyObjects", ::PlayFab::Json::ReflectionUtils*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> PlayFab::Json::ReflectionUtils::getStaticF_EmptyObjects()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "EmptyObjects", ::PlayFab::Json::ReflectionUtils*>();
}
inline void PlayFab::Json::ReflectionUtils::setStaticF__1ObjArray(::ArrayW<::System::Object*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Object*>, "_1ObjArray", ::PlayFab::Json::ReflectionUtils*>(std::forward<::ArrayW<::System::Object*>>(value));
}
inline ::ArrayW<::System::Object*> PlayFab::Json::ReflectionUtils::getStaticF__1ObjArray()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Object*>, "_1ObjArray", ::PlayFab::Json::ReflectionUtils*>();
}
inline ::System::Type* PlayFab::Json::ReflectionUtils::GetTypeInfo(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetTypeInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Attribute* PlayFab::Json::ReflectionUtils::GetAttribute(::System::Reflection::MemberInfo*  info, ::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetAttribute", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, info, type);
}
inline ::System::Type* PlayFab::Json::ReflectionUtils::GetGenericListElementType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGenericListElementType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Attribute* PlayFab::Json::ReflectionUtils::GetAttribute(::System::Type*  objectType, ::System::Type*  attributeType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetAttribute", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Attribute*>(nullptr, ___internal_method, objectType, attributeType);
}
inline ::ArrayW<::System::Type*> PlayFab::Json::ReflectionUtils::GetGenericTypeArguments(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGenericTypeArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(nullptr, ___internal_method, type);
}
inline bool PlayFab::Json::ReflectionUtils::IsTypeGeneric(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsTypeGeneric", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool PlayFab::Json::ReflectionUtils::IsTypeGenericeCollectionInterface(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsTypeGenericeCollectionInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool PlayFab::Json::ReflectionUtils::IsAssignableFrom(::System::Type*  type1, ::System::Type*  type2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsAssignableFrom", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type1, type2);
}
inline bool PlayFab::Json::ReflectionUtils::IsTypeDictionary(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsTypeDictionary", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline bool PlayFab::Json::ReflectionUtils::IsNullableType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsNullableType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils::ToNullableType(::System::Object*  obj, ::System::Type*  nullableType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"ToNullableType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, obj, nullableType);
}
inline bool PlayFab::Json::ReflectionUtils::IsValueType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"IsValueType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>* PlayFab::Json::ReflectionUtils::GetConstructors(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructors", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::ConstructorInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::ConstructorInfo* PlayFab::Json::ReflectionUtils::GetConstructorInfo(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  argsType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructorInfo", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(nullptr, ___internal_method, type, argsType);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* PlayFab::Json::ReflectionUtils::GetProperties(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* PlayFab::Json::ReflectionUtils::GetFields(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::MethodInfo* PlayFab::Json::ReflectionUtils::GetGetterMethodInfo(::System::Reflection::PropertyInfo*  propertyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetterMethodInfo", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, propertyInfo);
}
inline ::System::Reflection::MethodInfo* PlayFab::Json::ReflectionUtils::GetSetterMethodInfo(::System::Reflection::PropertyInfo*  propertyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetterMethodInfo", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, propertyInfo);
}
inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* PlayFab::Json::ReflectionUtils::GetContructor(::System::Reflection::ConstructorInfo*  constructorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetContructor", {}, {::i2c::type_of<::System::Reflection::ConstructorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(nullptr, ___internal_method, constructorInfo);
}
inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* PlayFab::Json::ReflectionUtils::GetContructor(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  argsType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetContructor", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(nullptr, ___internal_method, type, argsType);
}
inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* PlayFab::Json::ReflectionUtils::GetConstructorByReflection(::System::Reflection::ConstructorInfo*  constructorInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructorByReflection", {}, {::i2c::type_of<::System::Reflection::ConstructorInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(nullptr, ___internal_method, constructorInfo);
}
inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* PlayFab::Json::ReflectionUtils::GetConstructorByReflection(::System::Type*  type, /* [ParamArray] */ ::ArrayW<::System::Type*>  argsType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetConstructorByReflection", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(nullptr, ___internal_method, type, argsType);
}
inline ::PlayFab::Json::ReflectionUtils_GetDelegate* PlayFab::Json::ReflectionUtils::GetGetMethod(::System::Reflection::PropertyInfo*  propertyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethod", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_GetDelegate*>(nullptr, ___internal_method, propertyInfo);
}
inline ::PlayFab::Json::ReflectionUtils_GetDelegate* PlayFab::Json::ReflectionUtils::GetGetMethod(::System::Reflection::FieldInfo*  fieldInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethod", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_GetDelegate*>(nullptr, ___internal_method, fieldInfo);
}
inline ::PlayFab::Json::ReflectionUtils_GetDelegate* PlayFab::Json::ReflectionUtils::GetGetMethodByReflection(::System::Reflection::PropertyInfo*  propertyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_GetDelegate*>(nullptr, ___internal_method, propertyInfo);
}
inline ::PlayFab::Json::ReflectionUtils_GetDelegate* PlayFab::Json::ReflectionUtils::GetGetMethodByReflection(::System::Reflection::FieldInfo*  fieldInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetGetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_GetDelegate*>(nullptr, ___internal_method, fieldInfo);
}
inline ::PlayFab::Json::ReflectionUtils_SetDelegate* PlayFab::Json::ReflectionUtils::GetSetMethod(::System::Reflection::PropertyInfo*  propertyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethod", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_SetDelegate*>(nullptr, ___internal_method, propertyInfo);
}
inline ::PlayFab::Json::ReflectionUtils_SetDelegate* PlayFab::Json::ReflectionUtils::GetSetMethod(::System::Reflection::FieldInfo*  fieldInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethod", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_SetDelegate*>(nullptr, ___internal_method, fieldInfo);
}
inline ::PlayFab::Json::ReflectionUtils_SetDelegate* PlayFab::Json::ReflectionUtils::GetSetMethodByReflection(::System::Reflection::PropertyInfo*  propertyInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_SetDelegate*>(nullptr, ___internal_method, propertyInfo);
}
inline ::PlayFab::Json::ReflectionUtils_SetDelegate* PlayFab::Json::ReflectionUtils::GetSetMethodByReflection(::System::Reflection::FieldInfo*  fieldInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {"GetSetMethodByReflection", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::PlayFab::Json::ReflectionUtils_SetDelegate*>(nullptr, ___internal_method, fieldInfo);
}
inline void PlayFab::Json::ReflectionUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::Json::ReflectionUtils* PlayFab::Json::ReflectionUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils::ReflectionUtils()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::*)()>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0._GetSetMethodByReflection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::*)(::System::Object*, ::System::Object*)>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::_GetSetMethodByReflection_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa8406d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0*>(),
                        {"<GetSetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::__cordl_internal_get_fieldInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldInfo;
}
constexpr ::System::Reflection::FieldInfo* const& PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::__cordl_internal_get_fieldInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldInfo;
}
constexpr void PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::__cordl_internal_set_fieldInfo(::System::Reflection::FieldInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fieldInfo = value;
}
inline void PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::_GetSetMethodByReflection_b__0(::System::Object*  source, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0*>(),
                        {"<GetSetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, value);
}
inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0* PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils___c__DisplayClass35_0::ReflectionUtils___c__DisplayClass35_0()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::*)()>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84026c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0._GetSetMethodByReflection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::*)(::System::Object*, ::System::Object*)>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::_GetSetMethodByReflection_b__0)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa840584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0*>(),
                        {"<GetSetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::__cordl_internal_get_methodInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodInfo;
}
constexpr ::System::Reflection::MethodInfo* const& PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::__cordl_internal_get_methodInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodInfo;
}
constexpr void PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::__cordl_internal_set_methodInfo(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___methodInfo = value;
}
inline void PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::_GetSetMethodByReflection_b__0(::System::Object*  source, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0*>(),
                        {"<GetSetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, value);
}
inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0* PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils___c__DisplayClass34_0::ReflectionUtils___c__DisplayClass34_0()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::*)()>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8400b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0._GetGetMethodByReflection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::*)(::System::Object*)>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::_GetGetMethodByReflection_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa840564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0*>(),
                        {"<GetGetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::FieldInfo*& PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::__cordl_internal_get_fieldInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldInfo;
}
constexpr ::System::Reflection::FieldInfo* const& PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::__cordl_internal_get_fieldInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fieldInfo;
}
constexpr void PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::__cordl_internal_set_fieldInfo(::System::Reflection::FieldInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fieldInfo = value;
}
inline void PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::_GetGetMethodByReflection_b__0(::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0*>(),
                        {"<GetGetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, source);
}
inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0* PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils___c__DisplayClass31_0::ReflectionUtils___c__DisplayClass31_0()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::*)()>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa83ffa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0._GetGetMethodByReflection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::*)(::System::Object*)>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::_GetGetMethodByReflection_b__0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa8404e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0*>(),
                        {"<GetGetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MethodInfo*& PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::__cordl_internal_get_methodInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodInfo;
}
constexpr ::System::Reflection::MethodInfo* const& PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::__cordl_internal_get_methodInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___methodInfo;
}
constexpr void PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::__cordl_internal_set_methodInfo(::System::Reflection::MethodInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___methodInfo = value;
}
inline void PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::_GetGetMethodByReflection_b__0(::System::Object*  source)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0*>(),
                        {"<GetGetMethodByReflection>b__0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, source);
}
inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0* PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils___c__DisplayClass30_0::ReflectionUtils___c__DisplayClass30_0()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::*)()>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa83fce4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0._GetConstructorByReflection_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::*)(::ArrayW<::System::Object*>)>(&::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::_GetConstructorByReflection_b__0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa8404cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0*>(),
                        {"<GetConstructorByReflection>b__0", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::ConstructorInfo*& PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::__cordl_internal_get_constructorInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constructorInfo;
}
constexpr ::System::Reflection::ConstructorInfo* const& PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::__cordl_internal_get_constructorInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___constructorInfo;
}
constexpr void PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::__cordl_internal_set_constructorInfo(::System::Reflection::ConstructorInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___constructorInfo = value;
}
inline void PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::_GetConstructorByReflection_b__0(::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0*>(),
                        {"<GetConstructorByReflection>b__0", {}, {::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline ::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0* PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils___c__DisplayClass26_0::ReflectionUtils___c__DisplayClass26_0()   {
}
template<typename TKey,typename TValue>
constexpr ::System::Object*& PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_get__lock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
template<typename TKey,typename TValue>
constexpr ::System::Object* const& PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_get__lock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lock;
}
template<typename TKey,typename TValue>
constexpr void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_set__lock(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lock = value;
}
template<typename TKey,typename TValue>
constexpr ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*& PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_get__valueFactory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueFactory;
}
template<typename TKey,typename TValue>
constexpr ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>* const& PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_get__valueFactory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueFactory;
}
template<typename TKey,typename TValue>
constexpr void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_set__valueFactory(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueFactory = value;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>*& PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_get__dictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::Dictionary_2<TKey,TValue>* const& PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_get__dictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dictionary;
}
template<typename TKey,typename TValue>
constexpr void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::__cordl_internal_set__dictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dictionary = value;
}
template<typename TKey,typename TValue>
inline void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::_ctor(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  valueFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, valueFactory);
}
template<typename TKey,typename TValue>
inline TValue PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::Get(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"Get", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline TValue PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::AddValue(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"AddValue", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::Add(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline bool PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::ContainsKey(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"ContainsKey", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TKey>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::get_Keys()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"get_Keys", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TKey>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::Remove(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline bool PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::TryGetValue(TKey  key, ::by_ref<TValue>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"TryGetValue", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<::by_ref<TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::ICollection_1<TValue>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::get_Values()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"get_Values", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::ICollection_1<TValue>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline TValue PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::get_Item(TKey  key)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"get_Item", {}, {::i2c::type_of<TKey>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::set_Item(TKey  key, TValue  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"set_Item", {}, {::i2c::type_of<TKey>(), ::i2c::type_of<TValue>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
template<typename TKey,typename TValue>
inline void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::Add(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"Add", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::Contains(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"Contains", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline void PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::CopyTo(::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>  array, int32_t  arrayIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"CopyTo", {}, {::i2c::type_of<::ArrayW<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, array, arrayIndex);
}
template<typename TKey,typename TValue>
inline int32_t PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::get_IsReadOnly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"get_IsReadOnly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline bool PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::Remove(::System::Collections::Generic::KeyValuePair_2<TKey,TValue>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"Remove", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename TKey,typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::System::Collections::IEnumerator* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename TKey,typename TValue>
inline ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::New_ctor(::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*  valueFactory)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>*>(valueFactory));
}
/// @brief Convert operator to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr  PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IDictionary_2<TKey,TValue>*() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IDictionary_2<TKey,TValue>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IDictionary_2<TKey,TValue>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::i___System__Collections__Generic__IDictionary_2_TKey_TValue_() noexcept {
return static_cast<::System::Collections::Generic::IDictionary_2<TKey,TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::i___System__Collections__Generic__ICollection_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::ICollection_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr  PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>"
template<typename TKey,typename TValue>
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::i___System__Collections__Generic__IEnumerable_1___System__Collections__Generic__KeyValuePair_2_TKey_TValue__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<TKey,TValue>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr  PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TKey,typename TValue>
constexpr ::System::Collections::IEnumerable* PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionary_2<TKey,TValue>::ReflectionUtils_ThreadSafeDictionary_2()   {
}
template<typename TKey,typename TValue>
inline void PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
template<typename TKey,typename TValue>
inline TValue PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>::Invoke(TKey  key)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, key);
}
template<typename TKey,typename TValue>
inline ::System::IAsyncResult* PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>::BeginInvoke(TKey  key, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, key, callback, object);
}
template<typename TKey,typename TValue>
inline TValue PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<TValue>(this, ___internal_method, result);
}
template<typename TKey,typename TValue>
inline ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>* PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>*>(object, method));
}
// Ctor Parameters []
template<typename TKey,typename TValue>
constexpr ::PlayFab::Json::ReflectionUtils_ThreadSafeDictionaryValueFactory_2<TKey,TValue>::ReflectionUtils_ThreadSafeDictionaryValueFactory_2()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_ConstructorDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils_ConstructorDelegate::*)(::System::Object*, ::System::IntPtr)>(&::PlayFab::Json::ReflectionUtils_ConstructorDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa83fcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_ConstructorDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::ReflectionUtils_ConstructorDelegate::*)(::ArrayW<::System::Object*>)>(&::PlayFab::Json::ReflectionUtils_ConstructorDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa84048c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_ConstructorDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayFab::Json::ReflectionUtils_ConstructorDelegate::*)(::ArrayW<::System::Object*>, ::System::AsyncCallback*, ::System::Object*)>(&::PlayFab::Json::ReflectionUtils_ConstructorDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa8404a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_ConstructorDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::ReflectionUtils_ConstructorDelegate::*)(::System::IAsyncResult*)>(&::PlayFab::Json::ReflectionUtils_ConstructorDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa8404c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void PlayFab::Json::ReflectionUtils_ConstructorDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils_ConstructorDelegate::Invoke(/* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, args);
}
inline ::System::IAsyncResult* PlayFab::Json::ReflectionUtils_ConstructorDelegate::BeginInvoke(::ArrayW<::System::Object*>  args, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, args, callback, object);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils_ConstructorDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, result);
}
inline ::PlayFab::Json::ReflectionUtils_ConstructorDelegate* PlayFab::Json::ReflectionUtils_ConstructorDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils_ConstructorDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils_ConstructorDelegate::ReflectionUtils_ConstructorDelegate()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_SetDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils_SetDelegate::*)(::System::Object*, ::System::IntPtr)>(&::PlayFab::Json::ReflectionUtils_SetDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa840274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_SetDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils_SetDelegate::*)(::System::Object*, ::System::Object*)>(&::PlayFab::Json::ReflectionUtils_SetDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa840444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_SetDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayFab::Json::ReflectionUtils_SetDelegate::*)(::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::PlayFab::Json::ReflectionUtils_SetDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa840458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_SetDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils_SetDelegate::*)(::System::IAsyncResult*)>(&::PlayFab::Json::ReflectionUtils_SetDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa840480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void PlayFab::Json::ReflectionUtils_SetDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void PlayFab::Json::ReflectionUtils_SetDelegate::Invoke(::System::Object*  source, ::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, value);
}
inline ::System::IAsyncResult* PlayFab::Json::ReflectionUtils_SetDelegate::BeginInvoke(::System::Object*  source, ::System::Object*  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, source, value, callback, object);
}
inline void PlayFab::Json::ReflectionUtils_SetDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_SetDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::PlayFab::Json::ReflectionUtils_SetDelegate* PlayFab::Json::ReflectionUtils_SetDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils_SetDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils_SetDelegate::ReflectionUtils_SetDelegate()   {
}
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_GetDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::Json::ReflectionUtils_GetDelegate::*)(::System::Object*, ::System::IntPtr)>(&::PlayFab::Json::ReflectionUtils_GetDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa83ffac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_GetDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::ReflectionUtils_GetDelegate::*)(::System::Object*)>(&::PlayFab::Json::ReflectionUtils_GetDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa840404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_GetDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::PlayFab::Json::ReflectionUtils_GetDelegate::*)(::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::PlayFab::Json::ReflectionUtils_GetDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa840418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::Json::ReflectionUtils_GetDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::PlayFab::Json::ReflectionUtils_GetDelegate::*)(::System::IAsyncResult*)>(&::PlayFab::Json::ReflectionUtils_GetDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa840438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(),
                    {::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void PlayFab::Json::ReflectionUtils_GetDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils_GetDelegate::Invoke(::System::Object*  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, source);
}
inline ::System::IAsyncResult* PlayFab::Json::ReflectionUtils_GetDelegate::BeginInvoke(::System::Object*  source, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, source, callback, object);
}
inline ::System::Object* PlayFab::Json::ReflectionUtils_GetDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::PlayFab::Json::ReflectionUtils_GetDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, result);
}
inline ::PlayFab::Json::ReflectionUtils_GetDelegate* PlayFab::Json::ReflectionUtils_GetDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::Json::ReflectionUtils_GetDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::PlayFab::Json::ReflectionUtils_GetDelegate::ReflectionUtils_GetDelegate()   {
}
