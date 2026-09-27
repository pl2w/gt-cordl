#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager_LightDataLegacy.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GameLightingManager_LightDataLegacy)
// Forward declare root types
namespace GlobalNamespace {
struct GameLightingManager_LightDataLegacy;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameLightingManager_LightDataLegacy);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightingManager_LightDataLegacy, "", "GameLightingManager/LightDataLegacy");
// Dependencies Unity.Mathematics.float4
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameLightingManager/LightDataLegacy
struct CORDL_TYPE GameLightingManager_LightDataLegacy {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameLightingManager_LightDataLegacy() ;

// Ctor Parameters [CppParam { name: "position", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "color", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "::Unity::Mathematics::float4", modifiers: "", def_value: None, comment: None }]
constexpr GameLightingManager_LightDataLegacy(::Unity::Mathematics::float4  position, ::Unity::Mathematics::float4  color, ::Unity::Mathematics::float4  direction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1774};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field position, offset: 0x0, size: 0x10, def value: None
 ::Unity::Mathematics::float4  position;

/// @brief Field color, offset: 0x10, size: 0x10, def value: None
 ::Unity::Mathematics::float4  color;

/// @brief Field direction, offset: 0x20, size: 0x10, def value: None
 ::Unity::Mathematics::float4  direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataLegacy, position) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataLegacy, color) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataLegacy, direction) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLightingManager_LightDataLegacy) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
