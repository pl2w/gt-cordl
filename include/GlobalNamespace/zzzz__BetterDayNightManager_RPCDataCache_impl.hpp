#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterDayNightManager_RPCDataCache.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_RPCDataCache_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BetterDayNightManager_RPCDataCache.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BetterDayNightManager_RPCDataCache::*)()>(&::GlobalNamespace::BetterDayNightManager_RPCDataCache::Reset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5992258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager_RPCDataCache>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BetterDayNightManager_RPCDataCache::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::BetterDayNightManager_RPCDataCache>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Pending", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache::BetterDayNightManager_RPCDataCache(bool  Pending, int32_t  Value) noexcept  {
this->Pending = Pending;
this->Value = Value;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache::BetterDayNightManager_RPCDataCache()   {
}
