#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_Settings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_AtlasSettings_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightCookieManager_Settings)
namespace GlobalNamespace {
struct Settings_LightCookieManager_AtlasSettings;
}
// Forward declare root types
namespace GlobalNamespace {
struct LightCookieManager_Settings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LightCookieManager_Settings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LightCookieManager_Settings, "UnityEngine.Rendering.Universal", "LightCookieManager/Settings");
// Dependencies UnityEngine.Rendering.Universal.LightCookieManager::Settings::AtlasSettings
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/Settings
struct CORDL_TYPE LightCookieManager_Settings {
public:
// Declarations
using AtlasSettings = ::GlobalNamespace::Settings_LightCookieManager_AtlasSettings;

/// @brief Method Create, addr 0xb257b90, size 0xb4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::LightCookieManager_Settings Create() ;

// Ctor Parameters []
// @brief default ctor
constexpr LightCookieManager_Settings() ;

// Ctor Parameters [CppParam { name: "atlas", ty: "::GlobalNamespace::Settings_LightCookieManager_AtlasSettings", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxAdditionalLights", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "cubeOctahedralSizeScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "useStructuredBuffer", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr LightCookieManager_Settings(::GlobalNamespace::Settings_LightCookieManager_AtlasSettings  atlas, int32_t  maxAdditionalLights, float_t  cubeOctahedralSizeScale, bool  useStructuredBuffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18413};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field atlas, offset: 0x0, size: 0xc, def value: None
 ::GlobalNamespace::Settings_LightCookieManager_AtlasSettings  atlas;

/// @brief Field maxAdditionalLights, offset: 0xc, size: 0x4, def value: None
 int32_t  maxAdditionalLights;

/// @brief Field cubeOctahedralSizeScale, offset: 0x10, size: 0x4, def value: None
 float_t  cubeOctahedralSizeScale;

/// @brief Field useStructuredBuffer, offset: 0x14, size: 0x1, def value: None
 bool  useStructuredBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LightCookieManager_Settings, atlas) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightCookieManager_Settings, maxAdditionalLights) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightCookieManager_Settings, cubeOctahedralSizeScale) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightCookieManager_Settings, useStructuredBuffer) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LightCookieManager_Settings) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
