#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonTeam.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeam_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeam.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Photon::Pun::UtilityScripts::PhotonTeam::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeam::ToString)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa734540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeam*>(),
                    {::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeam*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeam._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PhotonTeam::*)()>(&::Photon::Pun::UtilityScripts::PhotonTeam::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7345c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeam*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr uint8_t& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Code()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr uint8_t const& Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_get_Code() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Code;
}
constexpr void Photon::Pun::UtilityScripts::PhotonTeam::__cordl_internal_set_Code(uint8_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Code = value;
}
inline ::StringW Photon::Pun::UtilityScripts::PhotonTeam::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeam*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Photon::Pun::UtilityScripts::PhotonTeam::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeam*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PhotonTeam* Photon::Pun::UtilityScripts::PhotonTeam::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PhotonTeam*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PhotonTeam::PhotonTeam()   {
}
