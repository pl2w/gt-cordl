#pragma once
// IWYU pragma private; include "Fusion/Photon/Realtime/FusionAppSettings.hpp"
#include "Fusion/Photon/Realtime/zzzz__AppSettings_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__EncryptionMode_impl.hpp"
#include "Fusion/Photon/Realtime/zzzz__FusionAppSettings_def.hpp"
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionAppSettings.GetCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::Photon::Realtime::FusionAppSettings* (::Fusion::Photon::Realtime::FusionAppSettings::*)()>(&::Fusion::Photon::Realtime::FusionAppSettings::GetCopy)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5f68960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionAppSettings*>(),
                        {"GetCopy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionAppSettings.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Fusion::Photon::Realtime::FusionAppSettings::*)()>(&::Fusion::Photon::Realtime::FusionAppSettings::ToString)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5f689e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::Photon::Realtime::FusionAppSettings*>(),
                    {::i2c::class_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Photon::Realtime::FusionAppSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Photon::Realtime::FusionAppSettings::*)()>(&::Fusion::Photon::Realtime::FusionAppSettings::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f689d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionAppSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::Photon::Realtime::EncryptionMode& Fusion::Photon::Realtime::FusionAppSettings::__cordl_internal_get_encryptionMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptionMode;
}
constexpr ::Fusion::Photon::Realtime::EncryptionMode const& Fusion::Photon::Realtime::FusionAppSettings::__cordl_internal_get_encryptionMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___encryptionMode;
}
constexpr void Fusion::Photon::Realtime::FusionAppSettings::__cordl_internal_set_encryptionMode(::Fusion::Photon::Realtime::EncryptionMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___encryptionMode = value;
}
constexpr int32_t& Fusion::Photon::Realtime::FusionAppSettings::__cordl_internal_get_emptyRoomTtl()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRoomTtl;
}
constexpr int32_t const& Fusion::Photon::Realtime::FusionAppSettings::__cordl_internal_get_emptyRoomTtl() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emptyRoomTtl;
}
constexpr void Fusion::Photon::Realtime::FusionAppSettings::__cordl_internal_set_emptyRoomTtl(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emptyRoomTtl = value;
}
inline ::Fusion::Photon::Realtime::FusionAppSettings* Fusion::Photon::Realtime::FusionAppSettings::GetCopy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionAppSettings*>(),
                        {"GetCopy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::Photon::Realtime::FusionAppSettings*>(this, ___internal_method);
}
inline ::StringW Fusion::Photon::Realtime::FusionAppSettings::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::Photon::Realtime::FusionAppSettings*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Fusion::Photon::Realtime::FusionAppSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Photon::Realtime::FusionAppSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Photon::Realtime::FusionAppSettings* Fusion::Photon::Realtime::FusionAppSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Photon::Realtime::FusionAppSettings*>());
}
// Ctor Parameters []
constexpr ::Fusion::Photon::Realtime::FusionAppSettings::FusionAppSettings()   {
}
