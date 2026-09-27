#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/CancellationTokenAwaitable.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenAwaitable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__CancellationTokenAwaitable_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenAwaitable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::CancellationTokenAwaitable::*)(::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::CancellationTokenAwaitable::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xade5458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::CancellationTokenAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CancellationTokenAwaitable_Awaiter (::Cysharp::Threading::Tasks::CancellationTokenAwaitable::*)()>(&::Cysharp::Threading::Tasks::CancellationTokenAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xade5468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::CancellationTokenAwaitable::_ctor(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenAwaitable>(),
                        {".ctor", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::CancellationTokenAwaitable_Awaiter Cysharp::Threading::Tasks::CancellationTokenAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::CancellationTokenAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CancellationTokenAwaitable_Awaiter>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Cysharp::Threading::Tasks::CancellationTokenAwaitable::CancellationTokenAwaitable(::System::Threading::CancellationToken  cancellationToken) noexcept  {
this->cancellationToken = cancellationToken;
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::CancellationTokenAwaitable::CancellationTokenAwaitable()   {
}
