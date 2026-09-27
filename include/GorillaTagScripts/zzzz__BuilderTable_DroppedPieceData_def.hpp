#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable_DroppedPieceData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/zzzz__BuilderTable_DroppedPieceState_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(BuilderTable_DroppedPieceData)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderTable_DroppedPieceData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderTable_DroppedPieceData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderTable_DroppedPieceData, "GorillaTagScripts", "BuilderTable/DroppedPieceData");
// Dependencies GorillaTagScripts.BuilderTable::DroppedPieceState
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.BuilderTable/DroppedPieceData
struct CORDL_TYPE BuilderTable_DroppedPieceData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_DroppedPieceData() ;

// Ctor Parameters [CppParam { name: "droppedState", ty: "::GlobalNamespace::BuilderTable_DroppedPieceState", modifiers: "", def_value: None, comment: None }, CppParam { name: "speedThreshCrossedTime", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "filteredSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderTable_DroppedPieceData(::GlobalNamespace::BuilderTable_DroppedPieceState  droppedState, float_t  speedThreshCrossedTime, float_t  filteredSpeed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3944};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field droppedState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::BuilderTable_DroppedPieceState  droppedState;

/// @brief Field speedThreshCrossedTime, offset: 0x4, size: 0x4, def value: None
 float_t  speedThreshCrossedTime;

/// @brief Field filteredSpeed, offset: 0x8, size: 0x4, def value: None
 float_t  filteredSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderTable_DroppedPieceData, droppedState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_DroppedPieceData, speedThreshCrossedTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BuilderTable_DroppedPieceData, filteredSpeed) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderTable_DroppedPieceData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
