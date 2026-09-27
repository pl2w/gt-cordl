#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/MapPackageInfo.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__MapPackageInfo_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__Descriptor_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__VirtualStumpReturnWatchProps_def.hpp"
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapPackageInfo._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GT_CustomMapSupportRuntime::MapPackageInfo::*)()>(&::GT_CustomMapSupportRuntime::MapPackageInfo::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cb7378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapPackageInfo*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GT_CustomMapSupportRuntime::MapPackageInfo.GetReturnToVStumpWatchProps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps (::GT_CustomMapSupportRuntime::MapPackageInfo::*)()>(&::GT_CustomMapSupportRuntime::MapPackageInfo::GetReturnToVStumpWatchProps)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cb7398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapPackageInfo*>(),
                        {"GetReturnToVStumpWatchProps", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_pcFileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pcFileName;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_pcFileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pcFileName;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_pcFileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pcFileName = value;
}
constexpr ::StringW& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_androidFileName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___androidFileName;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_androidFileName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___androidFileName;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_androidFileName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___androidFileName = value;
}
constexpr ::GT_CustomMapSupportRuntime::Descriptor*& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_descriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptor;
}
constexpr ::GT_CustomMapSupportRuntime::Descriptor* const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_descriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___descriptor;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_descriptor(::GT_CustomMapSupportRuntime::Descriptor*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___descriptor = value;
}
constexpr ::StringW& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_initialScene()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScene;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_initialScene() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScene;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_initialScene(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialScene = value;
}
constexpr ::ArrayW<::StringW>& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_initialScenes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScenes;
}
constexpr ::ArrayW<::StringW> const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_initialScenes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialScenes;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_initialScenes(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialScenes = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_customMapSupportVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapSupportVersion;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_customMapSupportVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customMapSupportVersion;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_customMapSupportVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customMapSupportVersion = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_maxPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayers;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_maxPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxPlayers;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_maxPlayers(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxPlayers = value;
}
constexpr ::ArrayW<int32_t>& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_availableGameModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableGameModes;
}
constexpr ::ArrayW<int32_t> const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_availableGameModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___availableGameModes;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_availableGameModes(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___availableGameModes = value;
}
constexpr int32_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_defaultGameMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGameMode;
}
constexpr int32_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_defaultGameMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___defaultGameMode;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_defaultGameMode(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___defaultGameMode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_disableHoldingHandsAllModes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableHoldingHandsAllModes;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_disableHoldingHandsAllModes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableHoldingHandsAllModes;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_disableHoldingHandsAllModes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableHoldingHandsAllModes = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_disableHoldingHandsCustomMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableHoldingHandsCustomMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_disableHoldingHandsCustomMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableHoldingHandsCustomMode;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_disableHoldingHandsCustomMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableHoldingHandsCustomMode = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchHoldDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchHoldDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchHoldDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchHoldDuration = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldTagPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldTagPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchShouldTagPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldTagPlayer = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldKickPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldKickPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchShouldKickPlayer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldKickPlayer = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchInfectionOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchInfectionOverride;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchInfectionOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchInfectionOverride;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchInfectionOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchInfectionOverride = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchHoldDuration_Infection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_Infection;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchHoldDuration_Infection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_Infection;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchHoldDuration_Infection(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchHoldDuration_Infection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldTagPlayer_Infection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_Infection;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldTagPlayer_Infection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_Infection;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchShouldTagPlayer_Infection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldTagPlayer_Infection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldKickPlayer_Infection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_Infection;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldKickPlayer_Infection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_Infection;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchShouldKickPlayer_Infection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldKickPlayer_Infection = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchCustomModeOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchCustomModeOverride;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchCustomModeOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchCustomModeOverride;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchCustomModeOverride(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchCustomModeOverride = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchHoldDuration_CustomMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_CustomMode;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchHoldDuration_CustomMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchHoldDuration_CustomMode;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchHoldDuration_CustomMode(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchHoldDuration_CustomMode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldTagPlayer_CustomMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_CustomMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldTagPlayer_CustomMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldTagPlayer_CustomMode;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchShouldTagPlayer_CustomMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldTagPlayer_CustomMode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldKickPlayer_CustomMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_CustomMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_watchShouldKickPlayer_CustomMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___watchShouldKickPlayer_CustomMode;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_watchShouldKickPlayer_CustomMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___watchShouldKickPlayer_CustomMode = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_useUberShaderDynamicLighting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useUberShaderDynamicLighting;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_useUberShaderDynamicLighting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useUberShaderDynamicLighting;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_useUberShaderDynamicLighting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useUberShaderDynamicLighting = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_R()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_R;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_R() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_R;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_uberShaderAmbientDynamicLight_R(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uberShaderAmbientDynamicLight_R = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_G()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_G;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_G() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_G;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_uberShaderAmbientDynamicLight_G(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uberShaderAmbientDynamicLight_G = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_B()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_B;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_B() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_B;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_uberShaderAmbientDynamicLight_B(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uberShaderAmbientDynamicLight_B = value;
}
constexpr float_t& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_A()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_A;
}
constexpr float_t const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_uberShaderAmbientDynamicLight_A() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___uberShaderAmbientDynamicLight_A;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_uberShaderAmbientDynamicLight_A(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___uberShaderAmbientDynamicLight_A = value;
}
constexpr ::StringW& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_customGamemodeScript()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customGamemodeScript;
}
constexpr ::StringW const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_customGamemodeScript() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customGamemodeScript;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_customGamemodeScript(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customGamemodeScript = value;
}
constexpr bool& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_devMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devMode;
}
constexpr bool const& GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_get_devMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___devMode;
}
constexpr void GT_CustomMapSupportRuntime::MapPackageInfo::__cordl_internal_set_devMode(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___devMode = value;
}
inline void GT_CustomMapSupportRuntime::MapPackageInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapPackageInfo*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps GT_CustomMapSupportRuntime::MapPackageInfo::GetReturnToVStumpWatchProps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GT_CustomMapSupportRuntime::MapPackageInfo*>(),
                        {"GetReturnToVStumpWatchProps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GT_CustomMapSupportRuntime::VirtualStumpReturnWatchProps>(this, ___internal_method);
}
/// @brief [JsonConstructor]
inline ::GT_CustomMapSupportRuntime::MapPackageInfo* GT_CustomMapSupportRuntime::MapPackageInfo::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GT_CustomMapSupportRuntime::MapPackageInfo*>());
}
// Ctor Parameters []
constexpr ::GT_CustomMapSupportRuntime::MapPackageInfo::MapPackageInfo()   {
}
