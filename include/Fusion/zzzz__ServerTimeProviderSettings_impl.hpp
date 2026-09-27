#pragma once
// IWYU pragma private; include "Fusion/ServerTimeProviderSettings.hpp"
#include "Fusion/zzzz__ServerTimeProviderSettings_def.hpp"
//  Writing Method size for method: ::Fusion::ServerTimeProviderSettings.Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::ServerTimeProviderSettings (*)()>(&::Fusion::ServerTimeProviderSettings::Default)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x600b084;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProviderSettings>(),
                        {"Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Fusion::ServerTimeProviderSettings Fusion::ServerTimeProviderSettings::Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::ServerTimeProviderSettings>(),
                        {"Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::ServerTimeProviderSettings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "SimDeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::ServerTimeProviderSettings::ServerTimeProviderSettings(double_t  SimDeltaTime) noexcept  {
this->SimDeltaTime = SimDeltaTime;
}
// Ctor Parameters []
constexpr ::Fusion::ServerTimeProviderSettings::ServerTimeProviderSettings()   {
}
