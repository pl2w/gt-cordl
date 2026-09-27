#pragma once
// IWYU pragma private; include "GlobalNamespace/PhotonAuthenticatorSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PhotonAuthenticatorSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PhotonAuthenticatorSettings.Load
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::PhotonAuthenticatorSettings::Load)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5ab1fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonAuthenticatorSettings*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PhotonAuthenticatorSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PhotonAuthenticatorSettings::*)()>(&::GlobalNamespace::PhotonAuthenticatorSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ab2078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonAuthenticatorSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PhotonAuthenticatorSettings::setStaticF_PunAppId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "PunAppId", ::GlobalNamespace::PhotonAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PhotonAuthenticatorSettings::getStaticF_PunAppId()  {
return ::cordl_internals::getStaticField<::StringW, "PunAppId", ::GlobalNamespace::PhotonAuthenticatorSettings*>();
}
inline void GlobalNamespace::PhotonAuthenticatorSettings::setStaticF_FusionAppId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "FusionAppId", ::GlobalNamespace::PhotonAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PhotonAuthenticatorSettings::getStaticF_FusionAppId()  {
return ::cordl_internals::getStaticField<::StringW, "FusionAppId", ::GlobalNamespace::PhotonAuthenticatorSettings*>();
}
inline void GlobalNamespace::PhotonAuthenticatorSettings::setStaticF_VoiceAppId(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "VoiceAppId", ::GlobalNamespace::PhotonAuthenticatorSettings*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::PhotonAuthenticatorSettings::getStaticF_VoiceAppId()  {
return ::cordl_internals::getStaticField<::StringW, "VoiceAppId", ::GlobalNamespace::PhotonAuthenticatorSettings*>();
}
inline void GlobalNamespace::PhotonAuthenticatorSettings::Load(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonAuthenticatorSettings*>(),
                        {"Load", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path);
}
inline void GlobalNamespace::PhotonAuthenticatorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PhotonAuthenticatorSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PhotonAuthenticatorSettings* GlobalNamespace::PhotonAuthenticatorSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PhotonAuthenticatorSettings*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PhotonAuthenticatorSettings::PhotonAuthenticatorSettings()   {
}
