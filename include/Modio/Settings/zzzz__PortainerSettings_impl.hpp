#pragma once
// IWYU pragma private; include "Modio/Settings/PortainerSettings.hpp"
#include "Modio/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Settings/zzzz__PortainerSettings_def.hpp"
#include "Modio/zzzz__IModioServiceSettings_def.hpp"
//  Writing Method size for method: ::Modio::Settings::PortainerSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Settings::PortainerSettings::*)()>(&::Modio::Settings::PortainerSettings::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa026894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Settings::PortainerSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Settings::PortainerSettings::__cordl_internal_get_Stack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stack;
}
constexpr ::StringW const& Modio::Settings::PortainerSettings::__cordl_internal_get_Stack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Stack;
}
constexpr void Modio::Settings::PortainerSettings::__cordl_internal_set_Stack(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Stack = value;
}
constexpr ::Modio::LogLevel& Modio::Settings::PortainerSettings::__cordl_internal_get_LogLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr ::Modio::LogLevel const& Modio::Settings::PortainerSettings::__cordl_internal_get_LogLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LogLevel;
}
constexpr void Modio::Settings::PortainerSettings::__cordl_internal_set_LogLevel(::Modio::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LogLevel = value;
}
inline void Modio::Settings::PortainerSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Settings::PortainerSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Settings::PortainerSettings* Modio::Settings::PortainerSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Settings::PortainerSettings*>());
}
/// @brief Convert operator to "::Modio::IModioServiceSettings"
constexpr  Modio::Settings::PortainerSettings::operator ::Modio::IModioServiceSettings*() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioServiceSettings"
constexpr ::Modio::IModioServiceSettings* Modio::Settings::PortainerSettings::i___Modio__IModioServiceSettings() noexcept {
return static_cast<::Modio::IModioServiceSettings*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Settings::PortainerSettings::PortainerSettings()   {
}
