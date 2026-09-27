#pragma once
// IWYU pragma private; include "Modio/Settings/ModInstallationManagementSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Settings/zzzz__ModInstallationManagementSettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::Settings::ModInstallationManagementSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Settings::ModInstallationManagementSettings::*)()>(&::Modio::Settings::ModInstallationManagementSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa026884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Settings::ModInstallationManagementSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Settings::ModInstallationManagementSettings::__cordl_internal_get_AutoActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoActivate;
}
constexpr bool const& Modio::Settings::ModInstallationManagementSettings::__cordl_internal_get_AutoActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AutoActivate;
}
constexpr void Modio::Settings::ModInstallationManagementSettings::__cordl_internal_set_AutoActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AutoActivate = value;
}
constexpr bool& Modio::Settings::ModInstallationManagementSettings::__cordl_internal_get_UninstallIfNoSubscriptions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UninstallIfNoSubscriptions;
}
constexpr bool const& Modio::Settings::ModInstallationManagementSettings::__cordl_internal_get_UninstallIfNoSubscriptions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UninstallIfNoSubscriptions;
}
constexpr void Modio::Settings::ModInstallationManagementSettings::__cordl_internal_set_UninstallIfNoSubscriptions(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UninstallIfNoSubscriptions = value;
}
inline void Modio::Settings::ModInstallationManagementSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Settings::ModInstallationManagementSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Settings::ModInstallationManagementSettings* Modio::Settings::ModInstallationManagementSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Settings::ModInstallationManagementSettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::Settings::ModInstallationManagementSettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::Settings::ModInstallationManagementSettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Settings::ModInstallationManagementSettings::ModInstallationManagementSettings()   {
}
