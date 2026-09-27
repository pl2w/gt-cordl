#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaTagCompetitiveRankDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaTagCompetitiveRankDisplay)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaTagCompetitiveRankDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaTagCompetitiveRankDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaTagCompetitiveRankDisplay*, "", "GorillaTagCompetitiveRankDisplay");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaTagCompetitiveRankDisplay
class CORDL_TYPE GorillaTagCompetitiveRankDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field currentRankSprite, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRankSprite, put=__cordl_internal_set_currentRankSprite)) ::UnityW<::UnityEngine::SpriteRenderer>  currentRankSprite;

/// @brief Field currentRank_Name, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentRank_Name, put=__cordl_internal_set_currentRank_Name)) ::UnityW<::TMPro::TextMeshPro>  currentRank_Name;

/// @brief Field nextRankSprite, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextRankSprite, put=__cordl_internal_set_nextRankSprite)) ::UnityW<::UnityEngine::SpriteRenderer>  nextRankSprite;

/// @brief Field nextRank_Name, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextRank_Name, put=__cordl_internal_set_nextRank_Name)) ::UnityW<::TMPro::TextMeshPro>  nextRank_Name;

/// @brief Field nextText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextText, put=__cordl_internal_set_nextText)) ::UnityW<::TMPro::TextMeshPro>  nextText;

/// @brief Field prevRankSprite, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevRankSprite, put=__cordl_internal_set_prevRankSprite)) ::UnityW<::UnityEngine::SpriteRenderer>  prevRankSprite;

/// @brief Field prevRank_Name, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevRank_Name, put=__cordl_internal_set_prevRank_Name)) ::UnityW<::TMPro::TextMeshPro>  prevRank_Name;

/// @brief Field prevText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_prevText, put=__cordl_internal_set_prevText)) ::UnityW<::TMPro::TextMeshPro>  prevText;

/// @brief Field progressBar, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progressBar, put=__cordl_internal_set_progressBar)) ::UnityW<::UnityEngine::SpriteRenderer>  progressBar;

/// @brief Field progressBarSize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressBarSize, put=__cordl_internal_set_progressBarSize)) float_t  progressBarSize;

/// @brief Method HandleRankedSubtierChanged, addr 0x592a8a0, size 0xac, virtual false, abstract: false, final false
inline void HandleRankedSubtierChanged(int32_t  questSubTier, int32_t  pcSubTier) ;

static inline ::GlobalNamespace::GorillaTagCompetitiveRankDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x592a94c, size 0xec, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x592a7ac, size 0xf4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method UpdateRankIcons, addr 0x592aa38, size 0x2f8, virtual false, abstract: false, final false
inline void UpdateRankIcons(int32_t  currentRank) ;

/// @brief Method UpdateRankProgress, addr 0x592ad30, size 0x5c, virtual false, abstract: false, final false
inline void UpdateRankProgress(float_t  percent) ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_currentRankSprite() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_currentRankSprite() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_currentRank_Name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_currentRank_Name() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_nextRankSprite() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_nextRankSprite() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_nextRank_Name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_nextRank_Name() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_nextText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_nextText() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_prevRankSprite() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_prevRankSprite() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_prevRank_Name() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_prevRank_Name() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_prevText() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_prevText() ;

constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get_progressBar() const;

constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get_progressBar() ;

constexpr float_t const& __cordl_internal_get_progressBarSize() const;

constexpr float_t& __cordl_internal_get_progressBarSize() ;

constexpr void __cordl_internal_set_currentRankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_currentRank_Name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_nextRankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_nextRank_Name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_nextText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_prevRankSprite(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_prevRank_Name(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_prevText(::UnityW<::TMPro::TextMeshPro>  value) ;

constexpr void __cordl_internal_set_progressBar(::UnityW<::UnityEngine::SpriteRenderer>  value) ;

constexpr void __cordl_internal_set_progressBarSize(float_t  value) ;

/// @brief Method .ctor, addr 0x592ad8c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaTagCompetitiveRankDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRankDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaTagCompetitiveRankDisplay(GorillaTagCompetitiveRankDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaTagCompetitiveRankDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaTagCompetitiveRankDisplay(GorillaTagCompetitiveRankDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2225};

/// [SerializeField]
/// @brief Field progressBar, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___progressBar;

/// [SerializeField]
/// @brief Field progressBarSize, offset: 0x28, size: 0x4, def value: None
 float_t  ___progressBarSize;

/// [SerializeField]
/// @brief Field currentRankSprite, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___currentRankSprite;

/// [SerializeField]
/// @brief Field prevRankSprite, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___prevRankSprite;

/// [SerializeField]
/// @brief Field nextRankSprite, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SpriteRenderer>  ___nextRankSprite;

/// [SerializeField]
/// @brief Field currentRank_Name, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___currentRank_Name;

/// [SerializeField]
/// @brief Field prevText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___prevText;

/// [SerializeField]
/// @brief Field nextText, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___nextText;

/// [SerializeField]
/// @brief Field prevRank_Name, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___prevRank_Name;

/// [SerializeField]
/// @brief Field nextRank_Name, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___nextRank_Name;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___progressBar) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___progressBarSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___currentRankSprite) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___prevRankSprite) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___nextRankSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___currentRank_Name) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___prevText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___nextText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___prevRank_Name) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay, ___nextRank_Name) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaTagCompetitiveRankDisplay) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
