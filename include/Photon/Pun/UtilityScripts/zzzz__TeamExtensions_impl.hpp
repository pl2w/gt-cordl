#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/TeamExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__TeamExtensions_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PunTeams_Team_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TeamExtensions.GetTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PunTeams_Team (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::TeamExtensions::GetTeam)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa738e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TeamExtensions*>(),
                        {"GetTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::TeamExtensions.SetTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Player*, ::GlobalNamespace::PunTeams_Team)>(&::Photon::Pun::UtilityScripts::TeamExtensions::SetTeam)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa738ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TeamExtensions*>(),
                        {"SetTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::GlobalNamespace::PunTeams_Team>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PunTeams_Team Photon::Pun::UtilityScripts::TeamExtensions::GetTeam(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TeamExtensions*>(),
                        {"GetTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PunTeams_Team>(nullptr, ___internal_method, player);
}
inline void Photon::Pun::UtilityScripts::TeamExtensions::SetTeam(::Photon::Realtime::Player*  player, ::GlobalNamespace::PunTeams_Team  team)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::TeamExtensions*>(),
                        {"SetTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::GlobalNamespace::PunTeams_Team>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, team);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::TeamExtensions::TeamExtensions()   {
}
