#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/PhotonTeamExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeamExtensions_def.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__PhotonTeam_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.GetPhotonTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Photon::Pun::UtilityScripts::PhotonTeam* (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::GetPhotonTeam)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa735a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"GetPhotonTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.JoinTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::JoinTeam)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xa736960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"JoinTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.JoinTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, uint8_t)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::JoinTeam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa736b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"JoinTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.JoinTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, ::StringW)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::JoinTeam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa736bc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"JoinTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.SwitchTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, ::Photon::Pun::UtilityScripts::PhotonTeam*)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::SwitchTeam)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0xa736c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"SwitchTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.SwitchTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, uint8_t)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::SwitchTeam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa736f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"SwitchTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<uint8_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.SwitchTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, ::StringW)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::SwitchTeam)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa736f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"SwitchTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.LeaveCurrentTeam
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::LeaveCurrentTeam)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa736fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"LeaveCurrentTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::PhotonTeamExtensions.TryGetTeamMates
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Photon::Realtime::Player*, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>)>(&::Photon::Pun::UtilityScripts::PhotonTeamExtensions::TryGetTeamMates)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa737194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"TryGetTeamMates", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Photon::Pun::UtilityScripts::PhotonTeam* Photon::Pun::UtilityScripts::PhotonTeamExtensions::GetPhotonTeam(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"GetPhotonTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Photon::Pun::UtilityScripts::PhotonTeam*>(nullptr, ___internal_method, player);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::JoinTeam(::Photon::Realtime::Player*  player, ::Photon::Pun::UtilityScripts::PhotonTeam*  team)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"JoinTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, team);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::JoinTeam(::Photon::Realtime::Player*  player, uint8_t  teamCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"JoinTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, teamCode);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::JoinTeam(::Photon::Realtime::Player*  player, ::StringW  teamName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"JoinTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, teamName);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::SwitchTeam(::Photon::Realtime::Player*  player, ::Photon::Pun::UtilityScripts::PhotonTeam*  team)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"SwitchTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::Photon::Pun::UtilityScripts::PhotonTeam*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, team);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::SwitchTeam(::Photon::Realtime::Player*  player, uint8_t  teamCode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"SwitchTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<uint8_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, teamCode);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::SwitchTeam(::Photon::Realtime::Player*  player, ::StringW  teamName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"SwitchTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, teamName);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::LeaveCurrentTeam(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"LeaveCurrentTeam", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player);
}
inline bool Photon::Pun::UtilityScripts::PhotonTeamExtensions::TryGetTeamMates(::Photon::Realtime::Player*  player, ::by_ref<::ArrayW<::Photon::Realtime::Player*>>  teamMates)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::PhotonTeamExtensions*>(),
                        {"TryGetTeamMates", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<::by_ref<::ArrayW<::Photon::Realtime::Player*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, player, teamMates);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::PhotonTeamExtensions::PhotonTeamExtensions()   {
}
