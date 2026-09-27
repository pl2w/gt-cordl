#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/PhotonAppSettings.hpp"
#include "Fusion/zzzz__FusionGlobalScriptableObject_1_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__PhotonAppSettings_def.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionAppSettings_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonAppSettings.get_Global
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings> (*)()>(&::Fusion::Photon::Realtime::PhotonAppSettings::get_Global)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f68a9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {"get_Global", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonAppSettings.TryGetGlobal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Fusion::Photon::Realtime::PhotonAppSettings*>)>(&::Fusion::Photon::Realtime::PhotonAppSettings::TryGetGlobal)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f68adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {"TryGetGlobal", {}, {::i2c::type_of<::by_ref<::Fusion::Photon::Realtime::PhotonAppSettings*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonAppSettings.get_IsGlobalLoaded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Fusion::Photon::Realtime::PhotonAppSettings::get_IsGlobalLoaded)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5f68b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {"get_IsGlobalLoaded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::PhotonAppSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::PhotonAppSettings::*)()>(&::Fusion::Photon::Realtime::PhotonAppSettings::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x5f68b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::FusionAppSettings*& Fusion::Photon::Realtime::PhotonAppSettings::__cordl_internal_get_AppSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppSettings;
}
constexpr ::Fusion::Photon::Realtime::FusionAppSettings* const& Fusion::Photon::Realtime::PhotonAppSettings::__cordl_internal_get_AppSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AppSettings;
}
constexpr void Fusion::Photon::Realtime::PhotonAppSettings::__cordl_internal_set_AppSettings(::Fusion::Photon::Realtime::FusionAppSettings*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AppSettings = value;
}
inline ::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings> Fusion::Photon::Realtime::PhotonAppSettings::get_Global()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {"get_Global", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Fusion::Photon::Realtime::PhotonAppSettings>>(nullptr, ___internal_method);
}
inline bool Fusion::Photon::Realtime::PhotonAppSettings::TryGetGlobal(::by_ref<::Fusion::Photon::Realtime::PhotonAppSettings*>  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {"TryGetGlobal", {}, {::i2c::type_of<::by_ref<::Fusion::Photon::Realtime::PhotonAppSettings*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, settings);
}
inline bool Fusion::Photon::Realtime::PhotonAppSettings::get_IsGlobalLoaded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {"get_IsGlobalLoaded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Fusion::Photon::Realtime::PhotonAppSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::PhotonAppSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::PhotonAppSettings* Fusion::Photon::Realtime::PhotonAppSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::PhotonAppSettings*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::PhotonAppSettings::PhotonAppSettings()   {
}
