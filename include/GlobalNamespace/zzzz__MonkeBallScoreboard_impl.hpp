#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallScoreboard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MonkeBallScoreboard_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallGame_def.hpp"
#include "GlobalNamespace/zzzz__MonkeBallScoreboard_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)(::GlobalNamespace::MonkeBallGame*)>(&::GlobalNamespace::MonkeBallScoreboard::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.RefreshScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)()>(&::GlobalNamespace::MonkeBallScoreboard::RefreshScore)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x57aec6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"RefreshScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.RefreshTeamPlayers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)(int32_t, int32_t)>(&::GlobalNamespace::MonkeBallScoreboard::RefreshTeamPlayers)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x57af930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"RefreshTeamPlayers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.PlayScoreFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)()>(&::GlobalNamespace::MonkeBallScoreboard::PlayScoreFx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57aed50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayScoreFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.PlayPlayerJoinFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)()>(&::GlobalNamespace::MonkeBallScoreboard::PlayPlayerJoinFx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57afa04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayPlayerJoinFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.PlayPlayerLeaveFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)()>(&::GlobalNamespace::MonkeBallScoreboard::PlayPlayerLeaveFx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57afa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayPlayerLeaveFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.PlayGameStartFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)()>(&::GlobalNamespace::MonkeBallScoreboard::PlayGameStartFx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57ad5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayGameStartFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.PlayGameEndFx
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)()>(&::GlobalNamespace::MonkeBallScoreboard::PlayGameEndFx)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x57ad5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayGameEndFx", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.PlayFX
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)(::UnityEngine::AudioClip*, float_t)>(&::GlobalNamespace::MonkeBallScoreboard::PlayFX)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x57b0aa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayFX", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard.RefreshTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)(::StringW)>(&::GlobalNamespace::MonkeBallScoreboard::RefreshTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x57ae7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"RefreshTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard::*)()>(&::GlobalNamespace::MonkeBallScoreboard::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MonkeBallGame>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_game()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___game;
}
constexpr ::UnityW<::GlobalNamespace::MonkeBallGame> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_game() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___game;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_game(::UnityW<::GlobalNamespace::MonkeBallGame>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___game = value;
}
constexpr ::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_teamDisplays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamDisplays;
}
constexpr ::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_teamDisplays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___teamDisplays;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_teamDisplays(::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___teamDisplays = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_timeRemainingLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRemainingLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_timeRemainingLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeRemainingLabel;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_timeRemainingLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeRemainingLabel = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_scoreSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_scoreSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreSound;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_scoreSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreSound = value;
}
constexpr float_t& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_scoreSoundVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreSoundVolume;
}
constexpr float_t const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_scoreSoundVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreSoundVolume;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_scoreSoundVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreSoundVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_playerJoinSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerJoinSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_playerJoinSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerJoinSound;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_playerJoinSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerJoinSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_playerLeaveSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLeaveSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_playerLeaveSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playerLeaveSound;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_playerLeaveSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playerLeaveSound = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameStartSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameStartSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartSound;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_gameStartSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameStartSound = value;
}
constexpr float_t& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameStartVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartVolume;
}
constexpr float_t const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameStartVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameStartVolume;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_gameStartVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameStartVolume = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameEndSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameEndSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndSound;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_gameEndSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEndSound = value;
}
constexpr float_t& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameEndVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndVolume;
}
constexpr float_t const& GlobalNamespace::MonkeBallScoreboard::__cordl_internal_get_gameEndVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gameEndVolume;
}
constexpr void GlobalNamespace::MonkeBallScoreboard::__cordl_internal_set_gameEndVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gameEndVolume = value;
}
inline void GlobalNamespace::MonkeBallScoreboard::Setup(::GlobalNamespace::MonkeBallGame*  game)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"Setup", {}, {::i2c::type_of<::GlobalNamespace::MonkeBallGame*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, game);
}
inline void GlobalNamespace::MonkeBallScoreboard::RefreshScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"RefreshScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallScoreboard::RefreshTeamPlayers(int32_t  teamId, int32_t  numPlayers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"RefreshTeamPlayers", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, teamId, numPlayers);
}
inline void GlobalNamespace::MonkeBallScoreboard::PlayScoreFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayScoreFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallScoreboard::PlayPlayerJoinFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayPlayerJoinFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallScoreboard::PlayPlayerLeaveFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayPlayerLeaveFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallScoreboard::PlayGameStartFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayGameStartFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallScoreboard::PlayGameEndFx()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayGameEndFx", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MonkeBallScoreboard::PlayFX(::UnityEngine::AudioClip*  clip, float_t  volume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"PlayFX", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip, volume);
}
inline void GlobalNamespace::MonkeBallScoreboard::RefreshTime(::StringW  timeString)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {"RefreshTime", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeString);
}
inline void GlobalNamespace::MonkeBallScoreboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallScoreboard* GlobalNamespace::MonkeBallScoreboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallScoreboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallScoreboard::MonkeBallScoreboard()   {
}
//  Writing Method size for method: ::GlobalNamespace::MonkeBallScoreboard_TeamDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MonkeBallScoreboard_TeamDisplay::*)()>(&::GlobalNamespace::MonkeBallScoreboard_TeamDisplay::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x57b0b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_get_nameLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_get_nameLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nameLabel;
}
constexpr void GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_set_nameLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nameLabel = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_get_scoreLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_get_scoreLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scoreLabel;
}
constexpr void GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_set_scoreLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scoreLabel = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_get_playersLabel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersLabel;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_get_playersLabel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playersLabel;
}
constexpr void GlobalNamespace::MonkeBallScoreboard_TeamDisplay::__cordl_internal_set_playersLabel(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playersLabel = value;
}
inline void GlobalNamespace::MonkeBallScoreboard_TeamDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MonkeBallScoreboard_TeamDisplay* GlobalNamespace::MonkeBallScoreboard_TeamDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MonkeBallScoreboard_TeamDisplay::MonkeBallScoreboard_TeamDisplay()   {
}
