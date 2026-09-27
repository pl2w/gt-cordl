#pragma once
// IWYU pragma private; include "Modio/Settings/TempModInstallationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Settings/zzzz__TempModInstallationSettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::Settings::TempModInstallationSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Settings::TempModInstallationSettings::*)()>(&::Modio::Settings::TempModInstallationSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa0268a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Settings::TempModInstallationSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Modio::Settings::TempModInstallationSettings::__cordl_internal_get_LifeTimeDays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LifeTimeDays;
}
constexpr int32_t const& Modio::Settings::TempModInstallationSettings::__cordl_internal_get_LifeTimeDays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LifeTimeDays;
}
constexpr void Modio::Settings::TempModInstallationSettings::__cordl_internal_set_LifeTimeDays(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LifeTimeDays = value;
}
inline void Modio::Settings::TempModInstallationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Settings::TempModInstallationSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Settings::TempModInstallationSettings* Modio::Settings::TempModInstallationSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Settings::TempModInstallationSettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::Settings::TempModInstallationSettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::Settings::TempModInstallationSettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Settings::TempModInstallationSettings::TempModInstallationSettings()   {
}
