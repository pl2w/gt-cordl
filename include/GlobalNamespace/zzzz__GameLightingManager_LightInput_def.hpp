#pragma once
// IWYU pragma private; include "GlobalNamespace/GameLightingManager_LightInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GameLightingManager_LightInput)
// Forward declare root types
namespace GlobalNamespace {
struct GameLightingManager_LightInput;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameLightingManager_LightInput);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameLightingManager_LightInput, "", "GameLightingManager/LightInput");
// Dependencies UnityEngine.Color
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameLightingManager/LightInput
struct CORDL_TYPE GameLightingManager_LightInput {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameLightingManager_LightInput() ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "intensity", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "intensityMult", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GameLightingManager_LightInput(::UnityEngine::Color  color, float_t  intensity, float_t  intensityMult) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1772};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field color, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Color  color;

/// @brief Field intensity, offset: 0x10, size: 0x4, def value: None
 float_t  intensity;

/// @brief Field intensityMult, offset: 0x14, size: 0x4, def value: None
 float_t  intensityMult;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightInput, color) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightInput, intensity) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameLightingManager_LightInput, intensityMult) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameLightingManager_LightInput) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
