#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapPackageInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MapPackageInfo)
namespace GT_CustomMapSupportRuntime {
class Descriptor;
}
namespace GT_CustomMapSupportRuntime {
struct VirtualStumpReturnWatchProps;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class MapPackageInfo;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::MapPackageInfo*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::MapPackageInfo*, "GT_CustomMapSupportRuntime", "MapPackageInfo");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies System.Object
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.MapPackageInfo
class CORDL_TYPE MapPackageInfo : public ::System::Object {
public:
// Declarations
/// @brief Field androidFileName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_androidFileName, put=__cordl_internal_set_androidFileName)) ::StringW  androidFileName;

/// @brief Field availableGameModes, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableGameModes, put=__cordl_internal_set_availableGameModes)) ::ArrayW<int32_t>  availableGameModes;

/// @brief Field customGamemodeScript, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_customGamemodeScript, put=__cordl_internal_set_customGamemodeScript)) ::StringW  customGamemodeScript;

/// @brief Field customMapSupportVersion, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_customMapSupportVersion, put=__cordl_internal_set_customMapSupportVersion)) int32_t  customMapSupportVersion;

/// @brief Field defaultGameMode, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultGameMode, put=__cordl_internal_set_defaultGameMode)) int32_t  defaultGameMode;

/// @brief Field descriptor, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_descriptor, put=__cordl_internal_set_descriptor)) ::GT_CustomMapSupportRuntime::Descriptor*  descriptor;

/// @brief Field devMode, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_devMode, put=__cordl_internal_set_devMode)) bool  devMode;

/// @brief Field disableHoldingHandsAllModes, offset 0x4c, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableHoldingHandsAllModes, put=__cordl_internal_set_disableHoldingHandsAllModes)) bool  disableHoldingHandsAllModes;

/// @brief Field disableHoldingHandsCustomMode, offset 0x4d, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableHoldingHandsCustomMode, put=__cordl_internal_set_disableHoldingHandsCustomMode)) bool  disableHoldingHandsCustomMode;

/// @brief Field initialScene, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialScene, put=__cordl_internal_set_initialScene)) ::StringW  initialScene;

/// @brief Field initialScenes, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialScenes, put=__cordl_internal_set_initialScenes)) ::ArrayW<::StringW>  initialScenes;

/// @brief Field maxPlayers, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPlayers, put=__cordl_internal_set_maxPlayers)) int32_t  maxPlayers;

/// @brief Field pcFileName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pcFileName, put=__cordl_internal_set_pcFileName)) ::StringW  pcFileName;

/// @brief Field uberShaderAmbientDynamicLight_A, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_uberShaderAmbientDynamicLight_A, put=__cordl_internal_set_uberShaderAmbientDynamicLight_A)) float_t  uberShaderAmbientDynamicLight_A;

/// @brief Field uberShaderAmbientDynamicLight_B, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_uberShaderAmbientDynamicLight_B, put=__cordl_internal_set_uberShaderAmbientDynamicLight_B)) float_t  uberShaderAmbientDynamicLight_B;

/// @brief Field uberShaderAmbientDynamicLight_G, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_uberShaderAmbientDynamicLight_G, put=__cordl_internal_set_uberShaderAmbientDynamicLight_G)) float_t  uberShaderAmbientDynamicLight_G;

/// @brief Field uberShaderAmbientDynamicLight_R, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_uberShaderAmbientDynamicLight_R, put=__cordl_internal_set_uberShaderAmbientDynamicLight_R)) float_t  uberShaderAmbientDynamicLight_R;

/// @brief Field useUberShaderDynamicLighting, offset 0x66, size 0x1 
 __declspec(property(get=__cordl_internal_get_useUberShaderDynamicLighting, put=__cordl_internal_set_useUberShaderDynamicLighting)) bool  useUberShaderDynamicLighting;

/// @brief Field watchCustomModeOverride, offset 0x5e, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchCustomModeOverride, put=__cordl_internal_set_watchCustomModeOverride)) bool  watchCustomModeOverride;

/// @brief Field watchHoldDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchHoldDuration, put=__cordl_internal_set_watchHoldDuration)) float_t  watchHoldDuration;

/// @brief Field watchHoldDuration_CustomMode, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchHoldDuration_CustomMode, put=__cordl_internal_set_watchHoldDuration_CustomMode)) float_t  watchHoldDuration_CustomMode;

/// @brief Field watchHoldDuration_Infection, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_watchHoldDuration_Infection, put=__cordl_internal_set_watchHoldDuration_Infection)) float_t  watchHoldDuration_Infection;

/// @brief Field watchInfectionOverride, offset 0x56, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchInfectionOverride, put=__cordl_internal_set_watchInfectionOverride)) bool  watchInfectionOverride;

/// @brief Field watchShouldKickPlayer, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldKickPlayer, put=__cordl_internal_set_watchShouldKickPlayer)) bool  watchShouldKickPlayer;

/// @brief Field watchShouldKickPlayer_CustomMode, offset 0x65, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldKickPlayer_CustomMode, put=__cordl_internal_set_watchShouldKickPlayer_CustomMode)) bool  watchShouldKickPlayer_CustomMode;

/// @brief Field watchShouldKickPlayer_Infection, offset 0x5d, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldKickPlayer_Infection, put=__cordl_internal_set_watchShouldKickPlayer_Infection)) bool  watchShouldKickPlayer_Infection;

/// @brief Field watchShouldTagPlayer, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldTagPlayer, put=__cordl_internal_set_watchShouldTagPlayer)) bool  watchShouldTagPlayer;

/// @brief Field watchShouldTagPlayer_CustomMode, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldTagPlayer_CustomMode, put=__cordl_internal_set_watchShouldTagPlayer_CustomMode)) bool  watchShouldTagPlayer_CustomMode;

/// @brief Field watchShouldTagPlayer_Infection, offset 0x5c, size 0x1 
 __declspec(property(get=__cordl_internal_get_watchShouldTagPlayer_Infection, put=__cordl_internal_set_watchShouldTagPlayer_Infection)) bool  watchShouldTagPlayer_Infection;

/// @brief Method GetReturnToVStumpWatchProps, addr 0x9cb7398, size 0x50, virtual false, abstract: false, final false
inline ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps GetReturnToVStumpWatchProps() ;

/// @brief [JsonConstructor]
static inline ::GT_CustomMapSupportRuntime::MapPackageInfo* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_androidFileName() const;

constexpr ::StringW& __cordl_internal_get_androidFileName() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_availableGameModes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_availableGameModes() ;

constexpr ::StringW const& __cordl_internal_get_customGamemodeScript() const;

constexpr ::StringW& __cordl_internal_get_customGamemodeScript() ;

constexpr int32_t const& __cordl_internal_get_customMapSupportVersion() const;

constexpr int32_t& __cordl_internal_get_customMapSupportVersion() ;

constexpr int32_t const& __cordl_internal_get_defaultGameMode() const;

constexpr int32_t& __cordl_internal_get_defaultGameMode() ;

constexpr ::GT_CustomMapSupportRuntime::Descriptor* const& __cordl_internal_get_descriptor() const;

constexpr ::GT_CustomMapSupportRuntime::Descriptor*& __cordl_internal_get_descriptor() ;

constexpr bool const& __cordl_internal_get_devMode() const;

constexpr bool& __cordl_internal_get_devMode() ;

constexpr bool const& __cordl_internal_get_disableHoldingHandsAllModes() const;

constexpr bool& __cordl_internal_get_disableHoldingHandsAllModes() ;

constexpr bool const& __cordl_internal_get_disableHoldingHandsCustomMode() const;

constexpr bool& __cordl_internal_get_disableHoldingHandsCustomMode() ;

constexpr ::StringW const& __cordl_internal_get_initialScene() const;

constexpr ::StringW& __cordl_internal_get_initialScene() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_initialScenes() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_initialScenes() ;

constexpr int32_t const& __cordl_internal_get_maxPlayers() const;

constexpr int32_t& __cordl_internal_get_maxPlayers() ;

constexpr ::StringW const& __cordl_internal_get_pcFileName() const;

constexpr ::StringW& __cordl_internal_get_pcFileName() ;

constexpr float_t const& __cordl_internal_get_uberShaderAmbientDynamicLight_A() const;

constexpr float_t& __cordl_internal_get_uberShaderAmbientDynamicLight_A() ;

constexpr float_t const& __cordl_internal_get_uberShaderAmbientDynamicLight_B() const;

constexpr float_t& __cordl_internal_get_uberShaderAmbientDynamicLight_B() ;

constexpr float_t const& __cordl_internal_get_uberShaderAmbientDynamicLight_G() const;

constexpr float_t& __cordl_internal_get_uberShaderAmbientDynamicLight_G() ;

constexpr float_t const& __cordl_internal_get_uberShaderAmbientDynamicLight_R() const;

constexpr float_t& __cordl_internal_get_uberShaderAmbientDynamicLight_R() ;

constexpr bool const& __cordl_internal_get_useUberShaderDynamicLighting() const;

constexpr bool& __cordl_internal_get_useUberShaderDynamicLighting() ;

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

constexpr void __cordl_internal_set_androidFileName(::StringW  value) ;

constexpr void __cordl_internal_set_availableGameModes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_customGamemodeScript(::StringW  value) ;

constexpr void __cordl_internal_set_customMapSupportVersion(int32_t  value) ;

constexpr void __cordl_internal_set_defaultGameMode(int32_t  value) ;

constexpr void __cordl_internal_set_descriptor(::GT_CustomMapSupportRuntime::Descriptor*  value) ;

constexpr void __cordl_internal_set_devMode(bool  value) ;

constexpr void __cordl_internal_set_disableHoldingHandsAllModes(bool  value) ;

constexpr void __cordl_internal_set_disableHoldingHandsCustomMode(bool  value) ;

constexpr void __cordl_internal_set_initialScene(::StringW  value) ;

constexpr void __cordl_internal_set_initialScenes(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_maxPlayers(int32_t  value) ;

constexpr void __cordl_internal_set_pcFileName(::StringW  value) ;

constexpr void __cordl_internal_set_uberShaderAmbientDynamicLight_A(float_t  value) ;

constexpr void __cordl_internal_set_uberShaderAmbientDynamicLight_B(float_t  value) ;

constexpr void __cordl_internal_set_uberShaderAmbientDynamicLight_G(float_t  value) ;

constexpr void __cordl_internal_set_uberShaderAmbientDynamicLight_R(float_t  value) ;

constexpr void __cordl_internal_set_useUberShaderDynamicLighting(bool  value) ;

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

/// [JsonConstructor]
/// @brief Method .ctor, addr 0x9cb7378, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MapPackageInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MapPackageInfo", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MapPackageInfo(MapPackageInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MapPackageInfo", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MapPackageInfo(MapPackageInfo const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30913};

/// [JsonProperty(PropertyName = "pcFileName")]
/// @brief Field pcFileName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___pcFileName;

/// [JsonProperty(PropertyName = "androidFileName")]
/// @brief Field androidFileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___androidFileName;

/// [JsonProperty(PropertyName = "descriptor")]
/// @brief Field descriptor, offset: 0x20, size: 0x8, def value: None
 ::GT_CustomMapSupportRuntime::Descriptor*  ___descriptor;

/// [JsonProperty(PropertyName = "initialScene")]
/// @brief Field initialScene, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___initialScene;

/// [Nullable(new[] { 2, 1 })]
/// [JsonProperty(PropertyName = "initialScenes")]
/// @brief Field initialScenes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___initialScenes;

/// [JsonProperty(PropertyName = "customMapSupportVersion")]
/// @brief Field customMapSupportVersion, offset: 0x38, size: 0x4, def value: None
 int32_t  ___customMapSupportVersion;

/// [JsonProperty(PropertyName = "maxPlayers")]
/// @brief Field maxPlayers, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___maxPlayers;

/// [JsonProperty(PropertyName = "availableGameModes")]
/// @brief Field availableGameModes, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___availableGameModes;

/// [JsonProperty(PropertyName = "defaultGameMode")]
/// @brief Field defaultGameMode, offset: 0x48, size: 0x4, def value: None
 int32_t  ___defaultGameMode;

/// [JsonProperty(PropertyName = "disableHoldingHandsAllModes")]
/// @brief Field disableHoldingHandsAllModes, offset: 0x4c, size: 0x1, def value: None
 bool  ___disableHoldingHandsAllModes;

/// [JsonProperty(PropertyName = "disableHoldingHandsCustomMode")]
/// @brief Field disableHoldingHandsCustomMode, offset: 0x4d, size: 0x1, def value: None
 bool  ___disableHoldingHandsCustomMode;

/// [JsonProperty(PropertyName = "watchHoldDuration")]
/// @brief Field watchHoldDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ___watchHoldDuration;

/// [JsonProperty(PropertyName = "watchShouldTagPlayer")]
/// @brief Field watchShouldTagPlayer, offset: 0x54, size: 0x1, def value: None
 bool  ___watchShouldTagPlayer;

/// [JsonProperty(PropertyName = "watchShouldKickPlayer")]
/// @brief Field watchShouldKickPlayer, offset: 0x55, size: 0x1, def value: None
 bool  ___watchShouldKickPlayer;

/// [JsonProperty(PropertyName = "watchInfectionOverride")]
/// @brief Field watchInfectionOverride, offset: 0x56, size: 0x1, def value: None
 bool  ___watchInfectionOverride;

/// [JsonProperty(PropertyName = "watchHoldDuration_Infection")]
/// @brief Field watchHoldDuration_Infection, offset: 0x58, size: 0x4, def value: None
 float_t  ___watchHoldDuration_Infection;

/// [JsonProperty(PropertyName = "watchShouldTagPlayer_Infection")]
/// @brief Field watchShouldTagPlayer_Infection, offset: 0x5c, size: 0x1, def value: None
 bool  ___watchShouldTagPlayer_Infection;

/// [JsonProperty(PropertyName = "watchShouldKickPlayer_Infection")]
/// @brief Field watchShouldKickPlayer_Infection, offset: 0x5d, size: 0x1, def value: None
 bool  ___watchShouldKickPlayer_Infection;

/// [JsonProperty(PropertyName = "watchCustomModeOverride")]
/// @brief Field watchCustomModeOverride, offset: 0x5e, size: 0x1, def value: None
 bool  ___watchCustomModeOverride;

/// [JsonProperty(PropertyName = "watchHoldDuration_CustomMode")]
/// @brief Field watchHoldDuration_CustomMode, offset: 0x60, size: 0x4, def value: None
 float_t  ___watchHoldDuration_CustomMode;

/// [JsonProperty(PropertyName = "watchShouldTagPlayer_CustomMode")]
/// @brief Field watchShouldTagPlayer_CustomMode, offset: 0x64, size: 0x1, def value: None
 bool  ___watchShouldTagPlayer_CustomMode;

/// [JsonProperty(PropertyName = "watchShouldKickPlayer_CustomMode")]
/// @brief Field watchShouldKickPlayer_CustomMode, offset: 0x65, size: 0x1, def value: None
 bool  ___watchShouldKickPlayer_CustomMode;

/// [JsonProperty(PropertyName = "useUberShaderDynamicLighting")]
/// @brief Field useUberShaderDynamicLighting, offset: 0x66, size: 0x1, def value: None
 bool  ___useUberShaderDynamicLighting;

/// [JsonProperty(PropertyName = "uberShaderAmbientDynamicLight_R")]
/// @brief Field uberShaderAmbientDynamicLight_R, offset: 0x68, size: 0x4, def value: None
 float_t  ___uberShaderAmbientDynamicLight_R;

/// [JsonProperty(PropertyName = "uberShaderAmbientDynamicLight_G")]
/// @brief Field uberShaderAmbientDynamicLight_G, offset: 0x6c, size: 0x4, def value: None
 float_t  ___uberShaderAmbientDynamicLight_G;

/// [JsonProperty(PropertyName = "uberShaderAmbientDynamicLight_B")]
/// @brief Field uberShaderAmbientDynamicLight_B, offset: 0x70, size: 0x4, def value: None
 float_t  ___uberShaderAmbientDynamicLight_B;

/// [JsonProperty(PropertyName = "uberShaderAmbientDynamicLight_A")]
/// @brief Field uberShaderAmbientDynamicLight_A, offset: 0x74, size: 0x4, def value: None
 float_t  ___uberShaderAmbientDynamicLight_A;

/// [JsonProperty(PropertyName = "customGamemodeScript")]
/// @brief Field customGamemodeScript, offset: 0x78, size: 0x8, def value: None
 ::StringW  ___customGamemodeScript;

/// [JsonProperty(PropertyName = "luauDevMode")]
/// @brief Field devMode, offset: 0x80, size: 0x1, def value: None
 bool  ___devMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___pcFileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___androidFileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___descriptor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___initialScene) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___initialScenes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___customMapSupportVersion) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___maxPlayers) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___availableGameModes) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___defaultGameMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___disableHoldingHandsAllModes) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___disableHoldingHandsCustomMode) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchHoldDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchShouldTagPlayer) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchShouldKickPlayer) == 0x55, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchInfectionOverride) == 0x56, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchHoldDuration_Infection) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchShouldTagPlayer_Infection) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchShouldKickPlayer_Infection) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchCustomModeOverride) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchHoldDuration_CustomMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchShouldTagPlayer_CustomMode) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___watchShouldKickPlayer_CustomMode) == 0x65, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___useUberShaderDynamicLighting) == 0x66, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___uberShaderAmbientDynamicLight_R) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___uberShaderAmbientDynamicLight_G) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___uberShaderAmbientDynamicLight_B) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___uberShaderAmbientDynamicLight_A) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___customGamemodeScript) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::MapPackageInfo, ___devMode) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::MapPackageInfo) == 0x88, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
