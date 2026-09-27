#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayerLocal_HandData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include "GlobalNamespace/zzzz__GameBallPlayerLocal_HandGrabState_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameBallPlayerLocal_HandData)
// Forward declare root types
namespace GlobalNamespace {
struct GameBallPlayerLocal_HandData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameBallPlayerLocal_HandData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallPlayerLocal_HandData, "", "GameBallPlayerLocal/HandData");
// Dependencies GameBallId, GameBallPlayerLocal::HandGrabState
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameBallPlayerLocal/HandData
struct CORDL_TYPE GameBallPlayerLocal_HandData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameBallPlayerLocal_HandData() ;

// Ctor Parameters [CppParam { name: "grabState", ty: "::GlobalNamespace::GameBallPlayerLocal_HandGrabState", modifiers: "", def_value: None, comment: None }, CppParam { name: "gripWasHeld", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "gripPressedTime", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "grabbedGameBallId", ty: "::GlobalNamespace::GameBallId", modifiers: "", def_value: None, comment: None }]
constexpr GameBallPlayerLocal_HandData(::GlobalNamespace::GameBallPlayerLocal_HandGrabState  grabState, bool  gripWasHeld, double_t  gripPressedTime, ::GlobalNamespace::GameBallId  grabbedGameBallId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1541};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field grabState, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GameBallPlayerLocal_HandGrabState  grabState;

/// @brief Field gripWasHeld, offset: 0x4, size: 0x1, def value: None
 bool  gripWasHeld;

/// @brief Field gripPressedTime, offset: 0x8, size: 0x8, def value: None
 double_t  gripPressedTime;

/// @brief Field grabbedGameBallId, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::GameBallId  grabbedGameBallId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_HandData, grabState) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_HandData, gripWasHeld) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_HandData, gripPressedTime) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBallPlayerLocal_HandData, grabbedGameBallId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallPlayerLocal_HandData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
