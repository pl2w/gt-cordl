#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PunPlayerScores.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunPlayerScores_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PunPlayerScores._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::UtilityScripts::PunPlayerScores::*)()>(&::Photon::Pun::UtilityScripts::PunPlayerScores::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa738330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunPlayerScores*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::PunPlayerScores::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PunPlayerScores*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::UtilityScripts::PunPlayerScores* Photon::Pun::UtilityScripts::PunPlayerScores::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::UtilityScripts::PunPlayerScores*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PunPlayerScores::PunPlayerScores()   {
}
