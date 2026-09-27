#pragma once
// IWYU pragma private; include "GlobalNamespace/MonkeBallScoreboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MonkeBallScoreboard)
namespace GlobalNamespace {
class MonkeBallGame;
}
namespace GlobalNamespace {
class MonkeBallScoreboard_TeamDisplay;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class MonkeBallScoreboard;
}
namespace GlobalNamespace {
class MonkeBallScoreboard_TeamDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MonkeBallScoreboard*);
MARK_REF_T(::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallScoreboard*, "", "MonkeBallScoreboard");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*, "", "MonkeBallScoreboard/TeamDisplay");
// Dependencies MonkeBallScoreboard::TeamDisplay, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallScoreboard
class CORDL_TYPE MonkeBallScoreboard : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TeamDisplay = ::GlobalNamespace::MonkeBallScoreboard_TeamDisplay;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field game, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_game, put=__cordl_internal_set_game)) ::UnityW<::GlobalNamespace::MonkeBallGame>  game;

/// @brief Field gameEndSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEndSound, put=__cordl_internal_set_gameEndSound)) ::UnityW<::UnityEngine::AudioClip>  gameEndSound;

/// @brief Field gameEndVolume, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameEndVolume, put=__cordl_internal_set_gameEndVolume)) float_t  gameEndVolume;

/// @brief Field gameStartSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameStartSound, put=__cordl_internal_set_gameStartSound)) ::UnityW<::UnityEngine::AudioClip>  gameStartSound;

/// @brief Field gameStartVolume, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_gameStartVolume, put=__cordl_internal_set_gameStartVolume)) float_t  gameStartVolume;

/// @brief Field playerJoinSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerJoinSound, put=__cordl_internal_set_playerJoinSound)) ::UnityW<::UnityEngine::AudioClip>  playerJoinSound;

/// @brief Field playerLeaveSound, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerLeaveSound, put=__cordl_internal_set_playerLeaveSound)) ::UnityW<::UnityEngine::AudioClip>  playerLeaveSound;

/// @brief Field scoreSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreSound, put=__cordl_internal_set_scoreSound)) ::UnityW<::UnityEngine::AudioClip>  scoreSound;

/// @brief Field scoreSoundVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_scoreSoundVolume, put=__cordl_internal_set_scoreSoundVolume)) float_t  scoreSoundVolume;

/// @brief Field teamDisplays, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamDisplays, put=__cordl_internal_set_teamDisplays)) ::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>  teamDisplays;

/// @brief Field timeRemainingLabel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeRemainingLabel, put=__cordl_internal_set_timeRemainingLabel)) ::UnityW<::TMPro::TextMeshPro>  timeRemainingLabel;

static inline ::GlobalNamespace::MonkeBallScoreboard* New_ctor() ;

/// @brief Method PlayFX, addr 0x57b0aa0, size 0xcc, virtual false, abstract: false, final false
inline void PlayFX(::UnityEngine::AudioClip*  clip, float_t  volume) ;

/// @brief Method PlayGameEndFx, addr 0x57ad5dc, size 0xc, virtual false, abstract: false, final false
inline void PlayGameEndFx() ;

/// @brief Method PlayGameStartFx, addr 0x57ad5d0, size 0xc, virtual false, abstract: false, final false
inline void PlayGameStartFx() ;

/// @brief Method PlayPlayerJoinFx, addr 0x57afa04, size 0xc, virtual false, abstract: false, final false
inline void PlayPlayerJoinFx() ;

/// @brief Method PlayPlayerLeaveFx, addr 0x57afa10, size 0xc, virtual false, abstract: false, final false
inline void PlayPlayerLeaveFx() ;

/// @brief Method PlayScoreFx, addr 0x57aed50, size 0xc, virtual false, abstract: false, final false
inline void PlayScoreFx() ;

/// @brief Method RefreshScore, addr 0x57aec6c, size 0xe4, virtual false, abstract: false, final false
inline void RefreshScore() ;

/// @brief Method RefreshTeamPlayers, addr 0x57af930, size 0xd4, virtual false, abstract: false, final false
inline void RefreshTeamPlayers(int32_t  teamId, int32_t  numPlayers) ;

/// @brief Method RefreshTime, addr 0x57ae7a8, size 0x20, virtual false, abstract: false, final false
inline void RefreshTime(::StringW  timeString) ;

/// @brief Method Setup, addr 0x57b0a98, size 0x8, virtual false, abstract: false, final false
inline void Setup(::GlobalNamespace::MonkeBallGame*  game) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::GlobalNamespace::MonkeBallGame> const& __cordl_internal_get_game() const;

constexpr ::UnityW<::GlobalNamespace::MonkeBallGame>& __cordl_internal_get_game() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_gameEndSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_gameEndSound() ;

constexpr float_t const& __cordl_internal_get_gameEndVolume() const;

constexpr float_t& __cordl_internal_get_gameEndVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_gameStartSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_gameStartSound() ;

constexpr float_t const& __cordl_internal_get_gameStartVolume() const;

constexpr float_t& __cordl_internal_get_gameStartVolume() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_playerJoinSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_playerJoinSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_playerLeaveSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_playerLeaveSound() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_scoreSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_scoreSound() ;

constexpr float_t const& __cordl_internal_get_scoreSoundVolume() const;

constexpr float_t& __cordl_internal_get_scoreSoundVolume() ;

constexpr ::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*> const& __cordl_internal_get_teamDisplays() const;

constexpr ::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>& __cordl_internal_get_teamDisplays() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_timeRemainingLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_timeRemainingLabel() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_game(::UnityW<::GlobalNamespace::MonkeBallGame>  value) ;

constexpr void __cordl_internal_set_gameEndSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_gameEndVolume(float_t  value) ;

constexpr void __cordl_internal_set_gameStartSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_gameStartVolume(float_t  value) ;

constexpr void __cordl_internal_set_playerJoinSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_playerLeaveSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_scoreSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_scoreSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_teamDisplays(::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>  value) ;

constexpr void __cordl_internal_set_timeRemainingLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x57b0b6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallScoreboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallScoreboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallScoreboard(MonkeBallScoreboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallScoreboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallScoreboard(MonkeBallScoreboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1557};

/// @brief Field game, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeBallGame>  ___game;

/// @brief Field teamDisplays, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MonkeBallScoreboard_TeamDisplay*>  ___teamDisplays;

/// @brief Field timeRemainingLabel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___timeRemainingLabel;

/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field scoreSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___scoreSound;

/// @brief Field scoreSoundVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___scoreSoundVolume;

/// @brief Field playerJoinSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___playerJoinSound;

/// @brief Field playerLeaveSound, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___playerLeaveSound;

/// @brief Field gameStartSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___gameStartSound;

/// @brief Field gameStartVolume, offset: 0x68, size: 0x4, def value: None
 float_t  ___gameStartVolume;

/// @brief Field gameEndSound, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___gameEndSound;

/// @brief Field gameEndVolume, offset: 0x78, size: 0x4, def value: None
 float_t  ___gameEndVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___game) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___teamDisplays) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___timeRemainingLabel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___scoreSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___scoreSoundVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___playerJoinSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___playerLeaveSound) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___gameStartSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___gameStartVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___gameEndSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard, ___gameEndVolume) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallScoreboard) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MonkeBallScoreboard/TeamDisplay
class CORDL_TYPE MonkeBallScoreboard_TeamDisplay : public ::System::Object {
public:
// Declarations
/// @brief Field nameLabel, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nameLabel, put=__cordl_internal_set_nameLabel)) ::UnityW<::TMPro::TextMeshPro>  nameLabel;

/// @brief Field playersLabel, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersLabel, put=__cordl_internal_set_playersLabel)) ::UnityW<::TMPro::TextMeshPro>  playersLabel;

/// @brief Field scoreLabel, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreLabel, put=__cordl_internal_set_scoreLabel)) ::UnityW<::TMPro::TextMeshPro>  scoreLabel;

static inline ::GlobalNamespace::MonkeBallScoreboard_TeamDisplay* New_ctor() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_nameLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_nameLabel() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_playersLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_playersLabel() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_scoreLabel() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_scoreLabel() ;

constexpr void __cordl_internal_set_nameLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_playersLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_scoreLabel(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x57b0b74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MonkeBallScoreboard_TeamDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallScoreboard_TeamDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MonkeBallScoreboard_TeamDisplay(MonkeBallScoreboard_TeamDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MonkeBallScoreboard_TeamDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MonkeBallScoreboard_TeamDisplay(MonkeBallScoreboard_TeamDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1556};

/// @brief Field nameLabel, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___nameLabel;

/// @brief Field scoreLabel, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___scoreLabel;

/// @brief Field playersLabel, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___playersLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard_TeamDisplay, ___nameLabel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard_TeamDisplay, ___scoreLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MonkeBallScoreboard_TeamDisplay, ___playersLabel) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MonkeBallScoreboard_TeamDisplay) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
