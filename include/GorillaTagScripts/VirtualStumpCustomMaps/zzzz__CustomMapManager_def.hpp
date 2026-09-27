#pragma once
// IWYU pragma private; include "GorillaTagScripts/VirtualStumpCustomMaps/CustomMapManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_CMSZoneShaderProperties_def.hpp"
#include "GlobalNamespace/zzzz__GTMapLoadSource_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__MapLoadStatus_def.hpp"
#include "GorillaTagScripts/VirtualStumpCustomMaps/zzzz__VirtualStumpActivateMode_def.hpp"
#include "Modio/Mods/zzzz__ModChangeType_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CustomMapManager)
namespace GlobalNamespace {
class BetterDayNightManager;
}
namespace GlobalNamespace {
struct CMSZoneShaderSettings_CMSZoneShaderProperties;
}
namespace GlobalNamespace {
struct CustomMapManager__Activate_d__102;
}
namespace GlobalNamespace {
struct CustomMapManager__AttemptAutoLogin_d__128;
}
namespace GlobalNamespace {
struct CustomMapManager__LoadInstalledMap_d__139;
}
namespace GlobalNamespace {
struct CustomMapManager__LoadMap_d__138;
}
namespace GlobalNamespace {
class GRReviveStation;
}
namespace GlobalNamespace {
struct GTMapLoadSource;
}
namespace GlobalNamespace {
class GhostReactorManager;
}
namespace GlobalNamespace {
class GorillaFriendCollider;
}
namespace GlobalNamespace {
class IBuildValidation;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationPhase;
}
namespace GlobalNamespace {
struct ModInstallationManagement_OperationType;
}
namespace GlobalNamespace {
struct NetJoinResult;
}
namespace GlobalNamespace {
class VirtualStumpTeleporter;
}
namespace GorillaTag::Rendering {
class ZoneShaderSettings;
}
namespace GorillaTagScripts::UI::ModIO {
class VirtualStumpTeleportingHUD;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__DelayedEndTeleport_d__133;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__DelayedTryAutoLoad_d__134;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__Internal_TeleportToVirtualStump_d__117;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct MapLoadStatus;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
struct VirtualStumpActivateMode;
}
namespace Modio::Mods {
struct ModChangeType;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
class Modfile;
}
namespace Modio {
class Error;
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
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
template<typename T0,typename T1,typename T2>
class UnityEvent_3;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__DelayedEndTeleport_d__133;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__DelayedTryAutoLoad_d__134;
}
namespace GorillaTagScripts::VirtualStumpCustomMaps {
class CustomMapManager__Internal_TeleportToVirtualStump_d__117;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*);
MARK_REF_T(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager/<DelayedEndTeleport>d__133");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager/<DelayedJoinVStumpPrivateRoom>d__119");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager/<DelayedTryAutoLoad>d__134");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117*, "GorillaTagScripts.VirtualStumpCustomMaps", "CustomMapManager/<Internal_TeleportToVirtualStump>d__117");
// Dependencies GTMapLoadSource, GT_CustomMapSupportRuntime.CMSZoneShaderSettings::CMSZoneShaderProperties, GorillaTagScripts.VirtualStumpCustomMaps.MapLoadStatus, GorillaTagScripts.VirtualStumpCustomMaps.VirtualStumpActivateMode, Modio.Mods.ModChangeType, Modio.Mods.ModId, UnityEngine.GameObject, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager
class CORDL_TYPE CustomMapManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Activate_d__102 = ::GlobalNamespace::CustomMapManager__Activate_d__102;

using _AttemptAutoLogin_d__128 = ::GlobalNamespace::CustomMapManager__AttemptAutoLogin_d__128;

using _LoadInstalledMap_d__139 = ::GlobalNamespace::CustomMapManager__LoadInstalledMap_d__139;

using _LoadMap_d__138 = ::GlobalNamespace::CustomMapManager__LoadMap_d__138;

using _DelayedEndTeleport_d__133 = ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133;

using _DelayedJoinVStumpPrivateRoom_d__119 = ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119;

using _DelayedTryAutoLoad_d__134 = ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134;

using _Internal_TeleportToVirtualStump_d__117 = ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117;

/// @brief Field OnMapLoadComplete, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMapLoadComplete, put=setStaticF_OnMapLoadComplete)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnMapLoadComplete;

/// @brief Field OnMapLoadStatusChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMapLoadStatusChanged, put=setStaticF_OnMapLoadStatusChanged)) ::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  OnMapLoadStatusChanged;

/// @brief Field OnMapUnloadComplete, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnMapUnloadComplete, put=setStaticF_OnMapUnloadComplete)) ::UnityEngine::Events::UnityEvent*  OnMapUnloadComplete;

/// @brief Field OnRoomMapChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnRoomMapChanged, put=setStaticF_OnRoomMapChanged)) ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>*  OnRoomMapChanged;

/// @brief Field abortModLoadIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_abortModLoadIds, put=setStaticF_abortModLoadIds)) ::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  abortModLoadIds;

/// @brief Field activateAutoLoadModIdOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activateAutoLoadModIdOverride, put=setStaticF_activateAutoLoadModIdOverride)) ::Modio::Mods::ModId  activateAutoLoadModIdOverride;

/// @brief Field activateCurrentMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_activateCurrentMode, put=setStaticF_activateCurrentMode)) ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  activateCurrentMode;

/// @brief Field activateDeferZoneToNode, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_activateDeferZoneToNode, put=setStaticF_activateDeferZoneToNode)) bool  activateDeferZoneToNode;

/// @brief Field activateHasAutoLoadOverride, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_activateHasAutoLoadOverride, put=setStaticF_activateHasAutoLoadOverride)) bool  activateHasAutoLoadOverride;

/// @brief Field activateIsActive, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_activateIsActive, put=setStaticF_activateIsActive)) bool  activateIsActive;

/// @brief Field activateSkipTeleport, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_activateSkipTeleport, put=setStaticF_activateSkipTeleport)) bool  activateSkipTeleport;

/// @brief Field allCustomMapZoneShaderSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allCustomMapZoneShaderSettings, put=setStaticF_allCustomMapZoneShaderSettings)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>*  allCustomMapZoneShaderSettings;

/// @brief Field currentLoadMessage, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentLoadMessage, put=setStaticF_currentLoadMessage)) ::StringW  currentLoadMessage;

/// @brief Field currentLoadProgress, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_currentLoadProgress, put=setStaticF_currentLoadProgress)) int32_t  currentLoadProgress;

/// @brief Field currentLoadStatus, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_currentLoadStatus, put=setStaticF_currentLoadStatus)) ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  currentLoadStatus;

/// @brief Field currentRoomMapApproved, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_currentRoomMapApproved, put=setStaticF_currentRoomMapApproved)) bool  currentRoomMapApproved;

/// @brief Field currentRoomMapModId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentRoomMapModId, put=setStaticF_currentRoomMapModId)) ::Modio::Mods::ModId  currentRoomMapModId;

/// @brief Field currentTeleportCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_currentTeleportCallback, put=setStaticF_currentTeleportCallback)) ::System::Action_1<bool>*  currentTeleportCallback;

/// @brief Field customMapDefaultZoneShaderProperties, offset 0xffffffff, size 0xb0 
 __declspec(property(get=getStaticF_customMapDefaultZoneShaderProperties, put=setStaticF_customMapDefaultZoneShaderProperties)) ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties  customMapDefaultZoneShaderProperties;

/// @brief Field customMapDefaultZoneShaderSettings, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_customMapDefaultZoneShaderSettings, put=__cordl_internal_set_customMapDefaultZoneShaderSettings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  customMapDefaultZoneShaderSettings;

/// @brief Field customMapDefaultZoneShaderSettingsInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_customMapDefaultZoneShaderSettingsInitialized, put=setStaticF_customMapDefaultZoneShaderSettingsInitialized)) bool  customMapDefaultZoneShaderSettingsInitialized;

/// @brief Field dayNightManager, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_dayNightManager, put=__cordl_internal_set_dayNightManager)) ::UnityW<::GlobalNamespace::BetterDayNightManager>  dayNightManager;

/// @brief Field defaultReviveStation, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultReviveStation, put=__cordl_internal_set_defaultReviveStation)) ::UnityW<::GlobalNamespace::GRReviveStation>  defaultReviveStation;

/// @brief Field defaultTeleporter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_defaultTeleporter, put=__cordl_internal_set_defaultTeleporter)) ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  defaultTeleporter;

/// @brief Field delayedEndTeleportCoroutine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_delayedEndTeleportCoroutine, put=setStaticF_delayedEndTeleportCoroutine)) ::UnityEngine::Coroutine*  delayedEndTeleportCoroutine;

/// @brief Field delayedJoinCoroutine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_delayedJoinCoroutine, put=setStaticF_delayedJoinCoroutine)) ::UnityEngine::Coroutine*  delayedJoinCoroutine;

/// @brief Field delayedTryAutoLoadCoroutine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_delayedTryAutoLoadCoroutine, put=setStaticF_delayedTryAutoLoadCoroutine)) ::UnityEngine::Coroutine*  delayedTryAutoLoadCoroutine;

/// @brief Field exitVirtualStumpPending, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_exitVirtualStumpPending, put=setStaticF_exitVirtualStumpPending)) bool  exitVirtualStumpPending;

/// @brief Field featuredMapDisabledObjects, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_featuredMapDisabledObjects, put=__cordl_internal_set_featuredMapDisabledObjects)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  featuredMapDisabledObjects;

/// @brief Field ghostReactorManager, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ghostReactorManager, put=__cordl_internal_set_ghostReactorManager)) ::UnityW<::GlobalNamespace::GhostReactorManager>  ghostReactorManager;

/// @brief Field hasInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasInstance, put=setStaticF_hasInstance)) bool  hasInstance;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager>  instance;

/// @brief Field lastBroadcastFilePercent, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastBroadcastFilePercent, put=setStaticF_lastBroadcastFilePercent)) int32_t  lastBroadcastFilePercent;

/// @brief Field lastBroadcastFileStatus, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lastBroadcastFileStatus, put=setStaticF_lastBroadcastFileStatus)) ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  lastBroadcastFileStatus;

/// @brief Field lastUsedTeleporter, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lastUsedTeleporter, put=setStaticF_lastUsedTeleporter)) ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  lastUsedTeleporter;

/// @brief Field loadInProgress, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_loadInProgress, put=setStaticF_loadInProgress)) bool  loadInProgress;

/// @brief Field loadedCustomMapDefaultZoneShaderSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadedCustomMapDefaultZoneShaderSettings, put=setStaticF_loadedCustomMapDefaultZoneShaderSettings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  loadedCustomMapDefaultZoneShaderSettings;

/// @brief Field loadingMapId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_loadingMapId, put=setStaticF_loadingMapId)) ::Modio::Mods::ModId  loadingMapId;

/// @brief Field localTeleportSFXSource, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_localTeleportSFXSource, put=__cordl_internal_set_localTeleportSFXSource)) ::UnityW<::UnityEngine::AudioSource>  localTeleportSFXSource;

/// @brief Field maxPostTeleportRoomProcessingTime, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPostTeleportRoomProcessingTime, put=__cordl_internal_set_maxPostTeleportRoomProcessingTime)) float_t  maxPostTeleportRoomProcessingTime;

/// @brief Field pendingMapLoadSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_pendingMapLoadSource, put=setStaticF_pendingMapLoadSource)) ::GlobalNamespace::GTMapLoadSource  pendingMapLoadSource;

/// @brief Field pendingNewPrivateRoomName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pendingNewPrivateRoomName, put=setStaticF_pendingNewPrivateRoomName)) ::StringW  pendingNewPrivateRoomName;

/// @brief Field pendingRoomChangeReloadModId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_pendingRoomChangeReloadModId, put=setStaticF_pendingRoomChangeReloadModId)) ::Modio::Mods::ModId  pendingRoomChangeReloadModId;

/// @brief Field pendingTeleportVFXIdx, offset 0xffffffff, size 0x2 
 __declspec(property(get=getStaticF_pendingTeleportVFXIdx, put=setStaticF_pendingTeleportVFXIdx)) int16_t  pendingTeleportVFXIdx;

/// @brief Field preTeleportInPrivateRoom, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_preTeleportInPrivateRoom, put=setStaticF_preTeleportInPrivateRoom)) bool  preTeleportInPrivateRoom;

/// @brief Field preVStumpGamemode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_preVStumpGamemode, put=setStaticF_preVStumpGamemode)) ::StringW  preVStumpGamemode;

/// @brief Field returnToVirtualStumpTeleportLocation, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnToVirtualStumpTeleportLocation, put=__cordl_internal_set_returnToVirtualStumpTeleportLocation)) ::UnityW<::UnityEngine::Transform>  returnToVirtualStumpTeleportLocation;

/// @brief Field rootObjectsToDeactivateAfterTeleport, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rootObjectsToDeactivateAfterTeleport, put=__cordl_internal_set_rootObjectsToDeactivateAfterTeleport)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  rootObjectsToDeactivateAfterTeleport;

/// @brief Field shouldRetryJoin, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_shouldRetryJoin, put=setStaticF_shouldRetryJoin)) bool  shouldRetryJoin;

/// @brief Field teleportingHUD, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_teleportingHUD, put=setStaticF_teleportingHUD)) ::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD>  teleportingHUD;

/// @brief Field teleportingHUDPrefab, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_teleportingHUDPrefab, put=__cordl_internal_set_teleportingHUDPrefab)) ::UnityW<::UnityEngine::GameObject>  teleportingHUDPrefab;

/// @brief Field trackedDownloadMapId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_trackedDownloadMapId, put=setStaticF_trackedDownloadMapId)) ::Modio::Mods::ModId  trackedDownloadMapId;

/// @brief Field unloadInProgress, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_unloadInProgress, put=setStaticF_unloadInProgress)) bool  unloadInProgress;

/// @brief Field unloadingMapId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_unloadingMapId, put=setStaticF_unloadingMapId)) ::Modio::Mods::ModId  unloadingMapId;

/// @brief Field virtualStumpPlayerDetector, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtualStumpPlayerDetector, put=__cordl_internal_set_virtualStumpPlayerDetector)) ::UnityW<::GlobalNamespace::GorillaFriendCollider>  virtualStumpPlayerDetector;

/// @brief Field virtualStumpTeleportLocations, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtualStumpTeleportLocations, put=__cordl_internal_set_virtualStumpTeleportLocations)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  virtualStumpTeleportLocations;

/// @brief Field virtualStumpToggleableRoot, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtualStumpToggleableRoot, put=__cordl_internal_set_virtualStumpToggleableRoot)) ::UnityW<::UnityEngine::GameObject>  virtualStumpToggleableRoot;

/// @brief Field virtualStumpZoneShaderSettings, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_virtualStumpZoneShaderSettings, put=__cordl_internal_set_virtualStumpZoneShaderSettings)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  virtualStumpZoneShaderSettings;

/// @brief Field waitingForDisconnect, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForDisconnect, put=setStaticF_waitingForDisconnect)) bool  waitingForDisconnect;

/// @brief Field waitingForLoginDisconnect, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForLoginDisconnect, put=setStaticF_waitingForLoginDisconnect)) bool  waitingForLoginDisconnect;

/// @brief Field waitingForModDownload, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForModDownload, put=setStaticF_waitingForModDownload)) bool  waitingForModDownload;

/// @brief Field waitingForModInstall, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForModInstall, put=setStaticF_waitingForModInstall)) bool  waitingForModInstall;

/// @brief Field waitingForModInstallId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_waitingForModInstallId, put=setStaticF_waitingForModInstallId)) ::Modio::Mods::ModId  waitingForModInstallId;

/// @brief Field waitingForRoomJoin, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_waitingForRoomJoin, put=setStaticF_waitingForRoomJoin)) bool  waitingForRoomJoin;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<Activate>d__102))]
/// @brief Method Activate, addr 0x5be23c4, size 0xb0, virtual false, abstract: false, final false
static inline void Activate(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  mode, bool  hasEntryTeleportNode) ;

/// @brief Method ActivateDefaultZoneShaderSettings, addr 0x5be8d30, size 0x100, virtual false, abstract: false, final false
static inline void ActivateDefaultZoneShaderSettings() ;

/// @brief Method AddZoneShaderSettings, addr 0x5be8c8c, size 0xa4, virtual false, abstract: false, final false
static inline void AddZoneShaderSettings(::GorillaTag::Rendering::ZoneShaderSettings*  zoneShaderSettings) ;

/// @brief Method ApproveAndLoadRoomMap, addr 0x5be7a30, size 0x9c, virtual false, abstract: false, final false
static inline void ApproveAndLoadRoomMap() ;

/// @brief Method AreAllPlayersInVirtualStump, addr 0x5be5f5c, size 0x3e4, virtual false, abstract: false, final false
static inline bool AreAllPlayersInVirtualStump() ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<AttemptAutoLogin>d__128))]
/// @brief Method AttemptAutoLogin, addr 0x5be6ab8, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* AttemptAutoLogin() ;

/// @brief Method Awake, addr 0x5be0010, size 0x160, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BroadcastMapLoadProgress, addr 0x5be12d8, size 0x108, virtual false, abstract: false, final false
static inline void BroadcastMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message) ;

/// @brief Method BroadcastModFileProgress, addr 0x5be18c0, size 0xcc, virtual false, abstract: false, final false
static inline void BroadcastModFileProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  status, int32_t  percent, ::StringW  message) ;

/// @brief Method BroadcastModFileState, addr 0x5be161c, size 0x2a4, virtual false, abstract: false, final false
static inline void BroadcastModFileState(::Modio::Mods::Mod*  mod) ;

/// @brief Method BuildValidationCheck, addr 0x5bdff5c, size 0xb4, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method CanLoadRoomMap, addr 0x5be79c4, size 0x6c, virtual false, abstract: false, final false
static inline bool CanLoadRoomMap() ;

/// @brief Method ClearRoomMap, addr 0x5be6980, size 0x138, virtual false, abstract: false, final false
static inline void ClearRoomMap() ;

/// @brief Method Deactivate, addr 0x5be2474, size 0xf4, virtual false, abstract: false, final false
static inline void Deactivate() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<DelayedEndTeleport>d__133))]
/// @brief Method DelayedEndTeleport, addr 0x5be57e8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* DelayedEndTeleport() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<DelayedJoinVStumpPrivateRoom>d__119))]
/// @brief Method DelayedJoinVStumpPrivateRoom, addr 0x5be3cec, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* DelayedJoinVStumpPrivateRoom() ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<DelayedTryAutoLoad>d__134))]
/// @brief Method DelayedTryAutoLoad, addr 0x5be6fb8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* DelayedTryAutoLoad() ;

/// @brief Method DisableTeleportHUD, addr 0x5be6b7c, size 0xd8, virtual false, abstract: false, final false
static inline void DisableTeleportHUD() ;

/// @brief Method DisconnectFromRoomAndDisableTeleport, addr 0x5be2920, size 0xac, virtual false, abstract: false, final false
static inline void DisconnectFromRoomAndDisableTeleport() ;

/// @brief Method EnableTeleportHUD, addr 0x5be40c8, size 0x264, virtual false, abstract: false, final false
inline void EnableTeleportHUD(bool  enteringVirtualStump) ;

/// @brief Method EndTeleport, addr 0x5be3d44, size 0x35c, virtual false, abstract: false, final false
static inline void EndTeleport(bool  teleportSuccessful) ;

/// @brief Method EnterVirtualStumpZone, addr 0x5be3210, size 0x3b0, virtual false, abstract: false, final false
static inline void EnterVirtualStumpZone() ;

/// @brief Method ExitVirtualStump, addr 0x5be2568, size 0x3b8, virtual false, abstract: false, final false
static inline void ExitVirtualStump(::System::Action_1<bool>*  callback) ;

/// @brief Method FinalizeExitVirtualStump, addr 0x5be4930, size 0xeb8, virtual false, abstract: false, final false
static inline void FinalizeExitVirtualStump() ;

/// @brief Method GetActivateRoomModePrefix, addr 0x5be360c, size 0xb0, virtual false, abstract: false, final false
static inline ::StringW GetActivateRoomModePrefix() ;

/// @brief Method GetAutoLoadSource, addr 0x5be7010, size 0x64, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTMapLoadSource GetAutoLoadSource() ;

/// @brief Method GetEffectiveAutoLoadModId, addr 0x5be36bc, size 0x104, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModId GetEffectiveAutoLoadModId() ;

/// @brief Method GetFileStatePercent, addr 0x5be198c, size 0x104, virtual false, abstract: false, final false
static inline int32_t GetFileStatePercent(::Modio::Mods::Mod*  mod) ;

/// @brief Method GetRoomMapId, addr 0x5be2fb0, size 0x260, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModId GetRoomMapId() ;

/// @brief Method HandleMapLoadFailed, addr 0x5be1fc4, size 0x140, virtual false, abstract: false, final false
static inline void HandleMapLoadFailed(::StringW  message) ;

/// @brief Method HandleModFileProgress, addr 0x5be1590, size 0x8c, virtual false, abstract: false, final false
static inline void HandleModFileProgress(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType) ;

/// @brief Method HandleModManagementEvent, addr 0x5be1a90, size 0x534, virtual false, abstract: false, final false
inline void HandleModManagementEvent(::Modio::Mods::Mod*  mod, ::Modio::Mods::Modfile*  modfile, ::GlobalNamespace::ModInstallationManagement_OperationType  jobType, ::GlobalNamespace::ModInstallationManagement_OperationPhase  jobPhase) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<Internal_TeleportToVirtualStump>d__117))]
/// @brief Method Internal_TeleportToVirtualStump, addr 0x5be233c, size 0x88, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* Internal_TeleportToVirtualStump(::GlobalNamespace::VirtualStumpTeleporter*  fromTeleporter, ::System::Action_1<bool>*  callback) ;

/// @brief Method IsFeaturedMapLocked, addr 0x5be2aac, size 0xb0, virtual false, abstract: false, final false
static inline bool IsFeaturedMapLocked() ;

/// @brief Method IsInFeaturedMode, addr 0x5be2a24, size 0x88, virtual false, abstract: false, final false
static inline bool IsInFeaturedMode() ;

/// @brief Method IsLoading, addr 0x5be7834, size 0x60, virtual false, abstract: false, final false
static inline bool IsLoading() ;

/// @brief Method IsLoading, addr 0x5be7894, size 0x130, virtual false, abstract: false, final false
static inline bool IsLoading(::Modio::Mods::ModId  modId) ;

/// @brief Method IsLocalPlayerInVirtualStump, addr 0x5be645c, size 0x20c, virtual false, abstract: false, final false
static inline bool IsLocalPlayerInVirtualStump() ;

/// @brief Method IsPlayerWaitingOnMap, addr 0x5be1494, size 0xfc, virtual false, abstract: false, final false
static inline bool IsPlayerWaitingOnMap(::Modio::Mods::ModId  modId) ;

/// @brief Method IsRemotePlayerInVirtualStump, addr 0x5be6340, size 0x11c, virtual false, abstract: false, final false
static inline bool IsRemotePlayerInVirtualStump(::StringW  playerID) ;

/// @brief Method IsUnloading, addr 0x5be77dc, size 0x58, virtual false, abstract: false, final false
static inline bool IsUnloading() ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<LoadInstalledMap>d__139))]
/// @brief Method LoadInstalledMap, addr 0x5be2104, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* LoadInstalledMap(::Modio::Mods::Mod*  installedMod) ;

/// [AsyncStateMachine(typeof(GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager::<LoadMap>d__138))]
/// @brief Method LoadMap, addr 0x5be72fc, size 0xdc, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* LoadMap(::Modio::Mods::ModId  modId, ::GlobalNamespace::GTMapLoadSource  loadSource) ;

/// @brief Method LoadZoneTriggered, addr 0x5be7db4, size 0xec, virtual false, abstract: false, final false
static inline void LoadZoneTriggered(::ArrayW<int32_t>  scenesToLoad, ::ArrayW<int32_t>  scenesToUnload) ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager* New_ctor() ;

/// @brief Method OnAutoLoginComplete, addr 0x5be37e8, size 0x504, virtual false, abstract: false, final false
static inline void OnAutoLoginComplete(::Modio::Error*  error) ;

/// @brief Method OnDestroy, addr 0x5be0d9c, size 0x44c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5be06ec, size 0x3a4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDisconnected, addr 0x5be6668, size 0x318, virtual false, abstract: false, final false
inline void OnDisconnected() ;

/// @brief Method OnEnable, addr 0x5be0170, size 0x57c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEnteredVirtualStumpZone, addr 0x5be35c0, size 0x4c, virtual false, abstract: false, final false
inline void OnEnteredVirtualStumpZone() ;

/// @brief Method OnJoinRoomFailed, addr 0x5be5cd0, size 0x100, virtual false, abstract: false, final false
inline void OnJoinRoomFailed() ;

/// @brief Method OnJoinSpecificRoomResult, addr 0x5be5840, size 0x210, virtual false, abstract: false, final false
static inline void OnJoinSpecificRoomResult(::GlobalNamespace::NetJoinResult  result) ;

/// @brief Method OnJoinSpecificRoomResultFailureAllowed, addr 0x5be5dd0, size 0x18c, virtual false, abstract: false, final false
static inline void OnJoinSpecificRoomResultFailureAllowed(::GlobalNamespace::NetJoinResult  result) ;

/// @brief Method OnJoinedRoom, addr 0x5be5a50, size 0x280, virtual false, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnMapLoadFinished, addr 0x5be75a8, size 0x234, virtual false, abstract: false, final false
static inline void OnMapLoadFinished(bool  success) ;

/// @brief Method OnMapLoadProgress, addr 0x5be7428, size 0x6c, virtual false, abstract: false, final false
static inline void OnMapLoadProgress(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  loadStatus, int32_t  progress, ::StringW  message) ;

/// @brief Method OnMapUnloadCompleted, addr 0x5be7494, size 0x114, virtual false, abstract: false, final false
static inline void OnMapUnloadCompleted() ;

/// @brief Method OnSceneLoaded, addr 0x5be7ea0, size 0x84, virtual false, abstract: false, final false
static inline void OnSceneLoaded(::StringW  sceneName) ;

/// @brief Method OnSceneTriggerHistoryProcessed, addr 0x5be8528, size 0x670, virtual false, abstract: false, final false
static inline void OnSceneTriggerHistoryProcessed(::StringW  sceneName) ;

/// @brief Method OnSceneUnloaded, addr 0x5be83a4, size 0x184, virtual false, abstract: false, final false
static inline void OnSceneUnloaded(::StringW  sceneName) ;

/// @brief Method OnUGCDisabled, addr 0x5be0a94, size 0x4, virtual false, abstract: false, final false
inline void OnUGCDisabled() ;

/// @brief Method OnUGCEnabled, addr 0x5be0a90, size 0x4, virtual false, abstract: false, final false
inline void OnUGCEnabled() ;

/// @brief Method PrepareFeaturedMapReloadOnRoomChange, addr 0x5be2f54, size 0x5c, virtual false, abstract: false, final false
static inline void PrepareFeaturedMapReloadOnRoomChange() ;

/// @brief Method ProcessZoneShaderSettings, addr 0x5be7f24, size 0x480, virtual false, abstract: false, final false
static inline void ProcessZoneShaderSettings(::StringW  loadedSceneName) ;

/// @brief Method RequestEnableTeleportHUD, addr 0x5be7acc, size 0x98, virtual false, abstract: false, final false
static inline void RequestEnableTeleportHUD(bool  enteringVirtualStump) ;

/// @brief Method ResetModFileProgressTracking, addr 0x5be1268, size 0x70, virtual false, abstract: false, final false
static inline void ResetModFileProgressTracking() ;

/// @brief Method ReturnToVirtualStump, addr 0x5bdf90c, size 0x294, virtual false, abstract: false, final false
static inline void ReturnToVirtualStump() ;

/// @brief Method SetDefaultZoneShaderSettings, addr 0x5be8b98, size 0xf4, virtual false, abstract: false, final false
static inline void SetDefaultZoneShaderSettings(::GorillaTag::Rendering::ZoneShaderSettings*  defaultCustomMapShaderSettings, ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties  defaultZoneShaderProperties) ;

/// @brief Method SetFeaturedMapObjectsHidden, addr 0x5be2bb4, size 0x3a0, virtual false, abstract: false, final false
static inline void SetFeaturedMapObjectsHidden(bool  hidden) ;

/// @brief Method SetRoomMap, addr 0x5be7074, size 0x288, virtual false, abstract: false, final false
static inline void SetRoomMap(int64_t  modId) ;

/// @brief Method Start, addr 0x5be0a98, size 0x304, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StopTrackingMapDownload, addr 0x5be13e0, size 0xb4, virtual false, abstract: false, final false
static inline void StopTrackingMapDownload() ;

/// @brief Method TeleportToVirtualStump, addr 0x5be21dc, size 0x160, virtual false, abstract: false, final false
static inline void TeleportToVirtualStump(::GlobalNamespace::VirtualStumpTeleporter*  fromTeleporter, ::System::Action_1<bool>*  callback) ;

/// @brief Method TrackMapDownload, addr 0x5be11e8, size 0x80, virtual false, abstract: false, final false
static inline void TrackMapDownload(::Modio::Mods::ModId  modId) ;

/// @brief Method TryAutoLoadMap, addr 0x5be6c54, size 0x364, virtual false, abstract: false, final false
static inline void TryAutoLoadMap() ;

/// @brief Method UnloadMap, addr 0x5be432c, size 0x604, virtual false, abstract: false, final false
static inline bool UnloadMap(bool  returnToSinglePlayerIfInPublic) ;

/// @brief Method WantsHoldingHandsDisabled, addr 0x5be8e30, size 0xc4, virtual false, abstract: false, final false
static inline bool WantsHoldingHandsDisabled() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_customMapDefaultZoneShaderSettings() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_customMapDefaultZoneShaderSettings() ;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager> const& __cordl_internal_get_dayNightManager() const;

constexpr ::UnityW<::GlobalNamespace::BetterDayNightManager>& __cordl_internal_get_dayNightManager() ;

constexpr ::UnityW<::GlobalNamespace::GRReviveStation> const& __cordl_internal_get_defaultReviveStation() const;

constexpr ::UnityW<::GlobalNamespace::GRReviveStation>& __cordl_internal_get_defaultReviveStation() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter> const& __cordl_internal_get_defaultTeleporter() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>& __cordl_internal_get_defaultTeleporter() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_featuredMapDisabledObjects() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_featuredMapDisabledObjects() ;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager> const& __cordl_internal_get_ghostReactorManager() const;

constexpr ::UnityW<::GlobalNamespace::GhostReactorManager>& __cordl_internal_get_ghostReactorManager() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_localTeleportSFXSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_localTeleportSFXSource() ;

constexpr float_t const& __cordl_internal_get_maxPostTeleportRoomProcessingTime() const;

constexpr float_t& __cordl_internal_get_maxPostTeleportRoomProcessingTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_returnToVirtualStumpTeleportLocation() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_returnToVirtualStumpTeleportLocation() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get_rootObjectsToDeactivateAfterTeleport() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get_rootObjectsToDeactivateAfterTeleport() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_teleportingHUDPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_teleportingHUDPrefab() ;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider> const& __cordl_internal_get_virtualStumpPlayerDetector() const;

constexpr ::UnityW<::GlobalNamespace::GorillaFriendCollider>& __cordl_internal_get_virtualStumpPlayerDetector() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* const& __cordl_internal_get_virtualStumpTeleportLocations() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*& __cordl_internal_get_virtualStumpTeleportLocations() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_virtualStumpToggleableRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_virtualStumpToggleableRoot() ;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> const& __cordl_internal_get_virtualStumpZoneShaderSettings() const;

constexpr ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>& __cordl_internal_get_virtualStumpZoneShaderSettings() ;

constexpr void __cordl_internal_set_customMapDefaultZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

constexpr void __cordl_internal_set_dayNightManager(::UnityW<::GlobalNamespace::BetterDayNightManager>  value) ;

constexpr void __cordl_internal_set_defaultReviveStation(::UnityW<::GlobalNamespace::GRReviveStation>  value) ;

constexpr void __cordl_internal_set_defaultTeleporter(::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  value) ;

constexpr void __cordl_internal_set_featuredMapDisabledObjects(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_ghostReactorManager(::UnityW<::GlobalNamespace::GhostReactorManager>  value) ;

constexpr void __cordl_internal_set_localTeleportSFXSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_maxPostTeleportRoomProcessingTime(float_t  value) ;

constexpr void __cordl_internal_set_returnToVirtualStumpTeleportLocation(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_rootObjectsToDeactivateAfterTeleport(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

constexpr void __cordl_internal_set_teleportingHUDPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_virtualStumpPlayerDetector(::UnityW<::GlobalNamespace::GorillaFriendCollider>  value) ;

constexpr void __cordl_internal_set_virtualStumpTeleportLocations(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

constexpr void __cordl_internal_set_virtualStumpToggleableRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_virtualStumpZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

/// @brief Method .ctor, addr 0x5be8ef4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Events::UnityEvent_1<bool>* getStaticF_OnMapLoadComplete() ;

static inline ::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>* getStaticF_OnMapLoadStatusChanged() ;

static inline ::UnityEngine::Events::UnityEvent* getStaticF_OnMapUnloadComplete() ;

static inline ::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>* getStaticF_OnRoomMapChanged() ;

static inline ::System::Collections::Generic::List_1<::Modio::Mods::ModId>* getStaticF_abortModLoadIds() ;

static inline ::Modio::Mods::ModId getStaticF_activateAutoLoadModIdOverride() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode getStaticF_activateCurrentMode() ;

static inline bool getStaticF_activateDeferZoneToNode() ;

static inline bool getStaticF_activateHasAutoLoadOverride() ;

static inline bool getStaticF_activateIsActive() ;

static inline bool getStaticF_activateSkipTeleport() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>* getStaticF_allCustomMapZoneShaderSettings() ;

static inline ::StringW getStaticF_currentLoadMessage() ;

static inline int32_t getStaticF_currentLoadProgress() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus getStaticF_currentLoadStatus() ;

static inline bool getStaticF_currentRoomMapApproved() ;

static inline ::Modio::Mods::ModId getStaticF_currentRoomMapModId() ;

static inline ::System::Action_1<bool>* getStaticF_currentTeleportCallback() ;

static inline ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties getStaticF_customMapDefaultZoneShaderProperties() ;

static inline bool getStaticF_customMapDefaultZoneShaderSettingsInitialized() ;

static inline ::UnityEngine::Coroutine* getStaticF_delayedEndTeleportCoroutine() ;

static inline ::UnityEngine::Coroutine* getStaticF_delayedJoinCoroutine() ;

static inline ::UnityEngine::Coroutine* getStaticF_delayedTryAutoLoadCoroutine() ;

static inline bool getStaticF_exitVirtualStumpPending() ;

static inline bool getStaticF_hasInstance() ;

static inline ::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager> getStaticF_instance() ;

static inline int32_t getStaticF_lastBroadcastFilePercent() ;

static inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus getStaticF_lastBroadcastFileStatus() ;

static inline ::UnityW<::GlobalNamespace::VirtualStumpTeleporter> getStaticF_lastUsedTeleporter() ;

static inline bool getStaticF_loadInProgress() ;

static inline ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> getStaticF_loadedCustomMapDefaultZoneShaderSettings() ;

static inline ::Modio::Mods::ModId getStaticF_loadingMapId() ;

static inline ::GlobalNamespace::GTMapLoadSource getStaticF_pendingMapLoadSource() ;

static inline ::StringW getStaticF_pendingNewPrivateRoomName() ;

static inline ::Modio::Mods::ModId getStaticF_pendingRoomChangeReloadModId() ;

static inline int16_t getStaticF_pendingTeleportVFXIdx() ;

static inline bool getStaticF_preTeleportInPrivateRoom() ;

static inline ::StringW getStaticF_preVStumpGamemode() ;

static inline bool getStaticF_shouldRetryJoin() ;

static inline ::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD> getStaticF_teleportingHUD() ;

static inline ::Modio::Mods::ModId getStaticF_trackedDownloadMapId() ;

static inline bool getStaticF_unloadInProgress() ;

static inline ::Modio::Mods::ModId getStaticF_unloadingMapId() ;

static inline bool getStaticF_waitingForDisconnect() ;

static inline bool getStaticF_waitingForLoginDisconnect() ;

static inline bool getStaticF_waitingForModDownload() ;

static inline bool getStaticF_waitingForModInstall() ;

static inline ::Modio::Mods::ModId getStaticF_waitingForModInstallId() ;

static inline bool getStaticF_waitingForRoomJoin() ;

/// @brief Method get_CurrentActivateMode, addr 0x5be29cc, size 0x58, virtual false, abstract: false, final false
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode get_CurrentActivateMode() ;

/// @brief Method get_CurrentLoadMessage, addr 0x5bdff04, size 0x58, virtual false, abstract: false, final false
static inline ::StringW get_CurrentLoadMessage() ;

/// @brief Method get_CurrentLoadProgress, addr 0x5bdfeac, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_CurrentLoadProgress() ;

/// @brief Method get_CurrentLoadStatus, addr 0x5bdfe54, size 0x58, virtual false, abstract: false, final false
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus get_CurrentLoadStatus() ;

/// @brief Method get_FeaturedLockedMapId, addr 0x5be2b5c, size 0x58, virtual false, abstract: false, final false
static inline ::Modio::Mods::ModId get_FeaturedLockedMapId() ;

/// @brief Method get_LoadingMapId, addr 0x5bdfda4, size 0x58, virtual false, abstract: false, final false
static inline int64_t get_LoadingMapId() ;

/// @brief Method get_UnloadingMapId, addr 0x5bdfdfc, size 0x58, virtual false, abstract: false, final false
static inline int64_t get_UnloadingMapId() ;

/// @brief Method get_WaitingForDisconnect, addr 0x5bdfd4c, size 0x58, virtual false, abstract: false, final false
static inline bool get_WaitingForDisconnect() ;

/// @brief Method get_WaitingForRoomJoin, addr 0x5bdfcf4, size 0x58, virtual false, abstract: false, final false
static inline bool get_WaitingForRoomJoin() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

static inline void setStaticF_OnMapLoadComplete(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

static inline void setStaticF_OnMapLoadStatusChanged(::UnityEngine::Events::UnityEvent_3<::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus,int32_t,::StringW>*  value) ;

static inline void setStaticF_OnMapUnloadComplete(::UnityEngine::Events::UnityEvent*  value) ;

static inline void setStaticF_OnRoomMapChanged(::UnityEngine::Events::UnityEvent_1<::Modio::Mods::ModId>*  value) ;

static inline void setStaticF_abortModLoadIds(::System::Collections::Generic::List_1<::Modio::Mods::ModId>*  value) ;

static inline void setStaticF_activateAutoLoadModIdOverride(::Modio::Mods::ModId  value) ;

static inline void setStaticF_activateCurrentMode(::GorillaTagScripts::VirtualStumpCustomMaps::VirtualStumpActivateMode  value) ;

static inline void setStaticF_activateDeferZoneToNode(bool  value) ;

static inline void setStaticF_activateHasAutoLoadOverride(bool  value) ;

static inline void setStaticF_activateIsActive(bool  value) ;

static inline void setStaticF_activateSkipTeleport(bool  value) ;

static inline void setStaticF_allCustomMapZoneShaderSettings(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>>*  value) ;

static inline void setStaticF_currentLoadMessage(::StringW  value) ;

static inline void setStaticF_currentLoadProgress(int32_t  value) ;

static inline void setStaticF_currentLoadStatus(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value) ;

static inline void setStaticF_currentRoomMapApproved(bool  value) ;

static inline void setStaticF_currentRoomMapModId(::Modio::Mods::ModId  value) ;

static inline void setStaticF_currentTeleportCallback(::System::Action_1<bool>*  value) ;

static inline void setStaticF_customMapDefaultZoneShaderProperties(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties  value) ;

static inline void setStaticF_customMapDefaultZoneShaderSettingsInitialized(bool  value) ;

static inline void setStaticF_delayedEndTeleportCoroutine(::UnityEngine::Coroutine*  value) ;

static inline void setStaticF_delayedJoinCoroutine(::UnityEngine::Coroutine*  value) ;

static inline void setStaticF_delayedTryAutoLoadCoroutine(::UnityEngine::Coroutine*  value) ;

static inline void setStaticF_exitVirtualStumpPending(bool  value) ;

static inline void setStaticF_hasInstance(bool  value) ;

static inline void setStaticF_instance(::UnityW<::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager>  value) ;

static inline void setStaticF_lastBroadcastFilePercent(int32_t  value) ;

static inline void setStaticF_lastBroadcastFileStatus(::GorillaTagScripts::VirtualStumpCustomMaps::MapLoadStatus  value) ;

static inline void setStaticF_lastUsedTeleporter(::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  value) ;

static inline void setStaticF_loadInProgress(bool  value) ;

static inline void setStaticF_loadedCustomMapDefaultZoneShaderSettings(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

static inline void setStaticF_loadingMapId(::Modio::Mods::ModId  value) ;

static inline void setStaticF_pendingMapLoadSource(::GlobalNamespace::GTMapLoadSource  value) ;

static inline void setStaticF_pendingNewPrivateRoomName(::StringW  value) ;

static inline void setStaticF_pendingRoomChangeReloadModId(::Modio::Mods::ModId  value) ;

static inline void setStaticF_pendingTeleportVFXIdx(int16_t  value) ;

static inline void setStaticF_preTeleportInPrivateRoom(bool  value) ;

static inline void setStaticF_preVStumpGamemode(::StringW  value) ;

static inline void setStaticF_shouldRetryJoin(bool  value) ;

static inline void setStaticF_teleportingHUD(::UnityW<::GorillaTagScripts::UI::ModIO::VirtualStumpTeleportingHUD>  value) ;

static inline void setStaticF_trackedDownloadMapId(::Modio::Mods::ModId  value) ;

static inline void setStaticF_unloadInProgress(bool  value) ;

static inline void setStaticF_unloadingMapId(::Modio::Mods::ModId  value) ;

static inline void setStaticF_waitingForDisconnect(bool  value) ;

static inline void setStaticF_waitingForLoginDisconnect(bool  value) ;

static inline void setStaticF_waitingForModDownload(bool  value) ;

static inline void setStaticF_waitingForModInstall(bool  value) ;

static inline void setStaticF_waitingForModInstallId(::Modio::Mods::ModId  value) ;

static inline void setStaticF_waitingForRoomJoin(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapManager(CustomMapManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapManager(CustomMapManager const& ) = delete;

/// @brief Field DownloadQueuedMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  DownloadQueuedMessage{u"WAITING FOR DOWNLOAD"};

/// @brief Field DownloadingMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  DownloadingMessage{u"DOWNLOADING MAP FILES"};

/// @brief Field InstallQueuedMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  InstallQueuedMessage{u"WAITING TO INSTALL"};

/// @brief Field InstallingMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  InstallingMessage{u"INSTALLING MAP FILES"};

/// @brief Field ModFileProgressChanges value: I32(48)
static ::Modio::Mods::ModChangeType const ModFileProgressChanges;

/// @brief Field PreparingMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  PreparingMessage{u"PREPARING MAP"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4056};

/// [SerializeField]
/// @brief Field virtualStumpToggleableRoot, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___virtualStumpToggleableRoot;

/// [SerializeField]
/// @brief Field returnToVirtualStumpTeleportLocation, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___returnToVirtualStumpTeleportLocation;

/// [SerializeField]
/// @brief Field virtualStumpTeleportLocations, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  ___virtualStumpTeleportLocations;

/// [SerializeField]
/// @brief Field rootObjectsToDeactivateAfterTeleport, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ___rootObjectsToDeactivateAfterTeleport;

/// [Tooltip("Objects visually hidden (renderers only, so their behaviour keeps running) while in a Featured map (A/B), and shown again on exit / when in the Custom lobby.")]
/// [SerializeField]
/// @brief Field featuredMapDisabledObjects, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___featuredMapDisabledObjects;

/// [SerializeField]
/// @brief Field virtualStumpPlayerDetector, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GorillaFriendCollider>  ___virtualStumpPlayerDetector;

/// [SerializeField]
/// @brief Field virtualStumpZoneShaderSettings, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___virtualStumpZoneShaderSettings;

/// [SerializeField]
/// @brief Field dayNightManager, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BetterDayNightManager>  ___dayNightManager;

/// [SerializeField]
/// @brief Field ghostReactorManager, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GhostReactorManager>  ___ghostReactorManager;

/// [SerializeField]
/// @brief Field defaultReviveStation, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GRReviveStation>  ___defaultReviveStation;

/// [SerializeField]
/// @brief Field customMapDefaultZoneShaderSettings, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  ___customMapDefaultZoneShaderSettings;

/// [SerializeField]
/// @brief Field teleportingHUDPrefab, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___teleportingHUDPrefab;

/// [SerializeField]
/// @brief Field localTeleportSFXSource, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___localTeleportSFXSource;

/// [SerializeField]
/// @brief Field defaultTeleporter, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  ___defaultTeleporter;

/// [SerializeField]
/// @brief Field maxPostTeleportRoomProcessingTime, offset: 0x90, size: 0x4, def value: None
 float_t  ___maxPostTeleportRoomProcessingTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___virtualStumpToggleableRoot) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___returnToVirtualStumpTeleportLocation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___virtualStumpTeleportLocations) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___rootObjectsToDeactivateAfterTeleport) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___featuredMapDisabledObjects) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___virtualStumpPlayerDetector) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___virtualStumpZoneShaderSettings) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___dayNightManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___ghostReactorManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___defaultReviveStation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___customMapDefaultZoneShaderSettings) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___teleportingHUDPrefab) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___localTeleportSFXSource) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___defaultTeleporter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager, ___maxPostTeleportRoomProcessingTime) == 0x90, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager) == 0x98, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager/<Internal_TeleportToVirtualStump>d__117
class CORDL_TYPE CustomMapManager__Internal_TeleportToVirtualStump_d__117 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <randTeleportTarget>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__randTeleportTarget_5__2, put=__cordl_internal_set__randTeleportTarget_5__2)) ::UnityW<::UnityEngine::Transform>  _randTeleportTarget_5__2;

/// @brief Field callback, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_callback, put=__cordl_internal_set_callback)) ::System::Action_1<bool>*  callback;

/// @brief Field fromTeleporter, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_fromTeleporter, put=__cordl_internal_set_fromTeleporter)) ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  fromTeleporter;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5bea5b8, size 0x99c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5beaf54, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5beaf5c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5beaf94, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bea5b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__randTeleportTarget_5__2() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__randTeleportTarget_5__2() ;

constexpr ::System::Action_1<bool>* const& __cordl_internal_get_callback() const;

constexpr ::System::Action_1<bool>*& __cordl_internal_get_callback() ;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter> const& __cordl_internal_get_fromTeleporter() const;

constexpr ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>& __cordl_internal_get_fromTeleporter() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set__randTeleportTarget_5__2(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_callback(::System::Action_1<bool>*  value) ;

constexpr void __cordl_internal_set_fromTeleporter(::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5be37c0, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapManager__Internal_TeleportToVirtualStump_d__117() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__Internal_TeleportToVirtualStump_d__117", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapManager__Internal_TeleportToVirtualStump_d__117(CustomMapManager__Internal_TeleportToVirtualStump_d__117 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__Internal_TeleportToVirtualStump_d__117", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapManager__Internal_TeleportToVirtualStump_d__117(CustomMapManager__Internal_TeleportToVirtualStump_d__117 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4053};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field fromTeleporter, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VirtualStumpTeleporter>  ___fromTeleporter;

/// @brief Field callback, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<bool>*  ___callback;

/// @brief Field <randTeleportTarget>5__2, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____randTeleportTarget_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117, ___fromTeleporter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117, ___callback) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117, ____randTeleportTarget_5__2) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__Internal_TeleportToVirtualStump_d__117) == 0x38, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager/<DelayedTryAutoLoad>d__134
class CORDL_TYPE CustomMapManager__DelayedTryAutoLoad_d__134 : public ::System::Object {
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

/// @brief Method MoveNext, addr 0x5bea308, size 0x264, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bea56c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bea574, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bea5ac, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bea304, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5be7400, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapManager__DelayedTryAutoLoad_d__134() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__DelayedTryAutoLoad_d__134", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapManager__DelayedTryAutoLoad_d__134(CustomMapManager__DelayedTryAutoLoad_d__134 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__DelayedTryAutoLoad_d__134", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapManager__DelayedTryAutoLoad_d__134(CustomMapManager__DelayedTryAutoLoad_d__134 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4052};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedTryAutoLoad_d__134) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager/<DelayedJoinVStumpPrivateRoom>d__119
class CORDL_TYPE CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119 : public ::System::Object {
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

/// @brief Method MoveNext, addr 0x5bea094, size 0x228, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bea2bc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bea2c4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bea2fc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5bea090, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5be40a0, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119(CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119(CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4051};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedJoinVStumpPrivateRoom_d__119) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts::VirtualStumpCustomMaps {
// Is value type: false
// CS Name: GorillaTagScripts.VirtualStumpCustomMaps.CustomMapManager/<DelayedEndTeleport>d__133
class CORDL_TYPE CustomMapManager__DelayedEndTeleport_d__133 : public ::System::Object {
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

/// @brief Method MoveNext, addr 0x5be9ee8, size 0x160, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5bea048, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5bea050, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5bea088, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5be9ee4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5be73d8, size 0x28, virtual false, abstract: false, final false
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
constexpr CustomMapManager__DelayedEndTeleport_d__133() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__DelayedEndTeleport_d__133", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapManager__DelayedEndTeleport_d__133(CustomMapManager__DelayedEndTeleport_d__133 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapManager__DelayedEndTeleport_d__133", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapManager__DelayedEndTeleport_d__133(CustomMapManager__DelayedEndTeleport_d__133 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4050};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133, _____2__current) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::VirtualStumpCustomMaps::CustomMapManager__DelayedEndTeleport_d__133) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts::VirtualStumpCustomMaps
