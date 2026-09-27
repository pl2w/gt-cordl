#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PlayerNumberingExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PlayerNumberingExtensions_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumberingExtensions.GetPlayerNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PlayerNumberingExtensions::GetPlayerNumber)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa737d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*>(),
                        {"GetPlayerNumber", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PlayerNumberingExtensions.SetPlayerNumber
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::UtilityScripts::PlayerNumberingExtensions::SetPlayerNumber)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0xa737e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*>(),
                        {"SetPlayerNumber", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t Photon::Pun::UtilityScripts::PlayerNumberingExtensions::GetPlayerNumber(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*>(),
                        {"GetPlayerNumber", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, player);
}
inline void Photon::Pun::UtilityScripts::PlayerNumberingExtensions::SetPlayerNumber(::Photon::Realtime::Player*  player, int32_t  playerNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PlayerNumberingExtensions*>(),
                        {"SetPlayerNumber", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, playerNumber);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PlayerNumberingExtensions::PlayerNumberingExtensions()   {
}
