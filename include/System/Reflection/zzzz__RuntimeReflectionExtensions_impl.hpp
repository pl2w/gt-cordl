#pragma once
// IWYU pragma private; include "System/Reflection/RuntimeReflectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Reflection/zzzz__RuntimeReflectionExtensions_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__EventInfo_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeReflectionExtensions.GetRuntimeFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* (*)(::System::Type*)>(&::System::Reflection::RuntimeReflectionExtensions::GetRuntimeFields)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa1fb684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeReflectionExtensions.GetRuntimeMethods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* (*)(::System::Type*)>(&::System::Reflection::RuntimeReflectionExtensions::GetRuntimeMethods)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa1fb728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeMethods", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeReflectionExtensions.GetRuntimeProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* (*)(::System::Type*)>(&::System::Reflection::RuntimeReflectionExtensions::GetRuntimeProperties)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa1fb7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeReflectionExtensions.GetRuntimeEvents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Reflection::EventInfo*>* (*)(::System::Type*)>(&::System::Reflection::RuntimeReflectionExtensions::GetRuntimeEvents)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa1fb870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeEvents", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeReflectionExtensions.GetRuntimeField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::FieldInfo* (*)(::System::Type*, ::StringW)>(&::System::Reflection::RuntimeReflectionExtensions::GetRuntimeField)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xa1fb914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeField", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>* System::Reflection::RuntimeReflectionExtensions::GetRuntimeFields(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeFields", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::FieldInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>* System::Reflection::RuntimeReflectionExtensions::GetRuntimeMethods(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeMethods", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::MethodInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>* System::Reflection::RuntimeReflectionExtensions::GetRuntimeProperties(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeProperties", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::PropertyInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::EventInfo*>* System::Reflection::RuntimeReflectionExtensions::GetRuntimeEvents(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeEvents", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Reflection::EventInfo*>*>(nullptr, ___internal_method, type);
}
inline ::System::Reflection::FieldInfo* System::Reflection::RuntimeReflectionExtensions::GetRuntimeField(::System::Type*  type, ::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Reflection::RuntimeReflectionExtensions*>(),
                        {"GetRuntimeField", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldInfo*>(nullptr, ___internal_method, type, name);
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeReflectionExtensions::RuntimeReflectionExtensions()   {
}
