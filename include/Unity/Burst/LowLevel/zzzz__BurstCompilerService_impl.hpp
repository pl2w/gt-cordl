#pragma once
// IWYU pragma private; include "Unity/Burst/LowLevel/BurstCompilerService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Burst/LowLevel/zzzz__BurstCompilerService_BurstLogType_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.CompileAsyncDelegateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::StringW)>(&::Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xb5601e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"CompileAsyncDelegateMethod", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetAsyncCompiledAsyncDelegateMethod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5603a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"GetAsyncCompiledAsyncDelegateMethod", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.GetOrCreateSharedMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(::by_ref<::UnityEngine::Hash128>, uint32_t, uint32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb55f8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"GetOrCreateSharedMemory", {}, {::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::GlobalNamespace::BurstCompilerService_BurstLogType, uint8_t*, uint8_t*, int32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::Log)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5603e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"Log", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::BurstCompilerService_BurstLogType>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.RuntimeLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::GlobalNamespace::BurstCompilerService_BurstLogType, uint8_t*, uint8_t*, int32_t)>(&::Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb56044c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"RuntimeLog", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::BurstCompilerService_BurstLogType>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Burst::LowLevel::BurstCompilerService.CompileAsyncDelegateMethod_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Object*, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb560360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"CompileAsyncDelegateMethod_Injected", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod(::System::Object*  delegateMethod, ::StringW  compilerOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"CompileAsyncDelegateMethod", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, delegateMethod, compilerOptions);
}
inline void* Unity::Burst::LowLevel::BurstCompilerService::GetAsyncCompiledAsyncDelegateMethod(int32_t  userID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"GetAsyncCompiledAsyncDelegateMethod", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, userID);
}
inline void* Unity::Burst::LowLevel::BurstCompilerService::GetOrCreateSharedMemory(::by_ref<::UnityEngine::Hash128>  key, uint32_t  size_of, uint32_t  alignment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"GetOrCreateSharedMemory", {}, {::i2c::type_of<::by_ref<::UnityEngine::Hash128>>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, key, size_of, alignment);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::Log(void*  userData, ::GlobalNamespace::BurstCompilerService_BurstLogType  logType, uint8_t*  message, uint8_t*  filename, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"Log", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::BurstCompilerService_BurstLogType>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData, logType, message, filename, lineNumber);
}
inline void Unity::Burst::LowLevel::BurstCompilerService::RuntimeLog(void*  userData, ::GlobalNamespace::BurstCompilerService_BurstLogType  logType, uint8_t*  message, uint8_t*  filename, int32_t  lineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"RuntimeLog", {}, {::i2c::type_of<void*>(), ::i2c::type_of<::GlobalNamespace::BurstCompilerService_BurstLogType>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<uint8_t*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, userData, logType, message, filename, lineNumber);
}
inline int32_t Unity::Burst::LowLevel::BurstCompilerService::CompileAsyncDelegateMethod_Injected(::System::Object*  delegateMethod, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  compilerOptions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::Burst::LowLevel::BurstCompilerService*>(),
                        {"CompileAsyncDelegateMethod_Injected", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, delegateMethod, compilerOptions);
}
// Ctor Parameters []
constexpr ::Unity::Burst::LowLevel::BurstCompilerService::BurstCompilerService()   {
}
