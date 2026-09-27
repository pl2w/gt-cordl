#pragma once
// IWYU pragma private; include "Fusion/LogSettings.hpp"
#include "Fusion/zzzz__LogLevel_impl.hpp"
#include "Fusion/zzzz__TraceChannels_impl.hpp"
#include "Fusion/zzzz__LogSettings_def.hpp"
#include "Fusion/zzzz__LogLevel_def.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
//  Writing Method size for method: ::Fusion::LogSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LogSettings::*)(::Fusion::LogLevel, ::Fusion::TraceChannels)>(&::Fusion::LogSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f448d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LogSettings>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
    return ___internal_method;
  }
};
inline void Fusion::LogSettings::_ctor(::Fusion::LogLevel  level, ::Fusion::TraceChannels  traceChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LogSettings>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogLevel>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, level, traceChannels);
}
// Ctor Parameters [CppParam { name: "Level", ty: "::Fusion::LogLevel", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "TraceChannels", ty: "::Fusion::TraceChannels", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Fusion::LogSettings::LogSettings(::Fusion::LogLevel  Level, ::Fusion::TraceChannels  TraceChannels) noexcept  {
this->Level = Level;
this->TraceChannels = TraceChannels;
}
// Ctor Parameters []
constexpr ::Fusion::LogSettings::LogSettings()   {
}
