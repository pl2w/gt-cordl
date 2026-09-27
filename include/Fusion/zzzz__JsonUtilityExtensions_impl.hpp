#pragma once
// IWYU pragma private; include "Fusion/JsonUtilityExtensions.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__JsonUtilityExtensions_def.hpp"
#include "Fusion/zzzz__JsonUtilityExtensions___c__DisplayClass8_0_def.hpp"
#include "Fusion/zzzz__JsonUtilityExtensions___c__DisplayClass9_0_def.hpp"
#include "Fusion/zzzz__JsonUtilityExtensions_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.EnquoteIntegers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, int32_t)>(&::Fusion::JsonUtilityExtensions::EnquoteIntegers)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x60e1b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"EnquoteIntegers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.ToJsonWithTypeAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*)>(&::Fusion::JsonUtilityExtensions::ToJsonWithTypeAnnotation)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x60e1c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"ToJsonWithTypeAnnotation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.ToJsonWithTypeAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::IO::TextWriter*, ::System::Nullable_1<int32_t>, ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*)>(&::Fusion::JsonUtilityExtensions::ToJsonWithTypeAnnotation)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x60e1e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"ToJsonWithTypeAnnotation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.FromJsonWithTypeAnnotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*)>(&::Fusion::JsonUtilityExtensions::FromJsonWithTypeAnnotation)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x60e2518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FromJsonWithTypeAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.FromJsonWithTypeAnnotationInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*, ::System::Collections::IList*)>(&::Fusion::JsonUtilityExtensions::FromJsonWithTypeAnnotationInternal)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x60e2c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FromJsonWithTypeAnnotationInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), ::i2c::type_of<::System::Collections::IList*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.ToJsonInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::IO::TextWriter*, ::System::Nullable_1<int32_t>, ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*)>(&::Fusion::JsonUtilityExtensions::ToJsonInternal)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x60e204c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"ToJsonInternal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.FromJsonWithTypeAnnotationToObject
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::by_ref<int32_t>, ::StringW, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*)>(&::Fusion::JsonUtilityExtensions::FromJsonWithTypeAnnotationToObject)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x60e28a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FromJsonWithTypeAnnotationToObject", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.FindObjectEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t)>(&::Fusion::JsonUtilityExtensions::FindObjectEnd)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e3210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FindObjectEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions.FindScopeEnd
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::StringW, int32_t, char16_t, char16_t)>(&::Fusion::JsonUtilityExtensions::FindScopeEnd)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x60e30d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FindScopeEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions._FromJsonWithTypeAnnotation_g__SkipWhiteOrThrow_8_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass8_0>)>(&::Fusion::JsonUtilityExtensions::_FromJsonWithTypeAnnotation_g__SkipWhiteOrThrow_8_0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60e27a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"<FromJsonWithTypeAnnotation>g__SkipWhiteOrThrow|8_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass8_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions._FromJsonWithTypeAnnotationInternal_g__SkipWhiteOrThrow_9_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0>)>(&::Fusion::JsonUtilityExtensions::_FromJsonWithTypeAnnotationInternal_g__SkipWhiteOrThrow_9_0)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60e2fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"<FromJsonWithTypeAnnotationInternal>g__SkipWhiteOrThrow|9_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Fusion::JsonUtilityExtensions::EnquoteIntegers(::StringW  json, int32_t  minDigits)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"EnquoteIntegers", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, json, minDigits);
}
inline ::StringW Fusion::JsonUtilityExtensions::ToJsonWithTypeAnnotation(::System::Object*  obj, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*  instanceIDHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"ToJsonWithTypeAnnotation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, obj, instanceIDHandler);
}
inline void Fusion::JsonUtilityExtensions::ToJsonWithTypeAnnotation(::System::Object*  obj, ::System::IO::TextWriter*  writer, ::System::Nullable_1<int32_t>  integerEnquoteMinDigits, ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*  typeSerializer, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*  instanceIDHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"ToJsonWithTypeAnnotation", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, writer, integerEnquoteMinDigits, typeSerializer, instanceIDHandler);
}
template<typename T>
inline T Fusion::JsonUtilityExtensions::FromJsonWithTypeAnnotation(::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                    {"FromJsonWithTypeAnnotation", {::i2c::class_of<T>()}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, json, typeResolver);
}
inline ::System::Object* Fusion::JsonUtilityExtensions::FromJsonWithTypeAnnotation(::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FromJsonWithTypeAnnotation", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, json, typeResolver);
}
inline ::System::Object* Fusion::JsonUtilityExtensions::FromJsonWithTypeAnnotationInternal(::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver, ::System::Collections::IList*  targetList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FromJsonWithTypeAnnotationInternal", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), ::i2c::type_of<::System::Collections::IList*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, json, typeResolver, targetList);
}
inline void Fusion::JsonUtilityExtensions::ToJsonInternal(::System::Object*  obj, ::System::IO::TextWriter*  writer, ::System::Nullable_1<int32_t>  integerEnquoteMinDigits, ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*  typeResolver, ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*  instanceIDHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"ToJsonInternal", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, writer, integerEnquoteMinDigits, typeResolver, instanceIDHandler);
}
inline ::System::Object* Fusion::JsonUtilityExtensions::FromJsonWithTypeAnnotationToObject(::by_ref<int32_t>  i, ::StringW  json, ::Fusion::JsonUtilityExtensions_TypeResolverDelegate*  typeResolver)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FromJsonWithTypeAnnotationToObject", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, i, json, typeResolver);
}
inline int32_t Fusion::JsonUtilityExtensions::FindObjectEnd(::StringW  json, int32_t  start)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FindObjectEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, json, start);
}
inline int32_t Fusion::JsonUtilityExtensions::FindScopeEnd(::StringW  json, int32_t  start, char16_t  cstart, char16_t  cend)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"FindScopeEnd", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<char16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, json, start, cstart, cend);
}
inline int32_t Fusion::JsonUtilityExtensions::_FromJsonWithTypeAnnotation_g__SkipWhiteOrThrow_8_0(int32_t  i, ::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass8_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"<FromJsonWithTypeAnnotation>g__SkipWhiteOrThrow|8_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass8_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i, _cordl_fixed_empty_name_whitespace);
}
inline int32_t Fusion::JsonUtilityExtensions::_FromJsonWithTypeAnnotationInternal_g__SkipWhiteOrThrow_9_0(int32_t  i, ::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions*>(),
                        {"<FromJsonWithTypeAnnotationInternal>g__SkipWhiteOrThrow|9_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::JsonUtilityExtensions___c__DisplayClass9_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, i, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::Fusion::JsonUtilityExtensions::JsonUtilityExtensions()   {
}
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeNameWrapper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::JsonUtilityExtensions_TypeNameWrapper::*)()>(&::Fusion::JsonUtilityExtensions_TypeNameWrapper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60e35e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeNameWrapper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Fusion::JsonUtilityExtensions_TypeNameWrapper::__cordl_internal_get___TypeName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____TypeName;
}
constexpr ::StringW const& Fusion::JsonUtilityExtensions_TypeNameWrapper::__cordl_internal_get___TypeName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____TypeName;
}
constexpr void Fusion::JsonUtilityExtensions_TypeNameWrapper::__cordl_internal_set___TypeName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____TypeName = value;
}
inline void Fusion::JsonUtilityExtensions_TypeNameWrapper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeNameWrapper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::JsonUtilityExtensions_TypeNameWrapper* Fusion::JsonUtilityExtensions_TypeNameWrapper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::JsonUtilityExtensions_TypeNameWrapper*>());
}
// Ctor Parameters []
constexpr ::Fusion::JsonUtilityExtensions_TypeNameWrapper::JsonUtilityExtensions_TypeNameWrapper()   {
}
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x60e3454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::*)(::System::Object*, int32_t)>(&::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60e3560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::*)(::System::Object*, int32_t, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x60e3574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::*)(::System::IAsyncResult*)>(&::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e35d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::StringW Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::Invoke(::System::Object*  context, int32_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, context, value);
}
inline ::System::IAsyncResult* Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::BeginInvoke(::System::Object*  context, int32_t  value, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, context, value, callback, object);
}
inline ::StringW Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, result);
}
inline ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate* Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::JsonUtilityExtensions_InstanceIDHandlerDelegate::JsonUtilityExtensions_InstanceIDHandlerDelegate()   {
}
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::_ctor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60e330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::*)(::System::Type*)>(&::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60e3414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::*)(::System::Type*, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e3428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::*)(::System::IAsyncResult*)>(&::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e3448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::JsonUtilityExtensions_TypeSerializerDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::StringW Fusion::JsonUtilityExtensions_TypeSerializerDelegate::Invoke(::System::Type*  type)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, type);
}
inline ::System::IAsyncResult* Fusion::JsonUtilityExtensions_TypeSerializerDelegate::BeginInvoke(::System::Type*  type, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, type, callback, object);
}
inline ::StringW Fusion::JsonUtilityExtensions_TypeSerializerDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, result);
}
inline ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate* Fusion::JsonUtilityExtensions_TypeSerializerDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::JsonUtilityExtensions_TypeSerializerDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::JsonUtilityExtensions_TypeSerializerDelegate::JsonUtilityExtensions_TypeSerializerDelegate()   {
}
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeResolverDelegate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::JsonUtilityExtensions_TypeResolverDelegate::*)(::System::Object*, ::System::IntPtr)>(&::Fusion::JsonUtilityExtensions_TypeResolverDelegate::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x60e321c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeResolverDelegate.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::JsonUtilityExtensions_TypeResolverDelegate::*)(::StringW)>(&::Fusion::JsonUtilityExtensions_TypeResolverDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60e32cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeResolverDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Fusion::JsonUtilityExtensions_TypeResolverDelegate::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Fusion::JsonUtilityExtensions_TypeResolverDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e32e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::JsonUtilityExtensions_TypeResolverDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Fusion::JsonUtilityExtensions_TypeResolverDelegate::*)(::System::IAsyncResult*)>(&::Fusion::JsonUtilityExtensions_TypeResolverDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x60e3300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(),
                    {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Fusion::JsonUtilityExtensions_TypeResolverDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::System::Type* Fusion::JsonUtilityExtensions_TypeResolverDelegate::Invoke(::StringW  typeName)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName);
}
inline ::System::IAsyncResult* Fusion::JsonUtilityExtensions_TypeResolverDelegate::BeginInvoke(::StringW  typeName, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, typeName, callback, object);
}
inline ::System::Type* Fusion::JsonUtilityExtensions_TypeResolverDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, result);
}
inline ::Fusion::JsonUtilityExtensions_TypeResolverDelegate* Fusion::JsonUtilityExtensions_TypeResolverDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::JsonUtilityExtensions_TypeResolverDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::Fusion::JsonUtilityExtensions_TypeResolverDelegate::JsonUtilityExtensions_TypeResolverDelegate()   {
}
