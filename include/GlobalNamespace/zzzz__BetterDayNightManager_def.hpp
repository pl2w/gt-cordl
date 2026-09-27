#pragma once
// IWYU pragma private; include "GlobalNamespace/BetterDayNightManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AddCollidersToParticleSystemTriggers_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_RPCDataCache_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_Season_def.hpp"
#include "GlobalNamespace/zzzz__BetterDayNightManager_WeatherType_def.hpp"
#include "GlobalNamespace/zzzz__ShaderHashId_def.hpp"
#include "GlobalNamespace/zzzz__TimeSettings_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BetterDayNightManager)
namespace GlobalNamespace {
struct BetterDayNightManager_RPCDataCache;
}
namespace GlobalNamespace {
struct BetterDayNightManager_RPC;
}
namespace GlobalNamespace {
class BetterDayNightManager_ScheduledEvent;
}
namespace GlobalNamespace {
struct BetterDayNightManager_Season;
}
namespace GlobalNamespace {
struct BetterDayNightManager_WeatherType;
}
namespace GlobalNamespace {
class BetterDayNightManager__AnimateLightFlashCo_d__122;
}
namespace GlobalNamespace {
class BetterDayNightManager__InitialUpdate_d__107;
}
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
template<typename Titem,typename Tenum>
class CallLimitersList_2;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class ITimeOfDaySystem;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class PerSceneRenderData;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonView;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Action;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Random;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class BetterDayNightManager;
}
namespace GlobalNamespace {
class BetterDayNightManager_ScheduledEvent;
}
namespace GlobalNamespace {
class BetterDayNightManager__AnimateLightFlashCo_d__122;
}
namespace GlobalNamespace {
class BetterDayNightManager__InitialUpdate_d__107;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BetterDayNightManager*);
MARK_REF_T(::GlobalNamespace::BetterDayNightManager_ScheduledEvent*);
MARK_REF_T(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*);
MARK_REF_T(::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterDayNightManager*, "", "BetterDayNightManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterDayNightManager_ScheduledEvent*, "", "BetterDayNightManager/ScheduledEvent");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122*, "", "BetterDayNightManager/<AnimateLightFlashCo>d__122");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107*, "", "BetterDayNightManager/<InitialUpdate>d__107");
// Dependencies AddCollidersToParticleSystemTriggers, BetterDayNightManager::RPCDataCache, BetterDayNightManager::Season, BetterDayNightManager::WeatherType, ShaderHashId, TimeSettings, UnityEngine.Material, UnityEngine.MonoBehaviour, UnityEngine.Texture2D
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterDayNightManager
class CORDL_TYPE BetterDayNightManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RPC = ::GlobalNamespace::BetterDayNightManager_RPC;

using RPCDataCache = ::GlobalNamespace::BetterDayNightManager_RPCDataCache;

using ScheduledEvent = ::GlobalNamespace::BetterDayNightManager_ScheduledEvent;

using Season = ::GlobalNamespace::BetterDayNightManager_Season;

using WeatherType = ::GlobalNamespace::BetterDayNightManager_WeatherType;

using _AnimateLightFlashCo_d__122 = ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122;

using _InitialUpdate_d__107 = ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107;

 __declspec(property(get=ITimeOfDaySystem_get_currentTimeInSeconds)) double_t  ITimeOfDaySystem_currentTimeInSeconds;

 __declspec(property(get=ITimeOfDaySystem_get_totalTimeInSeconds)) double_t  ITimeOfDaySystem_totalTimeInSeconds;

 __declspec(property(get=get_NormalizedTimeOfDay)) float_t  NormalizedTimeOfDay;

/// @brief Field _GT_DayCycleBrightnessOption1_Id, offset 0x1f0, size 0x10 
 __declspec(property(get=__cordl_internal_get__GT_DayCycleBrightnessOption1_Id, put=__cordl_internal_set__GT_DayCycleBrightnessOption1_Id)) ::GlobalNamespace::ShaderHashId  _GT_DayCycleBrightnessOption1_Id;

/// @brief Field _GT_DayCycleBrightnessOption2_Id, offset 0x200, size 0x10 
 __declspec(property(get=__cordl_internal_get__GT_DayCycleBrightnessOption2_Id, put=__cordl_internal_set__GT_DayCycleBrightnessOption2_Id)) ::GlobalNamespace::ShaderHashId  _GT_DayCycleBrightnessOption2_Id;

/// @brief Field _GT_DayCycleTimeProgress, offset 0x1e0, size 0x10 
 __declspec(property(get=__cordl_internal_get__GT_DayCycleTimeProgress, put=__cordl_internal_set__GT_DayCycleTimeProgress)) ::GlobalNamespace::ShaderHashId  _GT_DayCycleTimeProgress;

/// @brief Field _GlobalDayNightLerpValue, offset 0x210, size 0x10 
 __declspec(property(get=__cordl_internal_get__GlobalDayNightLerpValue, put=__cordl_internal_set__GlobalDayNightLerpValue)) ::GlobalNamespace::ShaderHashId  _GlobalDayNightLerpValue;

/// @brief Field _GlobalDayNightSky2Tex1, offset 0x240, size 0x10 
 __declspec(property(get=__cordl_internal_get__GlobalDayNightSky2Tex1, put=__cordl_internal_set__GlobalDayNightSky2Tex1)) ::GlobalNamespace::ShaderHashId  _GlobalDayNightSky2Tex1;

/// @brief Field _GlobalDayNightSky2Tex2, offset 0x250, size 0x10 
 __declspec(property(get=__cordl_internal_get__GlobalDayNightSky2Tex2, put=__cordl_internal_set__GlobalDayNightSky2Tex2)) ::GlobalNamespace::ShaderHashId  _GlobalDayNightSky2Tex2;

/// @brief Field _GlobalDayNightSky3Tex1, offset 0x260, size 0x10 
 __declspec(property(get=__cordl_internal_get__GlobalDayNightSky3Tex1, put=__cordl_internal_set__GlobalDayNightSky3Tex1)) ::GlobalNamespace::ShaderHashId  _GlobalDayNightSky3Tex1;

/// @brief Field _GlobalDayNightSky3Tex2, offset 0x270, size 0x10 
 __declspec(property(get=__cordl_internal_get__GlobalDayNightSky3Tex2, put=__cordl_internal_set__GlobalDayNightSky3Tex2)) ::GlobalNamespace::ShaderHashId  _GlobalDayNightSky3Tex2;

/// @brief Field _GlobalDayNightSkyTex1, offset 0x220, size 0x10 
 __declspec(property(get=__cordl_internal_get__GlobalDayNightSkyTex1, put=__cordl_internal_set__GlobalDayNightSkyTex1)) ::GlobalNamespace::ShaderHashId  _GlobalDayNightSkyTex1;

/// @brief Field _GlobalDayNightSkyTex2, offset 0x230, size 0x10 
 __declspec(property(get=__cordl_internal_get__GlobalDayNightSkyTex2, put=__cordl_internal_set__GlobalDayNightSkyTex2)) ::GlobalNamespace::ShaderHashId  _GlobalDayNightSkyTex2;

/// @brief Field <currentTimeOfDay>k__BackingField, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__currentTimeOfDay_k__BackingField, put=__cordl_internal_set__currentTimeOfDay_k__BackingField)) ::StringW  _currentTimeOfDay_k__BackingField;

/// @brief Field allScenesRenderData, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allScenesRenderData, put=setStaticF_allScenesRenderData)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  allScenesRenderData;

/// @brief Field animatingLightFlash, offset 0x288, size 0x8 
 __declspec(property(get=__cordl_internal_get_animatingLightFlash, put=__cordl_internal_set_animatingLightFlash)) ::UnityEngine::Coroutine*  animatingLightFlash;

/// @brief Field baseSeconds, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseSeconds, put=__cordl_internal_set_baseSeconds)) double_t  baseSeconds;

/// @brief Field beachDayNightSkyboxTextures, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_beachDayNightSkyboxTextures, put=__cordl_internal_set_beachDayNightSkyboxTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  beachDayNightSkyboxTextures;

/// @brief Field cloudsDayNightSkyboxTextures, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_cloudsDayNightSkyboxTextures, put=__cordl_internal_set_cloudsDayNightSkyboxTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  cloudsDayNightSkyboxTextures;

/// @brief Field collidersToAddToWeatherSystems, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_collidersToAddToWeatherSystems, put=__cordl_internal_set_collidersToAddToWeatherSystems)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  collidersToAddToWeatherSystems;

/// @brief Field colorFrom, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorFrom, put=__cordl_internal_set_colorFrom)) float_t  colorFrom;

/// @brief Field colorFromDarker, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorFromDarker, put=__cordl_internal_set_colorFromDarker)) float_t  colorFromDarker;

/// @brief Field colorTo, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorTo, put=__cordl_internal_set_colorTo)) float_t  colorTo;

/// @brief Field colorToDarker, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_colorToDarker, put=__cordl_internal_set_colorToDarker)) float_t  colorToDarker;

/// @brief Field computerInit, offset 0x120, size 0x1 
 __declspec(property(get=__cordl_internal_get_computerInit, put=__cordl_internal_set_computerInit)) bool  computerInit;

/// @brief Field currentIndexSeconds, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentIndexSeconds, put=__cordl_internal_set_currentIndexSeconds)) double_t  currentIndexSeconds;

/// @brief Field currentLerp, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentLerp, put=__cordl_internal_set_currentLerp)) float_t  currentLerp;

/// @brief Field currentSeason, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSeason, put=__cordl_internal_set_currentSeason)) ::GlobalNamespace::BetterDayNightManager_Season  currentSeason;

/// @brief Field currentSetting, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSetting, put=__cordl_internal_set_currentSetting)) ::GlobalNamespace::TimeSettings  currentSetting;

/// @brief Field currentTime, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentTime, put=__cordl_internal_set_currentTime)) double_t  currentTime;

/// @brief Field currentTimeIndex, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentTimeIndex, put=__cordl_internal_set_currentTimeIndex)) int32_t  currentTimeIndex;

 __declspec(property(get=get_currentTimeOfDay, put=set_currentTimeOfDay)) ::StringW  currentTimeOfDay;

/// @brief Field currentTimestep, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentTimestep, put=__cordl_internal_set_currentTimestep)) float_t  currentTimestep;

/// @brief Field currentWeatherCycle, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentWeatherCycle, put=__cordl_internal_set_currentWeatherCycle)) int32_t  currentWeatherCycle;

/// @brief Field currentWeatherIndex, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentWeatherIndex, put=__cordl_internal_set_currentWeatherIndex)) int32_t  currentWeatherIndex;

/// @brief Field dayNightLightmapNames, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightLightmapNames, put=__cordl_internal_set_dayNightLightmapNames)) ::ArrayW<::StringW>  dayNightLightmapNames;

/// @brief Field dayNightSkyboxTextures, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightSkyboxTextures, put=__cordl_internal_set_dayNightSkyboxTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  dayNightSkyboxTextures;

/// @brief Field dayNightSupportedMaterials, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightSupportedMaterials, put=__cordl_internal_set_dayNightSupportedMaterials)) ::ArrayW<::UnityW<::UnityEngine::Material>>  dayNightSupportedMaterials;

/// @brief Field dayNightSupportedMaterialsCutout, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightSupportedMaterialsCutout, put=__cordl_internal_set_dayNightSupportedMaterialsCutout)) ::ArrayW<::UnityW<::UnityEngine::Material>>  dayNightSupportedMaterialsCutout;

/// @brief Field dayNightWeatherLightmapNames, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightWeatherLightmapNames, put=__cordl_internal_set_dayNightWeatherLightmapNames)) ::ArrayW<::StringW>  dayNightWeatherLightmapNames;

/// @brief Field dayNightWeatherSkyboxTextures, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightWeatherSkyboxTextures, put=__cordl_internal_set_dayNightWeatherSkyboxTextures)) ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  dayNightWeatherSkyboxTextures;

/// @brief Field fromSky, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_fromSky, put=__cordl_internal_set_fromSky)) ::UnityW<::UnityEngine::Texture2D>  fromSky;

/// @brief Field fromSky2, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_fromSky2, put=__cordl_internal_set_fromSky2)) ::UnityW<::UnityEngine::Texture2D>  fromSky2;

/// @brief Field fromSky3, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_fromSky3, put=__cordl_internal_set_fromSky3)) ::UnityW<::UnityEngine::Texture2D>  fromSky3;

/// @brief Field fromWeatherIndex, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fromWeatherIndex, put=__cordl_internal_set_fromWeatherIndex)) int32_t  fromWeatherIndex;

/// @brief Field gameEpochDay, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEpochDay, put=__cordl_internal_set_gameEpochDay)) int64_t  gameEpochDay;

/// @brief Field gorillaUnlit, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaUnlit, put=__cordl_internal_set_gorillaUnlit)) ::UnityW<::UnityEngine::Shader>  gorillaUnlit;

/// @brief Field gorillaUnlitCutout, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaUnlitCutout, put=__cordl_internal_set_gorillaUnlitCutout)) ::UnityW<::UnityEngine::Shader>  gorillaUnlitCutout;

/// @brief Field initialDayCycles, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialDayCycles, put=__cordl_internal_set_initialDayCycles)) int64_t  initialDayCycles;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  instance;

/// @brief Field lastIndex, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastIndex, put=__cordl_internal_set_lastIndex)) int32_t  lastIndex;

/// @brief Field lastSentTimeIndex, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastSentTimeIndex, put=__cordl_internal_set_lastSentTimeIndex)) int32_t  lastSentTimeIndex;

/// @brief Field lastTime, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTime, put=__cordl_internal_set_lastTime)) float_t  lastTime;

/// @brief Field lastTimeChecked, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTimeChecked, put=__cordl_internal_set_lastTimeChecked)) float_t  lastTimeChecked;

/// @brief Field m_fixedDataCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_fixedDataCache, put=__cordl_internal_set_m_fixedDataCache)) ::GlobalNamespace::BetterDayNightManager_RPCDataCache  m_fixedDataCache;

/// @brief Field m_setTimeDataCache, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_setTimeDataCache, put=__cordl_internal_set_m_setTimeDataCache)) ::GlobalNamespace::BetterDayNightManager_RPCDataCache  m_setTimeDataCache;

/// @brief Field maxRainDuration, offset 0x14c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRainDuration, put=__cordl_internal_set_maxRainDuration)) int32_t  maxRainDuration;

/// @brief Field mySeed, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_mySeed, put=__cordl_internal_set_mySeed)) int32_t  mySeed;

/// @brief Field overrideIndex, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_overrideIndex, put=__cordl_internal_set_overrideIndex)) int32_t  overrideIndex;

/// @brief Field overrideWeather, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_overrideWeather, put=__cordl_internal_set_overrideWeather)) bool  overrideWeather;

/// @brief Field overrideWeatherType, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_overrideWeatherType, put=__cordl_internal_set_overrideWeatherType)) ::GlobalNamespace::BetterDayNightManager_WeatherType  overrideWeatherType;

/// @brief Field photonView, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_photonView, put=__cordl_internal_set_photonView)) ::UnityW<::Photon::Pun::PhotonView>  photonView;

/// @brief Field rainChance, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_rainChance, put=__cordl_internal_set_rainChance)) float_t  rainChance;

/// @brief Field rainDuration, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_rainDuration, put=__cordl_internal_set_rainDuration)) int32_t  rainDuration;

/// @brief Field randomNumberGenerator, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_randomNumberGenerator, put=__cordl_internal_set_randomNumberGenerator)) ::System::Random*  randomNumberGenerator;

/// @brief Field remainingSeconds, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_remainingSeconds, put=__cordl_internal_set_remainingSeconds)) float_t  remainingSeconds;

/// @brief Field rpcSpamChecks, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rpcSpamChecks, put=__cordl_internal_set_rpcSpamChecks)) ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>*  rpcSpamChecks;

/// @brief Field scheduledEvents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scheduledEvents, put=setStaticF_scheduledEvents)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>*  scheduledEvents;

/// @brief Field shouldRepopulate, offset 0x280, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldRepopulate, put=__cordl_internal_set_shouldRepopulate)) bool  shouldRepopulate;

/// @brief Field standard, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_standard, put=__cordl_internal_set_standard)) ::UnityW<::UnityEngine::Shader>  standard;

/// @brief Field standardCutout, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_standardCutout, put=__cordl_internal_set_standardCutout)) ::UnityW<::UnityEngine::Shader>  standardCutout;

/// @brief Field standardUnlitColor, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_standardUnlitColor, put=__cordl_internal_set_standardUnlitColor)) ::ArrayW<float_t>  standardUnlitColor;

/// @brief Field standardUnlitColorWithPremadeColorDarker, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_standardUnlitColorWithPremadeColorDarker, put=__cordl_internal_set_standardUnlitColorWithPremadeColorDarker)) ::ArrayW<float_t>  standardUnlitColorWithPremadeColorDarker;

/// @brief Field summerTimeOfDayRange, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_summerTimeOfDayRange, put=__cordl_internal_set_summerTimeOfDayRange)) ::ArrayW<double_t>  summerTimeOfDayRange;

/// @brief Field timeIndexOverrideFunc, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeIndexOverrideFunc, put=__cordl_internal_set_timeIndexOverrideFunc)) ::System::Func_2<int32_t,int32_t>*  timeIndexOverrideFunc;

/// @brief Field timeMultiplier, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeMultiplier, put=__cordl_internal_set_timeMultiplier)) double_t  timeMultiplier;

 __declspec(property(get=get_timeOfDayRange)) ::ArrayW<double_t>  timeOfDayRange;

/// @brief Field toSky, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_toSky, put=__cordl_internal_set_toSky)) ::UnityW<::UnityEngine::Texture2D>  toSky;

/// @brief Field toSky2, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_toSky2, put=__cordl_internal_set_toSky2)) ::UnityW<::UnityEngine::Texture2D>  toSky2;

/// @brief Field toSky3, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_toSky3, put=__cordl_internal_set_toSky3)) ::UnityW<::UnityEngine::Texture2D>  toSky3;

/// @brief Field toWeatherIndex, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_toWeatherIndex, put=__cordl_internal_set_toWeatherIndex)) int32_t  toWeatherIndex;

/// @brief Field totalHours, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalHours, put=__cordl_internal_set_totalHours)) double_t  totalHours;

/// @brief Field totalSeconds, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalSeconds, put=__cordl_internal_set_totalSeconds)) double_t  totalSeconds;

/// @brief Field weatherCycle, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherCycle, put=__cordl_internal_set_weatherCycle)) ::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType>  weatherCycle;

/// @brief Field weatherSystems, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_weatherSystems, put=__cordl_internal_set_weatherSystems)) ::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>>  weatherSystems;

/// @brief Field winterTimeOfDayRange, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_winterTimeOfDayRange, put=__cordl_internal_set_winterTimeOfDayRange)) ::ArrayW<double_t>  winterTimeOfDayRange;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITimeOfDaySystem"
constexpr operator  ::GlobalNamespace::ITimeOfDaySystem*() noexcept;

/// @brief Method AnimateLightFlash, addr 0x5993b94, size 0x74, virtual false, abstract: false, final false
inline void AnimateLightFlash(int32_t  index, float_t  fadeInDuration, float_t  holdDuration, float_t  fadeOutDuration) ;

/// [IteratorStateMachine(typeof(BetterDayNightManager::<AnimateLightFlashCo>d__122))]
/// @brief Method AnimateLightFlashCo, addr 0x5993c08, size 0x90, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* AnimateLightFlashCo(int32_t  index, float_t  fadeInDuration, float_t  holdDuration, float_t  fadeOutDuration) ;

/// @brief Method Awake, addr 0x5991f7c, size 0x2dc, virtual false, abstract: false, final false
inline void Awake() ;

/// [PunRPC]
/// @brief Method ChangeFixedWeatherRPC, addr 0x5994414, size 0x204, virtual false, abstract: false, final false
inline void ChangeFixedWeatherRPC(int32_t  weather, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ChangeLerps, addr 0x59932f8, size 0x74, virtual false, abstract: false, final false
inline void ChangeLerps(float_t  newLerp) ;

/// @brief Method ChangeMaps, addr 0x5992644, size 0x28c, virtual false, abstract: false, final false
inline void ChangeMaps(int32_t  fromIndex, int32_t  toIndex) ;

/// [PunRPC]
/// @brief Method ChangeTimeOfDayRPC, addr 0x5994784, size 0x22c, virtual false, abstract: false, final false
inline void ChangeTimeOfDayRPC(int32_t  timeIndex, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method ClearFixedWeather, addr 0x5993f24, size 0x14, virtual false, abstract: false, final false
inline void ClearFixedWeather(bool  forceUpdate) ;

/// @brief Method ClearTimeOfDay, addr 0x5993e3c, size 0x20, virtual false, abstract: false, final false
inline void ClearTimeOfDay(bool  forceUpdate) ;

/// @brief Method CurrentWeather, addr 0x59937a4, size 0x58, virtual false, abstract: false, final false
inline ::GlobalNamespace::BetterDayNightManager_WeatherType CurrentWeather() ;

/// @brief Method FastForward, addr 0x5993e28, size 0x14, virtual false, abstract: false, final false
inline void FastForward(float_t  seconds) ;

/// @brief Method FindTimeOfDayIndex, addr 0x5993264, size 0x94, virtual false, abstract: false, final false
inline void FindTimeOfDayIndex() ;

/// @brief Method GenerateWeatherEventTimes, addr 0x59924a8, size 0x19c, virtual false, abstract: false, final false
inline void GenerateWeatherEventTimes() ;

/// @brief Method GetTimeOfDayString, addr 0x5993e5c, size 0xc8, virtual false, abstract: false, final false
inline ::StringW GetTimeOfDayString() ;

/// @brief Method GetWeatherString, addr 0x5993f38, size 0x6c, virtual false, abstract: false, final false
inline ::StringW GetWeatherString() ;

/// @brief Method HandleFixedWeather, addr 0x599412c, size 0x98, virtual false, abstract: false, final false
inline void HandleFixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  weather) ;

/// @brief Method HandleTimeOfDay, addr 0x5994340, size 0xd4, virtual false, abstract: false, final false
inline void HandleTimeOfDay(int32_t  timeIndex) ;

/// @brief Method ITimeOfDaySystem.get_currentTimeInSeconds, addr 0x5991f6c, size 0x8, virtual true, abstract: false, final true
inline double_t ITimeOfDaySystem_get_currentTimeInSeconds() ;

/// @brief Method ITimeOfDaySystem.get_totalTimeInSeconds, addr 0x5991f74, size 0x8, virtual true, abstract: false, final true
inline double_t ITimeOfDaySystem_get_totalTimeInSeconds() ;

/// @brief Method IncrementTimeOfDay, addr 0x5993d60, size 0x40, virtual false, abstract: false, final false
inline void IncrementTimeOfDay(int32_t  change) ;

/// [IteratorStateMachine(typeof(BetterDayNightManager::<InitialUpdate>d__107))]
/// @brief Method InitialUpdate, addr 0x59928d0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* InitialUpdate() ;

/// @brief Method LastWeather, addr 0x5993860, size 0x64, virtual false, abstract: false, final false
inline ::GlobalNamespace::BetterDayNightManager_WeatherType LastWeather() ;

static inline ::GlobalNamespace::BetterDayNightManager* New_ctor() ;

/// @brief Method NextWeather, addr 0x59937fc, size 0x64, virtual false, abstract: false, final false
inline ::GlobalNamespace::BetterDayNightManager_WeatherType NextWeather() ;

/// @brief Method OnDisable, addr 0x599293c, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5992264, size 0x244, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMasterClientSwitched, addr 0x5994c48, size 0x228, virtual false, abstract: false, final false
inline void OnMasterClientSwitched(::GlobalNamespace::NetPlayer*  newMasterClient) ;

/// @brief Method OnPlayerJoined, addr 0x59949d8, size 0x270, virtual false, abstract: false, final false
inline void OnPlayerJoined(::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method OnRoomJoin, addr 0x59949b0, size 0x28, virtual false, abstract: false, final false
inline void OnRoomJoin() ;

/// @brief Method OnSubscrptionData, addr 0x5994e70, size 0x138, virtual false, abstract: false, final false
inline void OnSubscrptionData() ;

/// @brief Method PopulateAllLightmaps, addr 0x5993734, size 0x3c, virtual false, abstract: false, final false
inline void PopulateAllLightmaps() ;

/// @brief Method PopulateAllLightmaps, addr 0x599336c, size 0x234, virtual false, abstract: false, final false
inline void PopulateAllLightmaps(int32_t  fromIndex, int32_t  toIndex) ;

/// @brief Method Register, addr 0x5991d84, size 0xd4, virtual false, abstract: false, final false
static inline void Register(::GlobalNamespace::PerSceneRenderData*  data) ;

/// @brief Method RegisterScheduledEvent, addr 0x59938c4, size 0x1a4, virtual false, abstract: false, final false
static inline int32_t RegisterScheduledEvent(int32_t  hour, ::System::Action*  action) ;

/// @brief Method RequestRepopulateLightmaps, addr 0x5993798, size 0xc, virtual false, abstract: false, final false
inline void RequestRepopulateLightmaps() ;

/// @brief Method SetFixedWeather, addr 0x5993e0c, size 0x1c, virtual false, abstract: false, final false
inline void SetFixedWeather(::GlobalNamespace::BetterDayNightManager_WeatherType  weather, bool  forceUpdate) ;

/// @brief Method SetFixedWeatherNetworked, addr 0x5993fa4, size 0x188, virtual false, abstract: false, final false
inline void SetFixedWeatherNetworked(::GlobalNamespace::BetterDayNightManager_WeatherType  weather) ;

/// @brief Method SetOverrideIndex, addr 0x5993b14, size 0x80, virtual false, abstract: false, final false
inline void SetOverrideIndex(int32_t  index) ;

/// @brief Method SetTimeIndexOverrideFunction, addr 0x5993af0, size 0x10, virtual false, abstract: false, final false
inline void SetTimeIndexOverrideFunction(::System::Func_2<int32_t,int32_t>*  overrideFunction) ;

/// @brief Method SetTimeOfDay, addr 0x5993cc0, size 0xa0, virtual false, abstract: false, final false
inline void SetTimeOfDay(int32_t  timeIndex, bool  forceUpdate) ;

/// @brief Method SetTimeOfDayIndex, addr 0x5993da0, size 0x6c, virtual false, abstract: false, final false
inline void SetTimeOfDayIndex(int32_t  newIndex) ;

/// @brief Method SetTimeOfDayNetworked, addr 0x59941c4, size 0x17c, virtual false, abstract: false, final false
inline void SetTimeOfDayNetworked(int32_t  timeIndex) ;

/// @brief Method SliceUpdate, addr 0x59935a0, size 0x194, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Unregister, addr 0x5991e58, size 0x80, virtual false, abstract: false, final false
static inline void Unregister(::GlobalNamespace::PerSceneRenderData*  data) ;

/// @brief Method UnregisterScheduledEvent, addr 0x5993a70, size 0x80, virtual false, abstract: false, final false
static inline void UnregisterScheduledEvent(int32_t  id) ;

/// @brief Method UnsetTimeIndexOverrideFunction, addr 0x5993b00, size 0x14, virtual false, abstract: false, final false
inline void UnsetTimeIndexOverrideFunction() ;

/// @brief Method UpdateTimeOfDay, addr 0x5992948, size 0x91c, virtual false, abstract: false, final false
inline void UpdateTimeOfDay(bool  forceUpdate) ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GT_DayCycleBrightnessOption1_Id() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GT_DayCycleBrightnessOption1_Id() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GT_DayCycleBrightnessOption2_Id() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GT_DayCycleBrightnessOption2_Id() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GT_DayCycleTimeProgress() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GT_DayCycleTimeProgress() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GlobalDayNightLerpValue() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GlobalDayNightLerpValue() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GlobalDayNightSky2Tex1() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GlobalDayNightSky2Tex1() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GlobalDayNightSky2Tex2() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GlobalDayNightSky2Tex2() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GlobalDayNightSky3Tex1() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GlobalDayNightSky3Tex1() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GlobalDayNightSky3Tex2() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GlobalDayNightSky3Tex2() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GlobalDayNightSkyTex1() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GlobalDayNightSkyTex1() ;

constexpr ::GlobalNamespace::ShaderHashId const& __cordl_internal_get__GlobalDayNightSkyTex2() const;

constexpr ::GlobalNamespace::ShaderHashId& __cordl_internal_get__GlobalDayNightSkyTex2() ;

constexpr ::StringW const& __cordl_internal_get__currentTimeOfDay_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__currentTimeOfDay_k__BackingField() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_animatingLightFlash() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_animatingLightFlash() ;

constexpr double_t const& __cordl_internal_get_baseSeconds() const;

constexpr double_t& __cordl_internal_get_baseSeconds() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_beachDayNightSkyboxTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_beachDayNightSkyboxTextures() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_cloudsDayNightSkyboxTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_cloudsDayNightSkyboxTextures() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_collidersToAddToWeatherSystems() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_collidersToAddToWeatherSystems() ;

constexpr float_t const& __cordl_internal_get_colorFrom() const;

constexpr float_t& __cordl_internal_get_colorFrom() ;

constexpr float_t const& __cordl_internal_get_colorFromDarker() const;

constexpr float_t& __cordl_internal_get_colorFromDarker() ;

constexpr float_t const& __cordl_internal_get_colorTo() const;

constexpr float_t& __cordl_internal_get_colorTo() ;

constexpr float_t const& __cordl_internal_get_colorToDarker() const;

constexpr float_t& __cordl_internal_get_colorToDarker() ;

constexpr bool const& __cordl_internal_get_computerInit() const;

constexpr bool& __cordl_internal_get_computerInit() ;

constexpr double_t const& __cordl_internal_get_currentIndexSeconds() const;

constexpr double_t& __cordl_internal_get_currentIndexSeconds() ;

constexpr float_t const& __cordl_internal_get_currentLerp() const;

constexpr float_t& __cordl_internal_get_currentLerp() ;

constexpr ::GlobalNamespace::BetterDayNightManager_Season const& __cordl_internal_get_currentSeason() const;

constexpr ::GlobalNamespace::BetterDayNightManager_Season& __cordl_internal_get_currentSeason() ;

constexpr ::GlobalNamespace::TimeSettings const& __cordl_internal_get_currentSetting() const;

constexpr ::GlobalNamespace::TimeSettings& __cordl_internal_get_currentSetting() ;

constexpr double_t const& __cordl_internal_get_currentTime() const;

constexpr double_t& __cordl_internal_get_currentTime() ;

constexpr int32_t const& __cordl_internal_get_currentTimeIndex() const;

constexpr int32_t& __cordl_internal_get_currentTimeIndex() ;

constexpr float_t const& __cordl_internal_get_currentTimestep() const;

constexpr float_t& __cordl_internal_get_currentTimestep() ;

constexpr int32_t const& __cordl_internal_get_currentWeatherCycle() const;

constexpr int32_t& __cordl_internal_get_currentWeatherCycle() ;

constexpr int32_t const& __cordl_internal_get_currentWeatherIndex() const;

constexpr int32_t& __cordl_internal_get_currentWeatherIndex() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_dayNightLightmapNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_dayNightLightmapNames() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_dayNightSkyboxTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_dayNightSkyboxTextures() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_dayNightSupportedMaterials() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_dayNightSupportedMaterials() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_dayNightSupportedMaterialsCutout() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_dayNightSupportedMaterialsCutout() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_dayNightWeatherLightmapNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_dayNightWeatherLightmapNames() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>> const& __cordl_internal_get_dayNightWeatherSkyboxTextures() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Texture2D>>& __cordl_internal_get_dayNightWeatherSkyboxTextures() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_fromSky() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_fromSky() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_fromSky2() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_fromSky2() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_fromSky3() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_fromSky3() ;

constexpr int32_t const& __cordl_internal_get_fromWeatherIndex() const;

constexpr int32_t& __cordl_internal_get_fromWeatherIndex() ;

constexpr int64_t const& __cordl_internal_get_gameEpochDay() const;

constexpr int64_t& __cordl_internal_get_gameEpochDay() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_gorillaUnlit() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_gorillaUnlit() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_gorillaUnlitCutout() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_gorillaUnlitCutout() ;

constexpr int64_t const& __cordl_internal_get_initialDayCycles() const;

constexpr int64_t& __cordl_internal_get_initialDayCycles() ;

constexpr int32_t const& __cordl_internal_get_lastIndex() const;

constexpr int32_t& __cordl_internal_get_lastIndex() ;

constexpr int32_t const& __cordl_internal_get_lastSentTimeIndex() const;

constexpr int32_t& __cordl_internal_get_lastSentTimeIndex() ;

constexpr float_t const& __cordl_internal_get_lastTime() const;

constexpr float_t& __cordl_internal_get_lastTime() ;

constexpr float_t const& __cordl_internal_get_lastTimeChecked() const;

constexpr float_t& __cordl_internal_get_lastTimeChecked() ;

constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache const& __cordl_internal_get_m_fixedDataCache() const;

constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache& __cordl_internal_get_m_fixedDataCache() ;

constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache const& __cordl_internal_get_m_setTimeDataCache() const;

constexpr ::GlobalNamespace::BetterDayNightManager_RPCDataCache& __cordl_internal_get_m_setTimeDataCache() ;

constexpr int32_t const& __cordl_internal_get_maxRainDuration() const;

constexpr int32_t& __cordl_internal_get_maxRainDuration() ;

constexpr int32_t const& __cordl_internal_get_mySeed() const;

constexpr int32_t& __cordl_internal_get_mySeed() ;

constexpr int32_t const& __cordl_internal_get_overrideIndex() const;

constexpr int32_t& __cordl_internal_get_overrideIndex() ;

constexpr bool const& __cordl_internal_get_overrideWeather() const;

constexpr bool& __cordl_internal_get_overrideWeather() ;

constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType const& __cordl_internal_get_overrideWeatherType() const;

constexpr ::GlobalNamespace::BetterDayNightManager_WeatherType& __cordl_internal_get_overrideWeatherType() ;

constexpr ::UnityW<::Photon::Pun::PhotonView> const& __cordl_internal_get_photonView() const;

constexpr ::UnityW<::Photon::Pun::PhotonView>& __cordl_internal_get_photonView() ;

constexpr float_t const& __cordl_internal_get_rainChance() const;

constexpr float_t& __cordl_internal_get_rainChance() ;

constexpr int32_t const& __cordl_internal_get_rainDuration() const;

constexpr int32_t& __cordl_internal_get_rainDuration() ;

constexpr ::System::Random* const& __cordl_internal_get_randomNumberGenerator() const;

constexpr ::System::Random*& __cordl_internal_get_randomNumberGenerator() ;

constexpr float_t const& __cordl_internal_get_remainingSeconds() const;

constexpr float_t& __cordl_internal_get_remainingSeconds() ;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>* const& __cordl_internal_get_rpcSpamChecks() const;

constexpr ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>*& __cordl_internal_get_rpcSpamChecks() ;

constexpr bool const& __cordl_internal_get_shouldRepopulate() const;

constexpr bool& __cordl_internal_get_shouldRepopulate() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_standard() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_standard() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_standardCutout() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_standardCutout() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_standardUnlitColor() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_standardUnlitColor() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_standardUnlitColorWithPremadeColorDarker() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_standardUnlitColorWithPremadeColorDarker() ;

constexpr ::ArrayW<double_t> const& __cordl_internal_get_summerTimeOfDayRange() const;

constexpr ::ArrayW<double_t>& __cordl_internal_get_summerTimeOfDayRange() ;

constexpr ::System::Func_2<int32_t,int32_t>* const& __cordl_internal_get_timeIndexOverrideFunc() const;

constexpr ::System::Func_2<int32_t,int32_t>*& __cordl_internal_get_timeIndexOverrideFunc() ;

constexpr double_t const& __cordl_internal_get_timeMultiplier() const;

constexpr double_t& __cordl_internal_get_timeMultiplier() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_toSky() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_toSky() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_toSky2() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_toSky2() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_toSky3() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_toSky3() ;

constexpr int32_t const& __cordl_internal_get_toWeatherIndex() const;

constexpr int32_t& __cordl_internal_get_toWeatherIndex() ;

constexpr double_t const& __cordl_internal_get_totalHours() const;

constexpr double_t& __cordl_internal_get_totalHours() ;

constexpr double_t const& __cordl_internal_get_totalSeconds() const;

constexpr double_t& __cordl_internal_get_totalSeconds() ;

constexpr ::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType> const& __cordl_internal_get_weatherCycle() const;

constexpr ::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType>& __cordl_internal_get_weatherCycle() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>> const& __cordl_internal_get_weatherSystems() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>>& __cordl_internal_get_weatherSystems() ;

constexpr ::ArrayW<double_t> const& __cordl_internal_get_winterTimeOfDayRange() const;

constexpr ::ArrayW<double_t>& __cordl_internal_get_winterTimeOfDayRange() ;

constexpr void __cordl_internal_set__GT_DayCycleBrightnessOption1_Id(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GT_DayCycleBrightnessOption2_Id(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GT_DayCycleTimeProgress(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GlobalDayNightLerpValue(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GlobalDayNightSky2Tex1(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GlobalDayNightSky2Tex2(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GlobalDayNightSky3Tex1(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GlobalDayNightSky3Tex2(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GlobalDayNightSkyTex1(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__GlobalDayNightSkyTex2(::GlobalNamespace::ShaderHashId  value) ;

constexpr void __cordl_internal_set__currentTimeOfDay_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set_animatingLightFlash(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_baseSeconds(double_t  value) ;

constexpr void __cordl_internal_set_beachDayNightSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_cloudsDayNightSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_collidersToAddToWeatherSystems(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_colorFrom(float_t  value) ;

constexpr void __cordl_internal_set_colorFromDarker(float_t  value) ;

constexpr void __cordl_internal_set_colorTo(float_t  value) ;

constexpr void __cordl_internal_set_colorToDarker(float_t  value) ;

constexpr void __cordl_internal_set_computerInit(bool  value) ;

constexpr void __cordl_internal_set_currentIndexSeconds(double_t  value) ;

constexpr void __cordl_internal_set_currentLerp(float_t  value) ;

constexpr void __cordl_internal_set_currentSeason(::GlobalNamespace::BetterDayNightManager_Season  value) ;

constexpr void __cordl_internal_set_currentSetting(::GlobalNamespace::TimeSettings  value) ;

constexpr void __cordl_internal_set_currentTime(double_t  value) ;

constexpr void __cordl_internal_set_currentTimeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentTimestep(float_t  value) ;

constexpr void __cordl_internal_set_currentWeatherCycle(int32_t  value) ;

constexpr void __cordl_internal_set_currentWeatherIndex(int32_t  value) ;

constexpr void __cordl_internal_set_dayNightLightmapNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_dayNightSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_dayNightSupportedMaterials(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_dayNightSupportedMaterialsCutout(::ArrayW<::UnityW<::UnityEngine::Material>>  value) ;

constexpr void __cordl_internal_set_dayNightWeatherLightmapNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_dayNightWeatherSkyboxTextures(::ArrayW<::UnityW<::UnityEngine::Texture2D>>  value) ;

constexpr void __cordl_internal_set_fromSky(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_fromSky2(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_fromSky3(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_fromWeatherIndex(int32_t  value) ;

constexpr void __cordl_internal_set_gameEpochDay(int64_t  value) ;

constexpr void __cordl_internal_set_gorillaUnlit(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_gorillaUnlitCutout(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_initialDayCycles(int64_t  value) ;

constexpr void __cordl_internal_set_lastIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lastSentTimeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_lastTime(float_t  value) ;

constexpr void __cordl_internal_set_lastTimeChecked(float_t  value) ;

constexpr void __cordl_internal_set_m_fixedDataCache(::GlobalNamespace::BetterDayNightManager_RPCDataCache  value) ;

constexpr void __cordl_internal_set_m_setTimeDataCache(::GlobalNamespace::BetterDayNightManager_RPCDataCache  value) ;

constexpr void __cordl_internal_set_maxRainDuration(int32_t  value) ;

constexpr void __cordl_internal_set_mySeed(int32_t  value) ;

constexpr void __cordl_internal_set_overrideIndex(int32_t  value) ;

constexpr void __cordl_internal_set_overrideWeather(bool  value) ;

constexpr void __cordl_internal_set_overrideWeatherType(::GlobalNamespace::BetterDayNightManager_WeatherType  value) ;

constexpr void __cordl_internal_set_photonView(::UnityW<::Photon::Pun::PhotonView>  value) ;

constexpr void __cordl_internal_set_rainChance(float_t  value) ;

constexpr void __cordl_internal_set_rainDuration(int32_t  value) ;

constexpr void __cordl_internal_set_randomNumberGenerator(::System::Random*  value) ;

constexpr void __cordl_internal_set_remainingSeconds(float_t  value) ;

constexpr void __cordl_internal_set_rpcSpamChecks(::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>*  value) ;

constexpr void __cordl_internal_set_shouldRepopulate(bool  value) ;

constexpr void __cordl_internal_set_standard(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_standardCutout(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set_standardUnlitColor(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_standardUnlitColorWithPremadeColorDarker(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_summerTimeOfDayRange(::ArrayW<double_t>  value) ;

constexpr void __cordl_internal_set_timeIndexOverrideFunc(::System::Func_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_timeMultiplier(double_t  value) ;

constexpr void __cordl_internal_set_toSky(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_toSky2(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_toSky3(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_toWeatherIndex(int32_t  value) ;

constexpr void __cordl_internal_set_totalHours(double_t  value) ;

constexpr void __cordl_internal_set_totalSeconds(double_t  value) ;

constexpr void __cordl_internal_set_weatherCycle(::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType>  value) ;

constexpr void __cordl_internal_set_weatherSystems(::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>>  value) ;

constexpr void __cordl_internal_set_winterTimeOfDayRange(::ArrayW<double_t>  value) ;

/// @brief Method .ctor, addr 0x5994fa8, size 0x308, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>* getStaticF_allScenesRenderData() ;

static inline ::UnityW<::GlobalNamespace::BetterDayNightManager> getStaticF_instance() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>* getStaticF_scheduledEvents() ;

/// @brief Method get_NormalizedTimeOfDay, addr 0x5991f0c, size 0x60, virtual false, abstract: false, final false
inline float_t get_NormalizedTimeOfDay() ;

/// [CompilerGenerated]
/// @brief Method get_currentTimeOfDay, addr 0x5991ef4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_currentTimeOfDay() ;

/// @brief Method get_timeOfDayRange, addr 0x5991ed8, size 0x1c, virtual false, abstract: false, final false
inline ::ArrayW<double_t> get_timeOfDayRange() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

/// @brief Convert to "::GlobalNamespace::ITimeOfDaySystem"
constexpr ::GlobalNamespace::ITimeOfDaySystem* i___GlobalNamespace__ITimeOfDaySystem() noexcept;

static inline void setStaticF_allScenesRenderData(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PerSceneRenderData>>*  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

static inline void setStaticF_scheduledEvents(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::BetterDayNightManager_ScheduledEvent*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_currentTimeOfDay, addr 0x5991efc, size 0x10, virtual false, abstract: false, final false
inline void set_currentTimeOfDay(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterDayNightManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterDayNightManager(BetterDayNightManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterDayNightManager(BetterDayNightManager const& ) = delete;

/// @brief Field TIME_OF_DAY_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  TIME_OF_DAY_COUNT{static_cast<int32_t>(0xa)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2586};

/// @brief Field m_fixedDataCache, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::BetterDayNightManager_RPCDataCache  ___m_fixedDataCache;

/// @brief Field m_setTimeDataCache, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::BetterDayNightManager_RPCDataCache  ___m_setTimeDataCache;

/// @brief Field photonView, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Photon::Pun::PhotonView>  ___photonView;

/// @brief Field standard, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___standard;

/// @brief Field standardCutout, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___standardCutout;

/// @brief Field gorillaUnlit, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___gorillaUnlit;

/// @brief Field gorillaUnlitCutout, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ___gorillaUnlitCutout;

/// @brief Field dayNightSupportedMaterials, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___dayNightSupportedMaterials;

/// @brief Field dayNightSupportedMaterialsCutout, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Material>>  ___dayNightSupportedMaterialsCutout;

/// @brief Field dayNightLightmapNames, offset: 0x68, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___dayNightLightmapNames;

/// @brief Field dayNightWeatherLightmapNames, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___dayNightWeatherLightmapNames;

/// @brief Field dayNightSkyboxTextures, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___dayNightSkyboxTextures;

/// @brief Field cloudsDayNightSkyboxTextures, offset: 0x80, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___cloudsDayNightSkyboxTextures;

/// @brief Field beachDayNightSkyboxTextures, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___beachDayNightSkyboxTextures;

/// @brief Field dayNightWeatherSkyboxTextures, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Texture2D>>  ___dayNightWeatherSkyboxTextures;

/// @brief Field standardUnlitColor, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<float_t>  ___standardUnlitColor;

/// @brief Field standardUnlitColorWithPremadeColorDarker, offset: 0xa0, size: 0x8, def value: None
 ::ArrayW<float_t>  ___standardUnlitColorWithPremadeColorDarker;

/// @brief Field currentLerp, offset: 0xa8, size: 0x4, def value: None
 float_t  ___currentLerp;

/// @brief Field currentTimestep, offset: 0xac, size: 0x4, def value: None
 float_t  ___currentTimestep;

/// @brief Field currentSeason, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::BetterDayNightManager_Season  ___currentSeason;

/// @brief Field summerTimeOfDayRange, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<double_t>  ___summerTimeOfDayRange;

/// @brief Field winterTimeOfDayRange, offset: 0xc0, size: 0x8, def value: None
 ::ArrayW<double_t>  ___winterTimeOfDayRange;

/// @brief Field timeMultiplier, offset: 0xc8, size: 0x8, def value: None
 double_t  ___timeMultiplier;

/// @brief Field lastTime, offset: 0xd0, size: 0x4, def value: None
 float_t  ___lastTime;

/// @brief Field currentTime, offset: 0xd8, size: 0x8, def value: None
 double_t  ___currentTime;

/// @brief Field totalHours, offset: 0xe0, size: 0x8, def value: None
 double_t  ___totalHours;

/// @brief Field totalSeconds, offset: 0xe8, size: 0x8, def value: None
 double_t  ___totalSeconds;

/// @brief Field colorFrom, offset: 0xf0, size: 0x4, def value: None
 float_t  ___colorFrom;

/// @brief Field colorTo, offset: 0xf4, size: 0x4, def value: None
 float_t  ___colorTo;

/// @brief Field colorFromDarker, offset: 0xf8, size: 0x4, def value: None
 float_t  ___colorFromDarker;

/// @brief Field colorToDarker, offset: 0xfc, size: 0x4, def value: None
 float_t  ___colorToDarker;

/// @brief Field currentTimeIndex, offset: 0x100, size: 0x4, def value: None
 int32_t  ___currentTimeIndex;

/// @brief Field currentWeatherIndex, offset: 0x104, size: 0x4, def value: None
 int32_t  ___currentWeatherIndex;

/// @brief Field lastIndex, offset: 0x108, size: 0x4, def value: None
 int32_t  ___lastIndex;

/// @brief Field currentIndexSeconds, offset: 0x110, size: 0x8, def value: None
 double_t  ___currentIndexSeconds;

/// @brief Field baseSeconds, offset: 0x118, size: 0x8, def value: None
 double_t  ___baseSeconds;

/// @brief Field computerInit, offset: 0x120, size: 0x1, def value: None
 bool  ___computerInit;

/// @brief Field mySeed, offset: 0x124, size: 0x4, def value: None
 int32_t  ___mySeed;

/// @brief Field randomNumberGenerator, offset: 0x128, size: 0x8, def value: None
 ::System::Random*  ___randomNumberGenerator;

/// @brief Field weatherCycle, offset: 0x130, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::BetterDayNightManager_WeatherType>  ___weatherCycle;

/// @brief Field overrideWeather, offset: 0x138, size: 0x1, def value: None
 bool  ___overrideWeather;

/// @brief Field overrideWeatherType, offset: 0x13c, size: 0x4, def value: None
 ::GlobalNamespace::BetterDayNightManager_WeatherType  ___overrideWeatherType;

/// [CompilerGenerated]
/// @brief Field <currentTimeOfDay>k__BackingField, offset: 0x140, size: 0x8, def value: None
 ::StringW  ____currentTimeOfDay_k__BackingField;

/// @brief Field rainChance, offset: 0x148, size: 0x4, def value: None
 float_t  ___rainChance;

/// @brief Field maxRainDuration, offset: 0x14c, size: 0x4, def value: None
 int32_t  ___maxRainDuration;

/// @brief Field rainDuration, offset: 0x150, size: 0x4, def value: None
 int32_t  ___rainDuration;

/// @brief Field remainingSeconds, offset: 0x154, size: 0x4, def value: None
 float_t  ___remainingSeconds;

/// @brief Field initialDayCycles, offset: 0x158, size: 0x8, def value: None
 int64_t  ___initialDayCycles;

/// @brief Field gameEpochDay, offset: 0x160, size: 0x8, def value: None
 int64_t  ___gameEpochDay;

/// @brief Field currentWeatherCycle, offset: 0x168, size: 0x4, def value: None
 int32_t  ___currentWeatherCycle;

/// @brief Field fromWeatherIndex, offset: 0x16c, size: 0x4, def value: None
 int32_t  ___fromWeatherIndex;

/// @brief Field toWeatherIndex, offset: 0x170, size: 0x4, def value: None
 int32_t  ___toWeatherIndex;

/// @brief Field fromSky, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___fromSky;

/// @brief Field fromSky2, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___fromSky2;

/// @brief Field fromSky3, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___fromSky3;

/// @brief Field toSky, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___toSky;

/// @brief Field toSky2, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___toSky2;

/// @brief Field toSky3, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___toSky3;

/// @brief Field weatherSystems, offset: 0x1a8, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::AddCollidersToParticleSystemTriggers>>  ___weatherSystems;

/// @brief Field collidersToAddToWeatherSystems, offset: 0x1b0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___collidersToAddToWeatherSystems;

/// @brief Field lastTimeChecked, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___lastTimeChecked;

/// @brief Field timeIndexOverrideFunc, offset: 0x1c0, size: 0x8, def value: None
 ::System::Func_2<int32_t,int32_t>*  ___timeIndexOverrideFunc;

/// @brief Field lastSentTimeIndex, offset: 0x1c8, size: 0x4, def value: None
 int32_t  ___lastSentTimeIndex;

/// @brief Field rpcSpamChecks, offset: 0x1d0, size: 0x8, def value: None
 ::GlobalNamespace::CallLimitersList_2<::GlobalNamespace::CallLimiter*,::GlobalNamespace::BetterDayNightManager_RPC>*  ___rpcSpamChecks;

/// @brief Field overrideIndex, offset: 0x1d8, size: 0x4, def value: None
 int32_t  ___overrideIndex;

/// @brief Field currentSetting, offset: 0x1dc, size: 0x4, def value: None
 ::GlobalNamespace::TimeSettings  ___currentSetting;

/// @brief Field _GT_DayCycleTimeProgress, offset: 0x1e0, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GT_DayCycleTimeProgress;

/// @brief Field _GT_DayCycleBrightnessOption1_Id, offset: 0x1f0, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GT_DayCycleBrightnessOption1_Id;

/// @brief Field _GT_DayCycleBrightnessOption2_Id, offset: 0x200, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GT_DayCycleBrightnessOption2_Id;

/// @brief Field _GlobalDayNightLerpValue, offset: 0x210, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GlobalDayNightLerpValue;

/// @brief Field _GlobalDayNightSkyTex1, offset: 0x220, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GlobalDayNightSkyTex1;

/// @brief Field _GlobalDayNightSkyTex2, offset: 0x230, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GlobalDayNightSkyTex2;

/// @brief Field _GlobalDayNightSky2Tex1, offset: 0x240, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GlobalDayNightSky2Tex1;

/// @brief Field _GlobalDayNightSky2Tex2, offset: 0x250, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GlobalDayNightSky2Tex2;

/// @brief Field _GlobalDayNightSky3Tex1, offset: 0x260, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GlobalDayNightSky3Tex1;

/// @brief Field _GlobalDayNightSky3Tex2, offset: 0x270, size: 0x10, def value: None
 ::GlobalNamespace::ShaderHashId  ____GlobalDayNightSky3Tex2;

/// @brief Field shouldRepopulate, offset: 0x280, size: 0x1, def value: None
 bool  ___shouldRepopulate;

/// @brief Field animatingLightFlash, offset: 0x288, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___animatingLightFlash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___m_fixedDataCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___m_setTimeDataCache) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___photonView) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___standard) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___standardCutout) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___gorillaUnlit) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___gorillaUnlitCutout) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___dayNightSupportedMaterials) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___dayNightSupportedMaterialsCutout) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___dayNightLightmapNames) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___dayNightWeatherLightmapNames) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___dayNightSkyboxTextures) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___cloudsDayNightSkyboxTextures) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___beachDayNightSkyboxTextures) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___dayNightWeatherSkyboxTextures) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___standardUnlitColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___standardUnlitColorWithPremadeColorDarker) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentLerp) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentTimestep) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentSeason) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___summerTimeOfDayRange) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___winterTimeOfDayRange) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___timeMultiplier) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___lastTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentTime) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___totalHours) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___totalSeconds) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___colorFrom) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___colorTo) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___colorFromDarker) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___colorToDarker) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentTimeIndex) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentWeatherIndex) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___lastIndex) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentIndexSeconds) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___baseSeconds) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___computerInit) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___mySeed) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___randomNumberGenerator) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___weatherCycle) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___overrideWeather) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___overrideWeatherType) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____currentTimeOfDay_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___rainChance) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___maxRainDuration) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___rainDuration) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___remainingSeconds) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___initialDayCycles) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___gameEpochDay) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentWeatherCycle) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___fromWeatherIndex) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___toWeatherIndex) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___fromSky) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___fromSky2) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___fromSky3) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___toSky) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___toSky2) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___toSky3) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___weatherSystems) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___collidersToAddToWeatherSystems) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___lastTimeChecked) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___timeIndexOverrideFunc) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___lastSentTimeIndex) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___rpcSpamChecks) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___overrideIndex) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___currentSetting) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GT_DayCycleTimeProgress) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GT_DayCycleBrightnessOption1_Id) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GT_DayCycleBrightnessOption2_Id) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GlobalDayNightLerpValue) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GlobalDayNightSkyTex1) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GlobalDayNightSkyTex2) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GlobalDayNightSky2Tex1) == 0x240, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GlobalDayNightSky2Tex2) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GlobalDayNightSky3Tex1) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ____GlobalDayNightSky3Tex2) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___shouldRepopulate) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager, ___animatingLightFlash) == 0x288, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterDayNightManager) == 0x290, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterDayNightManager/<InitialUpdate>d__107
class CORDL_TYPE BetterDayNightManager__InitialUpdate_d__107 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5995674, size 0x6c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59956e0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59956e8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5995720, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5995670, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5993770, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterDayNightManager__InitialUpdate_d__107() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager__InitialUpdate_d__107", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterDayNightManager__InitialUpdate_d__107(BetterDayNightManager__InitialUpdate_d__107 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager__InitialUpdate_d__107", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterDayNightManager__InitialUpdate_d__107(BetterDayNightManager__InitialUpdate_d__107 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2585};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterDayNightManager__InitialUpdate_d__107) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterDayNightManager/<AnimateLightFlashCo>d__122
class CORDL_TYPE BetterDayNightManager__AnimateLightFlashCo_d__122 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  __4__this;

/// @brief Field <endTimestamp>5__3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__endTimestamp_5__3, put=__cordl_internal_set__endTimestamp_5__3)) float_t  _endTimestamp_5__3;

/// @brief Field <startMap>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__startMap_5__2, put=__cordl_internal_set__startMap_5__2)) int32_t  _startMap_5__2;

/// @brief Field fadeInDuration, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeInDuration, put=__cordl_internal_set_fadeInDuration)) float_t  fadeInDuration;

/// @brief Field fadeOutDuration, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fadeOutDuration, put=__cordl_internal_set_fadeOutDuration)) float_t  fadeOutDuration;

/// @brief Field index, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_index, put=__cordl_internal_set_index)) int32_t  index;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59953a0, size 0x288, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5995628, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5995630, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5995668, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x599539c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__endTimestamp_5__3() const;

constexpr float_t& __cordl_internal_get__endTimestamp_5__3() ;

constexpr int32_t const& __cordl_internal_get__startMap_5__2() const;

constexpr int32_t& __cordl_internal_get__startMap_5__2() ;

constexpr float_t const& __cordl_internal_get_fadeInDuration() const;

constexpr float_t& __cordl_internal_get_fadeInDuration() ;

constexpr float_t const& __cordl_internal_get_fadeOutDuration() const;

constexpr float_t& __cordl_internal_get_fadeOutDuration() ;

constexpr int32_t const& __cordl_internal_get_index() const;

constexpr int32_t& __cordl_internal_get_index() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

constexpr void __cordl_internal_set__endTimestamp_5__3(float_t  value) ;

constexpr void __cordl_internal_set__startMap_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_fadeInDuration(float_t  value) ;

constexpr void __cordl_internal_set_fadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set_index(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5993c98, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterDayNightManager__AnimateLightFlashCo_d__122() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager__AnimateLightFlashCo_d__122", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterDayNightManager__AnimateLightFlashCo_d__122(BetterDayNightManager__AnimateLightFlashCo_d__122 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager__AnimateLightFlashCo_d__122", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterDayNightManager__AnimateLightFlashCo_d__122(BetterDayNightManager__AnimateLightFlashCo_d__122 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2584};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  _____4__this;

/// @brief Field index, offset: 0x28, size: 0x4, def value: None
 int32_t  ___index;

/// @brief Field fadeInDuration, offset: 0x2c, size: 0x4, def value: None
 float_t  ___fadeInDuration;

/// @brief Field fadeOutDuration, offset: 0x30, size: 0x4, def value: None
 float_t  ___fadeOutDuration;

/// @brief Field <startMap>5__2, offset: 0x34, size: 0x4, def value: None
 int32_t  ____startMap_5__2;

/// @brief Field <endTimestamp>5__3, offset: 0x38, size: 0x4, def value: None
 float_t  ____endTimestamp_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, ___index) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, ___fadeInDuration) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, ___fadeOutDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, ____startMap_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122, ____endTimestamp_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterDayNightManager__AnimateLightFlashCo_d__122) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BetterDayNightManager/ScheduledEvent
class CORDL_TYPE BetterDayNightManager_ScheduledEvent : public ::System::Object {
public:
// Declarations
/// @brief Field action, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_action, put=__cordl_internal_set_action)) ::System::Action*  action;

/// @brief Field hour, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_hour, put=__cordl_internal_set_hour)) int32_t  hour;

/// @brief Field lastDayCalled, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastDayCalled, put=__cordl_internal_set_lastDayCalled)) int64_t  lastDayCalled;

static inline ::GlobalNamespace::BetterDayNightManager_ScheduledEvent* New_ctor() ;

constexpr ::System::Action* const& __cordl_internal_get_action() const;

constexpr ::System::Action*& __cordl_internal_get_action() ;

constexpr int32_t const& __cordl_internal_get_hour() const;

constexpr int32_t& __cordl_internal_get_hour() ;

constexpr int64_t const& __cordl_internal_get_lastDayCalled() const;

constexpr int64_t& __cordl_internal_get_lastDayCalled() ;

constexpr void __cordl_internal_set_action(::System::Action*  value) ;

constexpr void __cordl_internal_set_hour(int32_t  value) ;

constexpr void __cordl_internal_set_lastDayCalled(int64_t  value) ;

/// @brief Method .ctor, addr 0x5993a68, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BetterDayNightManager_ScheduledEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager_ScheduledEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BetterDayNightManager_ScheduledEvent(BetterDayNightManager_ScheduledEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BetterDayNightManager_ScheduledEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BetterDayNightManager_ScheduledEvent(BetterDayNightManager_ScheduledEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2583};

/// @brief Field lastDayCalled, offset: 0x10, size: 0x8, def value: None
 int64_t  ___lastDayCalled;

/// @brief Field hour, offset: 0x18, size: 0x4, def value: None
 int32_t  ___hour;

/// @brief Field action, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___action;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BetterDayNightManager_ScheduledEvent, ___lastDayCalled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager_ScheduledEvent, ___hour) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BetterDayNightManager_ScheduledEvent, ___action) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BetterDayNightManager_ScheduledEvent) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
