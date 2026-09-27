#pragma once
// IWYU pragma private; include "GorillaGameModes/ZoneGameModes.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ZoneGameModes)
namespace GlobalNamespace {
struct GTZone;
}
namespace GorillaGameModes {
struct GameModeType;
}
// Forward declare root types
namespace GorillaGameModes {
struct ZoneGameModes;
}
// Write type traits
MARK_VAL_T(::GorillaGameModes::ZoneGameModes);
DEFINE_IL2CPP_CLASS(::GorillaGameModes::ZoneGameModes, "GorillaGameModes", "ZoneGameModes");
// Dependencies GTZone, GorillaGameModes.GameModeType
namespace GorillaGameModes {
// Is value type: true
// CS Name: GorillaGameModes.ZoneGameModes
struct CORDL_TYPE ZoneGameModes {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ZoneGameModes() ;

// Ctor Parameters [CppParam { name: "zone", ty: "::ArrayW<::GlobalNamespace::GTZone>", modifiers: "", def_value: None, comment: None }, CppParam { name: "modes", ty: "::ArrayW<::GorillaGameModes::GameModeType>", modifiers: "", def_value: None, comment: None }, CppParam { name: "privateModes", ty: "::ArrayW<::GorillaGameModes::GameModeType>", modifiers: "", def_value: None, comment: None }]
constexpr ZoneGameModes(::ArrayW<::GlobalNamespace::GTZone>  zone, ::ArrayW<::GorillaGameModes::GameModeType>  modes, ::ArrayW<::GorillaGameModes::GameModeType>  privateModes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3891};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field zone, offset: 0x0, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTZone>  zone;

/// @brief Field modes, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  modes;

/// @brief Field privateModes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::GorillaGameModes::GameModeType>  privateModes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GorillaGameModes::ZoneGameModes, zone) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::ZoneGameModes, modes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GorillaGameModes::ZoneGameModes, privateModes) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GorillaGameModes::ZoneGameModes) == 0x18, "Size mismatch!");

} // namespace end def GorillaGameModes
