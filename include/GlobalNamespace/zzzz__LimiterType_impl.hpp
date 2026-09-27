#pragma once
// IWYU pragma private; include "GlobalNamespace/LimiterType.hpp"
#include "GlobalNamespace/zzzz__CallLimitType_1_impl.hpp"
#include "GlobalNamespace/zzzz__LimiterType_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LimiterType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::LimiterType::*)()>(&::GlobalNamespace::LimiterType::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ac4c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimiterType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LimiterType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LimiterType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::LimiterType* GlobalNamespace::LimiterType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::LimiterType*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LimiterType::LimiterType()   {
}
