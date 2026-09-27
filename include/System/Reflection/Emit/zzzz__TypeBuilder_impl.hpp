#pragma once
// IWYU pragma private; include "System/Reflection/Emit/TypeBuilder.hpp"
#include "System/Reflection/zzzz__TypeInfo_impl.hpp"
#include "System/Reflection/Emit/zzzz__TypeBuilder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Reflection/zzzz__TypeAttributes_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Assembly)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_AssemblyQualifiedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a5c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_BaseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_BaseType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 121}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_FullName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_GUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_GUID)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 120}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Module
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Module)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a6e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_Namespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_Namespace)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.get_UnderlyingSystemType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetAttributeFlagsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetConstructorImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::Emit::TypeBuilder::GetConstructorImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetConstructors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetConstructors)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetCustomAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::TypeBuilder::*)(bool)>(&::System::Reflection::Emit::TypeBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetCustomAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Type*, bool)>(&::System::Reflection::Emit::TypeBuilder::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::GetElementType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetEvent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::EventInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetEvents)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetField)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetFields)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, bool)>(&::System::Reflection::Emit::TypeBuilder::GetInterface)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a9b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetInterfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::GetInterfaces)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20a9f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 125}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetMembers)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20aa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetMethodImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::Emit::TypeBuilder::GetMethodImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetMethods)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20aa98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetNestedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetNestedType)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20aad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetNestedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetNestedTypes)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ab08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (::System::Reflection::Emit::TypeBuilder::*)(::System::Reflection::BindingFlags)>(&::System::Reflection::Emit::TypeBuilder::GetProperties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ab40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 117}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.GetPropertyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::Reflection::Emit::TypeBuilder::GetPropertyImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ab78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.HasElementTypeImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20abb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.InvokeMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Reflection::Emit::TypeBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*>, ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>)>(&::System::Reflection::Emit::TypeBuilder::InvokeMember)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20abe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 122}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsArrayImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsArrayImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ac20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsByRefImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsByRefImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ac58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsCOMObjectImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ac90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsDefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)(::System::Type*, bool)>(&::System::Reflection::Emit::TypeBuilder::IsDefined)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20acc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsPointerImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsPointerImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ad00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::Emit::TypeBuilder.IsPrimitiveImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Reflection::Emit::TypeBuilder::*)()>(&::System::Reflection::Emit::TypeBuilder::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa20ad38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(),
                    {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 77}
                ));
    return ___internal_method;
  }
};
inline ::System::Reflection::Assembly* System::Reflection::Emit::TypeBuilder::get_Assembly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_AssemblyQualifiedName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::get_BaseType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 121}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_FullName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Guid System::Reflection::Emit::TypeBuilder::get_GUID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 120}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::Emit::TypeBuilder::get_Module()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Reflection::Emit::TypeBuilder::get_Namespace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::get_UnderlyingSystemType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes System::Reflection::Emit::TypeBuilder::GetAttributeFlagsImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* System::Reflection::Emit::TypeBuilder::GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*> System::Reflection::Emit::TypeBuilder::GetConstructors(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::TypeBuilder::GetCustomAttributes(bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> System::Reflection::Emit::TypeBuilder::GetCustomAttributes(::System::Type*  attributeType, bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::GetElementType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::EventInfo* System::Reflection::Emit::TypeBuilder::GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*> System::Reflection::Emit::TypeBuilder::GetEvents(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::FieldInfo* System::Reflection::Emit::TypeBuilder::GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> System::Reflection::Emit::TypeBuilder::GetFields(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::GetInterface(::StringW  name, bool  ignoreCase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, ignoreCase);
}
inline ::ArrayW<::System::Type*> System::Reflection::Emit::TypeBuilder::GetInterfaces()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> System::Reflection::Emit::TypeBuilder::GetMembers(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::MethodInfo* System::Reflection::Emit::TypeBuilder::GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::MethodInfo*> System::Reflection::Emit::TypeBuilder::GetMethods(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* System::Reflection::Emit::TypeBuilder::GetNestedType(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Type*> System::Reflection::Emit::TypeBuilder::GetNestedTypes(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*> System::Reflection::Emit::TypeBuilder::GetProperties(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 117}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::PropertyInfo* System::Reflection::Emit::TypeBuilder::GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline bool System::Reflection::Emit::TypeBuilder::HasElementTypeImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::Emit::TypeBuilder::InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*>  args, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW>  namedParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 122}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
}
inline bool System::Reflection::Emit::TypeBuilder::IsArrayImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsByRefImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsCOMObjectImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsDefined(::System::Type*  attributeType, bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline bool System::Reflection::Emit::TypeBuilder::IsPointerImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Reflection::Emit::TypeBuilder::IsPrimitiveImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Reflection::Emit::TypeBuilder*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::Emit::TypeBuilder::TypeBuilder()   {
}
