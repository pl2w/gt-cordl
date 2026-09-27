#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_Settings_AtlasSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LightCookieManager_Settings_AtlasSettings)
// Forward declare root types
namespace GlobalNamespace {
struct Settings_LightCookieManager_AtlasSettings;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Settings_LightCookieManager_AtlasSettings);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Settings_LightCookieManager_AtlasSettings, "UnityEngine.Rendering.Universal", "LightCookieManager/Settings/AtlasSettings");
// Dependencies UnityEngine.Experimental.Rendering.GraphicsFormat, UnityEngine.Vector2Int
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.LightCookieManager/Settings/AtlasSettings
struct CORDL_TYPE Settings_LightCookieManager_AtlasSettings {
public:
// Declarations
 __declspec(property(get=get_isPow2)) bool  isPow2;

 __declspec(property(get=get_isSquare)) bool  isSquare;

/// @brief Method get_isPow2, addr 0xb2573e8, size 0x2c, virtual false, abstract: false, final false
inline bool get_isPow2() ;

/// @brief Method get_isSquare, addr 0xb257c44, size 0x10, virtual false, abstract: false, final false
inline bool get_isSquare() ;

// Ctor Parameters []
// @brief default ctor
constexpr Settings_LightCookieManager_AtlasSettings() ;

// Ctor Parameters [CppParam { name: "resolution", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None, comment: None }, CppParam { name: "format", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None, comment: None }]
constexpr Settings_LightCookieManager_AtlasSettings(::UnityEngine::Vector2Int  resolution, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18412};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field resolution, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2Int  resolution;

/// @brief Field format, offset: 0x8, size: 0x4, def value: None
 ::UnityEngine::Experimental::Rendering::GraphicsFormat  format;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Settings_LightCookieManager_AtlasSettings, resolution) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Settings_LightCookieManager_AtlasSettings, format) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Settings_LightCookieManager_AtlasSettings) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
