#pragma once
// IWYU pragma private; include "Oculus/Platform/PlatformInternal.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__PlatformInternal_def.hpp"
#include "Oculus/Platform/Models/zzzz__HttpTransferUpdate_def.hpp"
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "Oculus/Platform/zzzz__Message_MessageType_def.hpp"
#include "Oculus/Platform/zzzz__Message_def.hpp"
#include "Oculus/Platform/zzzz__PlatformInternal_MessageTypeInternal_def.hpp"
#include "Oculus/Platform/zzzz__PlatformInternal_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.CrashApplication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Oculus::Platform::PlatformInternal::CrashApplication)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa54dc9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal*>(),
                        {"CrashApplication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.ParseMessageHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Message* (*)(::System::IntPtr, ::GlobalNamespace::Message_MessageType)>(&::Oculus::Platform::PlatformInternal::ParseMessageHandle)> {
  constexpr static std::size_t size = 0x860;
  constexpr static std::size_t addrs = 0xa54dcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal*>(),
                        {"ParseMessageHandle", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::Message_MessageType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal.InitializeStandaloneAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* (*)(uint64_t, ::StringW)>(&::Oculus::Platform::PlatformInternal::InitializeStandaloneAsync)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xa54e54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal*>(),
                        {"InitializeStandaloneAsync", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Platform::PlatformInternal::CrashApplication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal*>(),
                        {"CrashApplication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Message* Oculus::Platform::PlatformInternal::ParseMessageHandle(::System::IntPtr  messageHandle, ::GlobalNamespace::Message_MessageType  messageType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal*>(),
                        {"ParseMessageHandle", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::GlobalNamespace::Message_MessageType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Message*>(nullptr, ___internal_method, messageHandle, messageType);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>* Oculus::Platform::PlatformInternal::InitializeStandaloneAsync(uint64_t  appID, ::StringW  accessToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal*>(),
                        {"InitializeStandaloneAsync", {}, {::i2c::type_of<uint64_t>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::PlatformInitialize*>*>(nullptr, ___internal_method, appID, accessToken);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInternal::PlatformInternal()   {
}
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal_Users.GetLinkedAccounts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* (*)(::ArrayW<::Oculus::Platform::ServiceProvider>)>(&::Oculus::Platform::PlatformInternal_Users::GetLinkedAccounts)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xa54e7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal_Users*>(),
                        {"GetLinkedAccounts", {}, {::i2c::type_of<::ArrayW<::Oculus::Platform::ServiceProvider>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>* Oculus::Platform::PlatformInternal_Users::GetLinkedAccounts(::ArrayW<::Oculus::Platform::ServiceProvider>  providers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal_Users*>(),
                        {"GetLinkedAccounts", {}, {::i2c::type_of<::ArrayW<::Oculus::Platform::ServiceProvider>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::LinkedAccountList*>*>(nullptr, ___internal_method, providers);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInternal_Users::PlatformInternal_Users()   {
}
//  Writing Method size for method: ::Oculus::Platform::PlatformInternal_HTTP.SetHttpTransferUpdateCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*)>(&::Oculus::Platform::PlatformInternal_HTTP::SetHttpTransferUpdateCallback)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa54e778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal_HTTP*>(),
                        {"SetHttpTransferUpdateCallback", {}, {::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Oculus::Platform::PlatformInternal_HTTP::SetHttpTransferUpdateCallback(::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*  callback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Platform::PlatformInternal_HTTP*>(),
                        {"SetHttpTransferUpdateCallback", {}, {::i2c::type_of<::Oculus::Platform::Message_1_Callback<::Oculus::Platform::Models::HttpTransferUpdate*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, callback);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::PlatformInternal_HTTP::PlatformInternal_HTTP()   {
}
