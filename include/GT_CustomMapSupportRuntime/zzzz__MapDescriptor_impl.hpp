#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapDescriptor.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__ExportLightingType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapDescriptor_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__VirtualStumpReturnWatchProps_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapDescriptor.GetReturnToVStumpWatchProps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps (::GT_CustomMapSupportRuntime::MapDescriptor::*)()>(&::GT_CustomMapSupportRuntime::MapDescriptor::GetReturnToVStumpWatchProps)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cb72cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapDescriptor*>(),
                        {"GetReturnToVStumpWatchProps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapDescriptor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapDescriptor::*)()>(&::GT_CustomMapSupportRuntime::MapDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9cb731c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapDescriptor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_IsInitialScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsInitialScene;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_IsInitialScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IsInitialScene;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_IsInitialScene(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IsInitialScene = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_DisableHoldingHandsAllGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHoldingHandsAllGameModes;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_DisableHoldingHandsAllGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHoldingHandsAllGameModes;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_DisableHoldingHandsAllGameModes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableHoldingHandsAllGameModes = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_DisableHoldingHandsCustomOnly()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHoldingHandsCustomOnly;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_DisableHoldingHandsCustomOnly() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DisableHoldingHandsCustomOnly;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_DisableHoldingHandsCustomOnly(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DisableHoldingHandsCustomOnly = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchHoldDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchHoldDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchHoldDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchHoldDuration = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldTagPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldTagPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchShouldTagPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldTagPlayer = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldKickPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldKickPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchShouldKickPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldKickPlayer = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchInfectionOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchInfectionOverride;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchInfectionOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchInfectionOverride;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchInfectionOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchInfectionOverride = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchHoldDuration_Infection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_Infection;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchHoldDuration_Infection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_Infection;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchHoldDuration_Infection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchHoldDuration_Infection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldTagPlayer_Infection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_Infection;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldTagPlayer_Infection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_Infection;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchShouldTagPlayer_Infection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldTagPlayer_Infection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldKickPlayer_Infection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_Infection;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldKickPlayer_Infection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_Infection;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchShouldKickPlayer_Infection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldKickPlayer_Infection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchCustomModeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchCustomModeOverride;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchCustomModeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchCustomModeOverride;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchCustomModeOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchCustomModeOverride = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchHoldDuration_CustomMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_CustomMode;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchHoldDuration_CustomMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_CustomMode;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchHoldDuration_CustomMode(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchHoldDuration_CustomMode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldTagPlayer_CustomMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_CustomMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldTagPlayer_CustomMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_CustomMode;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchShouldTagPlayer_CustomMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldTagPlayer_CustomMode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldKickPlayer_CustomMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_CustomMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_watchShouldKickPlayer_CustomMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_CustomMode;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_watchShouldKickPlayer_CustomMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldKickPlayer_CustomMode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_UseUberShaderDynamicLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseUberShaderDynamicLighting;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_UseUberShaderDynamicLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UseUberShaderDynamicLighting;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_UseUberShaderDynamicLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UseUberShaderDynamicLighting = value;
}
constexpr ::UnityEngine::Color& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_UberShaderAmbientDynamicLight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UberShaderAmbientDynamicLight;
}
constexpr ::UnityEngine::Color const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_UberShaderAmbientDynamicLight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UberShaderAmbientDynamicLight;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_UberShaderAmbientDynamicLight(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UberShaderAmbientDynamicLight = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_CustomGamemode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomGamemode;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_CustomGamemode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomGamemode;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_CustomGamemode(::UnityW<::UnityEngine::TextAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomGamemode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_DevMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DevMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_DevMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DevMode;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_DevMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DevMode = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_MaxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_MaxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxPlayers;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_MaxPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxPlayers = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_AddSkybox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddSkybox;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_AddSkybox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AddSkybox;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_AddSkybox(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AddSkybox = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_SkyboxDiameter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkyboxDiameter;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_SkyboxDiameter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkyboxDiameter;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_SkyboxDiameter(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkyboxDiameter = value;
}
constexpr ::UnityW<::UnityEngine::Cubemap>& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_CustomSkybox()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomSkybox;
}
constexpr ::UnityW<::UnityEngine::Cubemap> const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_CustomSkybox() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomSkybox;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_CustomSkybox(::UnityW<::UnityEngine::Cubemap>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomSkybox = value;
}
constexpr ::UnityEngine::Color& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_CustomSkyboxTint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomSkyboxTint;
}
constexpr ::UnityEngine::Color const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_CustomSkyboxTint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomSkyboxTint;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_CustomSkyboxTint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomSkyboxTint = value;
}
constexpr ::GT_CustomMapSupportRuntime::ExportLightingType& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_LightingExportType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LightingExportType;
}
constexpr ::GT_CustomMapSupportRuntime::ExportLightingType const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_LightingExportType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LightingExportType;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_LightingExportType(::GT_CustomMapSupportRuntime::ExportLightingType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LightingExportType = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_ExportAllObjects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExportAllObjects;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_get_ExportAllObjects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ExportAllObjects;
}
constexpr void GT_CustomMapSupportRuntime::MapDescriptor::__cordl_internal_set_ExportAllObjects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ExportAllObjects = value;
}
inline ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps GT_CustomMapSupportRuntime::MapDescriptor::GetReturnToVStumpWatchProps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapDescriptor*>(),
                        {"GetReturnToVStumpWatchProps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps>(this, ___internal_method);
}
inline void GT_CustomMapSupportRuntime::MapDescriptor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapDescriptor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::MapDescriptor* GT_CustomMapSupportRuntime::MapDescriptor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MapDescriptor*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MapDescriptor::MapDescriptor()   {
}
