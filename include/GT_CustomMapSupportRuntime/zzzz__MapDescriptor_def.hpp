#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__ExportLightingType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MapDescriptor)
namespace GT_CustomMapSupportRuntime {
struct VirtualStumpReturnWatchProps;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MapDescriptor;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MapDescriptor*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MapDescriptor*, "GT_CustomMapSupportRuntime", "MapDescriptor");
// [NullableContext(2)]
// [Nullable(0)]
// [DisallowMultipleComponent]
// Dependencies GT_CustomMapSupportRuntime.ExportLightingType, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MapDescriptor
class CORDL_TYPE MapDescriptor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field AddSkybox, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_AddSkybox, put=__cordl_internal_set_AddSkybox)) bool  AddSkybox;

/// @brief Field CustomGamemode, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomGamemode, put=__cordl_internal_set_CustomGamemode)) ::UnityW<::UnityEngine::TextAsset>  CustomGamemode;

/// @brief Field CustomSkybox, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomSkybox, put=__cordl_internal_set_CustomSkybox)) ::UnityW<::UnityEngine::Cubemap>  CustomSkybox;

/// @brief Field CustomSkyboxTint, offset 0x70, size 0x10 
 __declspec(property(get=__cordl_internal_get_CustomSkyboxTint, put=__cordl_internal_set_CustomSkyboxTint)) ::UnityEngine::Color  CustomSkyboxTint;

/// @brief Field DevMode, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_DevMode, put=__cordl_internal_set_DevMode)) bool  DevMode;

/// @brief Field DisableHoldingHandsAllGameModes, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableHoldingHandsAllGameModes, put=__cordl_internal_set_DisableHoldingHandsAllGameModes)) bool  DisableHoldingHandsAllGameModes;

/// @brief Field DisableHoldingHandsCustomOnly, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_DisableHoldingHandsCustomOnly, put=__cordl_internal_set_DisableHoldingHandsCustomOnly)) bool  DisableHoldingHandsCustomOnly;

/// @brief Field ExportAllObjects, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_ExportAllObjects, put=__cordl_internal_set_ExportAllObjects)) bool  ExportAllObjects;

/// @brief Field IsInitialScene, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsInitialScene, put=__cordl_internal_set_IsInitialScene)) bool  IsInitialScene;

/// @brief Field LightingExportType, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_LightingExportType, put=__cordl_internal_set_LightingExportType)) ::GT_CustomMapSupportRuntime::ExportLightingType  LightingExportType;

/// @brief Field MaxPlayers, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_MaxPlayers, put=__cordl_internal_set_MaxPlayers)) int32_t  MaxPlayers;

/// @brief Field SkyboxDiameter, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_SkyboxDiameter, put=__cordl_internal_set_SkyboxDiameter)) float_t  SkyboxDiameter;

/// @brief Field UberShaderAmbientDynamicLight, offset 0x3c, size 0x10 
 __declspec(property(get=__cordl_internal_get_UberShaderAmbientDynamicLight, put=__cordl_internal_set_UberShaderAmbientDynamicLight)) ::UnityEngine::Color  UberShaderAmbientDynamicLight;

/// @brief Field UseUberShaderDynamicLighting, offset 0x3a, size 0x1 
 __declspec(property(get=__cordl_internal_get_UseUberShaderDynamicLighting, put=__cordl_internal_set_UseUberShaderDynamicLighting)) bool  UseUberShaderDynamicLighting;

/// @brief Field watchCustomModeOverride, offset 0x32, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchCustomModeOverride, put=__cordl_internal_set_watchCustomModeOverride)) bool  watchCustomModeOverride;

/// @brief Field watchHoldDuration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchHoldDuration, put=__cordl_internal_set_watchHoldDuration)) float_t  watchHoldDuration;

/// @brief Field watchHoldDuration_CustomMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchHoldDuration_CustomMode, put=__cordl_internal_set_watchHoldDuration_CustomMode)) float_t  watchHoldDuration_CustomMode;

/// @brief Field watchHoldDuration_Infection, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchHoldDuration_Infection, put=__cordl_internal_set_watchHoldDuration_Infection)) float_t  watchHoldDuration_Infection;

/// @brief Field watchInfectionOverride, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchInfectionOverride, put=__cordl_internal_set_watchInfectionOverride)) bool  watchInfectionOverride;

/// @brief Field watchShouldKickPlayer, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldKickPlayer, put=__cordl_internal_set_watchShouldKickPlayer)) bool  watchShouldKickPlayer;

/// @brief Field watchShouldKickPlayer_CustomMode, offset 0x39, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldKickPlayer_CustomMode, put=__cordl_internal_set_watchShouldKickPlayer_CustomMode)) bool  watchShouldKickPlayer_CustomMode;

/// @brief Field watchShouldKickPlayer_Infection, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldKickPlayer_Infection, put=__cordl_internal_set_watchShouldKickPlayer_Infection)) bool  watchShouldKickPlayer_Infection;

/// @brief Field watchShouldTagPlayer, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldTagPlayer, put=__cordl_internal_set_watchShouldTagPlayer)) bool  watchShouldTagPlayer;

/// @brief Field watchShouldTagPlayer_CustomMode, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldTagPlayer_CustomMode, put=__cordl_internal_set_watchShouldTagPlayer_CustomMode)) bool  watchShouldTagPlayer_CustomMode;

/// @brief Field watchShouldTagPlayer_Infection, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldTagPlayer_Infection, put=__cordl_internal_set_watchShouldTagPlayer_Infection)) bool  watchShouldTagPlayer_Infection;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Method GetReturnToVStumpWatchProps, addr 0x9cb72cc, size 0x50, virtual false, abstract: false, final false
inline ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps GetReturnToVStumpWatchProps() ;

static inline ::GT_CustomMapSupportRuntime::MapDescriptor* New_ctor() ;

constexpr bool const& __cordl_internal_get_AddSkybox() const;

constexpr bool& __cordl_internal_get_AddSkybox() ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get_CustomGamemode() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get_CustomGamemode() ;

constexpr ::UnityW<::UnityEngine::Cubemap> const& __cordl_internal_get_CustomSkybox() const;

constexpr ::UnityW<::UnityEngine::Cubemap>& __cordl_internal_get_CustomSkybox() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_CustomSkyboxTint() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_CustomSkyboxTint() ;

constexpr bool const& __cordl_internal_get_DevMode() const;

constexpr bool& __cordl_internal_get_DevMode() ;

constexpr bool const& __cordl_internal_get_DisableHoldingHandsAllGameModes() const;

constexpr bool& __cordl_internal_get_DisableHoldingHandsAllGameModes() ;

constexpr bool const& __cordl_internal_get_DisableHoldingHandsCustomOnly() const;

constexpr bool& __cordl_internal_get_DisableHoldingHandsCustomOnly() ;

constexpr bool const& __cordl_internal_get_ExportAllObjects() const;

constexpr bool& __cordl_internal_get_ExportAllObjects() ;

constexpr bool const& __cordl_internal_get_IsInitialScene() const;

constexpr bool& __cordl_internal_get_IsInitialScene() ;

constexpr ::GT_CustomMapSupportRuntime::ExportLightingType const& __cordl_internal_get_LightingExportType() const;

constexpr ::GT_CustomMapSupportRuntime::ExportLightingType& __cordl_internal_get_LightingExportType() ;

constexpr int32_t const& __cordl_internal_get_MaxPlayers() const;

constexpr int32_t& __cordl_internal_get_MaxPlayers() ;

constexpr float_t const& __cordl_internal_get_SkyboxDiameter() const;

constexpr float_t& __cordl_internal_get_SkyboxDiameter() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_UberShaderAmbientDynamicLight() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_UberShaderAmbientDynamicLight() ;

constexpr bool const& __cordl_internal_get_UseUberShaderDynamicLighting() const;

constexpr bool& __cordl_internal_get_UseUberShaderDynamicLighting() ;

constexpr bool const& __cordl_internal_get_watchCustomModeOverride() const;

constexpr bool& __cordl_internal_get_watchCustomModeOverride() ;

constexpr float_t const& __cordl_internal_get_watchHoldDuration() const;

constexpr float_t& __cordl_internal_get_watchHoldDuration() ;

constexpr float_t const& __cordl_internal_get_watchHoldDuration_CustomMode() const;

constexpr float_t& __cordl_internal_get_watchHoldDuration_CustomMode() ;

constexpr float_t const& __cordl_internal_get_watchHoldDuration_Infection() const;

constexpr float_t& __cordl_internal_get_watchHoldDuration_Infection() ;

constexpr bool const& __cordl_internal_get_watchInfectionOverride() const;

constexpr bool& __cordl_internal_get_watchInfectionOverride() ;

constexpr bool const& __cordl_internal_get_watchShouldKickPlayer() const;

constexpr bool& __cordl_internal_get_watchShouldKickPlayer() ;

constexpr bool const& __cordl_internal_get_watchShouldKickPlayer_CustomMode() const;

constexpr bool& __cordl_internal_get_watchShouldKickPlayer_CustomMode() ;

constexpr bool const& __cordl_internal_get_watchShouldKickPlayer_Infection() const;

constexpr bool& __cordl_internal_get_watchShouldKickPlayer_Infection() ;

constexpr bool const& __cordl_internal_get_watchShouldTagPlayer() const;

constexpr bool& __cordl_internal_get_watchShouldTagPlayer() ;

constexpr bool const& __cordl_internal_get_watchShouldTagPlayer_CustomMode() const;

constexpr bool& __cordl_internal_get_watchShouldTagPlayer_CustomMode() ;

constexpr bool const& __cordl_internal_get_watchShouldTagPlayer_Infection() const;

constexpr bool& __cordl_internal_get_watchShouldTagPlayer_Infection() ;

constexpr void __cordl_internal_set_AddSkybox(bool  value) ;

constexpr void __cordl_internal_set_CustomGamemode(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set_CustomSkybox(::UnityW<::UnityEngine::Cubemap>  value) ;

constexpr void __cordl_internal_set_CustomSkyboxTint(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_DevMode(bool  value) ;

constexpr void __cordl_internal_set_DisableHoldingHandsAllGameModes(bool  value) ;

constexpr void __cordl_internal_set_DisableHoldingHandsCustomOnly(bool  value) ;

constexpr void __cordl_internal_set_ExportAllObjects(bool  value) ;

constexpr void __cordl_internal_set_IsInitialScene(bool  value) ;

constexpr void __cordl_internal_set_LightingExportType(::GT_CustomMapSupportRuntime::ExportLightingType  value) ;

constexpr void __cordl_internal_set_MaxPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_SkyboxDiameter(float_t  value) ;

constexpr void __cordl_internal_set_UberShaderAmbientDynamicLight(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_UseUberShaderDynamicLighting(bool  value) ;

constexpr void __cordl_internal_set_watchCustomModeOverride(bool  value) ;

constexpr void __cordl_internal_set_watchHoldDuration(float_t  value) ;

constexpr void __cordl_internal_set_watchHoldDuration_CustomMode(float_t  value) ;

constexpr void __cordl_internal_set_watchHoldDuration_Infection(float_t  value) ;

constexpr void __cordl_internal_set_watchInfectionOverride(bool  value) ;

constexpr void __cordl_internal_set_watchShouldKickPlayer(bool  value) ;

constexpr void __cordl_internal_set_watchShouldKickPlayer_CustomMode(bool  value) ;

constexpr void __cordl_internal_set_watchShouldKickPlayer_Infection(bool  value) ;

constexpr void __cordl_internal_set_watchShouldTagPlayer(bool  value) ;

constexpr void __cordl_internal_set_watchShouldTagPlayer_CustomMode(bool  value) ;

constexpr void __cordl_internal_set_watchShouldTagPlayer_Infection(bool  value) ;

/// @brief Method .ctor, addr 0x9cb731c, size 0x4c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapDescriptor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapDescriptor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapDescriptor(MapDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapDescriptor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapDescriptor(MapDescriptor const& ) = delete;

/// @brief Field MAX_DIAMETER offset 0xffffffff size 0x4
static constexpr float_t  MAX_DIAMETER{static_cast<float_t>(50000.0f)};

/// @brief Field MIN_DIAMETER offset 0xffffffff size 0x4
static constexpr float_t  MIN_DIAMETER{static_cast<float_t>(1000.0f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30910};

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field IsInitialScene, offset: 0x20, size: 0x1, def value: None
 bool  ___IsInitialScene;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field DisableHoldingHandsAllGameModes, offset: 0x21, size: 0x1, def value: None
 bool  ___DisableHoldingHandsAllGameModes;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field DisableHoldingHandsCustomOnly, offset: 0x22, size: 0x1, def value: None
 bool  ___DisableHoldingHandsCustomOnly;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchHoldDuration, offset: 0x24, size: 0x4, def value: None
 float_t  ___watchHoldDuration;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchShouldTagPlayer, offset: 0x28, size: 0x1, def value: None
 bool  ___watchShouldTagPlayer;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchShouldKickPlayer, offset: 0x29, size: 0x1, def value: None
 bool  ___watchShouldKickPlayer;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchInfectionOverride, offset: 0x2a, size: 0x1, def value: None
 bool  ___watchInfectionOverride;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchHoldDuration_Infection, offset: 0x2c, size: 0x4, def value: None
 float_t  ___watchHoldDuration_Infection;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchShouldTagPlayer_Infection, offset: 0x30, size: 0x1, def value: None
 bool  ___watchShouldTagPlayer_Infection;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchShouldKickPlayer_Infection, offset: 0x31, size: 0x1, def value: None
 bool  ___watchShouldKickPlayer_Infection;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchCustomModeOverride, offset: 0x32, size: 0x1, def value: None
 bool  ___watchCustomModeOverride;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchHoldDuration_CustomMode, offset: 0x34, size: 0x4, def value: None
 float_t  ___watchHoldDuration_CustomMode;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchShouldTagPlayer_CustomMode, offset: 0x38, size: 0x1, def value: None
 bool  ___watchShouldTagPlayer_CustomMode;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field watchShouldKickPlayer_CustomMode, offset: 0x39, size: 0x1, def value: None
 bool  ___watchShouldKickPlayer_CustomMode;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field UseUberShaderDynamicLighting, offset: 0x3a, size: 0x1, def value: None
 bool  ___UseUberShaderDynamicLighting;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field UberShaderAmbientDynamicLight, offset: 0x3c, size: 0x10, def value: None
 ::UnityEngine::Color  ___UberShaderAmbientDynamicLight;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field CustomGamemode, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ___CustomGamemode;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field DevMode, offset: 0x58, size: 0x1, def value: None
 bool  ___DevMode;

/// [Obsolete("Moved to Map Export Settings")]
/// @brief Field MaxPlayers, offset: 0x5c, size: 0x4, def value: None
 int32_t  ___MaxPlayers;

/// [Tooltip("If \"AddSkybox\" is enabled, a skybox will automatically be added to your scene prior to export.")]
/// @brief Field AddSkybox, offset: 0x60, size: 0x1, def value: None
 bool  ___AddSkybox;

/// [Range(1000, 50000)]
/// [Tooltip("Set the size of the skybox.")]
/// @brief Field SkyboxDiameter, offset: 0x64, size: 0x4, def value: None
 float_t  ___SkyboxDiameter;

/// [Tooltip("If \"CustomSkybox\" texture is valid, it will be used on the added skybox, otherwise the skybox will use the \"Bobbie\\Outer\" shader along with \"CustomSkyboxTint\".")]
/// @brief Field CustomSkybox, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Cubemap>  ___CustomSkybox;

/// [Tooltip("If \"CustomSkybox\" texture is set to None, this color will be used to Tint the skybox")]
/// @brief Field CustomSkyboxTint, offset: 0x70, size: 0x10, def value: None
 ::UnityEngine::Color  ___CustomSkyboxTint;

/// [Tooltip("How should lighting be baked/exported?\n 1. Default_Unity - this will bake lighting using Unity\'s built-in system\n 2. Alternative - this will not trigger a light bake and will NOT delete Lightmapping data before exporting (use this option if you use a 3rd party baker like Bakery)\n 3. Off - this will not bake lighting and will delete Lightmapping data before exporting")]
/// @brief Field LightingExportType, offset: 0x80, size: 0x4, def value: None
 ::GT_CustomMapSupportRuntime::ExportLightingType  ___LightingExportType;

/// [Tooltip("If \"ExportAllObjects\" is enabled, any objects that aren\'t a child object of your MapDescriptor will be automatically re-parented to the MapDescriptor GameObject prior to export.")]
/// @brief Field ExportAllObjects, offset: 0x84, size: 0x1, def value: None
 bool  ___ExportAllObjects;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___IsInitialScene) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___DisableHoldingHandsAllGameModes) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___DisableHoldingHandsCustomOnly) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchHoldDuration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchShouldTagPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchShouldKickPlayer) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchInfectionOverride) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchHoldDuration_Infection) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchShouldTagPlayer_Infection) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchShouldKickPlayer_Infection) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchCustomModeOverride) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchHoldDuration_CustomMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchShouldTagPlayer_CustomMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___watchShouldKickPlayer_CustomMode) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___UseUberShaderDynamicLighting) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___UberShaderAmbientDynamicLight) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___CustomGamemode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___DevMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___MaxPlayers) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___AddSkybox) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___SkyboxDiameter) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___CustomSkybox) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___CustomSkyboxTint) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___LightingExportType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapDescriptor, ___ExportAllObjects) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MapDescriptor) == 0x88, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
