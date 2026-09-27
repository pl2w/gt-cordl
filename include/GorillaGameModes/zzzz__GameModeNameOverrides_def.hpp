#pragma once
// IWYU pragma private; include "GorillaGameModes/GameModeNameOverrides.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameModeNameOverrides)
// Forward declare root types
namespace GorillaGameModes {
struct GameModeNameOverrides;
}
// Write type traits
MARK_VAL_T(::GorillaGameModes::GameModeNameOverrides);
DEFINE_IL2CPP_CLASS(::GorillaGameModes::GameModeNameOverrides, "GorillaGameModes", "GameModeNameOverrides");
// Dependencies GorillaGameModes.GameModeType
namespace GorillaGameModes {
// Is value type: true
// CS Name: GorillaGameModes.GameModeNameOverrides
struct CORDL_TYPE GameModeNameOverrides {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameModeNameOverrides() ;

// Ctor Parameters [CppParam { name: "mode", ty: "::GorillaGameModes::GameModeType", modifiers: "", def_value: None, comment: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr GameModeNameOverrides(::GorillaGameModes::GameModeType  mode, ::StringW  displayName) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3893};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field mode, offset: 0x0, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  mode;

/// @brief Field displayName, offset: 0x8, size: 0x8, def value: None
 ::StringW  displayName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::GameModeNameOverrides, mode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::GameModeNameOverrides, displayName) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::GameModeNameOverrides) == 0x10, "Size mismatch!");

} // namespace end def GorillaGameModes
