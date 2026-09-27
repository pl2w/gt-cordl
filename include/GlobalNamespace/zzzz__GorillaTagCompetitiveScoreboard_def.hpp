#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveScoreboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GorillaTagCompetitiveScoreboardLine_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveScoreboard)
namespace GlobalNamespace {
struct GorillaTagCompetitiveManager_GameState;
}
namespace GlobalNamespace {
struct GorillaTagCompetitiveScoreboard_PredictedResult;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct RankedMultiplayerScore_PlayerScoreInRound;
}
namespace GlobalNamespace {
class RankedProgressionManager;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveScoreboard;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveScoreboard*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveScoreboard*, "", "GorillaTagCompetitiveScoreboard");
// Dependencies GorillaTagCompetitiveScoreboardLine, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveScoreboard
class CORDL_TYPE GorillaTagCompetitiveScoreboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PredictedResult = ::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult;

/// @brief Field largeEloDelta, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_largeEloDelta, put=__cordl_internal_set_largeEloDelta)) float_t  largeEloDelta;

/// @brief Field lines, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lines, put=__cordl_internal_set_lines)) ::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>>  lines;

/// @brief Field smallEloDelta, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_smallEloDelta, put=__cordl_internal_set_smallEloDelta)) float_t  smallEloDelta;

/// @brief Field waitingForPlayers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingForPlayers, put=__cordl_internal_set_waitingForPlayers)) ::UnityW<::UnityEngine::GameObject>  waitingForPlayers;

/// @brief Method Awake, addr 0x592b174, size 0xb0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DisplayPredictedResults, addr 0x5929d10, size 0x64, virtual false, abstract: false, final false
inline void DisplayPredictedResults(bool  bShow) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveScoreboard* New_ctor() ;

/// @brief Method OnDestroy, addr 0x592b224, size 0x54, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method UpdateScores, addr 0x5926f44, size 0x4d4, virtual false, abstract: false, final false
inline void UpdateScores(::GlobalNamespace::GorillaTagCompetitiveManager_GameState  gameState, float_t  activeRoundTime, ::System::Collections::Generic::List_1<::GlobalNamespace::RankedMultiplayerScore_PlayerScoreInRound>*  scores, ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  PlayerRankedTiers, ::System::Collections::Generic::Dictionary_2<int32_t,float_t>*  PlayerPredictedEloDeltas, ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  infectedPlayers, ::GlobalNamespace::RankedProgressionManager*  progressionManager) ;

constexpr float_t const& __cordl_internal_get_largeEloDelta() const;

constexpr float_t& __cordl_internal_get_largeEloDelta() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>> const& __cordl_internal_get_lines() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>>& __cordl_internal_get_lines() ;

constexpr float_t const& __cordl_internal_get_smallEloDelta() const;

constexpr float_t& __cordl_internal_get_smallEloDelta() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waitingForPlayers() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waitingForPlayers() ;

constexpr void __cordl_internal_set_largeEloDelta(float_t  value) ;

constexpr void __cordl_internal_set_lines(::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>>  value) ;

constexpr void __cordl_internal_set_smallEloDelta(float_t  value) ;

constexpr void __cordl_internal_set_waitingForPlayers(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x592b4dc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveScoreboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveScoreboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveScoreboard(GorillaTagCompetitiveScoreboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveScoreboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveScoreboard(GorillaTagCompetitiveScoreboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2228};

/// @brief Field lines, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GorillaTagCompetitiveScoreboardLine>>  ___lines;

/// @brief Field waitingForPlayers, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waitingForPlayers;

/// @brief Field smallEloDelta, offset: 0x30, size: 0x4, def value: None
 float_t  ___smallEloDelta;

/// @brief Field largeEloDelta, offset: 0x34, size: 0x4, def value: None
 float_t  ___largeEloDelta;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboard, ___lines) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboard, ___waitingForPlayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboard, ___smallEloDelta) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboard, ___largeEloDelta) == 0x34, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveScoreboard) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
