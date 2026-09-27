#pragma once
// IWYU pragma private; include "GlobalNamespace/SIUIPlayerQuestDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SIUIPlayerQuestEntry_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SIUIPlayerQuestDisplay)
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class SIUIPlayerQuestEntry;
}
namespace GlobalNamespace {
class SIUIProgressBar;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SIUIPlayerQuestDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIUIPlayerQuestDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIUIPlayerQuestDisplay*, "", "SIUIPlayerQuestDisplay");
// Dependencies SIUIPlayerQuestEntry, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIUIPlayerQuestDisplay
class CORDL_TYPE SIUIPlayerQuestDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field activePlayer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_activePlayer, put=__cordl_internal_set_activePlayer)) ::UnityW<::UnityEngine::GameObject>  activePlayer;

/// @brief Field activePlayerActorNumber, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_activePlayerActorNumber, put=__cordl_internal_set_activePlayerActorNumber)) int32_t  activePlayerActorNumber;

/// @brief Field bonusPointsCompleted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonusPointsCompleted, put=__cordl_internal_set_bonusPointsCompleted)) ::UnityW<::UnityEngine::GameObject>  bonusPointsCompleted;

/// @brief Field bonusPointsInProgress, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_bonusPointsInProgress, put=__cordl_internal_set_bonusPointsInProgress)) ::UnityW<::UnityEngine::GameObject>  bonusPointsInProgress;

/// @brief Field collectBonusButton, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_collectBonusButton, put=__cordl_internal_set_collectBonusButton)) ::UnityW<::UnityEngine::GameObject>  collectBonusButton;

/// @brief Field displayBackground, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_displayBackground, put=__cordl_internal_set_displayBackground)) ::UnityW<::UnityEngine::UI::Image>  displayBackground;

/// @brief Field lastBonusProgress, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastBonusProgress, put=__cordl_internal_set_lastBonusProgress)) int32_t  lastBonusProgress;

/// @brief Field lastNickName, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastNickName, put=__cordl_internal_set_lastNickName)) ::StringW  lastNickName;

/// @brief Field lastStashedBonusPoints, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStashedBonusPoints, put=__cordl_internal_set_lastStashedBonusPoints)) int32_t  lastStashedBonusPoints;

/// @brief Field lastStashedQuests, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastStashedQuests, put=__cordl_internal_set_lastStashedQuests)) int32_t  lastStashedQuests;

/// @brief Field lastTechPoints, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTechPoints, put=__cordl_internal_set_lastTechPoints)) int32_t  lastTechPoints;

/// @brief Field localPlayerColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_localPlayerColor, put=__cordl_internal_set_localPlayerColor)) ::UnityEngine::Color  localPlayerColor;

/// @brief Field monkeIdolIcon, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_monkeIdolIcon, put=__cordl_internal_set_monkeIdolIcon)) ::UnityW<::UnityEngine::UI::Image>  monkeIdolIcon;

/// @brief Field noPlayerColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_noPlayerColor, put=__cordl_internal_set_noPlayerColor)) ::UnityEngine::Color  noPlayerColor;

/// @brief Field playerName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerName, put=__cordl_internal_set_playerName)) ::UnityW<::TMPro::TextMeshProUGUI>  playerName;

/// @brief Field playerTechPoints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerTechPoints, put=__cordl_internal_set_playerTechPoints)) ::UnityW<::TMPro::TextMeshProUGUI>  playerTechPoints;

/// @brief Field questEntries, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_questEntries, put=__cordl_internal_set_questEntries)) ::ArrayW<::UnityW<::GlobalNamespace::SIUIPlayerQuestEntry>>  questEntries;

/// @brief Field remotePlayerColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_remotePlayerColor, put=__cordl_internal_set_remotePlayerColor)) ::UnityEngine::Color  remotePlayerColor;

/// @brief Field sharedProgress, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedProgress, put=__cordl_internal_set_sharedProgress)) ::UnityW<::GlobalNamespace::SIUIProgressBar>  sharedProgress;

/// @brief Field smallDisplayBackground, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_smallDisplayBackground, put=__cordl_internal_set_smallDisplayBackground)) ::UnityW<::UnityEngine::UI::Image>  smallDisplayBackground;

/// @brief Field stashedBonusPointCount, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_stashedBonusPointCount, put=__cordl_internal_set_stashedBonusPointCount)) ::UnityW<::TMPro::TextMeshProUGUI>  stashedBonusPointCount;

/// @brief Field stashedQuestCount, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_stashedQuestCount, put=__cordl_internal_set_stashedQuestCount)) ::UnityW<::TMPro::TextMeshProUGUI>  stashedQuestCount;

/// @brief Field waitingForPlayer, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_waitingForPlayer, put=__cordl_internal_set_waitingForPlayer)) ::UnityW<::UnityEngine::GameObject>  waitingForPlayer;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method BonusPointCollectButtonPress, addr 0x5af7ba8, size 0xbc, virtual false, abstract: false, final false
inline void BonusPointCollectButtonPress() ;

/// @brief Method IGorillaSliceableSimple.SliceUpdate, addr 0x5af7d60, size 0x4, virtual true, abstract: false, final true
inline void IGorillaSliceableSimple_SliceUpdate() ;

static inline ::GlobalNamespace::SIUIPlayerQuestDisplay* New_ctor() ;

/// @brief Method OnDisable, addr 0x5af7d70, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5af7d64, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessQuestEntry, addr 0x5af7888, size 0x320, virtual false, abstract: false, final false
inline void ProcessQuestEntry(::GlobalNamespace::SIUIPlayerQuestEntry*  entry, int32_t  questId, int32_t  questProgress) ;

/// @brief Method QuestPointCollectButtonPress, addr 0x5af7c64, size 0xfc, virtual false, abstract: false, final false
inline void QuestPointCollectButtonPress(int32_t  questIndex) ;

/// @brief Method RefreshDisplay, addr 0x5af6f80, size 0x7a8, virtual false, abstract: false, final false
inline void RefreshDisplay() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_activePlayer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_activePlayer() ;

constexpr int32_t const& __cordl_internal_get_activePlayerActorNumber() const;

constexpr int32_t& __cordl_internal_get_activePlayerActorNumber() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bonusPointsCompleted() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bonusPointsCompleted() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_bonusPointsInProgress() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_bonusPointsInProgress() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_collectBonusButton() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_collectBonusButton() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_displayBackground() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_displayBackground() ;

constexpr int32_t const& __cordl_internal_get_lastBonusProgress() const;

constexpr int32_t& __cordl_internal_get_lastBonusProgress() ;

constexpr ::StringW const& __cordl_internal_get_lastNickName() const;

constexpr ::StringW& __cordl_internal_get_lastNickName() ;

constexpr int32_t const& __cordl_internal_get_lastStashedBonusPoints() const;

constexpr int32_t& __cordl_internal_get_lastStashedBonusPoints() ;

constexpr int32_t const& __cordl_internal_get_lastStashedQuests() const;

constexpr int32_t& __cordl_internal_get_lastStashedQuests() ;

constexpr int32_t const& __cordl_internal_get_lastTechPoints() const;

constexpr int32_t& __cordl_internal_get_lastTechPoints() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_localPlayerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_localPlayerColor() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_monkeIdolIcon() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_monkeIdolIcon() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_noPlayerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_noPlayerColor() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_playerName() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_playerName() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_playerTechPoints() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_playerTechPoints() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIUIPlayerQuestEntry>> const& __cordl_internal_get_questEntries() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SIUIPlayerQuestEntry>>& __cordl_internal_get_questEntries() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_remotePlayerColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_remotePlayerColor() ;

constexpr ::UnityW<::GlobalNamespace::SIUIProgressBar> const& __cordl_internal_get_sharedProgress() const;

constexpr ::UnityW<::GlobalNamespace::SIUIProgressBar>& __cordl_internal_get_sharedProgress() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_smallDisplayBackground() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_smallDisplayBackground() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_stashedBonusPointCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_stashedBonusPointCount() ;

constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get_stashedQuestCount() const;

constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get_stashedQuestCount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waitingForPlayer() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waitingForPlayer() ;

constexpr void __cordl_internal_set_activePlayer(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_activePlayerActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_bonusPointsCompleted(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_bonusPointsInProgress(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_collectBonusButton(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_displayBackground(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_lastBonusProgress(int32_t  value) ;

constexpr void __cordl_internal_set_lastNickName(::StringW  value) ;

constexpr void __cordl_internal_set_lastStashedBonusPoints(int32_t  value) ;

constexpr void __cordl_internal_set_lastStashedQuests(int32_t  value) ;

constexpr void __cordl_internal_set_lastTechPoints(int32_t  value) ;

constexpr void __cordl_internal_set_localPlayerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_monkeIdolIcon(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_noPlayerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_playerName(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_playerTechPoints(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_questEntries(::ArrayW<::UnityW<::GlobalNamespace::SIUIPlayerQuestEntry>>  value) ;

constexpr void __cordl_internal_set_remotePlayerColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_sharedProgress(::UnityW<::GlobalNamespace::SIUIProgressBar>  value) ;

constexpr void __cordl_internal_set_smallDisplayBackground(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_stashedBonusPointCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_stashedQuestCount(::UnityW<::TMPro::TextMeshProUGUI>  value) ;

constexpr void __cordl_internal_set_waitingForPlayer(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x5af7d7c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIUIPlayerQuestDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIUIPlayerQuestDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIUIPlayerQuestDisplay(SIUIPlayerQuestDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIUIPlayerQuestDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIUIPlayerQuestDisplay(SIUIPlayerQuestDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{378};

/// @brief Field playerName, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___playerName;

/// [FormerlySerializedAs("playerTestPoints")]
/// @brief Field playerTechPoints, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___playerTechPoints;

/// @brief Field stashedQuestCount, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___stashedQuestCount;

/// @brief Field stashedBonusPointCount, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshProUGUI>  ___stashedBonusPointCount;

/// @brief Field displayBackground, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___displayBackground;

/// @brief Field smallDisplayBackground, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___smallDisplayBackground;

/// @brief Field monkeIdolIcon, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___monkeIdolIcon;

/// @brief Field localPlayerColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ___localPlayerColor;

/// @brief Field remotePlayerColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___remotePlayerColor;

/// @brief Field noPlayerColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___noPlayerColor;

/// @brief Field questEntries, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SIUIPlayerQuestEntry>>  ___questEntries;

/// @brief Field collectBonusButton, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___collectBonusButton;

/// @brief Field bonusPointsInProgress, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___bonusPointsInProgress;

/// @brief Field bonusPointsCompleted, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___bonusPointsCompleted;

/// @brief Field sharedProgress, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIUIProgressBar>  ___sharedProgress;

/// @brief Field activePlayer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___activePlayer;

/// @brief Field waitingForPlayer, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waitingForPlayer;

/// @brief Field activePlayerActorNumber, offset: 0xc0, size: 0x4, def value: None
 int32_t  ___activePlayerActorNumber;

/// @brief Field lastNickName, offset: 0xc8, size: 0x8, def value: None
 ::StringW  ___lastNickName;

/// @brief Field lastStashedQuests, offset: 0xd0, size: 0x4, def value: None
 int32_t  ___lastStashedQuests;

/// @brief Field lastStashedBonusPoints, offset: 0xd4, size: 0x4, def value: None
 int32_t  ___lastStashedBonusPoints;

/// @brief Field lastTechPoints, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___lastTechPoints;

/// @brief Field lastBonusProgress, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___lastBonusProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___playerName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___playerTechPoints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___stashedQuestCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___stashedBonusPointCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___displayBackground) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___smallDisplayBackground) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___monkeIdolIcon) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___localPlayerColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___remotePlayerColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___noPlayerColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___questEntries) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___collectBonusButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___bonusPointsInProgress) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___bonusPointsCompleted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___sharedProgress) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___activePlayer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___waitingForPlayer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___activePlayerActorNumber) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___lastNickName) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___lastStashedQuests) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___lastStashedBonusPoints) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___lastTechPoints) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIUIPlayerQuestDisplay, ___lastBonusProgress) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIUIPlayerQuestDisplay) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
