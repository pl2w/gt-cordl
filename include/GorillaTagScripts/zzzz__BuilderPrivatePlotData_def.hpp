#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderPrivatePlotData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BuilderPiecePrivatePlot_PlotState_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPrivatePlotData)
namespace GlobalNamespace {
class BuilderPiecePrivatePlot;
}
// Forward declare root types
namespace GorillaTagScripts {
struct BuilderPrivatePlotData;
}
// Write type traits
MARK_VAL_T(::GorillaTagScripts::BuilderPrivatePlotData);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderPrivatePlotData, "GorillaTagScripts", "BuilderPrivatePlotData");
// Dependencies BuilderPiecePrivatePlot::PlotState
namespace GorillaTagScripts {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderPrivatePlotData
struct CORDL_TYPE BuilderPrivatePlotData {
public:
// Declarations
/// @brief Method .ctor, addr 0x5ba9e9c, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::BuilderPiecePrivatePlot*  plot) ;

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPrivatePlotData() ;

// Ctor Parameters [CppParam { name: "plotState", ty: "::GlobalNamespace::BuilderPiecePrivatePlot_PlotState", modifiers: "", def_value: None, comment: None }, CppParam { name: "ownerActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isUnderCapacityLeft", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "isUnderCapacityRight", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot_PlotState  plotState, int32_t  ownerActorNumber, bool  isUnderCapacityLeft, bool  isUnderCapacityRight) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3953};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field plotState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderPiecePrivatePlot_PlotState  plotState;

/// @brief Field ownerActorNumber, offset: 0x4, size: 0x4, def value: None
 int32_t  ownerActorNumber;

/// @brief Field isUnderCapacityLeft, offset: 0x8, size: 0x1, def value: None
 bool  isUnderCapacityLeft;

/// @brief Field isUnderCapacityRight, offset: 0x9, size: 0x1, def value: None
 bool  isUnderCapacityRight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderPrivatePlotData, plotState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPrivatePlotData, ownerActorNumber) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPrivatePlotData, isUnderCapacityLeft) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderPrivatePlotData, isUnderCapacityRight) == 0x9, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderPrivatePlotData) == 0xc, "Size mismatch!");

} // namespace end def GorillaTagScripts
