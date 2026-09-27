#pragma once
// IWYU pragma private; include "UnityEngine/AsyncOperationAwaitableExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncOperationAwaitableExtensions_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Awaitable_Awaiter_def.hpp"
//  Writing Method size for method: ::UnityEngine::AsyncOperationAwaitableExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::Awaitable_Awaiter (*)(::UnityEngine::AsyncOperation*)>(&::UnityEngine::AsyncOperationAwaitableExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb5db678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AsyncOperationAwaitableExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::Awaitable_Awaiter UnityEngine::AsyncOperationAwaitableExtensions::GetAwaiter(::UnityEngine::AsyncOperation*  op)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::AsyncOperationAwaitableExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::Awaitable_Awaiter>(nullptr, ___internal_method, op);
}
// Ctor Parameters []
constexpr ::UnityEngine::AsyncOperationAwaitableExtensions::AsyncOperationAwaitableExtensions()   {
}
