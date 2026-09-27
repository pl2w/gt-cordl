#pragma once
// IWYU pragma private; include "System/Type.hpp"
#include "System/Reflection/zzzz__MemberInfo_impl.hpp"
#include "System/zzzz__RuntimeTypeHandle_impl.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
#include "System/Reflection/zzzz__InterfaceMapping_def.hpp"
#include "System/Reflection/zzzz__MemberFilter_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/Reflection/zzzz__TypeFilter_def.hpp"
#include "System/zzzz__Array_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__TypeCode_def.hpp"
//  Writing Method size for method: ::System::Type.IsEnumDefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Object*)>(&::System::Type::IsEnumDefined)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0xa2f755c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)(::System::Object*)>(&::System::Type::GetEnumName)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0xa2f7bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumNames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::StringW> (::System::Type::*)()>(&::System::Type::GetEnumNames)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa2f7d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumRawConstantValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::System::Type::*)()>(&::System::Type::GetEnumRawConstantValues)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa2f7a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetEnumRawConstantValues", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Type::*)(::by_ref<::ArrayW<::StringW>>, ::by_ref<::System::Array*>)>(&::System::Type::GetEnumData)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0xa2f7e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetEnumData", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::System::Array*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.BinarySearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Array*, ::System::Object*)>(&::System::Type::BinarySearch)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xa2f7a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"BinarySearch", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsIntegerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*)>(&::System::Type::IsIntegerType)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa2f78cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"IsIntegerType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSerializable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSerializable)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa2f83b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_ContainsGenericParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_ContainsGenericParameters)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa2f856c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetRootElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetRootElementType)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa2f867c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetRootElementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsVisible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsVisible)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xa2f86cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsVisible", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FindInterfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Type::*)(::System::Reflection::TypeFilter*, ::System::Object*)>(&::System::Type::FindInterfaces)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xa2f88bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsSubclassOf
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::IsSubclassOf)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa2f8ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsAssignableFrom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::IsAssignableFrom)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa2f8b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.ImplementInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::ImplementInterface)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa2f8dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"ImplementInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FilterAttributeImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(&::System::Type::FilterAttributeImpl)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa2f8eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FilterAttributeImpl", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FilterNameImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(&::System::Type::FilterNameImpl)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa2f9220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FilterNameImpl", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FilterNameIgnoreCaseImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MemberInfo*, ::System::Object*)>(&::System::Type::FilterNameIgnoreCaseImpl)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa2f9378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FilterNameIgnoreCaseImpl", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Type::*)()>(&::System::Type::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f94e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_MemberType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MemberTypes (::System::Type::*)()>(&::System::Type::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f94ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f94f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Namespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_Namespace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_AssemblyQualifiedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_FullName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::Type::*)()>(&::System::Type::get_Assembly)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Module
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Type::*)()>(&::System::Type::get_Module)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNested
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNested)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa2f8854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNested", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_DeclaringType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_DeclaringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f94fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_DeclaringMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::Type::*)()>(&::System::Type::get_DeclaringMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f9504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_ReflectedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f950c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_UnderlyingSystemType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsArray)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsArrayImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsArrayImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsByRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsByRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsByRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsByRefImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsByRefImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsPointer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsPointer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsPointerImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsPointerImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsConstructedGenericType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsConstructedGenericType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa2f9544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericParameter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f95bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericMethodParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericMethodParameter)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2f95c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f9610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsGenericTypeDefinition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f9618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSZArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSZArray)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa2f9620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsVariableBoundArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsVariableBoundArray)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa2f9644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_HasElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_HasElementType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f866c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_HasElementType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.HasElementTypeImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetElementType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetArrayRank
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Type::*)()>(&::System::Type::GetArrayRank)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2f968c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetGenericTypeDefinition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetGenericTypeDefinition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2f96d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GenericTypeArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Type::*)()>(&::System::Type::get_GenericTypeArguments)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xa2f9724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetGenericArguments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Type::*)()>(&::System::Type::GetGenericArguments)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2f9808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GenericParameterPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Type::*)()>(&::System::Type::get_GenericParameterPosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2f9854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GenericParameterAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::GenericParameterAttributes (::System::Type::*)()>(&::System::Type::get_GenericParameterAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2f98a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetGenericParameterConstraints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Type::*)()>(&::System::Type::GetGenericParameterConstraints)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa2f98d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_Attributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (::System::Type::*)()>(&::System::Type::get_Attributes)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_Attributes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetAttributeFlagsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (::System::Type::*)()>(&::System::Type::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsAbstract
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsAbstract)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa2f9960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsAbstract", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSealed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSealed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa2f9980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsSealed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsClass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsClass)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa2f99a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsClass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNestedAssembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNestedAssembly)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2f99f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNestedAssembly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNestedPrivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNestedPrivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2f9a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNestedPrivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNestedPublic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNestedPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2f882c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNestedPublic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsNotPublic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsNotPublic)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa2f9a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNotPublic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsPublic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsPublic)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2f8894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsPublic", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsExplicitLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsExplicitLayout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa2f9a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsExplicitLayout", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsCOMObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsCOMObject)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsCOMObject", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsCOMObjectImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsContextful
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsContextful)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsContextful", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsContextfulImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsContextfulImpl)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2f9ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 71}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsCollectible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsCollectible)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f9b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsEnum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsEnum)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa2f9b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsMarshalByRef
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsMarshalByRef)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsMarshalByRef", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsMarshalByRefImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsMarshalByRefImpl)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2f9b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 75}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsPrimitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsPrimitive)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9c18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsPrimitive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsPrimitiveImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsValueType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsValueType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f99e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsValueType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsValueTypeImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsValueTypeImpl)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa2f9c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 79}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSignatureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSignatureType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f9c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 80}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Type::*)(::ArrayW<::System::Type*>)>(&::System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2f9c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructor", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Type::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructor", {}, {::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Type::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetConstructor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa2f9cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructor", {}, {::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructorImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Type::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetConstructorImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (::System::Type::*)()>(&::System::Type::GetConstructors)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2f9db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetConstructors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetConstructors)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2f9dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::EventInfo*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetEvents)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetField)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2f9de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetField", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::System::Type::*)()>(&::System::Type::GetFields)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2f9df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetFields", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetFields)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Type::*)(::StringW)>(&::System::Type::GetMember)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2f9e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMember", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetMember)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2f9e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 95}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Type::*)(::StringW, ::System::Reflection::MemberTypes, ::System::Reflection::BindingFlags)>(&::System::Type::GetMember)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2f9e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 96}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetMembers)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2f9e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa2f9e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::ArrayW<::System::Type*>)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2f9ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2f9f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa2f9f28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetMethod)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xa2f9f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethodImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetMethodImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (::System::Type::*)()>(&::System::Type::GetMethods)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2fa070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethods", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetMethods)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetNestedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetNestedType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetNestedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetNestedTypes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2fa084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa2fa08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Type*)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa2fa0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Type*, ::ArrayW<::System::Type*>)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2fa1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa2fa1e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetProperty)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa2fa1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetPropertyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Type::GetPropertyImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (::System::Type::*)()>(&::System::Type::GetProperties)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2fa284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (::System::Type::*)(::System::Reflection::BindingFlags)>(&::System::Type::GetProperties)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 117}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_TypeHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (::System::Type::*)()>(&::System::Type::get_TypeHandle)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2fa298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 118}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::RuntimeTypeHandle (*)(::System::Object*)>(&::System::Type::GetTypeHandle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa2fa2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeHandle", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (*)(::System::Type*)>(&::System::Type::GetTypeCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa2fa348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeCode", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeCodeImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::TypeCode (::System::Type::*)()>(&::System::Type::GetTypeCodeImpl)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa2fa398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 119}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_GUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Type::*)()>(&::System::Type::get_GUID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 120}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeFromCLSID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Guid)>(&::System::Type::GetTypeFromCLSID)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa2fa45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeFromCLSID", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_BaseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::get_BaseType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 121}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.InvokeMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Type::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*>, ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>)>(&::System::Type::InvokeMember)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 122}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)(::StringW)>(&::System::Type::GetInterface)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2fa524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetInterface", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)(::StringW, bool)>(&::System::Type::GetInterface)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetInterfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Type::*)()>(&::System::Type::GetInterfaces)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetInterfaceMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::InterfaceMapping (::System::Type::*)(::System::Type*)>(&::System::Type::GetInterfaceMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2fa538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 126}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsInstanceOfType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Object*)>(&::System::Type::IsInstanceOfType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa2fa584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 127}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsEquivalentTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa2fa5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 128}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumUnderlyingType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::GetEnumUnderlyingType)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa2fa600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 129}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetEnumValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Array* (::System::Type::*)()>(&::System::Type::GetEnumValues)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa2fa6e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 130}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeArrayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::MakeArrayType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2fa76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 131}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeArrayType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)(int32_t)>(&::System::Type::MakeArrayType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2fa7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 132}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeByRefType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::MakeByRefType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2fa7dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 133}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeGenericType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)(::ArrayW<::System::Type*>)>(&::System::Type::MakeGenericType)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa2fa814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 134}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakePointerType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Type::*)()>(&::System::Type::MakePointerType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2fa860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 135}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.MakeGenericSignatureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*, ::ArrayW<::System::Type*>)>(&::System::Type::MakeGenericSignatureType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xa2fa898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"MakeGenericSignatureType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::ToString)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa2fa904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Object*)>(&::System::Type::Equals)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa2fa964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Type::*)()>(&::System::Type::GetHashCode)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa2fa9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)(::System::Type*)>(&::System::Type::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2faa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 136}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_DefaultBinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Binder* (*)()>(&::System::Type::get_DefaultBinder)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa2faa80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_DefaultBinder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeFromHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::RuntimeTypeHandle)>(&::System::Type::GetTypeFromHandle)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa2ed384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeFromHandle", {}, {::i2c::type_of<::System::RuntimeTypeHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.internal_from_handle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::IntPtr)>(&::System::Type::internal_from_handle)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa2fab44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"internal_from_handle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsSzArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsSzArray)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa2fab48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 137}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FormatTypeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::FormatTypeName)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa2fab50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FormatTypeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.FormatTypeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)(bool)>(&::System::Type::FormatTypeName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa2fab64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 138}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_IsInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::get_IsInterface)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa2f8d08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, bool, bool)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa2fab9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, bool)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa2fac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa2faca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW, ::System::Func_2<::System::Reflection::AssemblyName*,::System::Reflection::Assembly*>*, ::System::Func_4<::System::Reflection::Assembly*,::StringW,bool,::System::Type*>*, bool)>(&::System::Type::GetType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa2fad24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<::System::Reflection::AssemblyName*,::System::Reflection::Assembly*>*>(), ::i2c::type_of<::System::Func_4<::System::Reflection::Assembly*,::StringW,bool,::System::Type*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.op_Equality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Type::op_Equality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2f78c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.op_Inequality
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::Type::op_Inequality)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2f8560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.GetTypeFromCLSID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Guid, ::StringW, bool)>(&::System::Type::GetTypeFromCLSID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa2fa4a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeFromCLSID", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_FullNameOrDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_FullNameOrDefault)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa2fad48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_FullNameOrDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.IsRuntimeImplemented
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Type::*)()>(&::System::Type::IsRuntimeImplemented)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa2f84d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"IsRuntimeImplemented", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.InternalGetNameIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)(::by_ref<::System::Type*>)>(&::System::Type::InternalGetNameIfAvailable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa2fae88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Type*>(),
                    {::i2c::class_of<::System::Type*>(), 140}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_InternalNameIfAvailable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_InternalNameIfAvailable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa2fae68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_InternalNameIfAvailable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Type.get_NameOrDefault
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Type::*)()>(&::System::Type::get_NameOrDefault)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa2fae94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_NameOrDefault", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::RuntimeTypeHandle& System::Type::__cordl_internal_get__impl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____impl;
}
constexpr ::System::RuntimeTypeHandle const& System::Type::__cordl_internal_get__impl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____impl;
}
constexpr void System::Type::__cordl_internal_set__impl(::System::RuntimeTypeHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____impl = value;
}
inline void System::Type::setStaticF_s_defaultBinder(::System::Reflection::Binder*  value)  {
::cordl_internals::setStaticField<::System::Reflection::Binder*, "s_defaultBinder", ::System::Type*>(std::forward<::System::Reflection::Binder*>(value));
}
inline ::System::Reflection::Binder* System::Type::getStaticF_s_defaultBinder()  {
return ::cordl_internals::getStaticField<::System::Reflection::Binder*, "s_defaultBinder", ::System::Type*>();
}
inline void System::Type::setStaticF_Delimiter(char16_t  value)  {
::cordl_internals::setStaticField<char16_t, "Delimiter", ::System::Type*>(std::forward<char16_t>(value));
}
inline char16_t System::Type::getStaticF_Delimiter()  {
return ::cordl_internals::getStaticField<char16_t, "Delimiter", ::System::Type*>();
}
inline void System::Type::setStaticF_EmptyTypes(::ArrayW<::System::Type*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Type*>, "EmptyTypes", ::System::Type*>(std::forward<::ArrayW<::System::Type*>>(value));
}
inline ::ArrayW<::System::Type*> System::Type::getStaticF_EmptyTypes()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Type*>, "EmptyTypes", ::System::Type*>();
}
inline void System::Type::setStaticF_Missing(::System::Object*  value)  {
::cordl_internals::setStaticField<::System::Object*, "Missing", ::System::Type*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* System::Type::getStaticF_Missing()  {
return ::cordl_internals::getStaticField<::System::Object*, "Missing", ::System::Type*>();
}
inline void System::Type::setStaticF_FilterAttribute(::System::Reflection::MemberFilter*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MemberFilter*, "FilterAttribute", ::System::Type*>(std::forward<::System::Reflection::MemberFilter*>(value));
}
inline ::System::Reflection::MemberFilter* System::Type::getStaticF_FilterAttribute()  {
return ::cordl_internals::getStaticField<::System::Reflection::MemberFilter*, "FilterAttribute", ::System::Type*>();
}
inline void System::Type::setStaticF_FilterName(::System::Reflection::MemberFilter*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MemberFilter*, "FilterName", ::System::Type*>(std::forward<::System::Reflection::MemberFilter*>(value));
}
inline ::System::Reflection::MemberFilter* System::Type::getStaticF_FilterName()  {
return ::cordl_internals::getStaticField<::System::Reflection::MemberFilter*, "FilterName", ::System::Type*>();
}
inline void System::Type::setStaticF_FilterNameIgnoreCase(::System::Reflection::MemberFilter*  value)  {
::cordl_internals::setStaticField<::System::Reflection::MemberFilter*, "FilterNameIgnoreCase", ::System::Type*>(std::forward<::System::Reflection::MemberFilter*>(value));
}
inline ::System::Reflection::MemberFilter* System::Type::getStaticF_FilterNameIgnoreCase()  {
return ::cordl_internals::getStaticField<::System::Reflection::MemberFilter*, "FilterNameIgnoreCase", ::System::Type*>();
}
inline bool System::Type::IsEnumDefined(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, value);
}
inline ::StringW System::Type::GetEnumName(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, value);
}
inline ::ArrayW<::StringW> System::Type::GetEnumNames()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW>>(this, ___internal_method);
}
inline ::System::Array* System::Type::GetEnumRawConstantValues()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetEnumRawConstantValues", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method);
}
inline void System::Type::GetEnumData(::by_ref<::ArrayW<::StringW>>  enumNames, ::by_ref<::System::Array*>  enumValues)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetEnumData", {}, {::i2c::type_of<::by_ref<::ArrayW<::StringW>>>(), ::i2c::type_of<::by_ref<::System::Array*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumNames, enumValues);
}
inline int32_t System::Type::BinarySearch(::System::Array*  array, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"BinarySearch", {}, {::i2c::type_of<::System::Array*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array, value);
}
inline bool System::Type::IsIntegerType(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"IsIntegerType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, t);
}
inline bool System::Type::get_IsSerializable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_ContainsGenericParameters()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetRootElementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetRootElementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Type::get_IsVisible()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsVisible", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Type::FindInterfaces(::System::Reflection::TypeFilter*  filter, ::System::Object*  filterCriteria)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, filter, filterCriteria);
}
inline bool System::Type::IsSubclassOf(::System::Type*  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::Type::IsAssignableFrom(::System::Type*  c)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline bool System::Type::ImplementInterface(::System::Type*  ifaceType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"ImplementInterface", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ifaceType);
}
inline bool System::Type::FilterAttributeImpl(::System::Reflection::MemberInfo*  m, ::System::Object*  filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FilterAttributeImpl", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, filterCriteria);
}
inline bool System::Type::FilterNameImpl(::System::Reflection::MemberInfo*  m, ::System::Object*  filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FilterNameImpl", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, filterCriteria);
}
inline bool System::Type::FilterNameIgnoreCaseImpl(::System::Reflection::MemberInfo*  m, ::System::Object*  filterCriteria)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FilterNameIgnoreCaseImpl", {}, {::i2c::type_of<::System::Reflection::MemberInfo*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m, filterCriteria);
}
inline void System::Type::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Type::get_MemberType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Type::get_Namespace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Type::get_AssemblyQualifiedName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Type::get_FullName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Type::get_Assembly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Type::get_Module()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline bool System::Type::get_IsNested()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNested", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Type::get_DeclaringType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::MethodBase* System::Type::get_DeclaringMethod()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method);
}
inline ::System::Type* System::Type::get_ReflectedType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Type::get_UnderlyingSystemType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Type::get_IsArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsArrayImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsByRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsByRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsByRefImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsPointer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsPointer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsPointerImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsConstructedGenericType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericParameter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericMethodParameter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsGenericTypeDefinition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsSZArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsVariableBoundArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_HasElementType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_HasElementType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::HasElementTypeImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetElementType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline int32_t System::Type::GetArrayRank()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetGenericTypeDefinition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Type::get_GenericTypeArguments()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Type::GetGenericArguments()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline int32_t System::Type::get_GenericParameterPosition()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::GenericParameterAttributes System::Type::get_GenericParameterAttributes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::GenericParameterAttributes>(this, ___internal_method);
}
inline ::ArrayW<::System::Type*> System::Type::GetGenericParameterConstraints()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::Type::get_Attributes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_Attributes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::Type::GetAttributeFlagsImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(this, ___internal_method);
}
inline bool System::Type::get_IsAbstract()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsAbstract", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsSealed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsSealed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsClass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsClass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsNestedAssembly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNestedAssembly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsNestedPrivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNestedPrivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsNestedPublic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNestedPublic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsNotPublic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsNotPublic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsPublic()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsPublic", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsExplicitLayout()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsExplicitLayout", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsCOMObject()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsCOMObject", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsCOMObjectImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsContextful()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsContextful", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsContextfulImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsCollectible()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsEnum()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsMarshalByRef()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsMarshalByRef", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsMarshalByRefImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 75}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsPrimitive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsPrimitive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsPrimitiveImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsValueType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsValueType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::IsValueTypeImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 79}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Type::get_IsSignatureType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 80}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructor(::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructor", {}, {::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, types);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructor(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructor", {}, {::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, types, modifiers);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructor(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructor", {}, {::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::System::Reflection::ConstructorInfo* System::Type::GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*> System::Type::GetConstructors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetConstructors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*> System::Type::GetConstructors(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::EventInfo* System::Type::GetEvent(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetEvent", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(this, ___internal_method, name);
}
inline ::System::Reflection::EventInfo* System::Type::GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*> System::Type::GetEvents(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::FieldInfo* System::Type::GetField(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetField", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, name);
}
inline ::System::Reflection::FieldInfo* System::Type::GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> System::Type::GetFields()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetFields", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> System::Type::GetFields(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Type::GetMember(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMember", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, name);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Type::GetMember(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 95}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Type::GetMember(::StringW  name, ::System::Reflection::MemberTypes  type, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 96}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, name, type, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Type::GetMembers(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW  name, ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, types);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW  name, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethod(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethod", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Reflection::CallingConventions>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::System::Reflection::MethodInfo* System::Type::GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::MethodInfo*> System::Type::GetMethods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetMethods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::MethodInfo*> System::Type::GetMethods(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Type::GetNestedType(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Type*> System::Type::GetNestedTypes(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW  name, ::System::Type*  returnType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, returnType);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW  name, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, returnType, types);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW  name, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, returnType, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetProperty(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperty", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::System::Reflection::Binder*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::Type::GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*> System::Type::GetProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*> System::Type::GetProperties(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 117}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::RuntimeTypeHandle System::Type::get_TypeHandle()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 118}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(this, ___internal_method);
}
inline ::System::RuntimeTypeHandle System::Type::GetTypeHandle(::System::Object*  o)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeHandle", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::RuntimeTypeHandle>(nullptr, ___internal_method, o);
}
inline ::System::TypeCode System::Type::GetTypeCode(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeCode", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(nullptr, ___internal_method, type);
}
inline ::System::TypeCode System::Type::GetTypeCodeImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 119}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TypeCode>(this, ___internal_method);
}
inline ::System::Guid System::Type::get_GUID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 120}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetTypeFromCLSID(::System::Guid  clsid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeFromCLSID", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, clsid);
}
inline ::System::Type* System::Type::get_BaseType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 121}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Object* System::Type::InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*>  args, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW>  namedParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 122}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
}
inline ::System::Type* System::Type::GetInterface(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetInterface", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name);
}
inline ::System::Type* System::Type::GetInterface(::StringW  name, bool  ignoreCase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, ignoreCase);
}
inline ::ArrayW<::System::Type*> System::Type::GetInterfaces()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::System::Reflection::InterfaceMapping System::Type::GetInterfaceMap(::System::Type*  interfaceType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 126}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::InterfaceMapping>(this, ___internal_method, interfaceType);
}
inline bool System::Type::IsInstanceOfType(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 127}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline bool System::Type::IsEquivalentTo(::System::Type*  other)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 128}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
inline ::System::Type* System::Type::GetEnumUnderlyingType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 129}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Array* System::Type::GetEnumValues()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 130}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Array*>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeArrayType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 131}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeArrayType(int32_t  rank)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 132}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, rank);
}
inline ::System::Type* System::Type::MakeByRefType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 133}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeGenericType(/* [ParamArray] */ ::ArrayW<::System::Type*>  typeArguments)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 134}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeArguments);
}
inline ::System::Type* System::Type::MakePointerType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 135}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Type* System::Type::MakeGenericSignatureType(::System::Type*  genericTypeDefinition, /* [ParamArray] */ ::ArrayW<::System::Type*>  typeArguments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"MakeGenericSignatureType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, genericTypeDefinition, typeArguments);
}
inline ::StringW System::Type::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Type::Equals(::System::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline int32_t System::Type::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool System::Type::Equals(::System::Type*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 136}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::System::Reflection::Binder* System::Type::get_DefaultBinder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_DefaultBinder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Binder*>(nullptr, ___internal_method);
}
inline ::System::Type* System::Type::GetTypeFromHandle(::System::RuntimeTypeHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeFromHandle", {}, {::i2c::type_of<::System::RuntimeTypeHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, handle);
}
inline ::System::Type* System::Type::internal_from_handle(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"internal_from_handle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, handle);
}
inline bool System::Type::get_IsSzArray()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 137}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Type::FormatTypeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"FormatTypeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Type::FormatTypeName(bool  serialization)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 138}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, serialization);
}
inline bool System::Type::get_IsInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_IsInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* System::Type::GetType(::StringW  typeName, bool  throwOnError, bool  ignoreCase)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName, throwOnError, ignoreCase);
}
inline ::System::Type* System::Type::GetType(::StringW  typeName, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName, throwOnError);
}
inline ::System::Type* System::Type::GetType(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName);
}
inline ::System::Type* System::Type::GetType(::StringW  typeName, ::System::Func_2<::System::Reflection::AssemblyName*,::System::Reflection::Assembly*>*  assemblyResolver, ::System::Func_4<::System::Reflection::Assembly*,::StringW,bool,::System::Type*>*  typeResolver, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetType", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Func_2<::System::Reflection::AssemblyName*,::System::Reflection::Assembly*>*>(), ::i2c::type_of<::System::Func_4<::System::Reflection::Assembly*,::StringW,bool,::System::Type*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, typeName, assemblyResolver, typeResolver, throwOnError);
}
inline bool System::Type::op_Equality(::System::Type*  left, ::System::Type*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"op_Equality", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline bool System::Type::op_Inequality(::System::Type*  left, ::System::Type*  right)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"op_Inequality", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, left, right);
}
inline ::System::Type* System::Type::GetTypeFromCLSID(::System::Guid  clsid, ::StringW  server, bool  throwOnError)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"GetTypeFromCLSID", {}, {::i2c::type_of<::System::Guid>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, clsid, server, throwOnError);
}
inline ::StringW System::Type::get_FullNameOrDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_FullNameOrDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool System::Type::IsRuntimeImplemented()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"IsRuntimeImplemented", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Type::InternalGetNameIfAvailable(::by_ref<::System::Type*>  rootCauseForFailure)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Type*>(), 140}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, rootCauseForFailure);
}
inline ::StringW System::Type::get_InternalNameIfAvailable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_InternalNameIfAvailable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Type::get_NameOrDefault()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Type*>(),
                        {"get_NameOrDefault", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Type::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Type*>());
}
// Ctor Parameters []
constexpr ::System::Type::Type()   {
}
