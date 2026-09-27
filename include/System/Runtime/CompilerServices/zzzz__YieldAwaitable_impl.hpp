#pragma once
// IWYU pragma private; include "System/Runtime/CompilerServices/YieldAwaitable.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_YieldAwaiter_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::YieldAwaitable.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::YieldAwaitable_YieldAwaiter (::System::Runtime::CompilerServices::YieldAwaitable::*)()>(&::System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa1e7ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::YieldAwaitable_YieldAwaiter System::Runtime::CompilerServices::YieldAwaitable::GetAwaiter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Runtime::CompilerServices::YieldAwaitable>(),
                        {"GetAwaiter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::YieldAwaitable_YieldAwaiter>(*this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::YieldAwaitable::YieldAwaitable()   {
}
