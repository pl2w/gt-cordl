#pragma once
// IWYU pragma private; include "Photon/Voice/Unity/PlaybackDelaySettings.hpp"
#include "Photon/Voice/Unity/zzzz__PlaybackDelaySettings_def.hpp"
//  Writing Method size for method: ::Photon::Voice::Unity::PlaybackDelaySettings.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Voice::Unity::PlaybackDelaySettings::*)()>(&::Photon::Voice::Unity::PlaybackDelaySettings::ToString)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa7676b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Voice::Unity::PlaybackDelaySettings>(),
                    {::i2c::class_of<::Photon::Voice::Unity::PlaybackDelaySettings>(), 3}
                ));
    return ___internal_method;
  }
};
inline ::StringW Photon::Voice::Unity::PlaybackDelaySettings::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Voice::Unity::PlaybackDelaySettings>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "MinDelaySoft", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxDelaySoft", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "MaxDelayHard", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings::PlaybackDelaySettings(int32_t  MinDelaySoft, int32_t  MaxDelaySoft, int32_t  MaxDelayHard) noexcept  {
this->MinDelaySoft = MinDelaySoft;
this->MaxDelaySoft = MaxDelaySoft;
this->MaxDelayHard = MaxDelayHard;
}
// Ctor Parameters []
constexpr ::Photon::Voice::Unity::PlaybackDelaySettings::PlaybackDelaySettings()   {
}
