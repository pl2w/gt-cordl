#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomMapLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GliderHoldable_def.hpp"
#include "GorillaGameModes/zzzz__GameModeType_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__LightmapData_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapLoader)
namespace GT_CustomMapSupportRuntime {
class BasicGravityZoneSettings;
}
namespace GT_CustomMapSupportRuntime {
class MapDescriptor;
}
namespace GT_CustomMapSupportRuntime {
class MapEntity;
}
namespace GT_CustomMapSupportRuntime {
class MapPackageInfo;
}
namespace GT_CustomMapSupportRuntime {
class MonkeGravityControllerSettings;
}
namespace GlobalNamespace {
class BetterDayNightManager;
}
namespace GlobalNamespace {
class CompositeTriggerEvents;
}
namespace GlobalNamespace {
class CustomMapAccessDoor;
}
namespace GlobalNamespace {
struct CustomMapLoader_LoadZoneRequest;
}
namespace GlobalNamespace {
class CustomMapLoader__AbortMapLoad_d__135;
}
namespace GlobalNamespace {
class CustomMapLoader__AbortSceneLoad_d__137;
}
namespace GlobalNamespace {
class CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133;
}
namespace GlobalNamespace {
class CustomMapLoader__FinalizeSceneLoad_d__114;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadAssetBundle_d__104;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadInitialScenesCoroutine_d__107;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadSceneFromAssetBundle_d__110;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadScenesCoroutine_d__109;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadZoneCoroutine_d__131;
}
namespace GlobalNamespace {
class CustomMapLoader__ProcessChildObjects_d__115;
}
namespace GlobalNamespace {
class CustomMapLoader__ResetLightmaps_d__142;
}
namespace GlobalNamespace {
class CustomMapLoader__UnloadMapCoroutine_d__136;
}
namespace GlobalNamespace {
class CustomMapLoader__UnloadSceneCoroutine_d__139;
}
namespace GlobalNamespace {
class CustomMapLoader__UnloadScenesCoroutine_d__138;
}
namespace GlobalNamespace {
class CustomMapLoader___c;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass107_0;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass107_1;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass109_0;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass109_1;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
class NexusGroupId;
}
namespace GorillaGameModes {
struct GameModeType;
}
namespace GorillaLocomotion::Swimming {
class WaterParameters;
}
namespace GorillaTag::Gravity {
class BasicGravityZone;
}
namespace GorillaTag::Rendering {
class ZoneShaderSettings;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct MapLoadStatus;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
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
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomMapLoader;
}
namespace GlobalNamespace {
class CustomMapLoader__AbortMapLoad_d__135;
}
namespace GlobalNamespace {
class CustomMapLoader__AbortSceneLoad_d__137;
}
namespace GlobalNamespace {
class CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133;
}
namespace GlobalNamespace {
class CustomMapLoader__FinalizeSceneLoad_d__114;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadAssetBundle_d__104;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadInitialScenesCoroutine_d__107;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadSceneFromAssetBundle_d__110;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadScenesCoroutine_d__109;
}
namespace GlobalNamespace {
class CustomMapLoader__LoadZoneCoroutine_d__131;
}
namespace GlobalNamespace {
class CustomMapLoader__ProcessChildObjects_d__115;
}
namespace GlobalNamespace {
class CustomMapLoader__ResetLightmaps_d__142;
}
namespace GlobalNamespace {
class CustomMapLoader__UnloadMapCoroutine_d__136;
}
namespace GlobalNamespace {
class CustomMapLoader__UnloadSceneCoroutine_d__139;
}
namespace GlobalNamespace {
class CustomMapLoader__UnloadScenesCoroutine_d__138;
}
namespace GlobalNamespace {
class CustomMapLoader___c;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass107_0;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass107_1;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass109_0;
}
namespace GlobalNamespace {
class CustomMapLoader___c__DisplayClass109_1;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CustomMapLoader*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader___c*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*);
MARK_REF_T(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader*, "", "CustomMapLoader");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135*, "", "CustomMapLoader/<AbortMapLoad>d__135");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137*, "", "CustomMapLoader/<AbortSceneLoad>d__137");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133*, "", "CustomMapLoader/<CloseDoorAndUnloadMapCoroutine>d__133");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114*, "", "CustomMapLoader/<FinalizeSceneLoad>d__114");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104*, "", "CustomMapLoader/<LoadAssetBundle>d__104");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107*, "", "CustomMapLoader/<LoadInitialScenesCoroutine>d__107");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110*, "", "CustomMapLoader/<LoadSceneFromAssetBundle>d__110");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109*, "", "CustomMapLoader/<LoadScenesCoroutine>d__109");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131*, "", "CustomMapLoader/<LoadZoneCoroutine>d__131");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115*, "", "CustomMapLoader/<ProcessChildObjects>d__115");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142*, "", "CustomMapLoader/<ResetLightmaps>d__142");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136*, "", "CustomMapLoader/<UnloadMapCoroutine>d__136");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139*, "", "CustomMapLoader/<UnloadSceneCoroutine>d__139");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138*, "", "CustomMapLoader/<UnloadScenesCoroutine>d__138");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader___c*, "", "CustomMapLoader/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*, "", "CustomMapLoader/<>c__DisplayClass107_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*, "", "CustomMapLoader/<>c__DisplayClass107_1");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*, "", "CustomMapLoader/<>c__DisplayClass109_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*, "", "CustomMapLoader/<>c__DisplayClass109_1");
// Dependencies GliderHoldable, GorillaGameModes.GameModeType, Modio.Mods.ModId, System.Type, UnityEngine.LightmapData, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader
class CORDL_TYPE CustomMapLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LoadZoneRequest = ::GlobalNamespace::CustomMapLoader_LoadZoneRequest;

using _AbortMapLoad_d__135 = ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135;

using _AbortSceneLoad_d__137 = ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137;

using _CloseDoorAndUnloadMapCoroutine_d__133 = ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133;

using _FinalizeSceneLoad_d__114 = ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114;

using _LoadAssetBundle_d__104 = ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104;

using _LoadInitialScenesCoroutine_d__107 = ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107;

using _LoadSceneFromAssetBundle_d__110 = ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110;

using _LoadScenesCoroutine_d__109 = ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109;

using _LoadZoneCoroutine_d__131 = ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131;

using _ProcessChildObjects_d__115 = ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115;

using _ResetLightmaps_d__142 = ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142;

using _UnloadMapCoroutine_d__136 = ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136;

using _UnloadSceneCoroutine_d__139 = ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139;

using _UnloadScenesCoroutine_d__138 = ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138;

using __c = ::GlobalNamespace::CustomMapLoader___c;

using __c__DisplayClass107_0 = ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0;

using __c__DisplayClass107_1 = ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1;

using __c__DisplayClass109_0 = ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0;

using __c__DisplayClass109_1 = ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1;

/// @brief Field APPROVED_LAYERS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_APPROVED_LAYERS, put=setStaticF_APPROVED_LAYERS)) ::System::Collections::Generic::List_1<int32_t>*  APPROVED_LAYERS;

/// @brief Field CustomMapsDefaultSpawnLocation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_CustomMapsDefaultSpawnLocation, put=__cordl_internal_set_CustomMapsDefaultSpawnLocation)) ::UnityW<::UnityEngine::Transform>  CustomMapsDefaultSpawnLocation;

/// @brief Field DefaultFont, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_DefaultFont, put=__cordl_internal_set_DefaultFont)) ::UnityW<::TMPro::TMP_FontAsset>  DefaultFont;

/// @brief Field <CanLoadEntities>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__CanLoadEntities_k__BackingField, put=setStaticF__CanLoadEntities_k__BackingField)) bool  _CanLoadEntities_k__BackingField;

/// @brief Field accessDoor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_accessDoor, put=__cordl_internal_set_accessDoor)) ::UnityW<::GlobalNamespace::CustomMapAccessDoor>  accessDoor;

/// @brief Field assetBundleSceneFilePaths, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_assetBundleSceneFilePaths, put=setStaticF_assetBundleSceneFilePaths)) ::ArrayW<::StringW>  assetBundleSceneFilePaths;

/// @brief Field atmNoShellPrefab, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_atmNoShellPrefab, put=__cordl_internal_set_atmNoShellPrefab)) ::UnityW<::UnityEngine::GameObject>  atmNoShellPrefab;

/// @brief Field atmPrefab, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_atmPrefab, put=__cordl_internal_set_atmPrefab)) ::UnityW<::UnityEngine::GameObject>  atmPrefab;

/// @brief Field attemptedLoadID, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_attemptedLoadID, put=setStaticF_attemptedLoadID)) int64_t  attemptedLoadID;

/// @brief Field attemptedSceneToLoad, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_attemptedSceneToLoad, put=setStaticF_attemptedSceneToLoad)) ::StringW  attemptedSceneToLoad;

/// @brief Field availableModesForOldMaps, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_availableModesForOldMaps, put=__cordl_internal_set_availableModesForOldMaps)) ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  availableModesForOldMaps;

/// @brief Field badComponents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_badComponents, put=setStaticF_badComponents)) ::ArrayW<::System::Type*>  badComponents;

/// @brief Field cachedExceptionMessage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedExceptionMessage, put=setStaticF_cachedExceptionMessage)) ::StringW  cachedExceptionMessage;

/// @brief Field cachedLuauScript, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cachedLuauScript, put=setStaticF_cachedLuauScript)) ::StringW  cachedLuauScript;

/// @brief Field componentAllowlist, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_componentAllowlist, put=setStaticF_componentAllowlist)) ::System::Collections::Generic::List_1<::System::Type*>*  componentAllowlist;

/// @brief Field componentTypeStringAllowList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_componentTypeStringAllowList, put=setStaticF_componentTypeStringAllowList)) ::System::Collections::Generic::List_1<::StringW>*  componentTypeStringAllowList;

/// @brief Field compositeTryOnArea, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_compositeTryOnArea, put=__cordl_internal_set_compositeTryOnArea)) ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  compositeTryOnArea;

/// @brief Field customMapATM, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_customMapATM, put=setStaticF_customMapATM)) ::UnityW<::UnityEngine::GameObject>  customMapATM;

/// @brief Field customMapZoneShaderSettings, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapZoneShaderSettings, put=__cordl_internal_set_customMapZoneShaderSettings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  customMapZoneShaderSettings;

/// @brief Field dayNightManager, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightManager, put=__cordl_internal_set_dayNightManager)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  dayNightManager;

/// @brief Field defaultGameModeForNonCustomOldMaps, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultGameModeForNonCustomOldMaps, put=__cordl_internal_set_defaultGameModeForNonCustomOldMaps)) ::GorillaGameModes::GameModeType  defaultGameModeForNonCustomOldMaps;

/// @brief Field defaultLavaParameters, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultLavaParameters, put=__cordl_internal_set_defaultLavaParameters)) ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  defaultLavaParameters;

/// @brief Field defaultNexusGroupId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultNexusGroupId, put=__cordl_internal_set_defaultNexusGroupId)) ::UnityW<::GlobalNamespace::NexusGroupId>  defaultNexusGroupId;

/// @brief Field defaultWaterParameters, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultWaterParameters, put=__cordl_internal_set_defaultWaterParameters)) ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  defaultWaterParameters;

/// @brief Field devModeEnabled, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_devModeEnabled, put=setStaticF_devModeEnabled)) bool  devModeEnabled;

/// @brief Field disableHoldingHandsAllModes, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_disableHoldingHandsAllModes, put=setStaticF_disableHoldingHandsAllModes)) bool  disableHoldingHandsAllModes;

/// @brief Field disableHoldingHandsCustomMode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_disableHoldingHandsCustomMode, put=setStaticF_disableHoldingHandsCustomMode)) bool  disableHoldingHandsCustomMode;

/// @brief Field dontDestroyOnLoadSceneName, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_dontDestroyOnLoadSceneName, put=__cordl_internal_set_dontDestroyOnLoadSceneName)) ::StringW  dontDestroyOnLoadSceneName;

/// @brief Field entitiesToCreate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_entitiesToCreate, put=setStaticF_entitiesToCreate)) ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  entitiesToCreate;

/// @brief Field errorEncounteredDuringLoad, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_errorEncounteredDuringLoad, put=setStaticF_errorEncounteredDuringLoad)) bool  errorEncounteredDuringLoad;

/// @brief Field forceVolumePrefab, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_forceVolumePrefab, put=__cordl_internal_set_forceVolumePrefab)) ::UnityW<::UnityEngine::GameObject>  forceVolumePrefab;

/// @brief Field ghostReactorManager, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostReactorManager, put=__cordl_internal_set_ghostReactorManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  ghostReactorManager;

/// @brief Field gliderWindVolume, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_gliderWindVolume, put=__cordl_internal_set_gliderWindVolume)) ::UnityW<::UnityEngine::GameObject>  gliderWindVolume;

/// @brief Field gravityZoneCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_gravityZoneCount, put=setStaticF_gravityZoneCount)) int32_t  gravityZoneCount;

/// @brief Field handHoldCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_handHoldCount, put=setStaticF_handHoldCount)) int32_t  handHoldCount;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field hoverboardDispenserPrefab, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hoverboardDispenserPrefab, put=__cordl_internal_set_hoverboardDispenserPrefab)) ::UnityW<::UnityEngine::GameObject>  hoverboardDispenserPrefab;

/// @brief Field initialSceneIndexes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initialSceneIndexes, put=setStaticF_initialSceneIndexes)) ::System::Collections::Generic::List_1<int32_t>*  initialSceneIndexes;

/// @brief Field initialSceneNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initialSceneNames, put=setStaticF_initialSceneNames)) ::System::Collections::Generic::List_1<::StringW>*  initialSceneNames;

/// @brief Field initializePhaseTwoComponents, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_initializePhaseTwoComponents, put=setStaticF_initializePhaseTwoComponents)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  initializePhaseTwoComponents;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GlobalNamespace::CustomMapLoader>  instance;

/// @brief Field isLoading, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isLoading, put=setStaticF_isLoading)) bool  isLoading;

/// @brief Field isUnloading, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isUnloading, put=setStaticF_isUnloading)) bool  isUnloading;

/// @brief Field leafGlider, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_leafGlider, put=__cordl_internal_set_leafGlider)) ::UnityW<::UnityEngine::GameObject>  leafGlider;

/// @brief Field leafGliderIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_leafGliderIndex, put=setStaticF_leafGliderIndex)) int32_t  leafGliderIndex;

/// @brief Field leafGliders, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_leafGliders, put=__cordl_internal_set_leafGliders)) ::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>>  leafGliders;

/// @brief Field lightmaps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lightmaps, put=setStaticF_lightmaps)) ::ArrayW<::UnityEngine::LightmapData*>  lightmaps;

/// @brief Field lightmapsToKeep, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lightmapsToKeep, put=setStaticF_lightmapsToKeep)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  lightmapsToKeep;

/// @brief Field loadScenesCoroutine, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadScenesCoroutine, put=__cordl_internal_set_loadScenesCoroutine)) ::UnityEngine::Coroutine*  loadScenesCoroutine;

/// @brief Field loadedMapModFileId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadedMapModFileId, put=setStaticF_loadedMapModFileId)) int64_t  loadedMapModFileId;

/// @brief Field loadedMapModId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadedMapModId, put=setStaticF_loadedMapModId)) ::Modio::Mods::ModId  loadedMapModId;

/// @brief Field loadedMapPackageInfo, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadedMapPackageInfo, put=setStaticF_loadedMapPackageInfo)) ::GT_CustomMapSupportRuntime::MapPackageInfo*  loadedMapPackageInfo;

/// @brief Field loadedSceneFilePaths, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadedSceneFilePaths, put=setStaticF_loadedSceneFilePaths)) ::System::Collections::Generic::List_1<::StringW>*  loadedSceneFilePaths;

/// @brief Field loadedSceneIndexes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadedSceneIndexes, put=setStaticF_loadedSceneIndexes)) ::System::Collections::Generic::List_1<int32_t>*  loadedSceneIndexes;

/// @brief Field loadedSceneNames, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadedSceneNames, put=setStaticF_loadedSceneNames)) ::System::Collections::Generic::List_1<::StringW>*  loadedSceneNames;

/// @brief Field mapBundle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mapBundle, put=setStaticF_mapBundle)) ::UnityW<::UnityEngine::AssetBundle>  mapBundle;

/// @brief Field mapLoadFinishedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mapLoadFinishedCallback, put=setStaticF_mapLoadFinishedCallback)) ::System::Action_1<bool>*  mapLoadFinishedCallback;

/// @brief Field mapLoadProgressCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mapLoadProgressCallback, put=setStaticF_mapLoadProgressCallback)) ::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  mapLoadProgressCallback;

/// @brief Field mapperAssetCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_mapperAssetCount, put=setStaticF_mapperAssetCount)) int32_t  mapperAssetCount;

/// @brief Field masterAudioMixer, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_masterAudioMixer, put=__cordl_internal_set_masterAudioMixer)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  masterAudioMixer;

/// @brief Field maxPlayersForMap, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_maxPlayersForMap, put=setStaticF_maxPlayersForMap)) uint8_t  maxPlayersForMap;

/// @brief Field monkeGravityControllersToReplace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_monkeGravityControllersToReplace, put=setStaticF_monkeGravityControllersToReplace)) ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>*  monkeGravityControllersToReplace;

/// @brief Field numObjectsToProcessPerFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_numObjectsToProcessPerFrame, put=setStaticF_numObjectsToProcessPerFrame)) int32_t  numObjectsToProcessPerFrame;

/// @brief Field objectsProcessedForLoadingScene, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_objectsProcessedForLoadingScene, put=setStaticF_objectsProcessedForLoadingScene)) int32_t  objectsProcessedForLoadingScene;

/// @brief Field objectsProcessedThisFrame, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_objectsProcessedThisFrame, put=setStaticF_objectsProcessedThisFrame)) int32_t  objectsProcessedThisFrame;

/// @brief Field placeholderParent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_placeholderParent, put=__cordl_internal_set_placeholderParent)) ::UnityW<::UnityEngine::GameObject>  placeholderParent;

/// @brief Field placeholderReplacements, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_placeholderReplacements, put=setStaticF_placeholderReplacements)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  placeholderReplacements;

/// @brief Field publicJoinTrigger, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_publicJoinTrigger, put=__cordl_internal_set_publicJoinTrigger)) ::UnityW<::UnityEngine::GameObject>  publicJoinTrigger;

/// @brief Field queuedLoadZoneRequests, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_queuedLoadZoneRequests, put=setStaticF_queuedLoadZoneRequests)) ::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*  queuedLoadZoneRequests;

/// @brief Field refreshReviveStations, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_refreshReviveStations, put=setStaticF_refreshReviveStations)) bool  refreshReviveStations;

/// @brief Field replacedGravityZones, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_replacedGravityZones, put=setStaticF_replacedGravityZones)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  replacedGravityZones;

/// @brief Field reviveStationPrefab, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveStationPrefab, put=__cordl_internal_set_reviveStationPrefab)) ::UnityW<::UnityEngine::GameObject>  reviveStationPrefab;

/// @brief Field ropeSwingPrefab, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_ropeSwingPrefab, put=__cordl_internal_set_ropeSwingPrefab)) ::UnityW<::UnityEngine::GameObject>  ropeSwingPrefab;

/// @brief Field runningAsyncLoad, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_runningAsyncLoad, put=setStaticF_runningAsyncLoad)) bool  runningAsyncLoad;

/// @brief Field sceneLoadedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneLoadedCallback, put=setStaticF_sceneLoadedCallback)) ::System::Action_1<::StringW>*  sceneLoadedCallback;

/// @brief Field sceneUnloadedCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_sceneUnloadedCallback, put=setStaticF_sceneUnloadedCallback)) ::System::Action_1<::StringW>*  sceneUnloadedCallback;

/// @brief Field shouldAbortMapLoading, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_shouldAbortMapLoading, put=setStaticF_shouldAbortMapLoading)) bool  shouldAbortMapLoading;

/// @brief Field shouldAbortSceneLoad, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_shouldAbortSceneLoad, put=setStaticF_shouldAbortSceneLoad)) bool  shouldAbortSceneLoad;

/// @brief Field sizeChangerCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_sizeChangerCount, put=setStaticF_sizeChangerCount)) int32_t  sizeChangerCount;

/// @brief Field storeCheckoutCounterPrefab, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeCheckoutCounterPrefab, put=__cordl_internal_set_storeCheckoutCounterPrefab)) ::UnityW<::UnityEngine::GameObject>  storeCheckoutCounterPrefab;

/// @brief Field storeCheckouts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_storeCheckouts, put=setStaticF_storeCheckouts)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  storeCheckouts;

/// @brief Field storeDisplayStandPrefab, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeDisplayStandPrefab, put=__cordl_internal_set_storeDisplayStandPrefab)) ::UnityW<::UnityEngine::GameObject>  storeDisplayStandPrefab;

/// @brief Field storeDisplayStands, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_storeDisplayStands, put=setStaticF_storeDisplayStands)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  storeDisplayStands;

/// @brief Field storeTryOnAreaPrefab, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeTryOnAreaPrefab, put=__cordl_internal_set_storeTryOnAreaPrefab)) ::UnityW<::UnityEngine::GameObject>  storeTryOnAreaPrefab;

/// @brief Field storeTryOnAreas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_storeTryOnAreas, put=setStaticF_storeTryOnAreas)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  storeTryOnAreas;

/// @brief Field storeTryOnConsolePrefab, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_storeTryOnConsolePrefab, put=__cordl_internal_set_storeTryOnConsolePrefab)) ::UnityW<::UnityEngine::GameObject>  storeTryOnConsolePrefab;

/// @brief Field storeTryOnConsoles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_storeTryOnConsoles, put=setStaticF_storeTryOnConsoles)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  storeTryOnConsoles;

/// @brief Field teleporters, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_teleporters, put=setStaticF_teleporters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  teleporters;

/// @brief Field totalObjectsInLoadingScene, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_totalObjectsInLoadingScene, put=setStaticF_totalObjectsInLoadingScene)) int32_t  totalObjectsInLoadingScene;

/// @brief Field unloadMapCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unloadMapCallback, put=setStaticF_unloadMapCallback)) ::System::Action*  unloadMapCallback;

/// @brief Field usingDynamicLighting, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_usingDynamicLighting, put=setStaticF_usingDynamicLighting)) bool  usingDynamicLighting;

/// @brief Field virtualStumpMesh, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtualStumpMesh, put=__cordl_internal_set_virtualStumpMesh)) ::UnityW<::UnityEngine::GameObject>  virtualStumpMesh;

/// @brief Field waterVolumePrefab, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterVolumePrefab, put=__cordl_internal_set_waterVolumePrefab)) ::UnityW<::UnityEngine::GameObject>  waterVolumePrefab;

/// @brief Field ziplinePrefab, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_ziplinePrefab, put=__cordl_internal_set_ziplinePrefab)) ::UnityW<::UnityEngine::GameObject>  ziplinePrefab;

/// @brief Field zoneLoadingCoroutine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zoneLoadingCoroutine, put=setStaticF_zoneLoadingCoroutine)) ::UnityEngine::Coroutine*  zoneLoadingCoroutine;

/// @brief Field zoneShaderSettingsTrigger, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_zoneShaderSettingsTrigger, put=__cordl_internal_set_zoneShaderSettingsTrigger)) ::UnityW<::UnityEngine::GameObject>  zoneShaderSettingsTrigger;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// [IteratorStateMachine(typeof(CustomMapLoader::<AbortMapLoad>d__135))]
/// @brief Method AbortMapLoad, addr 0x59ac324, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* AbortMapLoad() ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<AbortSceneLoad>d__137))]
/// @brief Method AbortSceneLoad, addr 0x59b3f60, size 0x60, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* AbortSceneLoad(int32_t  sceneIndex) ;

/// @brief Method Awake, addr 0x59aa220, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CacheLightmaps, addr 0x59b2838, size 0x44c, virtual false, abstract: false, final false
static inline void CacheLightmaps() ;

/// @brief Method CleanupPlaceholders, addr 0x59b4afc, size 0x188, virtual false, abstract: false, final false
static inline void CleanupPlaceholders() ;

/// @brief Method CloseDoorAndUnloadMap, addr 0x59b3c90, size 0x114, virtual false, abstract: false, final false
static inline void CloseDoorAndUnloadMap(::System::Action*  unloadCompleted) ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<CloseDoorAndUnloadMapCoroutine>d__133))]
/// @brief Method CloseDoorAndUnloadMapCoroutine, addr 0x59b3e60, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* CloseDoorAndUnloadMapCoroutine() ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<FinalizeSceneLoad>d__114))]
/// @brief Method FinalizeSceneLoad, addr 0x59ad270, size 0x94, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* FinalizeSceneLoad(::GT_CustomMapSupportRuntime::MapDescriptor*  sceneDescriptor, bool  useProgressCallback, int32_t  startingProgress, int32_t  endingProgress) ;

/// @brief Method GetCustomMapsDefaultSpawnLocation, addr 0x59b5548, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetCustomMapsDefaultSpawnLocation() ;

/// @brief Method GetLoadingMapModId, addr 0x59b52ec, size 0x58, virtual false, abstract: false, final false
static inline int64_t GetLoadingMapModId() ;

/// @brief Method GetLuauGamemodeScript, addr 0x59b543c, size 0x8c, virtual false, abstract: false, final false
static inline ::StringW GetLuauGamemodeScript() ;

/// @brief Method GetPackageInfo, addr 0x59b4d90, size 0x1d4, virtual false, abstract: false, final false
static inline ::GT_CustomMapSupportRuntime::MapPackageInfo* GetPackageInfo(::StringW  packageInfoFilePath) ;

/// @brief Method GetRoomSizeForCurrentlyLoadedMap, addr 0x59b5344, size 0x78, virtual false, abstract: false, final false
static inline uint8_t GetRoomSizeForCurrentlyLoadedMap() ;

/// @brief Method GetSceneIndex, addr 0x59ab570, size 0x104, virtual false, abstract: false, final false
static inline int32_t GetSceneIndex(::StringW  sceneName) ;

/// @brief Method GetSceneNameFromFilePath, addr 0x59b4cdc, size 0xb4, virtual false, abstract: false, final false
static inline ::StringW GetSceneNameFromFilePath(::StringW  filePath) ;

/// @brief Method IBuildValidation.BuildValidationCheck, addr 0x59b56dc, size 0x100, virtual true, abstract: false, final true
inline bool IBuildValidation_BuildValidationCheck() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitOnLoad, addr 0x59a9c08, size 0x618, virtual false, abstract: false, final false
static inline void InitOnLoad() ;

/// @brief Method Initialize, addr 0x59aa670, size 0xb8, virtual false, abstract: false, final false
static inline void Initialize(::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  onLoadProgress, ::System::Action_1<bool>*  onLoadFinished, ::System::Action_1<::StringW>*  onSceneLoaded, ::System::Action_1<::StringW>*  onSceneUnloaded) ;

/// @brief Method InitializeComponentsPhaseOne, addr 0x59ad3c8, size 0x7c, virtual false, abstract: false, final false
static inline void InitializeComponentsPhaseOne(::UnityEngine::GameObject*  childGameObject) ;

/// @brief Method InitializeComponentsPhaseTwo, addr 0x59b1630, size 0x49c, virtual false, abstract: false, final false
static inline void InitializeComponentsPhaseTwo() ;

/// @brief Method IsCustomScene, addr 0x59b53bc, size 0x80, virtual false, abstract: false, final false
static inline bool IsCustomScene(::StringW  sceneName) ;

/// @brief Method IsDevModeEnabled, addr 0x59b54c8, size 0x80, virtual false, abstract: false, final false
static inline bool IsDevModeEnabled() ;

/// @brief Method IsLoading, addr 0x59b5294, size 0x58, virtual false, abstract: false, final false
static inline bool IsLoading() ;

/// @brief Method IsMapLoaded, addr 0x59b3da4, size 0x60, virtual false, abstract: false, final false
static inline bool IsMapLoaded() ;

/// @brief Method IsMapLoaded, addr 0x59aa93c, size 0x1b4, virtual false, abstract: false, final false
static inline bool IsMapLoaded(::Modio::Mods::ModId  mapModId) ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<LoadAssetBundle>d__104))]
/// @brief Method LoadAssetBundle, addr 0x59aaaf0, size 0x98, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* LoadAssetBundle(int64_t  mapModID, ::StringW  packageInfoFilePath, ::System::Action_2<bool,bool>*  OnLoadComplete) ;

/// @brief Method LoadInitialSceneNames, addr 0x59aac80, size 0x1d4, virtual false, abstract: false, final false
static inline void LoadInitialSceneNames() ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<LoadInitialScenesCoroutine>d__107))]
/// @brief Method LoadInitialScenesCoroutine, addr 0x59ac2b0, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* LoadInitialScenesCoroutine(::ArrayW<int32_t>  sceneIndexes) ;

/// @brief Method LoadLightmaps, addr 0x59b2c84, size 0x2a8, virtual false, abstract: false, final false
static inline void LoadLightmaps(::ArrayW<::UnityEngine::Texture2D*>  colorMaps, ::ArrayW<::UnityEngine::Texture2D*>  dirMaps) ;

/// @brief Method LoadMap, addr 0x59aa728, size 0x214, virtual false, abstract: false, final false
static inline void LoadMap(int64_t  mapModId, ::StringW  mapFilePath) ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<LoadSceneFromAssetBundle>d__110))]
/// @brief Method LoadSceneFromAssetBundle, addr 0x59ac40c, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* LoadSceneFromAssetBundle(int32_t  sceneIndex, ::System::Action_3<bool,bool,::StringW>*  OnLoadComplete, bool  useProgressCallback, int32_t  startingProgress, int32_t  endingProgress) ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<LoadScenesCoroutine>d__109))]
/// @brief Method LoadScenesCoroutine, addr 0x59ac37c, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* LoadScenesCoroutine(::ArrayW<int32_t>  sceneIndexes, ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  loadCompleteCallback) ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<LoadZoneCoroutine>d__131))]
/// @brief Method LoadZoneCoroutine, addr 0x59b38b0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* LoadZoneCoroutine(::ArrayW<int32_t>  loadScenes, ::ArrayW<int32_t>  unloadScenes) ;

/// @brief Method LoadZoneTriggered, addr 0x59b3940, size 0x350, virtual false, abstract: false, final false
static inline void LoadZoneTriggered(::ArrayW<int32_t>  loadSceneIndexes, ::ArrayW<int32_t>  unloadSceneIndexes, ::System::Action_1<::StringW>*  onSceneLoaded, ::System::Action_1<::StringW>*  onSceneUnloaded) ;

/// @brief Method LoadedMapWantsHoldingHandsDisabled, addr 0x59b55d4, size 0x108, virtual false, abstract: false, final false
static inline bool LoadedMapWantsHoldingHandsDisabled() ;

static inline ::GlobalNamespace::CustomMapLoader* New_ctor() ;

/// @brief Method OnAssetBundleLoaded, addr 0x59aae54, size 0x71c, virtual false, abstract: false, final false
static inline void OnAssetBundleLoaded(bool  loadSucceeded, bool  loadAborted) ;

/// @brief Method OnInitialLoadComplete, addr 0x59ab674, size 0xc3c, virtual false, abstract: false, final false
static inline void OnInitialLoadComplete(bool  loadSucceeded, bool  loadAborted) ;

/// @brief Method OpenDoorToMap, addr 0x59aab88, size 0xf8, virtual false, abstract: false, final false
static inline bool OpenDoorToMap() ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<ProcessChildObjects>d__115))]
/// @brief Method ProcessChildObjects, addr 0x59ad32c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* ProcessChildObjects(::UnityEngine::GameObject*  parent, bool  useProgressCallback, int32_t  startingProgress, int32_t  endingProgress) ;

/// @brief Method RemoveUnloadingStorePrefabs, addr 0x59b40e0, size 0xa1c, virtual false, abstract: false, final false
static inline void RemoveUnloadingStorePrefabs(::UnityEngine::SceneManagement::Scene  unloadingScene) ;

/// @brief Method ReplaceDataOnlyScripts, addr 0x59ad7a4, size 0xec4, virtual false, abstract: false, final false
static inline void ReplaceDataOnlyScripts(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method ReplaceGravityDataOnlyScripts, addr 0x59b2524, size 0x314, virtual false, abstract: false, final false
static inline void ReplaceGravityDataOnlyScripts(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method ReplacePlaceholders, addr 0x59ae668, size 0x27dc, virtual false, abstract: false, final false
static inline void ReplacePlaceholders(::UnityEngine::GameObject*  placeholderGameObject) ;

/// @brief Method RequestAbortMapLoad, addr 0x59b3e04, size 0x5c, virtual false, abstract: false, final false
static inline void RequestAbortMapLoad() ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<ResetLightmaps>d__142))]
/// @brief Method ResetLightmaps, addr 0x59b4c84, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* ResetLightmaps() ;

/// @brief Method ResetToInitialZone, addr 0x59b3104, size 0x7ac, virtual false, abstract: false, final false
static inline void ResetToInitialZone(::System::Action_1<::StringW>*  onSceneLoaded, ::System::Action_1<::StringW>*  onSceneUnloaded) ;

/// @brief Method ResolveVirtualStumpColliderOverlaps, addr 0x59acd8c, size 0x4e4, virtual false, abstract: false, final false
static inline void ResolveVirtualStumpColliderOverlaps(::StringW  sceneName) ;

/// @brief Method SanitizeObject, addr 0x59ac608, size 0x784, virtual false, abstract: false, final false
static inline bool SanitizeObject(::UnityEngine::GameObject*  gameObject, ::UnityEngine::GameObject*  mapRoot) ;

/// @brief Method SanitizeObjectRecursive, addr 0x59ac4b0, size 0x158, virtual false, abstract: false, final false
static inline void SanitizeObjectRecursive(::UnityEngine::GameObject*  rootObject, ::UnityEngine::GameObject*  mapRoot) ;

/// @brief Method SetZoneDynamicLighting, addr 0x59a9ad8, size 0x130, virtual false, abstract: false, final false
static inline void SetZoneDynamicLighting(bool  enable) ;

/// @brief Method SetupCollisions, addr 0x59ad444, size 0x360, virtual false, abstract: false, final false
static inline void SetupCollisions(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method SetupDynamicLight, addr 0x59b0e44, size 0x244, virtual false, abstract: false, final false
static inline void SetupDynamicLight(::UnityEngine::GameObject*  dynamicLightGameObject) ;

/// @brief Method SetupReviveStation, addr 0x59b12e8, size 0x348, virtual false, abstract: false, final false
static inline void SetupReviveStation(::UnityEngine::GameObject*  gameObject) ;

/// @brief Method Start, addr 0x59aa380, size 0x2f0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StoreMapEntity, addr 0x59b1088, size 0x260, virtual false, abstract: false, final false
static inline void StoreMapEntity(::UnityEngine::GameObject*  entityGameObject) ;

/// @brief Method UnloadLightmaps, addr 0x59b2f2c, size 0x1d8, virtual false, abstract: false, final false
static inline void UnloadLightmaps() ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<UnloadMapCoroutine>d__136))]
/// @brief Method UnloadMapCoroutine, addr 0x59b3f08, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* UnloadMapCoroutine() ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<UnloadSceneCoroutine>d__139))]
/// @brief Method UnloadSceneCoroutine, addr 0x59b405c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* UnloadSceneCoroutine(int32_t  sceneIndex, ::System::Action*  OnUnloadComplete) ;

/// [IteratorStateMachine(typeof(CustomMapLoader::<UnloadScenesCoroutine>d__138))]
/// @brief Method UnloadScenesCoroutine, addr 0x59b3fe8, size 0x74, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* UnloadScenesCoroutine(::ArrayW<int32_t>  sceneIndexes) ;

/// @brief Method ValidateStorePlaceholderPosition, addr 0x59b2004, size 0x520, virtual false, abstract: false, final false
static inline bool ValidateStorePlaceholderPosition(::UnityEngine::GameObject*  storePlaceholder) ;

/// @brief Method ValidateTeleporterDestination, addr 0x59b1acc, size 0x538, virtual false, abstract: false, final false
static inline bool ValidateTeleporterDestination(::UnityEngine::Transform*  teleportTarget) ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_CustomMapsDefaultSpawnLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_CustomMapsDefaultSpawnLocation() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_DefaultFont() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_DefaultFont() ;

constexpr ::UnityW<::GlobalNamespace::CustomMapAccessDoor> const& __cordl_internal_get_accessDoor() const;

constexpr ::UnityW<::GlobalNamespace::CustomMapAccessDoor>& __cordl_internal_get_accessDoor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_atmNoShellPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_atmNoShellPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_atmPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_atmPrefab() ;

constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>* const& __cordl_internal_get_availableModesForOldMaps() const;

constexpr ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*& __cordl_internal_get_availableModesForOldMaps() ;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents> const& __cordl_internal_get_compositeTryOnArea() const;

constexpr ::UnityW<::GlobalNamespace::CompositeTriggerEvents>& __cordl_internal_get_compositeTryOnArea() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_customMapZoneShaderSettings() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_customMapZoneShaderSettings() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get_dayNightManager() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get_dayNightManager() ;

constexpr ::GorillaGameModes::GameModeType const& __cordl_internal_get_defaultGameModeForNonCustomOldMaps() const;

constexpr ::GorillaGameModes::GameModeType& __cordl_internal_get_defaultGameModeForNonCustomOldMaps() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& __cordl_internal_get_defaultLavaParameters() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& __cordl_internal_get_defaultLavaParameters() ;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId> const& __cordl_internal_get_defaultNexusGroupId() const;

constexpr ::UnityW<::GlobalNamespace::NexusGroupId>& __cordl_internal_get_defaultNexusGroupId() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters> const& __cordl_internal_get_defaultWaterParameters() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>& __cordl_internal_get_defaultWaterParameters() ;

constexpr ::StringW const& __cordl_internal_get_dontDestroyOnLoadSceneName() const;

constexpr ::StringW& __cordl_internal_get_dontDestroyOnLoadSceneName() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_forceVolumePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_forceVolumePrefab() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_ghostReactorManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_ghostReactorManager() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_gliderWindVolume() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_gliderWindVolume() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_hoverboardDispenserPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_hoverboardDispenserPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_leafGlider() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_leafGlider() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>> const& __cordl_internal_get_leafGliders() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>>& __cordl_internal_get_leafGliders() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_loadScenesCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_loadScenesCoroutine() ;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& __cordl_internal_get_masterAudioMixer() const;

constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& __cordl_internal_get_masterAudioMixer() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_placeholderParent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_placeholderParent() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_publicJoinTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_publicJoinTrigger() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_reviveStationPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_reviveStationPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ropeSwingPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ropeSwingPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_storeCheckoutCounterPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_storeCheckoutCounterPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_storeDisplayStandPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_storeDisplayStandPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_storeTryOnAreaPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_storeTryOnAreaPrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_storeTryOnConsolePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_storeTryOnConsolePrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_virtualStumpMesh() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_virtualStumpMesh() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_waterVolumePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_waterVolumePrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_ziplinePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_ziplinePrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_zoneShaderSettingsTrigger() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_zoneShaderSettingsTrigger() ;

constexpr void __cordl_internal_set_CustomMapsDefaultSpawnLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_DefaultFont(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set_accessDoor(::UnityW<::GlobalNamespace::CustomMapAccessDoor>  value) ;

constexpr void __cordl_internal_set_atmNoShellPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_atmPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_availableModesForOldMaps(::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  value) ;

constexpr void __cordl_internal_set_compositeTryOnArea(::UnityW<::GlobalNamespace::CompositeTriggerEvents>  value) ;

constexpr void __cordl_internal_set_customMapZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

constexpr void __cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

constexpr void __cordl_internal_set_defaultGameModeForNonCustomOldMaps(::GorillaGameModes::GameModeType  value) ;

constexpr void __cordl_internal_set_defaultLavaParameters(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value) ;

constexpr void __cordl_internal_set_defaultNexusGroupId(::UnityW<::GlobalNamespace::NexusGroupId>  value) ;

constexpr void __cordl_internal_set_defaultWaterParameters(::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  value) ;

constexpr void __cordl_internal_set_dontDestroyOnLoadSceneName(::StringW  value) ;

constexpr void __cordl_internal_set_forceVolumePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_gliderWindVolume(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_hoverboardDispenserPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leafGlider(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_leafGliders(::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>>  value) ;

constexpr void __cordl_internal_set_loadScenesCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_masterAudioMixer(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value) ;

constexpr void __cordl_internal_set_placeholderParent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_publicJoinTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_reviveStationPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ropeSwingPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_storeCheckoutCounterPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_storeDisplayStandPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_storeTryOnAreaPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_storeTryOnConsolePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_virtualStumpMesh(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_waterVolumePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_ziplinePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_zoneShaderSettingsTrigger(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x59b57dc, size 0x1f0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_APPROVED_LAYERS() ;

static inline bool getStaticF__CanLoadEntities_k__BackingField() ;

static inline ::ArrayW<::StringW> getStaticF_assetBundleSceneFilePaths() ;

static inline int64_t getStaticF_attemptedLoadID() ;

static inline ::StringW getStaticF_attemptedSceneToLoad() ;

static inline ::ArrayW<::System::Type*> getStaticF_badComponents() ;

static inline ::StringW getStaticF_cachedExceptionMessage() ;

static inline ::StringW getStaticF_cachedLuauScript() ;

static inline ::System::Collections::Generic::List_1<::System::Type*>* getStaticF_componentAllowlist() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_componentTypeStringAllowList() ;

static inline ::UnityW<::UnityEngine::GameObject> getStaticF_customMapATM() ;

static inline bool getStaticF_devModeEnabled() ;

static inline bool getStaticF_disableHoldingHandsAllModes() ;

static inline bool getStaticF_disableHoldingHandsCustomMode() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>* getStaticF_entitiesToCreate() ;

static inline bool getStaticF_errorEncounteredDuringLoad() ;

static inline int32_t getStaticF_gravityZoneCount() ;

static inline int32_t getStaticF_handHoldCount() ;

static inline bool getStaticF_hasInstance() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_initialSceneIndexes() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_initialSceneNames() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* getStaticF_initializePhaseTwoComponents() ;

static inline ::UnityW<::GlobalNamespace::CustomMapLoader> getStaticF_instance() ;

static inline bool getStaticF_isLoading() ;

static inline bool getStaticF_isUnloading() ;

static inline int32_t getStaticF_leafGliderIndex() ;

static inline ::ArrayW<::UnityEngine::LightmapData*> getStaticF_lightmaps() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* getStaticF_lightmapsToKeep() ;

static inline int64_t getStaticF_loadedMapModFileId() ;

static inline ::Modio::Mods::ModId getStaticF_loadedMapModId() ;

static inline ::GT_CustomMapSupportRuntime::MapPackageInfo* getStaticF_loadedMapPackageInfo() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_loadedSceneFilePaths() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_loadedSceneIndexes() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_loadedSceneNames() ;

static inline ::UnityW<::UnityEngine::AssetBundle> getStaticF_mapBundle() ;

static inline ::System::Action_1<bool>* getStaticF_mapLoadFinishedCallback() ;

static inline ::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>* getStaticF_mapLoadProgressCallback() ;

static inline int32_t getStaticF_mapperAssetCount() ;

static inline uint8_t getStaticF_maxPlayersForMap() ;

static inline ::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>* getStaticF_monkeGravityControllersToReplace() ;

static inline int32_t getStaticF_numObjectsToProcessPerFrame() ;

static inline int32_t getStaticF_objectsProcessedForLoadingScene() ;

static inline int32_t getStaticF_objectsProcessedThisFrame() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_placeholderReplacements() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>* getStaticF_queuedLoadZoneRequests() ;

static inline bool getStaticF_refreshReviveStations() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>* getStaticF_replacedGravityZones() ;

static inline bool getStaticF_runningAsyncLoad() ;

static inline ::System::Action_1<::StringW>* getStaticF_sceneLoadedCallback() ;

static inline ::System::Action_1<::StringW>* getStaticF_sceneUnloadedCallback() ;

static inline bool getStaticF_shouldAbortMapLoading() ;

static inline bool getStaticF_shouldAbortSceneLoad() ;

static inline int32_t getStaticF_sizeChangerCount() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_storeCheckouts() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_storeDisplayStands() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_storeTryOnAreas() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* getStaticF_storeTryOnConsoles() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>* getStaticF_teleporters() ;

static inline int32_t getStaticF_totalObjectsInLoadingScene() ;

static inline ::System::Action* getStaticF_unloadMapCallback() ;

static inline bool getStaticF_usingDynamicLighting() ;

static inline ::UnityEngine::Coroutine* getStaticF_zoneLoadingCoroutine() ;

/// [CompilerGenerated]
/// @brief Method get_CanLoadEntities, addr 0x59b523c, size 0x58, virtual false, abstract: false, final false
static inline bool get_CanLoadEntities() ;

/// @brief Method get_LoadedMapGravityZoneCount, addr 0x59b507c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_LoadedMapGravityZoneCount() ;

/// @brief Method get_LoadedMapHandHoldCount, addr 0x59b512c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_LoadedMapHandHoldCount() ;

/// @brief Method get_LoadedMapMapperAssetCount, addr 0x59b5184, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_LoadedMapMapperAssetCount() ;

/// @brief Method get_LoadedMapModFileId, addr 0x59b4fbc, size 0x58, virtual false, abstract: false, final false
static inline int64_t get_LoadedMapModFileId() ;

/// @brief Method get_LoadedMapModId, addr 0x59b4f64, size 0x58, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModId get_LoadedMapModId() ;

/// @brief Method get_LoadedMapSizeChangerCount, addr 0x59b50d4, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_LoadedMapSizeChangerCount() ;

/// @brief Method get_LoadedMapSupportVersion, addr 0x59b5014, size 0x68, virtual false, abstract: false, final false
static inline int32_t get_LoadedMapSupportVersion() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

static inline void setStaticF_APPROVED_LAYERS(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF__CanLoadEntities_k__BackingField(bool  value) ;

static inline void setStaticF_assetBundleSceneFilePaths(::ArrayW<::StringW>  value) ;

static inline void setStaticF_attemptedLoadID(int64_t  value) ;

static inline void setStaticF_attemptedSceneToLoad(::StringW  value) ;

static inline void setStaticF_badComponents(::ArrayW<::System::Type*>  value) ;

static inline void setStaticF_cachedExceptionMessage(::StringW  value) ;

static inline void setStaticF_cachedLuauScript(::StringW  value) ;

static inline void setStaticF_componentAllowlist(::System::Collections::Generic::List_1<::System::Type*>*  value) ;

static inline void setStaticF_componentTypeStringAllowList(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_customMapATM(::UnityW<::UnityEngine::GameObject>  value) ;

static inline void setStaticF_devModeEnabled(bool  value) ;

static inline void setStaticF_disableHoldingHandsAllModes(bool  value) ;

static inline void setStaticF_disableHoldingHandsCustomMode(bool  value) ;

static inline void setStaticF_entitiesToCreate(::System::Collections::Generic::List_1<::UnityW<::GT_CustomMapSupportRuntime::MapEntity>>*  value) ;

static inline void setStaticF_errorEncounteredDuringLoad(bool  value) ;

static inline void setStaticF_gravityZoneCount(int32_t  value) ;

static inline void setStaticF_handHoldCount(int32_t  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_initialSceneIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_initialSceneNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_initializePhaseTwoComponents(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value) ;

static inline void setStaticF_instance(::UnityW<::GlobalNamespace::CustomMapLoader>  value) ;

static inline void setStaticF_isLoading(bool  value) ;

static inline void setStaticF_isUnloading(bool  value) ;

static inline void setStaticF_leafGliderIndex(int32_t  value) ;

static inline void setStaticF_lightmaps(::ArrayW<::UnityEngine::LightmapData*>  value) ;

static inline void setStaticF_lightmapsToKeep(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

static inline void setStaticF_loadedMapModFileId(int64_t  value) ;

static inline void setStaticF_loadedMapModId(::Modio::Mods::ModId  value) ;

static inline void setStaticF_loadedMapPackageInfo(::GT_CustomMapSupportRuntime::MapPackageInfo*  value) ;

static inline void setStaticF_loadedSceneFilePaths(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_loadedSceneIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_loadedSceneNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

static inline void setStaticF_mapBundle(::UnityW<::UnityEngine::AssetBundle>  value) ;

static inline void setStaticF_mapLoadFinishedCallback(::System::Action_1<bool>*  value) ;

static inline void setStaticF_mapLoadProgressCallback(::System::Action_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  value) ;

static inline void setStaticF_mapperAssetCount(int32_t  value) ;

static inline void setStaticF_maxPlayersForMap(uint8_t  value) ;

static inline void setStaticF_monkeGravityControllersToReplace(::System::Collections::Generic::List_1<::System::ValueTuple_2<::UnityW<::GT_CustomMapSupportRuntime::MonkeGravityControllerSettings>,::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>>>*  value) ;

static inline void setStaticF_numObjectsToProcessPerFrame(int32_t  value) ;

static inline void setStaticF_objectsProcessedForLoadingScene(int32_t  value) ;

static inline void setStaticF_objectsProcessedThisFrame(int32_t  value) ;

static inline void setStaticF_placeholderReplacements(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_queuedLoadZoneRequests(::System::Collections::Generic::List_1<::GlobalNamespace::CustomMapLoader_LoadZoneRequest>*  value) ;

static inline void setStaticF_refreshReviveStations(bool  value) ;

static inline void setStaticF_replacedGravityZones(::System::Collections::Generic::Dictionary_2<::UnityW<::GT_CustomMapSupportRuntime::BasicGravityZoneSettings>,::UnityW<::GorillaTag::Gravity::BasicGravityZone>>*  value) ;

static inline void setStaticF_runningAsyncLoad(bool  value) ;

static inline void setStaticF_sceneLoadedCallback(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_sceneUnloadedCallback(::System::Action_1<::StringW>*  value) ;

static inline void setStaticF_shouldAbortMapLoading(bool  value) ;

static inline void setStaticF_shouldAbortSceneLoad(bool  value) ;

static inline void setStaticF_sizeChangerCount(int32_t  value) ;

static inline void setStaticF_storeCheckouts(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_storeDisplayStands(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_storeTryOnAreas(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_storeTryOnConsoles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

static inline void setStaticF_teleporters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Component>>*  value) ;

static inline void setStaticF_totalObjectsInLoadingScene(int32_t  value) ;

static inline void setStaticF_unloadMapCallback(::System::Action*  value) ;

static inline void setStaticF_usingDynamicLighting(bool  value) ;

static inline void setStaticF_zoneLoadingCoroutine(::UnityEngine::Coroutine*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CanLoadEntities, addr 0x59b51dc, size 0x60, virtual false, abstract: false, final false
static inline void set_CanLoadEntities(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader(CustomMapLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader(CustomMapLoader const& ) = delete;

/// @brief Field LocalMapModId offset 0xffffffff size 0x8
static constexpr int64_t  LocalMapModId{static_cast<int64_t>(0x3b9ac9ff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2667};

/// [SerializeField]
/// @brief Field defaultNexusGroupId, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::NexusGroupId>  ___defaultNexusGroupId;

/// @brief Field CustomMapsDefaultSpawnLocation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___CustomMapsDefaultSpawnLocation;

/// @brief Field accessDoor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CustomMapAccessDoor>  ___accessDoor;

/// [FormerlySerializedAs("networkTrigger")]
/// @brief Field publicJoinTrigger, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___publicJoinTrigger;

/// [SerializeField]
/// @brief Field dayNightManager, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  ___dayNightManager;

/// [SerializeField]
/// @brief Field ghostReactorManager, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___ghostReactorManager;

/// [SerializeField]
/// @brief Field placeholderParent, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___placeholderParent;

/// [SerializeField]
/// @brief Field leafGliders, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::GliderHoldable>>  ___leafGliders;

/// [SerializeField]
/// @brief Field leafGlider, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___leafGlider;

/// [SerializeField]
/// @brief Field gliderWindVolume, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___gliderWindVolume;

/// [FormerlySerializedAs("waterVolume")]
/// [SerializeField]
/// @brief Field waterVolumePrefab, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___waterVolumePrefab;

/// [SerializeField]
/// @brief Field defaultWaterParameters, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  ___defaultWaterParameters;

/// [SerializeField]
/// @brief Field defaultLavaParameters, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterParameters>  ___defaultLavaParameters;

/// [FormerlySerializedAs("forceVolume")]
/// [SerializeField]
/// @brief Field forceVolumePrefab, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___forceVolumePrefab;

/// [SerializeField]
/// @brief Field atmPrefab, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___atmPrefab;

/// [SerializeField]
/// @brief Field atmNoShellPrefab, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___atmNoShellPrefab;

/// [SerializeField]
/// @brief Field storeDisplayStandPrefab, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___storeDisplayStandPrefab;

/// [SerializeField]
/// @brief Field storeCheckoutCounterPrefab, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___storeCheckoutCounterPrefab;

/// [SerializeField]
/// @brief Field storeTryOnConsolePrefab, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___storeTryOnConsolePrefab;

/// [SerializeField]
/// @brief Field storeTryOnAreaPrefab, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___storeTryOnAreaPrefab;

/// [SerializeField]
/// @brief Field hoverboardDispenserPrefab, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___hoverboardDispenserPrefab;

/// [SerializeField]
/// @brief Field ropeSwingPrefab, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ropeSwingPrefab;

/// [SerializeField]
/// @brief Field ziplinePrefab, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___ziplinePrefab;

/// [SerializeField]
/// @brief Field reviveStationPrefab, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___reviveStationPrefab;

/// [SerializeField]
/// @brief Field zoneShaderSettingsTrigger, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___zoneShaderSettingsTrigger;

/// [SerializeField]
/// @brief Field masterAudioMixer, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  ___masterAudioMixer;

/// [SerializeField]
/// @brief Field customMapZoneShaderSettings, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___customMapZoneShaderSettings;

/// [SerializeField]
/// @brief Field compositeTryOnArea, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::CompositeTriggerEvents>  ___compositeTryOnArea;

/// [SerializeField]
/// @brief Field virtualStumpMesh, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___virtualStumpMesh;

/// [SerializeField]
/// @brief Field availableModesForOldMaps, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaGameModes::GameModeType>*  ___availableModesForOldMaps;

/// [SerializeField]
/// @brief Field defaultGameModeForNonCustomOldMaps, offset: 0x110, size: 0x4, def value: None
 ::GorillaGameModes::GameModeType  ___defaultGameModeForNonCustomOldMaps;

/// @brief Field DefaultFont, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ___DefaultFont;

/// @brief Field loadScenesCoroutine, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___loadScenesCoroutine;

/// @brief Field dontDestroyOnLoadSceneName, offset: 0x128, size: 0x8, def value: None
 ::StringW  ___dontDestroyOnLoadSceneName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___defaultNexusGroupId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___CustomMapsDefaultSpawnLocation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___accessDoor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___publicJoinTrigger) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___dayNightManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___ghostReactorManager) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___placeholderParent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___leafGliders) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___leafGlider) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___gliderWindVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___waterVolumePrefab) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___defaultWaterParameters) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___defaultLavaParameters) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___forceVolumePrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___atmPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___atmNoShellPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___storeDisplayStandPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___storeCheckoutCounterPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___storeTryOnConsolePrefab) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___storeTryOnAreaPrefab) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___hoverboardDispenserPrefab) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___ropeSwingPrefab) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___ziplinePrefab) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___reviveStationPrefab) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___zoneShaderSettingsTrigger) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___masterAudioMixer) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___customMapZoneShaderSettings) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___compositeTryOnArea) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___virtualStumpMesh) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___availableModesForOldMaps) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___defaultGameModeForNonCustomOldMaps) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___DefaultFont) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___loadScenesCoroutine) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader, ___dontDestroyOnLoadSceneName) == 0x128, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader) == 0x130, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<UnloadScenesCoroutine>d__138
class CORDL_TYPE CustomMapLoader__UnloadScenesCoroutine_d__138 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <i>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field sceneIndexes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneIndexes, put=__cordl_internal_set_sceneIndexes)) ::ArrayW<int32_t>  sceneIndexes;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59beec8, size 0xdc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59befa4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59befac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59befe4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59beec4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_sceneIndexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_sceneIndexes() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bee9c, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__UnloadScenesCoroutine_d__138() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__UnloadScenesCoroutine_d__138", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__UnloadScenesCoroutine_d__138(CustomMapLoader__UnloadScenesCoroutine_d__138 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__UnloadScenesCoroutine_d__138", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__UnloadScenesCoroutine_d__138(CustomMapLoader__UnloadScenesCoroutine_d__138 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2666};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sceneIndexes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___sceneIndexes;

/// @brief Field <i>5__2, offset: 0x28, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138, ___sceneIndexes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138, ____i_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__UnloadScenesCoroutine_d__138) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<UnloadSceneCoroutine>d__139
class CORDL_TYPE CustomMapLoader__UnloadSceneCoroutine_d__139 : public ::System::Object {
public:
// Declarations
/// @brief Field OnUnloadComplete, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnUnloadComplete, put=__cordl_internal_set_OnUnloadComplete)) ::System::Action*  OnUnloadComplete;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <sceneName>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneName_5__3, put=__cordl_internal_set__sceneName_5__3)) ::StringW  _sceneName_5__3;

/// @brief Field <scenePathWithExtension>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__scenePathWithExtension_5__2, put=__cordl_internal_set__scenePathWithExtension_5__2)) ::StringW  _scenePathWithExtension_5__2;

/// @brief Field sceneIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneIndex, put=__cordl_internal_set_sceneIndex)) int32_t  sceneIndex;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59be8a0, size 0x5b4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bee54, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bee5c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bee94, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59be89c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action* const& __cordl_internal_get_OnUnloadComplete() const;

constexpr ::System::Action*& __cordl_internal_get_OnUnloadComplete() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::StringW const& __cordl_internal_get__sceneName_5__3() const;

constexpr ::StringW& __cordl_internal_get__sceneName_5__3() ;

constexpr ::StringW const& __cordl_internal_get__scenePathWithExtension_5__2() const;

constexpr ::StringW& __cordl_internal_get__scenePathWithExtension_5__2() ;

constexpr int32_t const& __cordl_internal_get_sceneIndex() const;

constexpr int32_t& __cordl_internal_get_sceneIndex() ;

constexpr void __cordl_internal_set_OnUnloadComplete(::System::Action*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__sceneName_5__3(::StringW  value) ;

constexpr void __cordl_internal_set__scenePathWithExtension_5__2(::StringW  value) ;

constexpr void __cordl_internal_set_sceneIndex(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59be874, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__UnloadSceneCoroutine_d__139() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__UnloadSceneCoroutine_d__139", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__UnloadSceneCoroutine_d__139(CustomMapLoader__UnloadSceneCoroutine_d__139 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__UnloadSceneCoroutine_d__139", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__UnloadSceneCoroutine_d__139(CustomMapLoader__UnloadSceneCoroutine_d__139 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2665};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sceneIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___sceneIndex;

/// @brief Field OnUnloadComplete, offset: 0x28, size: 0x8, def value: None
 ::System::Action*  ___OnUnloadComplete;

/// @brief Field <scenePathWithExtension>5__2, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____scenePathWithExtension_5__2;

/// @brief Field <sceneName>5__3, offset: 0x38, size: 0x8, def value: None
 ::StringW  ____sceneName_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139, ___sceneIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139, ___OnUnloadComplete) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139, ____scenePathWithExtension_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139, ____sceneName_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__UnloadSceneCoroutine_d__139) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<UnloadMapCoroutine>d__136
class CORDL_TYPE CustomMapLoader__UnloadMapCoroutine_d__136 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <sceneIndex>5__2, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__sceneIndex_5__2, put=__cordl_internal_set__sceneIndex_5__2)) int32_t  _sceneIndex_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bdd60, size 0x940, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59be82c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59be834, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59be86c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bdd5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get__sceneIndex_5__2() const;

constexpr int32_t& __cordl_internal_get__sceneIndex_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__sceneIndex_5__2(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bdd34, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__UnloadMapCoroutine_d__136() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__UnloadMapCoroutine_d__136", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__UnloadMapCoroutine_d__136(CustomMapLoader__UnloadMapCoroutine_d__136 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__UnloadMapCoroutine_d__136", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__UnloadMapCoroutine_d__136(CustomMapLoader__UnloadMapCoroutine_d__136 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2664};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <sceneIndex>5__2, offset: 0x20, size: 0x4, def value: None
 int32_t  ____sceneIndex_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136, ____sceneIndex_5__2) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__UnloadMapCoroutine_d__136) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<ResetLightmaps>d__142
class CORDL_TYPE CustomMapLoader__ResetLightmaps_d__142 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bdb84, size 0x168, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bdcec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bdcf4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bdd2c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bdb80, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bdb58, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__ResetLightmaps_d__142() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__ResetLightmaps_d__142", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__ResetLightmaps_d__142(CustomMapLoader__ResetLightmaps_d__142 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__ResetLightmaps_d__142", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__ResetLightmaps_d__142(CustomMapLoader__ResetLightmaps_d__142 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2663};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__ResetLightmaps_d__142) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<ProcessChildObjects>d__115
class CORDL_TYPE CustomMapLoader__ProcessChildObjects_d__115 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <i>5__3, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__3, put=__cordl_internal_set__i_5__3)) int32_t  _i_5__3;

/// @brief Field <progressAmount>5__2, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressAmount_5__2, put=__cordl_internal_set__progressAmount_5__2)) int32_t  _progressAmount_5__2;

/// @brief Field endingProgress, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_endingProgress, put=__cordl_internal_set_endingProgress)) int32_t  endingProgress;

/// @brief Field parent, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_parent, put=__cordl_internal_set_parent)) ::UnityW<::UnityEngine::GameObject>  parent;

/// @brief Field startingProgress, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingProgress, put=__cordl_internal_set_startingProgress)) int32_t  startingProgress;

/// @brief Field useProgressCallback, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useProgressCallback, put=__cordl_internal_set_useProgressCallback)) bool  useProgressCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bd594, size 0x57c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bdb10, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bdb18, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bdb50, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bd590, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get__i_5__3() const;

constexpr int32_t& __cordl_internal_get__i_5__3() ;

constexpr int32_t const& __cordl_internal_get__progressAmount_5__2() const;

constexpr int32_t& __cordl_internal_get__progressAmount_5__2() ;

constexpr int32_t const& __cordl_internal_get_endingProgress() const;

constexpr int32_t& __cordl_internal_get_endingProgress() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_parent() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_parent() ;

constexpr int32_t const& __cordl_internal_get_startingProgress() const;

constexpr int32_t& __cordl_internal_get_startingProgress() ;

constexpr bool const& __cordl_internal_get_useProgressCallback() const;

constexpr bool& __cordl_internal_get_useProgressCallback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__i_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__progressAmount_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_endingProgress(int32_t  value) ;

constexpr void __cordl_internal_set_parent(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_startingProgress(int32_t  value) ;

constexpr void __cordl_internal_set_useProgressCallback(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bd568, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__ProcessChildObjects_d__115() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__ProcessChildObjects_d__115", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__ProcessChildObjects_d__115(CustomMapLoader__ProcessChildObjects_d__115 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__ProcessChildObjects_d__115", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__ProcessChildObjects_d__115(CustomMapLoader__ProcessChildObjects_d__115 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2662};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field parent, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___parent;

/// @brief Field endingProgress, offset: 0x28, size: 0x4, def value: None
 int32_t  ___endingProgress;

/// @brief Field startingProgress, offset: 0x2c, size: 0x4, def value: None
 int32_t  ___startingProgress;

/// @brief Field useProgressCallback, offset: 0x30, size: 0x1, def value: None
 bool  ___useProgressCallback;

/// @brief Field <progressAmount>5__2, offset: 0x34, size: 0x4, def value: None
 int32_t  ____progressAmount_5__2;

/// @brief Field <i>5__3, offset: 0x38, size: 0x4, def value: None
 int32_t  ____i_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, ___parent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, ___endingProgress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, ___startingProgress) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, ___useProgressCallback) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, ____progressAmount_5__2) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115, ____i_5__3) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__ProcessChildObjects_d__115) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<LoadZoneCoroutine>d__131
class CORDL_TYPE CustomMapLoader__LoadZoneCoroutine_d__131 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field loadScenes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadScenes, put=__cordl_internal_set_loadScenes)) ::ArrayW<int32_t>  loadScenes;

/// @brief Field unloadScenes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_unloadScenes, put=__cordl_internal_set_unloadScenes)) ::ArrayW<int32_t>  unloadScenes;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bd260, size 0x2c0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bd520, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bd528, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bd560, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bd25c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_loadScenes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_loadScenes() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_unloadScenes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_unloadScenes() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_loadScenes(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_unloadScenes(::ArrayW<int32_t>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bd234, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__LoadZoneCoroutine_d__131() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadZoneCoroutine_d__131", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__LoadZoneCoroutine_d__131(CustomMapLoader__LoadZoneCoroutine_d__131 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadZoneCoroutine_d__131", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__LoadZoneCoroutine_d__131(CustomMapLoader__LoadZoneCoroutine_d__131 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2661};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field unloadScenes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___unloadScenes;

/// @brief Field loadScenes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___loadScenes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131, ___unloadScenes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131, ___loadScenes) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__LoadZoneCoroutine_d__131) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<LoadScenesCoroutine>d__109
class CORDL_TYPE CustomMapLoader__LoadScenesCoroutine_d__109 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>8__1, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  __8__1;

/// @brief Field <>8__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__2, put=__cordl_internal_set___8__2)) ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*  __8__2;

/// @brief Field <i>5__2, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__2, put=__cordl_internal_set__i_5__2)) int32_t  _i_5__2;

/// @brief Field loadCompleteCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadCompleteCallback, put=__cordl_internal_set_loadCompleteCallback)) ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  loadCompleteCallback;

/// @brief Field sceneIndexes, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneIndexes, put=__cordl_internal_set_sceneIndexes)) ::ArrayW<int32_t>  sceneIndexes;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bccb8, size 0x534, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bd1ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bd1f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bd22c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bccb4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1* const& __cordl_internal_get___8__2() const;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*& __cordl_internal_get___8__2() ;

constexpr int32_t const& __cordl_internal_get__i_5__2() const;

constexpr int32_t& __cordl_internal_get__i_5__2() ;

constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get_loadCompleteCallback() const;

constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get_loadCompleteCallback() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_sceneIndexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_sceneIndexes() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  value) ;

constexpr void __cordl_internal_set___8__2(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*  value) ;

constexpr void __cordl_internal_set__i_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_loadCompleteCallback(::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bcc8c, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__LoadScenesCoroutine_d__109() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadScenesCoroutine_d__109", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__LoadScenesCoroutine_d__109(CustomMapLoader__LoadScenesCoroutine_d__109 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadScenesCoroutine_d__109", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__LoadScenesCoroutine_d__109(CustomMapLoader__LoadScenesCoroutine_d__109 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2660};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field loadCompleteCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  ___loadCompleteCallback;

/// @brief Field sceneIndexes, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___sceneIndexes;

/// @brief Field <>8__1, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  _____8__1;

/// @brief Field <>8__2, offset: 0x38, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1*  _____8__2;

/// @brief Field <i>5__2, offset: 0x40, size: 0x4, def value: None
 int32_t  ____i_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109, ___loadCompleteCallback) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109, ___sceneIndexes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109, _____8__1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109, _____8__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109, ____i_5__2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__LoadScenesCoroutine_d__109) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<LoadSceneFromAssetBundle>d__110
class CORDL_TYPE CustomMapLoader__LoadSceneFromAssetBundle_d__110 : public ::System::Object {
public:
// Declarations
/// @brief Field OnLoadComplete, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoadComplete, put=__cordl_internal_set_OnLoadComplete)) ::System::Action_3<bool,bool,::StringW>*  OnLoadComplete;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <currentProgress>5__3, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentProgress_5__3, put=__cordl_internal_set__currentProgress_5__3)) int32_t  _currentProgress_5__3;

/// @brief Field <progressAmount>5__2, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressAmount_5__2, put=__cordl_internal_set__progressAmount_5__2)) int32_t  _progressAmount_5__2;

/// @brief Field <sceneName>5__4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__sceneName_5__4, put=__cordl_internal_set__sceneName_5__4)) ::StringW  _sceneName_5__4;

/// @brief Field endingProgress, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_endingProgress, put=__cordl_internal_set_endingProgress)) int32_t  endingProgress;

/// @brief Field sceneIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneIndex, put=__cordl_internal_set_sceneIndex)) int32_t  sceneIndex;

/// @brief Field startingProgress, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingProgress, put=__cordl_internal_set_startingProgress)) int32_t  startingProgress;

/// @brief Field useProgressCallback, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_useProgressCallback, put=__cordl_internal_set_useProgressCallback)) bool  useProgressCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bba60, size 0x11e4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bcc44, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bcc4c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bcc84, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bba5c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_3<bool,bool,::StringW>* const& __cordl_internal_get_OnLoadComplete() const;

constexpr ::System::Action_3<bool,bool,::StringW>*& __cordl_internal_get_OnLoadComplete() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get__currentProgress_5__3() const;

constexpr int32_t& __cordl_internal_get__currentProgress_5__3() ;

constexpr int32_t const& __cordl_internal_get__progressAmount_5__2() const;

constexpr int32_t& __cordl_internal_get__progressAmount_5__2() ;

constexpr ::StringW const& __cordl_internal_get__sceneName_5__4() const;

constexpr ::StringW& __cordl_internal_get__sceneName_5__4() ;

constexpr int32_t const& __cordl_internal_get_endingProgress() const;

constexpr int32_t& __cordl_internal_get_endingProgress() ;

constexpr int32_t const& __cordl_internal_get_sceneIndex() const;

constexpr int32_t& __cordl_internal_get_sceneIndex() ;

constexpr int32_t const& __cordl_internal_get_startingProgress() const;

constexpr int32_t& __cordl_internal_get_startingProgress() ;

constexpr bool const& __cordl_internal_get_useProgressCallback() const;

constexpr bool& __cordl_internal_get_useProgressCallback() ;

constexpr void __cordl_internal_set_OnLoadComplete(::System::Action_3<bool,bool,::StringW>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__currentProgress_5__3(int32_t  value) ;

constexpr void __cordl_internal_set__progressAmount_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__sceneName_5__4(::StringW  value) ;

constexpr void __cordl_internal_set_endingProgress(int32_t  value) ;

constexpr void __cordl_internal_set_sceneIndex(int32_t  value) ;

constexpr void __cordl_internal_set_startingProgress(int32_t  value) ;

constexpr void __cordl_internal_set_useProgressCallback(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bba34, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__LoadSceneFromAssetBundle_d__110() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadSceneFromAssetBundle_d__110", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__LoadSceneFromAssetBundle_d__110(CustomMapLoader__LoadSceneFromAssetBundle_d__110 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadSceneFromAssetBundle_d__110", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__LoadSceneFromAssetBundle_d__110(CustomMapLoader__LoadSceneFromAssetBundle_d__110 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2659};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field endingProgress, offset: 0x20, size: 0x4, def value: None
 int32_t  ___endingProgress;

/// @brief Field startingProgress, offset: 0x24, size: 0x4, def value: None
 int32_t  ___startingProgress;

/// @brief Field sceneIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___sceneIndex;

/// @brief Field OnLoadComplete, offset: 0x30, size: 0x8, def value: None
 ::System::Action_3<bool,bool,::StringW>*  ___OnLoadComplete;

/// @brief Field useProgressCallback, offset: 0x38, size: 0x1, def value: None
 bool  ___useProgressCallback;

/// @brief Field <progressAmount>5__2, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____progressAmount_5__2;

/// @brief Field <currentProgress>5__3, offset: 0x40, size: 0x4, def value: None
 int32_t  ____currentProgress_5__3;

/// @brief Field <sceneName>5__4, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____sceneName_5__4;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ___endingProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ___startingProgress) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ___sceneIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ___OnLoadComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ___useProgressCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ____progressAmount_5__2) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ____currentProgress_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110, ____sceneName_5__4) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__LoadSceneFromAssetBundle_d__110) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<LoadInitialScenesCoroutine>d__107
class CORDL_TYPE CustomMapLoader__LoadInitialScenesCoroutine_d__107 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>8__1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  __8__1;

/// @brief Field <>8__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__2, put=__cordl_internal_set___8__2)) ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*  __8__2;

/// @brief Field <progressAmountPerScene>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressAmountPerScene_5__2, put=__cordl_internal_set__progressAmountPerScene_5__2)) int32_t  _progressAmountPerScene_5__2;

/// @brief Field sceneIndexes, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneIndexes, put=__cordl_internal_set_sceneIndexes)) ::ArrayW<int32_t>  sceneIndexes;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bb5c8, size 0x424, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bb9ec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bb9f4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bba2c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bb5c4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*& __cordl_internal_get___8__1() ;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1* const& __cordl_internal_get___8__2() const;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*& __cordl_internal_get___8__2() ;

constexpr int32_t const& __cordl_internal_get__progressAmountPerScene_5__2() const;

constexpr int32_t& __cordl_internal_get__progressAmountPerScene_5__2() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_sceneIndexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_sceneIndexes() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  value) ;

constexpr void __cordl_internal_set___8__2(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*  value) ;

constexpr void __cordl_internal_set__progressAmountPerScene_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bb59c, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__LoadInitialScenesCoroutine_d__107() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadInitialScenesCoroutine_d__107", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__LoadInitialScenesCoroutine_d__107(CustomMapLoader__LoadInitialScenesCoroutine_d__107 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadInitialScenesCoroutine_d__107", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__LoadInitialScenesCoroutine_d__107(CustomMapLoader__LoadInitialScenesCoroutine_d__107 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2658};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sceneIndexes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___sceneIndexes;

/// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  _____8__1;

/// @brief Field <>8__2, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1*  _____8__2;

/// @brief Field <progressAmountPerScene>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____progressAmountPerScene_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107, ___sceneIndexes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107, _____8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107, _____8__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107, ____progressAmountPerScene_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__LoadInitialScenesCoroutine_d__107) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<LoadAssetBundle>d__104
class CORDL_TYPE CustomMapLoader__LoadAssetBundle_d__104 : public ::System::Object {
public:
// Declarations
/// @brief Field OnLoadComplete, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLoadComplete, put=__cordl_internal_set_OnLoadComplete)) ::System::Action_2<bool,bool>*  OnLoadComplete;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <loadBundleRequest>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__loadBundleRequest_5__2, put=__cordl_internal_set__loadBundleRequest_5__2)) ::UnityEngine::AssetBundleCreateRequest*  _loadBundleRequest_5__2;

/// @brief Field mapModID, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_mapModID, put=__cordl_internal_set_mapModID)) int64_t  mapModID;

/// @brief Field packageInfoFilePath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_packageInfoFilePath, put=__cordl_internal_set_packageInfoFilePath)) ::StringW  packageInfoFilePath;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59bacc8, size 0x88c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bb554, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bb55c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59bb594, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59bacc4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Action_2<bool,bool>* const& __cordl_internal_get_OnLoadComplete() const;

constexpr ::System::Action_2<bool,bool>*& __cordl_internal_get_OnLoadComplete() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::AssetBundleCreateRequest* const& __cordl_internal_get__loadBundleRequest_5__2() const;

constexpr ::UnityEngine::AssetBundleCreateRequest*& __cordl_internal_get__loadBundleRequest_5__2() ;

constexpr int64_t const& __cordl_internal_get_mapModID() const;

constexpr int64_t& __cordl_internal_get_mapModID() ;

constexpr ::StringW const& __cordl_internal_get_packageInfoFilePath() const;

constexpr ::StringW& __cordl_internal_get_packageInfoFilePath() ;

constexpr void __cordl_internal_set_OnLoadComplete(::System::Action_2<bool,bool>*  value) ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__loadBundleRequest_5__2(::UnityEngine::AssetBundleCreateRequest*  value) ;

constexpr void __cordl_internal_set_mapModID(int64_t  value) ;

constexpr void __cordl_internal_set_packageInfoFilePath(::StringW  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59bac9c, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__LoadAssetBundle_d__104() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadAssetBundle_d__104", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__LoadAssetBundle_d__104(CustomMapLoader__LoadAssetBundle_d__104 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__LoadAssetBundle_d__104", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__LoadAssetBundle_d__104(CustomMapLoader__LoadAssetBundle_d__104 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2657};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field mapModID, offset: 0x20, size: 0x8, def value: None
 int64_t  ___mapModID;

/// @brief Field packageInfoFilePath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___packageInfoFilePath;

/// @brief Field OnLoadComplete, offset: 0x30, size: 0x8, def value: None
 ::System::Action_2<bool,bool>*  ___OnLoadComplete;

/// @brief Field <loadBundleRequest>5__2, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AssetBundleCreateRequest*  ____loadBundleRequest_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104, ___mapModID) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104, ___packageInfoFilePath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104, ___OnLoadComplete) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104, ____loadBundleRequest_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__LoadAssetBundle_d__104) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<FinalizeSceneLoad>d__114
class CORDL_TYPE CustomMapLoader__FinalizeSceneLoad_d__114 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <processChildrenEndingProgress>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__processChildrenEndingProgress_5__2, put=__cordl_internal_set__processChildrenEndingProgress_5__2)) int32_t  _processChildrenEndingProgress_5__2;

/// @brief Field endingProgress, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_endingProgress, put=__cordl_internal_set_endingProgress)) int32_t  endingProgress;

/// @brief Field sceneDescriptor, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneDescriptor, put=__cordl_internal_set_sceneDescriptor)) ::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor>  sceneDescriptor;

/// @brief Field startingProgress, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_startingProgress, put=__cordl_internal_set_startingProgress)) int32_t  startingProgress;

/// @brief Field useProgressCallback, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_useProgressCallback, put=__cordl_internal_set_useProgressCallback)) bool  useProgressCallback;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59b9e4c, size 0xd1c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59bab68, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59bab70, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59baba8, size 0xf4, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59b9e48, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get__processChildrenEndingProgress_5__2() const;

constexpr int32_t& __cordl_internal_get__processChildrenEndingProgress_5__2() ;

constexpr int32_t const& __cordl_internal_get_endingProgress() const;

constexpr int32_t& __cordl_internal_get_endingProgress() ;

constexpr ::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor> const& __cordl_internal_get_sceneDescriptor() const;

constexpr ::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor>& __cordl_internal_get_sceneDescriptor() ;

constexpr int32_t const& __cordl_internal_get_startingProgress() const;

constexpr int32_t& __cordl_internal_get_startingProgress() ;

constexpr bool const& __cordl_internal_get_useProgressCallback() const;

constexpr bool& __cordl_internal_get_useProgressCallback() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__processChildrenEndingProgress_5__2(int32_t  value) ;

constexpr void __cordl_internal_set_endingProgress(int32_t  value) ;

constexpr void __cordl_internal_set_sceneDescriptor(::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor>  value) ;

constexpr void __cordl_internal_set_startingProgress(int32_t  value) ;

constexpr void __cordl_internal_set_useProgressCallback(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59ad304, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__FinalizeSceneLoad_d__114() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__FinalizeSceneLoad_d__114", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__FinalizeSceneLoad_d__114(CustomMapLoader__FinalizeSceneLoad_d__114 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__FinalizeSceneLoad_d__114", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__FinalizeSceneLoad_d__114(CustomMapLoader__FinalizeSceneLoad_d__114 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2656};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field endingProgress, offset: 0x20, size: 0x4, def value: None
 int32_t  ___endingProgress;

/// @brief Field startingProgress, offset: 0x24, size: 0x4, def value: None
 int32_t  ___startingProgress;

/// @brief Field useProgressCallback, offset: 0x28, size: 0x1, def value: None
 bool  ___useProgressCallback;

/// @brief Field sceneDescriptor, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GT_CustomMapSupportRuntime::MapDescriptor>  ___sceneDescriptor;

/// @brief Field <processChildrenEndingProgress>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____processChildrenEndingProgress_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114, ___endingProgress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114, ___startingProgress) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114, ___useProgressCallback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114, ___sceneDescriptor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114, ____processChildrenEndingProgress_5__2) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__FinalizeSceneLoad_d__114) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<CloseDoorAndUnloadMapCoroutine>d__133
class CORDL_TYPE CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59b9bd8, size 0x228, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59b9e00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59b9e08, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59b9e40, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59b9bd4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59b3eb8, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133(CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133(CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2655};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__CloseDoorAndUnloadMapCoroutine_d__133) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<AbortSceneLoad>d__137
class CORDL_TYPE CustomMapLoader__AbortSceneLoad_d__137 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field sceneIndex, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_sceneIndex, put=__cordl_internal_set_sceneIndex)) int32_t  sceneIndex;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59b9a48, size 0x144, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59b9b8c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59b9b94, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59b9bcc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59b9a44, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr int32_t const& __cordl_internal_get_sceneIndex() const;

constexpr int32_t& __cordl_internal_get_sceneIndex() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set_sceneIndex(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59b3fc0, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__AbortSceneLoad_d__137() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__AbortSceneLoad_d__137", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__AbortSceneLoad_d__137(CustomMapLoader__AbortSceneLoad_d__137 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__AbortSceneLoad_d__137", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__AbortSceneLoad_d__137(CustomMapLoader__AbortSceneLoad_d__137 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2654};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field sceneIndex, offset: 0x20, size: 0x4, def value: None
 int32_t  ___sceneIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137, ___sceneIndex) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__AbortSceneLoad_d__137) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<AbortMapLoad>d__135
class CORDL_TYPE CustomMapLoader__AbortMapLoad_d__135 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x59b98b8, size 0x144, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x59b99fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x59b9a04, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x59b9a3c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x59b98b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x59b3ee0, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapLoader__AbortMapLoad_d__135() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__AbortMapLoad_d__135", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader__AbortMapLoad_d__135(CustomMapLoader__AbortMapLoad_d__135 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader__AbortMapLoad_d__135", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader__AbortMapLoad_d__135(CustomMapLoader__AbortMapLoad_d__135 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2653};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader__AbortMapLoad_d__135) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<>c__DisplayClass109_1
class CORDL_TYPE CustomMapLoader___c__DisplayClass109_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  CS$__8__locals1;

/// @brief Field isLastScene, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLastScene, put=__cordl_internal_set_isLastScene)) bool  isLastScene;

/// @brief Field shouldAbortLoad, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_shouldAbortLoad, put=__cordl_internal_set_shouldAbortLoad)) bool  shouldAbortLoad;

static inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1* New_ctor() ;

/// @brief Method <LoadScenesCoroutine>b__0, addr 0x59b973c, size 0x178, virtual false, abstract: false, final false
inline void _LoadScenesCoroutine_b__0(bool  loadSucceeded, bool  loadAborted, ::StringW  loadedSceneName) ;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr bool const& __cordl_internal_get_isLastScene() const;

constexpr bool& __cordl_internal_get_isLastScene() ;

constexpr bool const& __cordl_internal_get_shouldAbortLoad() const;

constexpr bool& __cordl_internal_get_shouldAbortLoad() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  value) ;

constexpr void __cordl_internal_set_isLastScene(bool  value) ;

constexpr void __cordl_internal_set_shouldAbortLoad(bool  value) ;

/// @brief Method .ctor, addr 0x59b9734, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoader___c__DisplayClass109_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass109_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader___c__DisplayClass109_1(CustomMapLoader___c__DisplayClass109_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass109_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader___c__DisplayClass109_1(CustomMapLoader___c__DisplayClass109_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2652};

/// @brief Field shouldAbortLoad, offset: 0x10, size: 0x1, def value: None
 bool  ___shouldAbortLoad;

/// @brief Field isLastScene, offset: 0x11, size: 0x1, def value: None
 bool  ___isLastScene;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1, ___shouldAbortLoad) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1, ___isLastScene) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<>c__DisplayClass109_0
class CORDL_TYPE CustomMapLoader___c__DisplayClass109_0 : public ::System::Object {
public:
// Declarations
/// @brief Field loadCompleteCallback, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_loadCompleteCallback, put=__cordl_internal_set_loadCompleteCallback)) ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  loadCompleteCallback;

/// @brief Field successfullyLoadedAllScenes, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_successfullyLoadedAllScenes, put=__cordl_internal_set_successfullyLoadedAllScenes)) bool  successfullyLoadedAllScenes;

/// @brief Field successfullyLoadedSceneNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_successfullyLoadedSceneNames, put=__cordl_internal_set_successfullyLoadedSceneNames)) ::System::Collections::Generic::List_1<::StringW>*  successfullyLoadedSceneNames;

static inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0* New_ctor() ;

constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get_loadCompleteCallback() const;

constexpr ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get_loadCompleteCallback() ;

constexpr bool const& __cordl_internal_get_successfullyLoadedAllScenes() const;

constexpr bool& __cordl_internal_get_successfullyLoadedAllScenes() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_successfullyLoadedSceneNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_successfullyLoadedSceneNames() ;

constexpr void __cordl_internal_set_loadCompleteCallback(::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set_successfullyLoadedAllScenes(bool  value) ;

constexpr void __cordl_internal_set_successfullyLoadedSceneNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x59b972c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoader___c__DisplayClass109_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass109_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader___c__DisplayClass109_0(CustomMapLoader___c__DisplayClass109_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass109_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader___c__DisplayClass109_0(CustomMapLoader___c__DisplayClass109_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2651};

/// @brief Field successfullyLoadedAllScenes, offset: 0x10, size: 0x1, def value: None
 bool  ___successfullyLoadedAllScenes;

/// @brief Field successfullyLoadedSceneNames, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___successfullyLoadedSceneNames;

/// @brief Field loadCompleteCallback, offset: 0x20, size: 0x8, def value: None
 ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  ___loadCompleteCallback;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0, ___successfullyLoadedAllScenes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0, ___successfullyLoadedSceneNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0, ___loadCompleteCallback) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader___c__DisplayClass109_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<>c__DisplayClass107_1
class CORDL_TYPE CustomMapLoader___c__DisplayClass107_1 : public ::System::Object {
public:
// Declarations
/// @brief Field CS$<>8__locals1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CS$__8__locals1, put=__cordl_internal_set_CS$__8__locals1)) ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  CS$__8__locals1;

/// @brief Field initialLoadAborted, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialLoadAborted, put=__cordl_internal_set_initialLoadAborted)) bool  initialLoadAborted;

/// @brief Field isLastScene, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLastScene, put=__cordl_internal_set_isLastScene)) bool  isLastScene;

/// @brief Field stopLoading, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_stopLoading, put=__cordl_internal_set_stopLoading)) bool  stopLoading;

static inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1* New_ctor() ;

/// @brief Method <LoadInitialScenesCoroutine>b__0, addr 0x59b95ac, size 0x180, virtual false, abstract: false, final false
inline void _LoadInitialScenesCoroutine_b__0(bool  loadSucceeded, bool  loadAborted, ::StringW  loadedSceneName) ;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0* const& __cordl_internal_get_CS$__8__locals1() const;

constexpr ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*& __cordl_internal_get_CS$__8__locals1() ;

constexpr bool const& __cordl_internal_get_initialLoadAborted() const;

constexpr bool& __cordl_internal_get_initialLoadAborted() ;

constexpr bool const& __cordl_internal_get_isLastScene() const;

constexpr bool& __cordl_internal_get_isLastScene() ;

constexpr bool const& __cordl_internal_get_stopLoading() const;

constexpr bool& __cordl_internal_get_stopLoading() ;

constexpr void __cordl_internal_set_CS$__8__locals1(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  value) ;

constexpr void __cordl_internal_set_initialLoadAborted(bool  value) ;

constexpr void __cordl_internal_set_isLastScene(bool  value) ;

constexpr void __cordl_internal_set_stopLoading(bool  value) ;

/// @brief Method .ctor, addr 0x59b95a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoader___c__DisplayClass107_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass107_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader___c__DisplayClass107_1(CustomMapLoader___c__DisplayClass107_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass107_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader___c__DisplayClass107_1(CustomMapLoader___c__DisplayClass107_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2650};

/// @brief Field stopLoading, offset: 0x10, size: 0x1, def value: None
 bool  ___stopLoading;

/// @brief Field initialLoadAborted, offset: 0x11, size: 0x1, def value: None
 bool  ___initialLoadAborted;

/// @brief Field isLastScene, offset: 0x12, size: 0x1, def value: None
 bool  ___isLastScene;

/// @brief Field CS$<>8__locals1, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0*  ___CS$__8__locals1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1, ___stopLoading) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1, ___initialLoadAborted) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1, ___isLastScene) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1, ___CS$__8__locals1) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_1) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<>c__DisplayClass107_0
class CORDL_TYPE CustomMapLoader___c__DisplayClass107_0 : public ::System::Object {
public:
// Declarations
/// @brief Field i, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_i, put=__cordl_internal_set_i)) int32_t  i;

/// @brief Field sceneIndexes, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_sceneIndexes, put=__cordl_internal_set_sceneIndexes)) ::ArrayW<int32_t>  sceneIndexes;

static inline ::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_i() const;

constexpr int32_t& __cordl_internal_get_i() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_sceneIndexes() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_sceneIndexes() ;

constexpr void __cordl_internal_set_i(int32_t  value) ;

constexpr void __cordl_internal_set_sceneIndexes(::ArrayW<int32_t>  value) ;

/// @brief Method .ctor, addr 0x59b959c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoader___c__DisplayClass107_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass107_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader___c__DisplayClass107_0(CustomMapLoader___c__DisplayClass107_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c__DisplayClass107_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader___c__DisplayClass107_0(CustomMapLoader___c__DisplayClass107_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2649};

/// @brief Field sceneIndexes, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___sceneIndexes;

/// @brief Field i, offset: 0x18, size: 0x4, def value: None
 int32_t  ___i;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0, ___sceneIndexes) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0, ___i) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CustomMapLoader___c__DisplayClass107_0) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CustomMapLoader/<>c
class CORDL_TYPE CustomMapLoader___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::CustomMapLoader___c*  __9;

/// @brief Field <>9__106_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__106_0, put=setStaticF___9__106_0)) ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  __9__106_0;

/// @brief Field <>9__131_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__131_0, put=setStaticF___9__131_0)) ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  __9__131_0;

static inline ::GlobalNamespace::CustomMapLoader___c* New_ctor() ;

/// @brief Method <LoadZoneCoroutine>b__131_0, addr 0x59b94fc, size 0xa0, virtual false, abstract: false, final false
inline void _LoadZoneCoroutine_b__131_0(bool  successfullyLoadedAllScenes, bool  loadAborted, ::System::Collections::Generic::List_1<::StringW>*  successfullyLoadedSceneNames) ;

/// @brief Method <OnAssetBundleLoaded>b__106_0, addr 0x59b9450, size 0xac, virtual false, abstract: false, final false
inline void _OnAssetBundleLoaded_b__106_0(::Modio::Error*  error, ::Modio::Mods::Mod*  mod) ;

/// @brief Method .ctor, addr 0x59b9448, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::CustomMapLoader___c* getStaticF___9() ;

static inline ::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>* getStaticF___9__106_0() ;

static inline ::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>* getStaticF___9__131_0() ;

static inline void setStaticF___9(::GlobalNamespace::CustomMapLoader___c*  value) ;

static inline void setStaticF___9__106_0(::System::Action_2<::Modio::Error*,::Modio::Mods::Mod*>*  value) ;

static inline void setStaticF___9__131_0(::System::Action_3<bool,bool,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapLoader___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapLoader___c(CustomMapLoader___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapLoader___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapLoader___c(CustomMapLoader___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2648};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::CustomMapLoader___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
