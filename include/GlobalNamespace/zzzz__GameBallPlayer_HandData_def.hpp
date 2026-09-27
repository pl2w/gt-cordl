#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBallPlayer_HandData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameBallPlayer_HandData)
// Forward declare root types
namespace GlobalNamespace {
struct GameBallPlayer_HandData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameBallPlayer_HandData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBallPlayer_HandData, "", "GameBallPlayer/HandData");
// Dependencies GameBallId
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameBallPlayer/HandData
struct CORDL_TYPE GameBallPlayer_HandData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameBallPlayer_HandData() ;

// Ctor Parameters [CppParam { name: "grabbedGameBallId", ty: "::GlobalNamespace::GameBallId", modifiers: "", def_value: None, comment: None }]
constexpr GameBallPlayer_HandData(::GlobalNamespace::GameBallId  grabbedGameBallId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1538};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field grabbedGameBallId, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GameBallId  grabbedGameBallId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBallPlayer_HandData, grabbedGameBallId) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBallPlayer_HandData) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
