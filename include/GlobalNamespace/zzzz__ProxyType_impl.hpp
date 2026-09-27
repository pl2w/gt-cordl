#pragma once
// IWYU pragma private; include "GlobalNamespace/ProxyType.hpp"
#include "System/zzzz__Type_impl.hpp"
#include "GlobalNamespace/zzzz__ProxyType_def.hpp"
#include "GlobalNamespace/zzzz__InvalidType_def.hpp"
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
//  Writing Method size for method: ::GlobalNamespace::ProxyType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5b210bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ProxyType::*)(::StringW)>(&::GlobalNamespace::ProxyType::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5b2113c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b211d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_FullName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_FullName)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b211e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.Parse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ProxyType* (*)(::StringW)>(&::GlobalNamespace::ProxyType::Parse)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5b21244;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::ToString)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5b21428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetCustomAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::GlobalNamespace::ProxyType::*)(bool)>(&::GlobalNamespace::ProxyType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b21480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetCustomAttributes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::GlobalNamespace::ProxyType::*)(::System::Type*, bool)>(&::GlobalNamespace::ProxyType::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b214a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.IsDefined
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProxyType::*)(::System::Type*, bool)>(&::GlobalNamespace::ProxyType::IsDefined)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b214c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_Module
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Module* (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_Module)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b214e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_Namespace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_Namespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetAttributeFlagsImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::TypeAttributes (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::GetAttributeFlagsImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b21528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetConstructorImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::ConstructorInfo* (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::GlobalNamespace::ProxyType::GetConstructorImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b21530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 84}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetConstructors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetConstructors)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 86}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::GetElementType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::EventInfo* (::GlobalNamespace::ProxyType::*)(::StringW, ::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetEvent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 88}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::EventInfo*> (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetEvents)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 89}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::GlobalNamespace::ProxyType::*)(::StringW, ::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetField)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b215b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 91}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetFields)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b215d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 93}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetMembers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MemberInfo*> (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetMembers)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b215f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 97}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetMethodImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::GlobalNamespace::ProxyType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::GlobalNamespace::ProxyType::GetMethodImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b21618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetMethods)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 106}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetProperties)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 117}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.InvokeMember
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::ProxyType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Object*, ::ArrayW<::System::Object*>, ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>)>(&::GlobalNamespace::ProxyType::InvokeMember)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b21660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 122}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_UnderlyingSystemType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_UnderlyingSystemType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b2168c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.IsArrayImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::IsArrayImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b216ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.IsByRefImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::IsByRefImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b216b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.IsCOMObjectImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::IsCOMObjectImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b216bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.IsPointerImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::IsPointerImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b216c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.IsPrimitiveImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::IsPrimitiveImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b216cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 77}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_Assembly)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b216d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_AssemblyQualifiedName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_AssemblyQualifiedName)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5b216f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_BaseType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_BaseType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b2177c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 121}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.get_GUID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::get_GUID)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b2179c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 120}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetPropertyImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::GlobalNamespace::ProxyType::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::GlobalNamespace::ProxyType::GetPropertyImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b217bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 115}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.HasElementTypeImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::HasElementTypeImpl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b217c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetNestedType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::ProxyType::*)(::StringW, ::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetNestedType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b217cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 107}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetNestedTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::GlobalNamespace::ProxyType::*)(::System::Reflection::BindingFlags)>(&::GlobalNamespace::ProxyType::GetNestedTypes)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b217ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 108}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::GlobalNamespace::ProxyType::*)(::StringW, bool)>(&::GlobalNamespace::ProxyType::GetInterface)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b2180c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 124}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ProxyType.GetInterfaces
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Type*> (::GlobalNamespace::ProxyType::*)()>(&::GlobalNamespace::ProxyType::GetInterfaces)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b21830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                    {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 125}
                ));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::ProxyType::__cordl_internal_get__self()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr ::System::Type* const& GlobalNamespace::ProxyType::__cordl_internal_get__self() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____self;
}
constexpr void GlobalNamespace::ProxyType::__cordl_internal_set__self(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____self = value;
}
constexpr ::StringW& GlobalNamespace::ProxyType::__cordl_internal_get__typeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeName;
}
constexpr ::StringW const& GlobalNamespace::ProxyType::__cordl_internal_get__typeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____typeName;
}
constexpr void GlobalNamespace::ProxyType::__cordl_internal_set__typeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____typeName = value;
}
inline void GlobalNamespace::ProxyType::setStaticF_kPrefix(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "kPrefix", ::GlobalNamespace::ProxyType*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::ProxyType::getStaticF_kPrefix()  {
return ::cordl_internals::getStaticField<::StringW, "kPrefix", ::GlobalNamespace::ProxyType*>();
}
inline void GlobalNamespace::ProxyType::setStaticF_kInvalidType(::GlobalNamespace::InvalidType*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InvalidType*, "kInvalidType", ::GlobalNamespace::ProxyType*>(std::forward<::GlobalNamespace::InvalidType*>(value));
}
inline ::GlobalNamespace::InvalidType* GlobalNamespace::ProxyType::getStaticF_kInvalidType()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InvalidType*, "kInvalidType", ::GlobalNamespace::ProxyType*>();
}
inline void GlobalNamespace::ProxyType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ProxyType::_ctor(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline ::StringW GlobalNamespace::ProxyType::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ProxyType::get_FullName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::ProxyType* GlobalNamespace::ProxyType::Parse(::StringW  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ProxyType*>(),
                        {"Parse", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ProxyType*>(nullptr, ___internal_method, input);
}
inline ::StringW GlobalNamespace::ProxyType::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::ArrayW<::System::Object*> GlobalNamespace::ProxyType::GetCustomAttributes(bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*> GlobalNamespace::ProxyType::GetCustomAttributes(::System::Type*  attributeType, bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(this, ___internal_method, attributeType, inherit);
}
inline bool GlobalNamespace::ProxyType::IsDefined(::System::Type*  attributeType, bool  inherit)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeType, inherit);
}
inline ::System::Reflection::Module* GlobalNamespace::ProxyType::get_Module()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ProxyType::get_Namespace()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Reflection::TypeAttributes GlobalNamespace::ProxyType::GetAttributeFlagsImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::TypeAttributes>(this, ___internal_method);
}
inline ::System::Reflection::ConstructorInfo* GlobalNamespace::ProxyType::GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 84}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::ConstructorInfo*>(this, ___internal_method, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::ConstructorInfo*> GlobalNamespace::ProxyType::GetConstructors(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 86}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::ConstructorInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* GlobalNamespace::ProxyType::GetElementType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Reflection::EventInfo* GlobalNamespace::ProxyType::GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 88}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::EventInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::EventInfo*> GlobalNamespace::ProxyType::GetEvents(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 89}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::EventInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::FieldInfo* GlobalNamespace::ProxyType::GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 91}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Reflection::FieldInfo*> GlobalNamespace::ProxyType::GetFields(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 93}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::FieldInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::MemberInfo*> GlobalNamespace::ProxyType::GetMembers(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 97}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Reflection::MethodInfo* GlobalNamespace::ProxyType::GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, name, bindingAttr, binder, callConvention, types, modifiers);
}
inline ::ArrayW<::System::Reflection::MethodInfo*> GlobalNamespace::ProxyType::GetMethods(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 106}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MethodInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::ArrayW<::System::Reflection::PropertyInfo*> GlobalNamespace::ProxyType::GetProperties(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 117}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::PropertyInfo*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Object* GlobalNamespace::ProxyType::InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*>  args, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW>  namedParameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 122}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, name, invokeAttr, binder, target, args, modifiers, culture, namedParameters);
}
inline ::System::Type* GlobalNamespace::ProxyType::get_UnderlyingSystemType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool GlobalNamespace::ProxyType::IsArrayImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ProxyType::IsByRefImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ProxyType::IsCOMObjectImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ProxyType::IsPointerImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::ProxyType::IsPrimitiveImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 77}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* GlobalNamespace::ProxyType::get_Assembly()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::ProxyType::get_AssemblyQualifiedName()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* GlobalNamespace::ProxyType::get_BaseType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 121}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Guid GlobalNamespace::ProxyType::get_GUID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 120}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline ::System::Reflection::PropertyInfo* GlobalNamespace::ProxyType::GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 115}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, name, bindingAttr, binder, returnType, types, modifiers);
}
inline bool GlobalNamespace::ProxyType::HasElementTypeImpl()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Type* GlobalNamespace::ProxyType::GetNestedType(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 107}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, bindingAttr);
}
inline ::ArrayW<::System::Type*> GlobalNamespace::ProxyType::GetNestedTypes(::System::Reflection::BindingFlags  bindingAttr)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 108}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method, bindingAttr);
}
inline ::System::Type* GlobalNamespace::ProxyType::GetInterface(::StringW  name, bool  ignoreCase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 124}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, name, ignoreCase);
}
inline ::ArrayW<::System::Type*> GlobalNamespace::ProxyType::GetInterfaces()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ProxyType*>(), 125}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Type*>>(this, ___internal_method);
}
inline ::GlobalNamespace::ProxyType* GlobalNamespace::ProxyType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProxyType*>());
}
inline ::GlobalNamespace::ProxyType* GlobalNamespace::ProxyType::New_ctor(::StringW  typeName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ProxyType*>(typeName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ProxyType::ProxyType()   {
}
