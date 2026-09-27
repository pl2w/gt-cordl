#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationTelemetry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LocalizationTelemetry_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationTelemetry.get_GameVersionCustomTag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::GlobalNamespace::LocalizationTelemetry::get_GameVersionCustomTag)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5a676e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::LocalizationTelemetry::get_GameVersionCustomTag()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTelemetry*>(),
                        {"get_GameVersionCustomTag", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationTelemetry::LocalizationTelemetry()   {
}
