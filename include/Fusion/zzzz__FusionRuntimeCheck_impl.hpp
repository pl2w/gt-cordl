#pragma once
// IWYU pragma private; include "Fusion/FusionRuntimeCheck.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__FusionRuntimeCheck_def.hpp"
//  Writing Method size for method: ::Fusion::FusionRuntimeCheck.RuntimeCheck
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Fusion::FusionRuntimeCheck::RuntimeCheck)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x60e1b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRuntimeCheck*>(),
                        {"RuntimeCheck", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::FusionRuntimeCheck::RuntimeCheck()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::FusionRuntimeCheck*>(),
                        {"RuntimeCheck", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Fusion::FusionRuntimeCheck::FusionRuntimeCheck()   {
}
