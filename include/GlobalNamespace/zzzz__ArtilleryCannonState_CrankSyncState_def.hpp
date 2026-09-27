#pragma once
// IWYU pragma private; include "GlobalNamespace/ArtilleryCannonState_CrankSyncState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArtilleryCannonState_CrankSyncState)
// Forward declare root types
namespace GlobalNamespace {
struct ArtilleryCannonState_CrankSyncState;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ArtilleryCannonState_CrankSyncState);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ArtilleryCannonState_CrankSyncState, "", "ArtilleryCannonState/CrankSyncState");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: ArtilleryCannonState/CrankSyncState
struct CORDL_TYPE ArtilleryCannonState_CrankSyncState {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ArtilleryCannonState_CrankSyncState() ;

// Ctor Parameters [CppParam { name: "holderActorNr", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isLeftHand", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "angle", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr ArtilleryCannonState_CrankSyncState(int32_t  holderActorNr, bool  isLeftHand, float_t  angle) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{398};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field holderActorNr, offset: 0x0, size: 0x4, def value: None
 int32_t  holderActorNr;

/// @brief Field isLeftHand, offset: 0x4, size: 0x1, def value: None
 bool  isLeftHand;

/// @brief Field angle, offset: 0x8, size: 0x4, def value: None
 float_t  angle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState_CrankSyncState, holderActorNr) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState_CrankSyncState, isLeftHand) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ArtilleryCannonState_CrankSyncState, angle) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ArtilleryCannonState_CrankSyncState) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
