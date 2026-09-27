#pragma once
// IWYU pragma private; include "Modio/Unity/Settings/ModioComponentUISettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/Settings/zzzz__ModioComponentUISettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::Unity::Settings::ModioComponentUISettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::Settings::ModioComponentUISettings::*)()>(&::Modio::Unity::Settings::ModioComponentUISettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9f9716c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Settings::ModioComponentUISettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_get_ShowMonetizationUI()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowMonetizationUI;
}
constexpr bool const& Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_get_ShowMonetizationUI() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowMonetizationUI;
}
constexpr void Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_set_ShowMonetizationUI(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowMonetizationUI = value;
}
constexpr bool& Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_get_ShowEnableModToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowEnableModToggle;
}
constexpr bool const& Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_get_ShowEnableModToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ShowEnableModToggle;
}
constexpr void Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_set_ShowEnableModToggle(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ShowEnableModToggle = value;
}
constexpr bool& Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_get_FallbackToEmailAuthentication()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FallbackToEmailAuthentication;
}
constexpr bool const& Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_get_FallbackToEmailAuthentication() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___FallbackToEmailAuthentication;
}
constexpr void Modio::Unity::Settings::ModioComponentUISettings::__cordl_internal_set_FallbackToEmailAuthentication(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___FallbackToEmailAuthentication = value;
}
inline void Modio::Unity::Settings::ModioComponentUISettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::Settings::ModioComponentUISettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::Settings::ModioComponentUISettings* Modio::Unity::Settings::ModioComponentUISettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::Settings::ModioComponentUISettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::Unity::Settings::ModioComponentUISettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::Unity::Settings::ModioComponentUISettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::Settings::ModioComponentUISettings::ModioComponentUISettings()   {
}
