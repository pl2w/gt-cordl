#pragma once
// IWYU pragma private; include "GlobalNamespace/RaceVisual.hpp"
#include "GlobalNamespace/zzzz__RacingScoreboard_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RaceVisual_def.hpp"
#include "GlobalNamespace/zzzz__RaceCheckpointManager_def.hpp"
#include "GlobalNamespace/zzzz__RaceConsoleVisual_def.hpp"
#include "GlobalNamespace/zzzz__RacingScoreboard_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.get_raceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::get_raceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568ec94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"get_raceId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.set_raceId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(int32_t)>(&::GlobalNamespace::RaceVisual::set_raceId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568ec9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"set_raceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.get_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::get_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568eca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"get_TickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.set_TickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(bool)>(&::GlobalNamespace::RaceVisual::set_TickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568ecac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x568ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::OnEnable)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x568ee6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.Button_StartRace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(int32_t)>(&::GlobalNamespace::RaceVisual::Button_StartRace)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x568ef0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"Button_StartRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.ShowFinishLineText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(::StringW)>(&::GlobalNamespace::RaceVisual::ShowFinishLineText)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x568efac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"ShowFinishLineText", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.UpdateCountdown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(int32_t)>(&::GlobalNamespace::RaceVisual::UpdateCountdown)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x568efcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"UpdateCountdown", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.SetScoreboardText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(::StringW, ::StringW)>(&::GlobalNamespace::RaceVisual::SetScoreboardText)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x568ed64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"SetScoreboardText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.SetRaceStartScoreboardText
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(::StringW, ::StringW)>(&::GlobalNamespace::RaceVisual::SetRaceStartScoreboardText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x568ee0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"SetRaceStartScoreboardText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.ActivateStartingWall
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(bool)>(&::GlobalNamespace::RaceVisual::ActivateStartingWall)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x568f07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"ActivateStartingWall", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.IsPlayerNearCheckpoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::RaceVisual::*)(::GlobalNamespace::VRRig*, int32_t)>(&::GlobalNamespace::RaceVisual::IsPlayerNearCheckpoint)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x568f098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"IsPlayerNearCheckpoint", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.OnCountdownStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(int32_t, float_t)>(&::GlobalNamespace::RaceVisual::OnCountdownStart)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x568f0ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnCountdownStart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.OnRaceStart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::OnRaceStart)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x568f0fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnRaceStart", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.OnRaceEnded
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::OnRaceEnded)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x568f184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnRaceEnded", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.OnRaceReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::OnRaceReset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x568f1f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnRaceReset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.EnableRaceEndSound
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::EnableRaceEndSound)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x568f204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"EnableRaceEndSound", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual.OnCheckpointPassed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)(int32_t, ::GlobalNamespace::SoundBankPlayer*)>(&::GlobalNamespace::RaceVisual::OnCheckpointPassed)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x568e84c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnCheckpointPassed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SoundBankPlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RaceVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RaceVisual::*)()>(&::GlobalNamespace::RaceVisual::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x568f358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::RaceVisual::__cordl_internal_get__raceId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raceId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::RaceVisual::__cordl_internal_get__raceId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raceId_k__BackingField;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set__raceId_k__BackingField(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raceId_k__BackingField = value;
}
constexpr bool& GlobalNamespace::RaceVisual::__cordl_internal_get__TickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr bool const& GlobalNamespace::RaceVisual::__cordl_internal_get__TickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TickRunning_k__BackingField;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set__TickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TickRunning_k__BackingField = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::RaceVisual::__cordl_internal_get_finishLineText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishLineText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::RaceVisual::__cordl_internal_get_finishLineText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___finishLineText;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_finishLineText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___finishLineText = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::RaceVisual::__cordl_internal_get_countdownText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownText;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::RaceVisual::__cordl_internal_get_countdownText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownText;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_countdownText(::UnityW<::TMPro::TextMeshPro>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdownText = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>>& GlobalNamespace::RaceVisual::__cordl_internal_get_raceScoreboards()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceScoreboards;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>> const& GlobalNamespace::RaceVisual::__cordl_internal_get_raceScoreboards() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceScoreboards;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_raceScoreboards(::ArrayW<::UnityW<::GlobalNamespace::RacingScoreboard>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceScoreboards = value;
}
constexpr ::UnityW<::GlobalNamespace::RacingScoreboard>& GlobalNamespace::RaceVisual::__cordl_internal_get_raceStartScoreboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStartScoreboard;
}
constexpr ::UnityW<::GlobalNamespace::RacingScoreboard> const& GlobalNamespace::RaceVisual::__cordl_internal_get_raceStartScoreboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceStartScoreboard;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_raceStartScoreboard(::UnityW<::GlobalNamespace::RacingScoreboard>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceStartScoreboard = value;
}
constexpr ::UnityW<::GlobalNamespace::RaceConsoleVisual>& GlobalNamespace::RaceVisual::__cordl_internal_get_raceConsoleVisual()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceConsoleVisual;
}
constexpr ::UnityW<::GlobalNamespace::RaceConsoleVisual> const& GlobalNamespace::RaceVisual::__cordl_internal_get_raceConsoleVisual() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceConsoleVisual;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_raceConsoleVisual(::UnityW<::GlobalNamespace::RaceConsoleVisual>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceConsoleVisual = value;
}
constexpr float_t& GlobalNamespace::RaceVisual::__cordl_internal_get_nextVisualRefreshTimestamp()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextVisualRefreshTimestamp;
}
constexpr float_t const& GlobalNamespace::RaceVisual::__cordl_internal_get_nextVisualRefreshTimestamp() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextVisualRefreshTimestamp;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_nextVisualRefreshTimestamp(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextVisualRefreshTimestamp = value;
}
constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager>& GlobalNamespace::RaceVisual::__cordl_internal_get_checkpoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpoints;
}
constexpr ::UnityW<::GlobalNamespace::RaceCheckpointManager> const& GlobalNamespace::RaceVisual::__cordl_internal_get_checkpoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___checkpoints;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_checkpoints(::UnityW<::GlobalNamespace::RaceCheckpointManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___checkpoints = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::RaceVisual::__cordl_internal_get_raceEndSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceEndSound;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::RaceVisual::__cordl_internal_get_raceEndSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___raceEndSound;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_raceEndSound(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___raceEndSound = value;
}
constexpr float_t& GlobalNamespace::RaceVisual::__cordl_internal_get_countdownSoundGoTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownSoundGoTime;
}
constexpr float_t const& GlobalNamespace::RaceVisual::__cordl_internal_get_countdownSoundGoTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownSoundGoTime;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_countdownSoundGoTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdownSoundGoTime = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::RaceVisual::__cordl_internal_get_countdownSoundPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownSoundPlayer;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::RaceVisual::__cordl_internal_get_countdownSoundPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownSoundPlayer;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_countdownSoundPlayer(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___countdownSoundPlayer = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::RaceVisual::__cordl_internal_get_startingWall()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingWall;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::RaceVisual::__cordl_internal_get_startingWall() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___startingWall;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_startingWall(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___startingWall = value;
}
constexpr int32_t& GlobalNamespace::RaceVisual::__cordl_internal_get_lastDisplayedCountdown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisplayedCountdown;
}
constexpr int32_t const& GlobalNamespace::RaceVisual::__cordl_internal_get_lastDisplayedCountdown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastDisplayedCountdown;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_lastDisplayedCountdown(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastDisplayedCountdown = value;
}
constexpr bool& GlobalNamespace::RaceVisual::__cordl_internal_get_isRaceEndSoundEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRaceEndSoundEnabled;
}
constexpr bool const& GlobalNamespace::RaceVisual::__cordl_internal_get_isRaceEndSoundEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isRaceEndSoundEnabled;
}
constexpr void GlobalNamespace::RaceVisual::__cordl_internal_set_isRaceEndSoundEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isRaceEndSoundEnabled = value;
}
inline int32_t GlobalNamespace::RaceVisual::get_raceId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"get_raceId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::set_raceId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"set_raceId", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::RaceVisual::get_TickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"get_TickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::set_TickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"set_TickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::RaceVisual::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::Button_StartRace(int32_t  laps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"Button_StartRace", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, laps);
}
inline void GlobalNamespace::RaceVisual::ShowFinishLineText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"ShowFinishLineText", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text);
}
inline void GlobalNamespace::RaceVisual::UpdateCountdown(int32_t  timeRemaining)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"UpdateCountdown", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, timeRemaining);
}
inline void GlobalNamespace::RaceVisual::SetScoreboardText(::StringW  mainText, ::StringW  timesText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"SetScoreboardText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainText, timesText);
}
inline void GlobalNamespace::RaceVisual::SetRaceStartScoreboardText(::StringW  mainText, ::StringW  timesText)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"SetRaceStartScoreboardText", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainText, timesText);
}
inline void GlobalNamespace::RaceVisual::ActivateStartingWall(bool  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"ActivateStartingWall", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline bool GlobalNamespace::RaceVisual::IsPlayerNearCheckpoint(::GlobalNamespace::VRRig*  player, int32_t  checkpoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"IsPlayerNearCheckpoint", {}, {::i2c::type_of<::GlobalNamespace::VRRig*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, player, checkpoint);
}
inline void GlobalNamespace::RaceVisual::OnCountdownStart(int32_t  laps, float_t  goAfterInterval)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnCountdownStart", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, laps, goAfterInterval);
}
inline void GlobalNamespace::RaceVisual::OnRaceStart()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnRaceStart", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::OnRaceEnded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnRaceEnded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::OnRaceReset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnRaceReset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::EnableRaceEndSound()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"EnableRaceEndSound", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RaceVisual::OnCheckpointPassed(int32_t  index, ::GlobalNamespace::SoundBankPlayer*  checkpointSound)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {"OnCheckpointPassed", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SoundBankPlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, checkpointSound);
}
inline void GlobalNamespace::RaceVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RaceVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::RaceVisual* GlobalNamespace::RaceVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RaceVisual*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RaceVisual::RaceVisual()   {
}
