#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreboardTotalUpdater_PlayerReports.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GorillaScoreboardTotalUpdater_PlayerReports)
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine;
}
// Forward declare root types
namespace GlobalNamespace {
struct GorillaScoreboardTotalUpdater_PlayerReports;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports, "", "GorillaScoreboardTotalUpdater/PlayerReports");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaScoreboardTotalUpdater/PlayerReports
struct CORDL_TYPE GorillaScoreboardTotalUpdater_PlayerReports {
public:
// Declarations
/// @brief Method .ctor, addr 0x59a1644, size 0x18, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GorillaPlayerScoreboardLine*  lineToUpdate) ;

/// @brief Method .ctor, addr 0x59a15cc, size 0x78, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports  reportToUpdate, ::GlobalNamespace::GorillaPlayerScoreboardLine*  lineToUpdate) ;

// Ctor Parameters []
// @brief default ctor
constexpr GorillaScoreboardTotalUpdater_PlayerReports() ;

// Ctor Parameters [CppParam { name: "cheating", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "toxicity", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "hateSpeech", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "pressedReport", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GorillaScoreboardTotalUpdater_PlayerReports(bool  cheating, bool  toxicity, bool  hateSpeech, bool  pressedReport) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2617};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field cheating, offset: 0x0, size: 0x1, def value: None
 bool  cheating;

/// @brief Field toxicity, offset: 0x1, size: 0x1, def value: None
 bool  toxicity;

/// @brief Field hateSpeech, offset: 0x2, size: 0x1, def value: None
 bool  hateSpeech;

/// @brief Field pressedReport, offset: 0x3, size: 0x1, def value: None
 bool  pressedReport;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports, cheating) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports, toxicity) == 0x1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports, hateSpeech) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports, pressedReport) == 0x3, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
