#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveScoreboardLine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveScoreboardLine)
namespace GlobalNamespace {
struct GorillaTagCompetitiveScoreboard_PredictedResult;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveScoreboardLine;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine*, "", "GorillaTagCompetitiveScoreboardLine");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Sprite
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveScoreboardLine
class CORDL_TYPE GorillaTagCompetitiveScoreboardLine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field playerNameDisplay, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerNameDisplay, put=__cordl_internal_set_playerNameDisplay)) ::UnityW<::TMPro::TMP_Text>  playerNameDisplay;

/// @brief Field rankSprite, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_rankSprite, put=__cordl_internal_set_rankSprite)) ::UnityW<::UnityEngine::SpriteRenderer>  rankSprite;

/// @brief Field resultSprite, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSprite, put=__cordl_internal_set_resultSprite)) ::UnityW<::UnityEngine::SpriteRenderer>  resultSprite;

/// @brief Field resultSprites, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultSprites, put=__cordl_internal_set_resultSprites)) ::ArrayW<::UnityW<::UnityEngine::Sprite>>  resultSprites;

/// @brief Field tagCountDisplay, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagCountDisplay, put=__cordl_internal_set_tagCountDisplay)) ::UnityW<::TMPro::TMP_Text>  tagCountDisplay;

/// @brief Field untaggedTimeDisplay, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_untaggedTimeDisplay, put=__cordl_internal_set_untaggedTimeDisplay)) ::UnityW<::TMPro::TMP_Text>  untaggedTimeDisplay;

/// @brief Method DisplayPredictedResults, addr 0x592b4ac, size 0x30, virtual false, abstract: false, final false
inline void DisplayPredictedResults(bool  bShow) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveScoreboardLine* New_ctor() ;

/// @brief Method SetInfected, addr 0x592b470, size 0x3c, virtual false, abstract: false, final false
inline void SetInfected(bool  infected) ;

/// @brief Method SetPlayer, addr 0x592b278, size 0x48, virtual false, abstract: false, final false
inline void SetPlayer(::StringW  playerName, ::UnityEngine::Sprite*  icon) ;

/// @brief Method SetPredictedResult, addr 0x592b434, size 0x3c, virtual false, abstract: false, final false
inline void SetPredictedResult(::GlobalNamespace::GorillaTagCompetitiveScoreboard_PredictedResult  result) ;

/// @brief Method SetScore, addr 0x592b2c0, size 0x174, virtual false, abstract: false, final false
inline void SetScore(float_t  untaggedTime, int32_t  tagCount) ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_playerNameDisplay() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_playerNameDisplay() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_rankSprite() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_rankSprite() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_resultSprite() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_resultSprite() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>> const& __cordl_internal_get_resultSprites() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Sprite>>& __cordl_internal_get_resultSprites() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_tagCountDisplay() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_tagCountDisplay() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_untaggedTimeDisplay() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_untaggedTimeDisplay() ;

constexpr void __cordl_internal_set_playerNameDisplay(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_rankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_resultSprite(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_resultSprites(::ArrayW<::UnityW<::UnityEngine::Sprite>>  value) ;

constexpr void __cordl_internal_set_tagCountDisplay(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set_untaggedTimeDisplay(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x592b4f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveScoreboardLine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveScoreboardLine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveScoreboardLine(GorillaTagCompetitiveScoreboardLine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveScoreboardLine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveScoreboardLine(GorillaTagCompetitiveScoreboardLine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2229};

/// @brief Field rankSprite, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___rankSprite;

/// @brief Field playerNameDisplay, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___playerNameDisplay;

/// @brief Field untaggedTimeDisplay, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___untaggedTimeDisplay;

/// @brief Field tagCountDisplay, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___tagCountDisplay;

/// @brief Field resultSprite, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___resultSprite;

/// @brief Field resultSprites, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Sprite>>  ___resultSprites;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine, ___rankSprite) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine, ___playerNameDisplay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine, ___untaggedTimeDisplay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine, ___tagCountDisplay) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine, ___resultSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine, ___resultSprites) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveScoreboardLine) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
