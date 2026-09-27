#pragma once
// IWYU pragma private; include "Photon/Pun/UtilityScripts/ScoreExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/UtilityScripts/zzzz__ScoreExtensions_def.hpp"
#include "Photon/Realtime/zzzz__Player_def.hpp"
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ScoreExtensions.SetScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::UtilityScripts::ScoreExtensions::SetScore)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa738338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ScoreExtensions*>(),
                        {"SetScore", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ScoreExtensions.AddScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Photon::Realtime::Player*, int32_t)>(&::Photon::Pun::UtilityScripts::ScoreExtensions::AddScore)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xa7383fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ScoreExtensions*>(),
                        {"AddScore", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::UtilityScripts::ScoreExtensions.GetScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::Photon::Realtime::Player*)>(&::Photon::Pun::UtilityScripts::ScoreExtensions::GetScore)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa7384d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ScoreExtensions*>(),
                        {"GetScore", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Photon::Pun::UtilityScripts::ScoreExtensions::SetScore(::Photon::Realtime::Player*  player, int32_t  newScore)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ScoreExtensions*>(),
                        {"SetScore", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, newScore);
}
inline void Photon::Pun::UtilityScripts::ScoreExtensions::AddScore(::Photon::Realtime::Player*  player, int32_t  scoreToAddToCurrent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ScoreExtensions*>(),
                        {"AddScore", {}, {::i2c::type_of<::Photon::Realtime::Player*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, player, scoreToAddToCurrent);
}
inline int32_t Photon::Pun::UtilityScripts::ScoreExtensions::GetScore(::Photon::Realtime::Player*  player)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::UtilityScripts::ScoreExtensions*>(),
                        {"GetScore", {}, {::i2c::type_of<::Photon::Realtime::Player*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, player);
}
// Ctor Parameters []
constexpr ::Photon::Pun::UtilityScripts::ScoreExtensions::ScoreExtensions()   {
}
