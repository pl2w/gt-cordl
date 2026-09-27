#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/TypeExtensions.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__TypeExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/XR/CoreUtils/zzzz__TypeExtensions_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetAssignableTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*, ::System::Func_2<::System::Type*,bool>*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetAssignableTypes)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb3f0a08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetAssignableTypes", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(), ::i2c::type_of<::System::Func_2<::System::Type*,bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetImplementationsOfInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetImplementationsOfInterface)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb3f0c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetImplementationsOfInterface", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetExtensionsOfClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetExtensionsOfClass)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb3f0d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetExtensionsOfClass", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetGenericInterfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Type*, ::System::Collections::Generic::List_1<::System::Type*>*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetGenericInterfaces)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb3f0d94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetGenericInterfaces", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetPropertyRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (*)(::System::Type*, ::StringW, ::System::Reflection::BindingFlags)>(&::Unity::XR::CoreUtils::TypeExtensions::GetPropertyRecursively)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb3f0f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetPropertyRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetFieldRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (*)(::System::Type*, ::StringW, ::System::Reflection::BindingFlags)>(&::Unity::XR::CoreUtils::TypeExtensions::GetFieldRecursively)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb3f1018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFieldRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetFieldsRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*, ::System::Reflection::BindingFlags)>(&::Unity::XR::CoreUtils::TypeExtensions::GetFieldsRecursively)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb3f1128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFieldsRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetPropertiesRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*, ::System::Reflection::BindingFlags)>(&::Unity::XR::CoreUtils::TypeExtensions::GetPropertiesRecursively)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb3f1288;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetPropertiesRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetInterfaceFieldsFromClasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::IEnumerable_1<::System::Type*>*, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*, ::System::Collections::Generic::List_1<::System::Type*>*, ::System::Reflection::BindingFlags)>(&::Unity::XR::CoreUtils::TypeExtensions::GetInterfaceFieldsFromClasses)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0xb3f13e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetInterfaceFieldsFromClasses", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetFieldInTypeOrBaseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (*)(::System::Type*, ::StringW)>(&::Unity::XR::CoreUtils::TypeExtensions::GetFieldInTypeOrBaseType)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb3f1b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFieldInTypeOrBaseType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetNameWithGenericArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetNameWithGenericArguments)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb3f1c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetNameWithGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetNameWithFullGenericArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetNameWithFullGenericArguments)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xb3f1e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetNameWithFullGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetFullNameWithGenericArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetFullNameWithGenericArguments)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xb3f2218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFullNameWithGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetFullNameWithGenericArgumentsInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Type*)>(&::Unity::XR::CoreUtils::TypeExtensions::GetFullNameWithGenericArgumentsInternal)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb3f2024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFullNameWithGenericArgumentsInternal", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.IsAssignableFromOrSubclassOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::Unity::XR::CoreUtils::TypeExtensions::IsAssignableFromOrSubclassOf)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb3f24ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"IsAssignableFromOrSubclassOf", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions.GetMethodRecursively
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (*)(::System::Type*, ::StringW, ::System::Reflection::BindingFlags)>(&::Unity::XR::CoreUtils::TypeExtensions::GetMethodRecursively)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb3f2548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetMethodRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::TypeExtensions::setStaticF_k_Fields(::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*, "k_Fields", ::Unity::XR::CoreUtils::TypeExtensions*>(std::forward<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*>(value));
}
inline ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>* Unity::XR::CoreUtils::TypeExtensions::getStaticF_k_Fields()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*, "k_Fields", ::Unity::XR::CoreUtils::TypeExtensions*>();
}
inline void Unity::XR::CoreUtils::TypeExtensions::setStaticF_k_TypeNames(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "k_TypeNames", ::Unity::XR::CoreUtils::TypeExtensions*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* Unity::XR::CoreUtils::TypeExtensions::getStaticF_k_TypeNames()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "k_TypeNames", ::Unity::XR::CoreUtils::TypeExtensions*>();
}
inline void Unity::XR::CoreUtils::TypeExtensions::GetAssignableTypes(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  list, ::System::Func_2<::System::Type*,bool>*  predicate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetAssignableTypes", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(), ::i2c::type_of<::System::Func_2<::System::Type*,bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, list, predicate);
}
inline void Unity::XR::CoreUtils::TypeExtensions::GetImplementationsOfInterface(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetImplementationsOfInterface", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, list);
}
inline void Unity::XR::CoreUtils::TypeExtensions::GetExtensionsOfClass(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetExtensionsOfClass", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, list);
}
inline void Unity::XR::CoreUtils::TypeExtensions::GetGenericInterfaces(::System::Type*  type, ::System::Type*  genericInterface, ::System::Collections::Generic::List_1<::System::Type*>*  interfaces)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetGenericInterfaces", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, genericInterface, interfaces);
}
inline ::System::Reflection::PropertyInfo* Unity::XR::CoreUtils::TypeExtensions::GetPropertyRecursively(::System::Type*  type, ::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetPropertyRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(nullptr, ___internal_method, type, name, bindingAttr);
}
inline ::System::Reflection::FieldInfo* Unity::XR::CoreUtils::TypeExtensions::GetFieldRecursively(::System::Type*  type, ::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFieldRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(nullptr, ___internal_method, type, name, bindingAttr);
}
inline void Unity::XR::CoreUtils::TypeExtensions::GetFieldsRecursively(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*  fields, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFieldsRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, fields, bindingAttr);
}
inline void Unity::XR::CoreUtils::TypeExtensions::GetPropertiesRecursively(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*  fields, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetPropertiesRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::PropertyInfo*>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, fields, bindingAttr);
}
inline void Unity::XR::CoreUtils::TypeExtensions::GetInterfaceFieldsFromClasses(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  classes, ::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*  fields, ::System::Collections::Generic::List_1<::System::Type*>*  interfaceTypes, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetInterfaceFieldsFromClasses", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Reflection::FieldInfo*>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, classes, fields, interfaceTypes, bindingAttr);
}
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
inline TAttribute Unity::XR::CoreUtils::TypeExtensions::GetAttribute(::System::Type*  type, bool  inherit)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                    {"GetAttribute", {::i2c::class_of<TAttribute>()}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAttribute>()}
                )));
return ::cordl_internals::RunMethodRethrow<TAttribute>(nullptr, ___internal_method, type, inherit);
}
template<typename TAttribute>
requires(::cordl_internals::type_constraint<TAttribute, ::System::Attribute*>)
inline void Unity::XR::CoreUtils::TypeExtensions::IsDefinedGetInheritedTypes(::System::Type*  type, ::System::Collections::Generic::List_1<::System::Type*>*  types)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                    {"IsDefinedGetInheritedTypes", {::i2c::class_of<TAttribute>()}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::System::Type*>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TAttribute>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, types);
}
inline ::System::Reflection::FieldInfo* Unity::XR::CoreUtils::TypeExtensions::GetFieldInTypeOrBaseType(::System::Type*  type, ::StringW  fieldName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFieldInTypeOrBaseType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(nullptr, ___internal_method, type, fieldName);
}
inline ::StringW Unity::XR::CoreUtils::TypeExtensions::GetNameWithGenericArguments(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetNameWithGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW Unity::XR::CoreUtils::TypeExtensions::GetNameWithFullGenericArguments(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetNameWithFullGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW Unity::XR::CoreUtils::TypeExtensions::GetFullNameWithGenericArguments(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFullNameWithGenericArguments", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline ::StringW Unity::XR::CoreUtils::TypeExtensions::GetFullNameWithGenericArgumentsInternal(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetFullNameWithGenericArgumentsInternal", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, type);
}
inline bool Unity::XR::CoreUtils::TypeExtensions::IsAssignableFromOrSubclassOf(::System::Type*  checkType, ::System::Type*  baseType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"IsAssignableFromOrSubclassOf", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, checkType, baseType);
}
inline ::System::Reflection::MethodInfo* Unity::XR::CoreUtils::TypeExtensions::GetMethodRecursively(::System::Type*  type, ::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions*>(),
                        {"GetMethodRecursively", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(nullptr, ___internal_method, type, name, bindingAttr);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::TypeExtensions::TypeExtensions()   {
}
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::*)()>(&::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb3f0af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0._GetAssignableTypes_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::*)(::System::Type*)>(&::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::_GetAssignableTypes_b__0)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb3f2740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0*>(),
                        {"<GetAssignableTypes>b__0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::System::Type* const& Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::System::Func_2<::System::Type*,bool>*& Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_get_predicate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
constexpr ::System::Func_2<::System::Type*,bool>* const& Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_get_predicate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___predicate;
}
constexpr void Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_set_predicate(::System::Func_2<::System::Type*,bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___predicate = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>*& Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_get_list()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr ::System::Collections::Generic::List_1<::System::Type*>* const& Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_get_list() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___list;
}
constexpr void Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::__cordl_internal_set_list(::System::Collections::Generic::List_1<::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___list = value;
}
inline void Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::_GetAssignableTypes_b__0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0*>(),
                        {"<GetAssignableTypes>b__0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0* Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::TypeExtensions___c__DisplayClass2_0::TypeExtensions___c__DisplayClass2_0()   {
}
