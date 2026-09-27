#pragma once
// IWYU pragma private; include "Modio/Metrics/MetricsSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Metrics/zzzz__MetricsSettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::Metrics::MetricsSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Metrics::MetricsSettings::*)()>(&::Modio::Metrics::MetricsSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa040420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Metrics::MetricsSettings::__cordl_internal_get_Secret()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Secret;
}
constexpr ::StringW const& Modio::Metrics::MetricsSettings::__cordl_internal_get_Secret() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Secret;
}
constexpr void Modio::Metrics::MetricsSettings::__cordl_internal_set_Secret(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Secret = value;
}
inline void Modio::Metrics::MetricsSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Metrics::MetricsSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Metrics::MetricsSettings* Modio::Metrics::MetricsSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Metrics::MetricsSettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::Metrics::MetricsSettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::Metrics::MetricsSettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Metrics::MetricsSettings::MetricsSettings()   {
}
