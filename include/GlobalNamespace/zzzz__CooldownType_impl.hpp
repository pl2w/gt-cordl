#pragma once
// IWYU pragma private; include "GlobalNamespace/CooldownType.hpp"
#include "GlobalNamespace/zzzz__CallLimitType_1_impl.hpp"
#include "GlobalNamespace/zzzz__CooldownType_def.hpp"
#include "GlobalNamespace/zzzz__CallLimiterWithCooldown_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CooldownType._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CooldownType::*)()>(&::GlobalNamespace::CooldownType::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5ac4cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CooldownType*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::CooldownType::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CooldownType*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CooldownType* GlobalNamespace::CooldownType::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CooldownType*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CooldownType::CooldownType()   {
}
