#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/SwitchToTaskPoolAwaitable.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToTaskPoolAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__SwitchToTaskPoolAwaitable_Awaiter_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::SwitchToTaskPoolAwaitable_Awaiter (::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::*)()>(&::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadf85a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::SwitchToTaskPoolAwaitable_Awaiter Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SwitchToTaskPoolAwaitable_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable::SwitchToTaskPoolAwaitable()   {
}
