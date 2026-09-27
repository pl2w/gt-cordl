#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/YieldAwaitable.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__YieldAwaitable_Awaiter_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::YieldAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::YieldAwaitable::*)(::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::YieldAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadf7c5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::YieldAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::YieldAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::YieldAwaitable_Awaiter (::Cysharp::Threading::Tasks::YieldAwaitable::*)()>(&::Cysharp::Threading::Tasks::YieldAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadf6434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::YieldAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::YieldAwaitable.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (::Cysharp::Threading::Tasks::YieldAwaitable::*)()>(&::Cysharp::Threading::Tasks::YieldAwaitable::ToUniTask)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xadf7c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::YieldAwaitable>(),
                        {"ToUniTask", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::YieldAwaitable::_ctor(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::YieldAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, timing);
}
inline ::GlobalNamespace::YieldAwaitable_Awaiter Cysharp::Threading::Tasks::YieldAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::YieldAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::YieldAwaitable_Awaiter>(*this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::YieldAwaitable::ToUniTask()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::YieldAwaitable>(),
                        {"ToUniTask", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "timing", ty: "::Cysharp::Threading::Tasks::PlayerLoopTiming", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Threading::Tasks::YieldAwaitable::YieldAwaitable(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) noexcept  {
this->timing = timing;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::YieldAwaitable::YieldAwaitable()   {
}
