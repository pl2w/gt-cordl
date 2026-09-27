#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToThreadPoolAwaitable.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToThreadPoolAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToThreadPoolAwaitable_Awaiter_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter (::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable::*)()>(&::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadf6420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SwitchToThreadPoolAwaitable_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable::SwitchToThreadPoolAwaitable()   {
}
