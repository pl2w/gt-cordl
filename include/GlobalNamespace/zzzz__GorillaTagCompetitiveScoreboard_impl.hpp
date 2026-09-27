#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveScoreboard.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveScoreboardLine_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveScoreboard_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveManager_GameState_def.hpp"
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveScoreboard_PredictedResult_def.hpp"
#include "GlobalNamespace/zzzz__NetPlayer_def.hpp"
#include "GlobalNamespace/zzzz__RankedMultiplayerScore_PlayerScoreInRound_def.hpp"
#include "GlobalNamespace/zzzz__RankedProgressionManager_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboard.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboard::*)()>(&::GlobalNamespace::GorillaTagCompetitiveScoreboard::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x592b174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboard.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboard::*)()>(&::GlobalNamespace::GorillaTagCompetitiveScoreboard::OnDestroy)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x592b224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboard.UpdateScores
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboard::*)(::GlobalNamespace::GorillaTagCompetitiveManager_GameState, float_t, ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*, ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*, ::GlobalNamespace::RankedProgressionManager*)>(&::GlobalNamespace::GorillaTagCompetitiveScoreboard::UpdateScores)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x5926f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"UpdateScores", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(), ::i2c::type_of<::GlobalNamespace::RankedProgressionManager*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboard.DisplayPredictedResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboard::*)(bool)>(&::GlobalNamespace::GorillaTagCompetitiveScoreboard::DisplayPredictedResults)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5929d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"DisplayPredictedResults", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GorillaTagCompetitiveScoreboard._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GorillaTagCompetitiveScoreboard::*)()>(&::GlobalNamespace::GorillaTagCompetitiveScoreboard::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x592b4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>>& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_lines()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>> const& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_lines() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lines;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_set_lines(::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lines = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_waitingForPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForPlayers;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_waitingForPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitingForPlayers;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_set_waitingForPlayers(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitingForPlayers = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_smallEloDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallEloDelta;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_smallEloDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___smallEloDelta;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_set_smallEloDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___smallEloDelta = value;
}
constexpr float_t& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_largeEloDelta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largeEloDelta;
}
constexpr float_t const& GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_get_largeEloDelta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___largeEloDelta;
}
constexpr void GlobalNamespace::GorillaTagCompetitiveScoreboard::__cordl_internal_set_largeEloDelta(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___largeEloDelta = value;
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboard::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboard::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboard::UpdateScores(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  gameState, float_t  activeRoundTime, ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*  scores, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  PlayerRankedTiers, ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  PlayerPredictedEloDeltas, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  infectedPlayers, ::GlobalNamespace::RankedProgressionManager*  progressionManager)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"UpdateScores", {}, {::i2c::type_of<::GlobalNamespace::GorillaTagCompetitiveManager_GameState>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*>(), ::i2c::type_of<::System::Collections::Generic::Dictionary_2<int32_t,float_t>*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*>(), ::i2c::type_of<::GlobalNamespace::RankedProgressionManager*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameState, activeRoundTime, scores, PlayerRankedTiers, PlayerPredictedEloDeltas, infectedPlayers, progressionManager);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboard::DisplayPredictedResults(bool  bShow)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {"DisplayPredictedResults", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bShow);
}
inline void GlobalNamespace::GorillaTagCompetitiveScoreboard::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GorillaTagCompetitiveScoreboard* GlobalNamespace::GorillaTagCompetitiveScoreboard::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GorillaTagCompetitiveScoreboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GorillaTagCompetitiveScoreboard::GorillaTagCompetitiveScoreboard()   {
}
