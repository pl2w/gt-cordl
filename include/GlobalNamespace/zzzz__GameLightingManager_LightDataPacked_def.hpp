#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager_LightDataPacked.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GameLightingManager_LightDataPacked)
// Forward declare root types
namespace GlobalNamespace {
struct GameLightingManager_LightDataPacked;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameLightingManager_LightDataPacked);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightingManager_LightDataPacked, "", "GameLightingManager/LightDataPacked");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameLightingManager/LightDataPacked
struct CORDL_TYPE GameLightingManager_LightDataPacked {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameLightingManager_LightDataPacked() ;

// Ctor Parameters [CppParam { name: "posXY", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "posZW", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "colorRG", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "colorBA", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "range", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GameLightingManager_LightDataPacked(uint32_t  posXY, uint32_t  posZW, uint32_t  colorRG, uint32_t  colorBA, float_t  range) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1773};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field posXY, offset: 0x0, size: 0x4, def value: None
 uint32_t  posXY;

/// @brief Field posZW, offset: 0x4, size: 0x4, def value: None
 uint32_t  posZW;

/// @brief Field colorRG, offset: 0x8, size: 0x4, def value: None
 uint32_t  colorRG;

/// @brief Field colorBA, offset: 0xc, size: 0x4, def value: None
 uint32_t  colorBA;

/// @brief Field range, offset: 0x10, size: 0x4, def value: None
 float_t  range;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataPacked, posXY) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataPacked, posZW) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataPacked, colorRG) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataPacked, colorBA) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightDataPacked, range) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLightingManager_LightDataPacked) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
