#pragma once
// IWYU pragma private; include "PlayFab/WsaReflectionExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/zzzz__WsaReflectionExtensions_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Delegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::PlayFab::WsaReflectionExtensions.CreateDelegate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Delegate* (*)(::System::Reflection::MethodInfo*, ::System::Type*, ::System::Object*)>(&::PlayFab::WsaReflectionExtensions::CreateDelegate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa7dc0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"CreateDelegate", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::WsaReflectionExtensions.GetTypeInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::PlayFab::WsaReflectionExtensions::GetTypeInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7dc0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"GetTypeInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::WsaReflectionExtensions.AsType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::PlayFab::WsaReflectionExtensions::AsType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa7dc0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"AsType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::WsaReflectionExtensions.GetDelegateName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Delegate*)>(&::PlayFab::WsaReflectionExtensions::GetDelegateName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa7dc0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"GetDelegateName", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Delegate* PlayFab::WsaReflectionExtensions::CreateDelegate(::System::Reflection::MethodInfo*  methodInfo, ::System::Type*  delegateType, ::System::Object*  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"CreateDelegate", {}, {::i2c::type_of<::System::Reflection::MethodInfo*>(), ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Delegate*>(nullptr, ___internal_method, methodInfo, delegateType, instance);
}
inline ::System::Type* PlayFab::WsaReflectionExtensions::GetTypeInfo(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"GetTypeInfo", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Type* PlayFab::WsaReflectionExtensions::AsType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"AsType", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::StringW PlayFab::WsaReflectionExtensions::GetDelegateName(::System::Delegate*  delegateInstance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::WsaReflectionExtensions*>(),
                        {"GetDelegateName", {}, {::i2c::type_of<::System::Delegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, delegateInstance);
}
// Ctor Parameters []
constexpr ::PlayFab::WsaReflectionExtensions::WsaReflectionExtensions()   {
}
