#pragma once
// IWYU pragma private; include "System/DefaultBinder.hpp"
#include "System/Reflection/zzzz__Binder_impl.hpp"
#include "System/zzzz__DefaultBinder_Primitives_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__DefaultBinder_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "System/Reflection/zzzz__ParameterInfo_def.hpp"
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__DefaultBinder_Primitives_def.hpp"
#include "System/zzzz__DefaultBinder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::DefaultBinder.BindToMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>, ::by_ref<::ArrayW<::System::Object*>>, ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>, ::by_ref<::System::Object*>)>(&::System::DefaultBinder::BindToMethod)> {
  constexpr static std::size_t size = 0x2048;
  constexpr static std::size_t addrs = 0xa30d594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::DefaultBinder*>(),
                    {::i2c::class_of<::System::DefaultBinder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.BindToField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::FieldInfo*>, ::System::Object*, ::System::Globalization::CultureInfo*)>(&::System::DefaultBinder::BindToField)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0xa30fc74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::DefaultBinder*>(),
                    {::i2c::class_of<::System::DefaultBinder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::PropertyInfo*>, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::SelectProperty)> {
  constexpr static std::size_t size = 0xa0c;
  constexpr static std::size_t addrs = 0xa3101e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::DefaultBinder*>(),
                    {::i2c::class_of<::System::DefaultBinder*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ChangeType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::DefaultBinder::*)(::System::Object*, ::System::Type*, ::System::Globalization::CultureInfo*)>(&::System::DefaultBinder::ChangeType)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa311688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::DefaultBinder*>(),
                    {::i2c::class_of<::System::DefaultBinder*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderArgumentArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder::*)(::by_ref<::ArrayW<::System::Object*>>, ::System::Object*)>(&::System::DefaultBinder::ReorderArgumentArray)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa3116e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::DefaultBinder*>(),
                    {::i2c::class_of<::System::DefaultBinder*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::ArrayW<::System::Reflection::MethodBase*>, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::ExactBinding)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xa311a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"ExactBinding", {}, {::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ExactPropertyBinding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (*)(::ArrayW<::System::Reflection::PropertyInfo*>, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::ExactPropertyBinding)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xa311dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"ExactPropertyBinding", {}, {::i2c::type_of<::ArrayW<::System::Reflection::PropertyInfo*>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecific
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<int32_t>, ::System::Type*, ::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<int32_t>, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(&::System::DefaultBinder::FindMostSpecific)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0xa3111b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecific", {}, {::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*, ::System::Type*, ::System::Type*)>(&::System::DefaultBinder::FindMostSpecificType)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0xa310e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::MethodBase*, ::ArrayW<int32_t>, ::System::Type*, ::System::Reflection::MethodBase*, ::ArrayW<int32_t>, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Object*>)>(&::System::DefaultBinder::FindMostSpecificMethod)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xa30faf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificMethod", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::FieldInfo*, ::System::Reflection::FieldInfo*)>(&::System::DefaultBinder::FindMostSpecificField)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa3100fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificField", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostSpecificProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Reflection::PropertyInfo*, ::System::Reflection::PropertyInfo*)>(&::System::DefaultBinder::FindMostSpecificProperty)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa3115a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificProperty", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSigAndName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(&::System::DefaultBinder::CompareMethodSigAndName)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa31207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CompareMethodSigAndName", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.GetHierarchyDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Type*)>(&::System::DefaultBinder::GetHierarchyDepth)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa3121b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"GetHierarchyDepth", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.FindMostDerivedNewSlotMeth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (*)(::ArrayW<::System::Reflection::MethodBase*>, int32_t)>(&::System::DefaultBinder::FindMostDerivedNewSlotMeth)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa311c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostDerivedNewSlotMeth", {}, {::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.ReorderParams
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<int32_t>, ::ArrayW<::System::Object*>)>(&::System::DefaultBinder::ReorderParams)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa30f980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"ReorderParams", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CreateParamOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::ArrayW<int32_t>, ::ArrayW<::System::Reflection::ParameterInfo*>, ::ArrayW<::StringW>)>(&::System::DefaultBinder::CreateParamOrder)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0xa30f5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CreateParamOrder", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::RuntimeType*, ::System::RuntimeType*)>(&::System::DefaultBinder::CanConvertPrimitive)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0xa310bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanConvertPrimitive", {}, {::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanConvertPrimitiveObjectToType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::RuntimeType*)>(&::System::DefaultBinder::CanConvertPrimitiveObjectToType)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa30f830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanConvertPrimitiveObjectToType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeType*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CompareMethodSig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Reflection::MethodBase*, ::System::Reflection::MethodBase*)>(&::System::DefaultBinder::CompareMethodSig)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa312224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CompareMethodSig", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.SelectMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodBase* (::System::DefaultBinder::*)(::System::Reflection::BindingFlags, ::ArrayW<::System::Reflection::MethodBase*>, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&::System::DefaultBinder::SelectMethod)> {
  constexpr static std::size_t size = 0x70c;
  constexpr static std::size_t addrs = 0xa312358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"SelectMethod", {}, {::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanChangePrimitive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::DefaultBinder::CanChangePrimitive)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa312a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanChangePrimitive", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder.CanPrimitiveWiden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&::System::DefaultBinder::CanPrimitiveWiden)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa312ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanPrimitiveWiden", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder::*)()>(&::System::DefaultBinder::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa312b8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::DefaultBinder::setStaticF__primitiveConversions(::ArrayW<::GlobalNamespace::DefaultBinder_Primitives>  value)  {
::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::DefaultBinder_Primitives>, "_primitiveConversions", ::System::DefaultBinder*>(std::forward<::ArrayW<::GlobalNamespace::DefaultBinder_Primitives>>(value));
}
inline ::ArrayW<::GlobalNamespace::DefaultBinder_Primitives> System::DefaultBinder::getStaticF__primitiveConversions()  {
return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::DefaultBinder_Primitives>, "_primitiveConversions", ::System::DefaultBinder*>();
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::BindToMethod(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::MethodBase*>  match, ::by_ref<::ArrayW<::System::Object*>>  args, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers, ::System::Globalization::CultureInfo*  cultureInfo, ::ArrayW<::StringW>  names, ::by_ref<::System::Object*>  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::DefaultBinder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method, bindingAttr, match, args, modifiers, cultureInfo, names, state);
}
inline ::System::Reflection::FieldInfo* System::DefaultBinder::BindToField(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::FieldInfo*>  match, ::System::Object*  value, ::System::Globalization::CultureInfo*  cultureInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::DefaultBinder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(this, ___internal_method, bindingAttr, match, value, cultureInfo);
}
inline ::System::Reflection::PropertyInfo* System::DefaultBinder::SelectProperty(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::PropertyInfo*>  match, ::System::Type*  returnType, ::ArrayW<::System::Type*>  indexes, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::DefaultBinder*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(this, ___internal_method, bindingAttr, match, returnType, indexes, modifiers);
}
inline ::System::Object* System::DefaultBinder::ChangeType(::System::Object*  value, ::System::Type*  type, ::System::Globalization::CultureInfo*  cultureInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::DefaultBinder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, type, cultureInfo);
}
inline void System::DefaultBinder::ReorderArgumentArray(::by_ref<::ArrayW<::System::Object*>>  args, ::System::Object*  state)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::DefaultBinder*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args, state);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::ExactBinding(::ArrayW<::System::Reflection::MethodBase*>  match, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"ExactBinding", {}, {::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, match, types, modifiers);
}
inline ::System::Reflection::PropertyInfo* System::DefaultBinder::ExactPropertyBinding(::ArrayW<::System::Reflection::PropertyInfo*>  match, ::System::Type*  returnType, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"ExactPropertyBinding", {}, {::i2c::type_of<::ArrayW<::System::Reflection::PropertyInfo*>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(nullptr, ___internal_method, match, returnType, types, modifiers);
}
inline int32_t System::DefaultBinder::FindMostSpecific(::ArrayW<::System::Reflection::ParameterInfo*>  p1, ::ArrayW<int32_t>  paramOrder1, ::System::Type*  paramArrayType1, ::ArrayW<::System::Reflection::ParameterInfo*>  p2, ::ArrayW<int32_t>  paramOrder2, ::System::Type*  paramArrayType2, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecific", {}, {::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, p1, paramOrder1, paramArrayType1, p2, paramOrder2, paramArrayType2, types, args);
}
inline int32_t System::DefaultBinder::FindMostSpecificType(::System::Type*  c1, ::System::Type*  c2, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificType", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, c1, c2, t);
}
inline int32_t System::DefaultBinder::FindMostSpecificMethod(::System::Reflection::MethodBase*  m1, ::ArrayW<int32_t>  paramOrder1, ::System::Type*  paramArrayType1, ::System::Reflection::MethodBase*  m2, ::ArrayW<int32_t>  paramOrder2, ::System::Type*  paramArrayType2, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificMethod", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, m1, paramOrder1, paramArrayType1, m2, paramOrder2, paramArrayType2, types, args);
}
inline int32_t System::DefaultBinder::FindMostSpecificField(::System::Reflection::FieldInfo*  cur1, ::System::Reflection::FieldInfo*  cur2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificField", {}, {::i2c::type_of<::System::Reflection::FieldInfo*>(), ::i2c::type_of<::System::Reflection::FieldInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cur1, cur2);
}
inline int32_t System::DefaultBinder::FindMostSpecificProperty(::System::Reflection::PropertyInfo*  cur1, ::System::Reflection::PropertyInfo*  cur2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostSpecificProperty", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>(), ::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, cur1, cur2);
}
inline bool System::DefaultBinder::CompareMethodSigAndName(::System::Reflection::MethodBase*  m1, ::System::Reflection::MethodBase*  m2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CompareMethodSigAndName", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m1, m2);
}
inline int32_t System::DefaultBinder::GetHierarchyDepth(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"GetHierarchyDepth", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, t);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::FindMostDerivedNewSlotMeth(::ArrayW<::System::Reflection::MethodBase*>  match, int32_t  cMatches)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"FindMostDerivedNewSlotMeth", {}, {::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(nullptr, ___internal_method, match, cMatches);
}
inline void System::DefaultBinder::ReorderParams(::ArrayW<int32_t>  paramOrder, ::ArrayW<::System::Object*>  vars)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"ReorderParams", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, paramOrder, vars);
}
inline bool System::DefaultBinder::CreateParamOrder(::ArrayW<int32_t>  paramOrder, ::ArrayW<::System::Reflection::ParameterInfo*>  pars, ::ArrayW<::StringW>  names)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CreateParamOrder", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterInfo*>>(), ::i2c::type_of<::ArrayW<::StringW>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, paramOrder, pars, names);
}
inline bool System::DefaultBinder::CanConvertPrimitive(::System::RuntimeType*  source, ::System::RuntimeType*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanConvertPrimitive", {}, {::i2c::type_of<::System::RuntimeType*>(), ::i2c::type_of<::System::RuntimeType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, target);
}
inline bool System::DefaultBinder::CanConvertPrimitiveObjectToType(::System::Object*  source, ::System::RuntimeType*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanConvertPrimitiveObjectToType", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::RuntimeType*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, type);
}
inline bool System::DefaultBinder::CompareMethodSig(::System::Reflection::MethodBase*  m1, ::System::Reflection::MethodBase*  m2)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CompareMethodSig", {}, {::i2c::type_of<::System::Reflection::MethodBase*>(), ::i2c::type_of<::System::Reflection::MethodBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, m1, m2);
}
inline ::System::Reflection::MethodBase* System::DefaultBinder::SelectMethod(::System::Reflection::BindingFlags  bindingAttr, ::ArrayW<::System::Reflection::MethodBase*>  match, ::ArrayW<::System::Type*>  types, ::ArrayW<::System::Reflection::ParameterModifier>  modifiers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"SelectMethod", {}, {::i2c::type_of<::System::Reflection::BindingFlags>(), ::i2c::type_of<::ArrayW<::System::Reflection::MethodBase*>>(), ::i2c::type_of<::ArrayW<::System::Type*>>(), ::i2c::type_of<::ArrayW<::System::Reflection::ParameterModifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodBase*>(this, ___internal_method, bindingAttr, match, types, modifiers);
}
inline bool System::DefaultBinder::CanChangePrimitive(::System::Type*  source, ::System::Type*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanChangePrimitive", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, target);
}
inline bool System::DefaultBinder::CanPrimitiveWiden(::System::Type*  source, ::System::Type*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {"CanPrimitiveWiden", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, source, target);
}
inline void System::DefaultBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::DefaultBinder* System::DefaultBinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DefaultBinder*>());
}
// Ctor Parameters []
constexpr ::System::DefaultBinder::DefaultBinder()   {
}
//  Writing Method size for method: ::System::DefaultBinder___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder___c::*)()>(&::System::DefaultBinder___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa312c9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::DefaultBinder___c._SelectProperty_b__2_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::DefaultBinder___c::*)(::System::Type*)>(&::System::DefaultBinder___c::_SelectProperty_b__2_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa312ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder___c*>(),
                        {"<SelectProperty>b__2_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::DefaultBinder___c::setStaticF___9(::System::DefaultBinder___c*  value)  {
::cordl_internals::setStaticField<::System::DefaultBinder___c*, "<>9", ::System::DefaultBinder___c*>(std::forward<::System::DefaultBinder___c*>(value));
}
inline ::System::DefaultBinder___c* System::DefaultBinder___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::DefaultBinder___c*, "<>9", ::System::DefaultBinder___c*>();
}
inline void System::DefaultBinder___c::setStaticF___9__2_0(::System::Predicate_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::System::Type*>*, "<>9__2_0", ::System::DefaultBinder___c*>(std::forward<::System::Predicate_1<::System::Type*>*>(value));
}
inline ::System::Predicate_1<::System::Type*>* System::DefaultBinder___c::getStaticF___9__2_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::System::Type*>*, "<>9__2_0", ::System::DefaultBinder___c*>();
}
inline void System::DefaultBinder___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::DefaultBinder___c::_SelectProperty_b__2_0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder___c*>(),
                        {"<SelectProperty>b__2_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::System::DefaultBinder___c* System::DefaultBinder___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DefaultBinder___c*>());
}
// Ctor Parameters []
constexpr ::System::DefaultBinder___c::DefaultBinder___c()   {
}
//  Writing Method size for method: ::System::DefaultBinder_BinderState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::DefaultBinder_BinderState::*)(::ArrayW<int32_t>, int32_t, bool)>(&::System::DefaultBinder_BinderState::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa30f934;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder_BinderState*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t>& System::DefaultBinder_BinderState::__cordl_internal_get_m_argsMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_argsMap;
}
constexpr ::ArrayW<int32_t> const& System::DefaultBinder_BinderState::__cordl_internal_get_m_argsMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_argsMap;
}
constexpr void System::DefaultBinder_BinderState::__cordl_internal_set_m_argsMap(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_argsMap = value;
}
constexpr int32_t& System::DefaultBinder_BinderState::__cordl_internal_get_m_originalSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_originalSize;
}
constexpr int32_t const& System::DefaultBinder_BinderState::__cordl_internal_get_m_originalSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_originalSize;
}
constexpr void System::DefaultBinder_BinderState::__cordl_internal_set_m_originalSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_originalSize = value;
}
constexpr bool& System::DefaultBinder_BinderState::__cordl_internal_get_m_isParamArray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isParamArray;
}
constexpr bool const& System::DefaultBinder_BinderState::__cordl_internal_get_m_isParamArray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_isParamArray;
}
constexpr void System::DefaultBinder_BinderState::__cordl_internal_set_m_isParamArray(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_isParamArray = value;
}
inline void System::DefaultBinder_BinderState::_ctor(::ArrayW<int32_t>  argsMap, int32_t  originalSize, bool  isParamArray)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::DefaultBinder_BinderState*>(),
                        {".ctor", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argsMap, originalSize, isParamArray);
}
inline ::System::DefaultBinder_BinderState* System::DefaultBinder_BinderState::New_ctor(::ArrayW<int32_t>  argsMap, int32_t  originalSize, bool  isParamArray)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::DefaultBinder_BinderState*>(argsMap, originalSize, isParamArray));
}
// Ctor Parameters []
constexpr ::System::DefaultBinder_BinderState::DefaultBinder_BinderState()   {
}
