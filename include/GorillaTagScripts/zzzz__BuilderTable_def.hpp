#pragma once
// IWYU pragma private; include "GorillaTagScripts/BuilderTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__SharedBlocksManager_StartingMapConfig_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderGridPlaneData_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderPlacementStyle_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_SnapParams_def.hpp"
#include "GorillaTagScripts/zzzz__BuilderTable_TableState_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__ColliderHit_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__OverlapSphereCommand_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderTable)
namespace GlobalNamespace {
struct BuilderAction;
}
namespace GlobalNamespace {
class BuilderConveyor;
}
namespace GlobalNamespace {
class BuilderDispenserShelf;
}
namespace GlobalNamespace {
class BuilderDropZone;
}
namespace GlobalNamespace {
class BuilderPiecePrivatePlot;
}
namespace GlobalNamespace {
struct BuilderPiece_State;
}
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class BuilderRenderer;
}
namespace GlobalNamespace {
class BuilderResourceMeter;
}
namespace GlobalNamespace {
struct BuilderResourceQuantity;
}
namespace GlobalNamespace {
struct BuilderResourceType;
}
namespace GlobalNamespace {
class BuilderResources;
}
namespace GlobalNamespace {
class BuilderShelf;
}
namespace GlobalNamespace {
struct BuilderTable_BoxCheckParams;
}
namespace GlobalNamespace {
struct BuilderTable_BuilderCommandType;
}
namespace GlobalNamespace {
struct BuilderTable_BuilderCommand;
}
namespace GlobalNamespace {
struct BuilderTable_DroppedPieceData;
}
namespace GlobalNamespace {
struct BuilderTable_DroppedPieceState;
}
namespace GlobalNamespace {
struct BuilderTable_SnapOverlapKey;
}
namespace GlobalNamespace {
struct BuilderTable_SnapParams;
}
namespace GlobalNamespace {
struct BuilderTable_TableState;
}
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaTagScripts::Builder {
class BuilderConveyorManager;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksManager_SharedBlocksMap;
}
namespace GorillaTagScripts::Builder {
class SharedBlocksTerminal;
}
namespace GorillaTagScripts {
class BuilderAttachGridPlane;
}
namespace GorillaTagScripts {
struct BuilderGridPlaneData;
}
namespace GorillaTagScripts {
class BuilderOptionButton;
}
namespace GorillaTagScripts {
struct BuilderPieceData;
}
namespace GorillaTagScripts {
class BuilderPool;
}
namespace GorillaTagScripts {
struct BuilderPotentialPlacement;
}
namespace GorillaTagScripts {
class BuilderRecycler;
}
namespace GorillaTagScripts {
class BuilderTableData;
}
namespace GorillaTagScripts {
class BuilderTableNetworking;
}
namespace GorillaTagScripts {
class BuilderTable_BuildPieceSpawn;
}
namespace GorillaTagScripts {
class BuilderTable__CheckForNoBlocks_d__392;
}
namespace GorillaTag {
class SimpleAABB;
}
namespace Photon::Realtime {
class Player;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
namespace System::IO {
class BinaryReader;
}
namespace System::IO {
class BinaryWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTagScripts {
class BuilderTable;
}
namespace GorillaTagScripts {
class BuilderTable_BuildPieceSpawn;
}
namespace GorillaTagScripts {
class BuilderTable__CheckForNoBlocks_d__392;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::BuilderTable*);
MARK_REF_T(::GorillaTagScripts::BuilderTable_BuildPieceSpawn*);
MARK_REF_T(::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTable*, "GorillaTagScripts", "BuilderTable");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTable_BuildPieceSpawn*, "GorillaTagScripts", "BuilderTable/BuildPieceSpawn");
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392*, "GorillaTagScripts", "BuilderTable/<CheckForNoBlocks>d__392");
// Dependencies GTZone, GorillaTagScripts.Builder.SharedBlocksManager::StartingMapConfig, GorillaTagScripts.BuilderGridPlaneData, GorillaTagScripts.BuilderPlacementStyle, GorillaTagScripts.BuilderTable::SnapParams, GorillaTagScripts.BuilderTable::TableState, System.Collections.Generic.HashSet`1<T>, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, UnityEngine.BoxCollider, UnityEngine.Collider, UnityEngine.ColliderHit, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.OverlapSphereCommand
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTable
class CORDL_TYPE BuilderTable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using BoxCheckParams = ::GlobalNamespace::BuilderTable_BoxCheckParams;

using BuilderCommand = ::GlobalNamespace::BuilderTable_BuilderCommand;

using BuilderCommandType = ::GlobalNamespace::BuilderTable_BuilderCommandType;

using DroppedPieceData = ::GlobalNamespace::BuilderTable_DroppedPieceData;

using DroppedPieceState = ::GlobalNamespace::BuilderTable_DroppedPieceState;

using SnapOverlapKey = ::GlobalNamespace::BuilderTable_SnapOverlapKey;

using SnapParams = ::GlobalNamespace::BuilderTable_SnapParams;

using TableState = ::GlobalNamespace::BuilderTable_TableState;

using BuildPieceSpawn = ::GorillaTagScripts::BuilderTable_BuildPieceSpawn;

using _CheckForNoBlocks_d__392 = ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392;

 __declspec(property(get=get_CurrentSaveSlot, put=set_CurrentSaveSlot)) int32_t  CurrentSaveSlot;

/// @brief Field DROPPED_PIECE_LIMIT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DROPPED_PIECE_LIMIT, put=setStaticF_DROPPED_PIECE_LIMIT)) int32_t  DROPPED_PIECE_LIMIT;

/// @brief Field DROP_ZONE_REPEL, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_DROP_ZONE_REPEL, put=setStaticF_DROP_ZONE_REPEL)) float_t  DROP_ZONE_REPEL;

/// @brief Field MAX_DROP_ANG_VELOCITY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_DROP_ANG_VELOCITY, put=setStaticF_MAX_DROP_ANG_VELOCITY)) float_t  MAX_DROP_ANG_VELOCITY;

/// @brief Field MAX_DROP_VELOCITY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_MAX_DROP_VELOCITY, put=setStaticF_MAX_DROP_VELOCITY)) float_t  MAX_DROP_VELOCITY;

/// @brief Field OnLocalPlayerClaimedPlot, offset 0x2b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLocalPlayerClaimedPlot, put=__cordl_internal_set_OnLocalPlayerClaimedPlot)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnLocalPlayerClaimedPlot;

/// @brief Field OnMapCleared, offset 0x2c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMapCleared, put=__cordl_internal_set_OnMapCleared)) ::UnityEngine::Events::UnityEvent*  OnMapCleared;

/// @brief Field OnMapLoadFailed, offset 0x2d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMapLoadFailed, put=__cordl_internal_set_OnMapLoadFailed)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnMapLoadFailed;

/// @brief Field OnMapLoaded, offset 0x2c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMapLoaded, put=__cordl_internal_set_OnMapLoaded)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnMapLoaded;

/// @brief Field OnSaveDirtyChanged, offset 0x298, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSaveDirtyChanged, put=__cordl_internal_set_OnSaveDirtyChanged)) ::UnityEngine::Events::UnityEvent_1<bool>*  OnSaveDirtyChanged;

/// @brief Field OnSaveFailure, offset 0x2a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSaveFailure, put=__cordl_internal_set_OnSaveFailure)) ::UnityEngine::Events::UnityEvent_1<::StringW>*  OnSaveFailure;

/// @brief Field OnSaveSuccess, offset 0x2a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSaveSuccess, put=__cordl_internal_set_OnSaveSuccess)) ::UnityEngine::Events::UnityEvent*  OnSaveSuccess;

/// @brief Field OnSaveTimeUpdated, offset 0x290, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSaveTimeUpdated, put=__cordl_internal_set_OnSaveTimeUpdated)) ::UnityEngine::Events::UnityEvent*  OnSaveTimeUpdated;

/// @brief Field OnTableConfigurationUpdated, offset 0x2b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTableConfigurationUpdated, put=__cordl_internal_set_OnTableConfigurationUpdated)) ::UnityEngine::Events::UnityEvent*  OnTableConfigurationUpdated;

/// @brief Field SHELF_SLICE_BUCKETS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SHELF_SLICE_BUCKETS, put=setStaticF_SHELF_SLICE_BUCKETS)) int32_t  SHELF_SLICE_BUCKETS;

/// @brief Field SharedMapConfigTitleDataKey, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_SharedMapConfigTitleDataKey, put=__cordl_internal_set_SharedMapConfigTitleDataKey)) ::StringW  SharedMapConfigTitleDataKey;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x10c, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field acceptableSqrDistFromCenter, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_acceptableSqrDistFromCenter, put=__cordl_internal_set_acceptableSqrDistFromCenter)) float_t  acceptableSqrDistFromCenter;

/// @brief Field activeFunctionalComponents, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeFunctionalComponents, put=__cordl_internal_set_activeFunctionalComponents)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  activeFunctionalComponents;

/// @brief Field allPiecesMask, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_allPiecesMask, put=__cordl_internal_set_allPiecesMask)) ::UnityEngine::LayerMask  allPiecesMask;

/// @brief Field allPotentialPlacements, offset 0x258, size 0x8 
 __declspec(property(get=__cordl_internal_get_allPotentialPlacements, put=__cordl_internal_set_allPotentialPlacements)) ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  allPotentialPlacements;

/// @brief Field allPrivatePlots, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_allPrivatePlots, put=__cordl_internal_set_allPrivatePlots)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>*  allPrivatePlots;

/// @brief Field allShelvesRoot, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_allShelvesRoot, put=__cordl_internal_set_allShelvesRoot)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  allShelvesRoot;

/// @brief Field armShelfPieceType, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_armShelfPieceType, put=__cordl_internal_set_armShelfPieceType)) ::UnityW<::GlobalNamespace::BuilderPiece>  armShelfPieceType;

/// @brief Field baseGridPlanes, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_baseGridPlanes, put=__cordl_internal_set_baseGridPlanes)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  baseGridPlanes;

/// @brief Field basePieces, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_basePieces, put=__cordl_internal_set_basePieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  basePieces;

/// @brief Field buildPieceSpawns, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildPieceSpawns, put=__cordl_internal_set_buildPieceSpawns)) ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*  buildPieceSpawns;

/// @brief Field builderNetworking, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderNetworking, put=__cordl_internal_set_builderNetworking)) ::UnityW<::GorillaTagScripts::BuilderTableNetworking>  builderNetworking;

/// @brief Field builderPiecesVisited, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderPiecesVisited, put=__cordl_internal_set_builderPiecesVisited)) ::System::Collections::Generic::HashSet_1<int32_t>*  builderPiecesVisited;

/// @brief Field builderPool, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderPool, put=__cordl_internal_set_builderPool)) ::UnityW<::GorillaTagScripts::BuilderPool>  builderPool;

/// @brief Field builderRenderer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_builderRenderer, put=__cordl_internal_set_builderRenderer)) ::UnityW<::GlobalNamespace::BuilderRenderer>  builderRenderer;

/// @brief Field builtInPieceRoots, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_builtInPieceRoots, put=__cordl_internal_set_builtInPieceRoots)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  builtInPieceRoots;

/// @brief Field buttonClearLayout, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonClearLayout, put=__cordl_internal_set_buttonClearLayout)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  buttonClearLayout;

/// @brief Field buttonSaveLayout, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonSaveLayout, put=__cordl_internal_set_buttonSaveLayout)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  buttonSaveLayout;

/// @brief Field buttonSnapPosition, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonSnapPosition, put=__cordl_internal_set_buttonSnapPosition)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  buttonSnapPosition;

/// @brief Field buttonSnapRotation, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_buttonSnapRotation, put=__cordl_internal_set_buttonSnapRotation)) ::UnityW<::GorillaTagScripts::BuilderOptionButton>  buttonSnapRotation;

/// @brief Field checkGridPlaneData, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_checkGridPlaneData, put=__cordl_internal_set_checkGridPlaneData)) ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlaneData;

/// @brief Field childPieces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_childPieces, put=setStaticF_childPieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  childPieces;

/// @brief Field conveyorManager, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_conveyorManager, put=__cordl_internal_set_conveyorManager)) ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>  conveyorManager;

/// @brief Field conveyors, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_conveyors, put=__cordl_internal_set_conveyors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*  conveyors;

/// @brief Field currSnapParams, offset 0x34c, size 0x28 
 __declspec(property(get=__cordl_internal_get_currSnapParams, put=__cordl_internal_set_currSnapParams)) ::GlobalNamespace::BuilderTable_SnapParams  currSnapParams;

/// @brief Field currentSaveSlot, offset 0x28c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentSaveSlot, put=__cordl_internal_set_currentSaveSlot)) int32_t  currentSaveSlot;

/// @brief Field defaultTint, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_defaultTint, put=__cordl_internal_set_defaultTint)) float_t  defaultTint;

/// @brief Field dispenserShelves, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_dispenserShelves, put=__cordl_internal_set_dispenserShelves)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*  dispenserShelves;

/// @brief Field doesLocalPlayerOwnPlot, offset 0x198, size 0x1 
 __declspec(property(get=__cordl_internal_get_doesLocalPlayerOwnPlot, put=__cordl_internal_set_doesLocalPlayerOwnPlot)) bool  doesLocalPlayerOwnPlot;

/// @brief Field dropZoneRoot, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropZoneRoot, put=__cordl_internal_set_dropZoneRoot)) ::UnityW<::UnityEngine::GameObject>  dropZoneRoot;

/// @brief Field dropZones, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_dropZones, put=__cordl_internal_set_dropZones)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>*  dropZones;

/// @brief Field droppedLayer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_droppedLayer, put=setStaticF_droppedLayer)) int32_t  droppedLayer;

/// @brief Field droppedPieceData, offset 0x270, size 0x8 
 __declspec(property(get=__cordl_internal_get_droppedPieceData, put=__cordl_internal_set_droppedPieceData)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>*  droppedPieceData;

/// @brief Field droppedPieces, offset 0x268, size 0x8 
 __declspec(property(get=__cordl_internal_get_droppedPieces, put=__cordl_internal_set_droppedPieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  droppedPieces;

/// @brief Field droppedTint, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_droppedTint, put=__cordl_internal_set_droppedTint)) float_t  droppedTint;

/// @brief Field fetchConfigurationAttempts, offset 0x388, size 0x4 
 __declspec(property(get=__cordl_internal_get_fetchConfigurationAttempts, put=__cordl_internal_set_fetchConfigurationAttempts)) int32_t  fetchConfigurationAttempts;

/// @brief Field fixedUpdateFunctionalComponents, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_fixedUpdateFunctionalComponents, put=__cordl_internal_set_fixedUpdateFunctionalComponents)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  fixedUpdateFunctionalComponents;

/// @brief Field funcComponentsToRegister, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_funcComponentsToRegister, put=__cordl_internal_set_funcComponentsToRegister)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  funcComponentsToRegister;

/// @brief Field funcComponentsToRegisterFixed, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_funcComponentsToRegisterFixed, put=__cordl_internal_set_funcComponentsToRegisterFixed)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  funcComponentsToRegisterFixed;

/// @brief Field funcComponentsToUnregister, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_funcComponentsToUnregister, put=__cordl_internal_set_funcComponentsToUnregister)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  funcComponentsToUnregister;

/// @brief Field funcComponentsToUnregisterFixed, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_funcComponentsToUnregisterFixed, put=__cordl_internal_set_funcComponentsToUnregisterFixed)) ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  funcComponentsToUnregisterFixed;

/// @brief Field getStartingMapInProgress, offset 0x3e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_getStartingMapInProgress, put=__cordl_internal_set_getStartingMapInProgress)) bool  getStartingMapInProgress;

/// @brief Field grabbedTint, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabbedTint, put=__cordl_internal_set_grabbedTint)) float_t  grabbedTint;

/// @brief Field gridPlaneData, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridPlaneData, put=__cordl_internal_set_gridPlaneData)) ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData;

/// @brief [HideInInspector]
 __declspec(property(get=get_gridSize)) float_t  gridSize;

/// @brief Field hasCachedTopMaps, offset 0x3e1, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasCachedTopMaps, put=__cordl_internal_set_hasCachedTopMaps)) bool  hasCachedTopMaps;

/// @brief Field hasRequestedConfig, offset 0x288, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasRequestedConfig, put=__cordl_internal_set_hasRequestedConfig)) bool  hasRequestedConfig;

/// @brief Field hasStartingMap, offset 0x3d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasStartingMap, put=__cordl_internal_set_hasStartingMap)) bool  hasStartingMap;

/// @brief Field heldLayer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_heldLayer, put=setStaticF_heldLayer)) int32_t  heldLayer;

/// @brief Field heldLayerLocal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_heldLayerLocal, put=setStaticF_heldLayerLocal)) int32_t  heldLayerLocal;

/// @brief Field inBuilderZone, offset 0x265, size 0x1 
 __declspec(property(get=__cordl_internal_get_inBuilderZone, put=__cordl_internal_set_inBuilderZone)) bool  inBuilderZone;

/// @brief Field inRoom, offset 0x264, size 0x1 
 __declspec(property(get=__cordl_internal_get_inRoom, put=__cordl_internal_set_inRoom)) bool  inRoom;

/// @brief Field isDirty, offset 0x289, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDirty, put=__cordl_internal_set_isDirty)) bool  isDirty;

/// @brief Field isSetup, offset 0x2f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSetup, put=__cordl_internal_set_isSetup)) bool  isSetup;

/// @brief Field isTableMutable, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTableMutable, put=__cordl_internal_set_isTableMutable)) bool  isTableMutable;

/// @brief Field lastGetTopMapsTime, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastGetTopMapsTime, put=__cordl_internal_set_lastGetTopMapsTime)) double_t  lastGetTopMapsTime;

/// @brief Field linkedTerminal, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_linkedTerminal, put=__cordl_internal_set_linkedTerminal)) ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>  linkedTerminal;

/// @brief Field m_areaBounds, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_areaBounds, put=__cordl_internal_set_m_areaBounds)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>*  m_areaBounds;

/// @brief Field mapIDBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_mapIDBuffer, put=setStaticF_mapIDBuffer)) ::ArrayW<char16_t>  mapIDBuffer;

/// @brief Field maxPlacementChildDepth, offset 0x374, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxPlacementChildDepth, put=__cordl_internal_set_maxPlacementChildDepth)) int32_t  maxPlacementChildDepth;

/// @brief Field maxResources, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get_maxResources, put=__cordl_internal_set_maxResources)) ::ArrayW<int32_t>  maxResources;

/// @brief Field maxRetries, offset 0x38c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRetries, put=__cordl_internal_set_maxRetries)) int32_t  maxRetries;

/// @brief Field nearbyPiecesCommands, offset 0x248, size 0x10 
 __declspec(property(get=__cordl_internal_get_nearbyPiecesCommands, put=__cordl_internal_set_nearbyPiecesCommands)) ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  nearbyPiecesCommands;

/// @brief Field nearbyPiecesResults, offset 0x238, size 0x10 
 __declspec(property(get=__cordl_internal_get_nearbyPiecesResults, put=__cordl_internal_set_nearbyPiecesResults)) ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  nearbyPiecesResults;

/// @brief Field nextPieceId, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextPieceId, put=__cordl_internal_set_nextPieceId)) int32_t  nextPieceId;

/// @brief Field nextUpdateOverride, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_nextUpdateOverride, put=setStaticF_nextUpdateOverride)) ::StringW  nextUpdateOverride;

/// @brief Field noBlocksArea, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_noBlocksArea, put=__cordl_internal_set_noBlocksArea)) ::UnityW<::UnityEngine::GameObject>  noBlocksArea;

/// @brief Field noBlocksAreas, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_noBlocksAreas, put=__cordl_internal_set_noBlocksAreas)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>*  noBlocksAreas;

/// @brief Field noBlocksCheckResults, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_noBlocksCheckResults, put=__cordl_internal_set_noBlocksCheckResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  noBlocksCheckResults;

/// @brief Field overlapOtherPieces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overlapOtherPieces, put=setStaticF_overlapOtherPieces)) ::System::Collections::Generic::List_1<int32_t>*  overlapOtherPieces;

/// @brief Field overlapPacked, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overlapPacked, put=setStaticF_overlapPacked)) ::System::Collections::Generic::List_1<int64_t>*  overlapPacked;

/// @brief Field overlapParams, offset 0x324, size 0x28 
 __declspec(property(get=__cordl_internal_get_overlapParams, put=__cordl_internal_set_overlapParams)) ::GlobalNamespace::BuilderTable_SnapParams  overlapParams;

/// @brief Field overlapPieces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_overlapPieces, put=setStaticF_overlapPieces)) ::System::Collections::Generic::List_1<int32_t>*  overlapPieces;

/// @brief Field paintingTint, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get_paintingTint, put=__cordl_internal_set_paintingTint)) float_t  paintingTint;

/// @brief Field pendingMapID, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_pendingMapID, put=__cordl_internal_set_pendingMapID)) ::StringW  pendingMapID;

/// @brief Field personalBuildKey, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_personalBuildKey, put=setStaticF_personalBuildKey)) ::StringW  personalBuildKey;

/// @brief Field pieceIDToIndexCache, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieceIDToIndexCache, put=__cordl_internal_set_pieceIDToIndexCache)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  pieceIDToIndexCache;

/// @brief Field pieceScale, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_pieceScale, put=__cordl_internal_set_pieceScale)) float_t  pieceScale;

/// @brief Field pieces, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_pieces, put=__cordl_internal_set_pieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  pieces;

/// @brief Field placedLayer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_placedLayer, put=setStaticF_placedLayer)) int32_t  placedLayer;

/// @brief Field playerToArmShelfLeft, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerToArmShelfLeft, put=__cordl_internal_set_playerToArmShelfLeft)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  playerToArmShelfLeft;

/// @brief Field playerToArmShelfRight, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerToArmShelfRight, put=__cordl_internal_set_playerToArmShelfRight)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  playerToArmShelfRight;

/// @brief Field playersInBuilder, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInBuilder, put=__cordl_internal_set_playersInBuilder)) ::System::Collections::Generic::List_1<int32_t>*  playersInBuilder;

/// @brief Field plotMaxResources, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_plotMaxResources, put=__cordl_internal_set_plotMaxResources)) ::ArrayW<int32_t>  plotMaxResources;

/// @brief Field plotOwners, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_plotOwners, put=__cordl_internal_set_plotOwners)) ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  plotOwners;

/// @brief Field potentialGrabTint, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_potentialGrabTint, put=__cordl_internal_set_potentialGrabTint)) float_t  potentialGrabTint;

/// @brief Field pushAndEaseParams, offset 0x2fc, size 0x28 
 __declspec(property(get=__cordl_internal_get_pushAndEaseParams, put=__cordl_internal_set_pushAndEaseParams)) ::GlobalNamespace::BuilderTable_SnapParams  pushAndEaseParams;

/// @brief Field queuedBuildCommands, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_queuedBuildCommands, put=__cordl_internal_set_queuedBuildCommands)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  queuedBuildCommands;

/// @brief Field recyclerRoot, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_recyclerRoot, put=__cordl_internal_set_recyclerRoot)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  recyclerRoot;

/// @brief Field recyclers, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_recyclers, put=__cordl_internal_set_recyclers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*  recyclers;

/// @brief Field repelHistoryIndex, offset 0x284, size 0x4 
 __declspec(property(get=__cordl_internal_get_repelHistoryIndex, put=__cordl_internal_set_repelHistoryIndex)) int32_t  repelHistoryIndex;

/// @brief Field repelHistoryLength, offset 0x280, size 0x4 
 __declspec(property(get=__cordl_internal_get_repelHistoryLength, put=__cordl_internal_set_repelHistoryLength)) int32_t  repelHistoryLength;

/// @brief Field repelledPieceRoots, offset 0x278, size 0x8 
 __declspec(property(get=__cordl_internal_get_repelledPieceRoots, put=__cordl_internal_set_repelledPieceRoots)) ::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*>  repelledPieceRoots;

/// @brief Field reservedResources, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_reservedResources, put=__cordl_internal_set_reservedResources)) ::ArrayW<int32_t>  reservedResources;

/// @brief Field resourceMeters, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourceMeters, put=__cordl_internal_set_resourceMeters)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*  resourceMeters;

/// @brief Field resourcesPerPrivatePlot, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_resourcesPerPrivatePlot, put=__cordl_internal_set_resourcesPerPrivatePlot)) ::UnityW<::GlobalNamespace::BuilderResources>  resourcesPerPrivatePlot;

/// @brief Field rollBackActions, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rollBackActions, put=__cordl_internal_set_rollBackActions)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>*  rollBackActions;

/// @brief Field rollBackBufferedCommands, offset 0x2e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rollBackBufferedCommands, put=__cordl_internal_set_rollBackBufferedCommands)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  rollBackBufferedCommands;

/// @brief Field rollForwardCommands, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rollForwardCommands, put=__cordl_internal_set_rollForwardCommands)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  rollForwardCommands;

/// @brief Field roomCenter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_roomCenter, put=__cordl_internal_set_roomCenter)) ::UnityW<::UnityEngine::Transform>  roomCenter;

/// @brief Field rootPieces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_rootPieces, put=setStaticF_rootPieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  rootPieces;

/// @brief Field saveInProgress, offset 0x28a, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveInProgress, put=__cordl_internal_set_saveInProgress)) bool  saveInProgress;

/// @brief Field sharedBlocksMap, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedBlocksMap, put=__cordl_internal_set_sharedBlocksMap)) ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  sharedBlocksMap;

/// @brief Field sharedBuildArea, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedBuildArea, put=__cordl_internal_set_sharedBuildArea)) ::UnityW<::UnityEngine::GameObject>  sharedBuildArea;

/// @brief Field sharedBuildAreas, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_sharedBuildAreas, put=__cordl_internal_set_sharedBuildAreas)) ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  sharedBuildAreas;

/// @brief Field shelfSliceUpdateIndex, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfSliceUpdateIndex, put=__cordl_internal_set_shelfSliceUpdateIndex)) int32_t  shelfSliceUpdateIndex;

/// @brief Field shelfTint, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_shelfTint, put=__cordl_internal_set_shelfTint)) float_t  shelfTint;

/// @brief Field shelves, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelves, put=__cordl_internal_set_shelves)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*  shelves;

/// @brief Field shelvesRoot, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_shelvesRoot, put=__cordl_internal_set_shelvesRoot)) ::UnityW<::UnityEngine::GameObject>  shelvesRoot;

/// @brief Field snapOverlapSanity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_snapOverlapSanity, put=setStaticF_snapOverlapSanity)) ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  snapOverlapSanity;

/// @brief Field startingMap, offset 0x3c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingMap, put=__cordl_internal_set_startingMap)) ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  startingMap;

/// @brief Field startingMapCacheTime, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingMapCacheTime, put=__cordl_internal_set_startingMapCacheTime)) double_t  startingMapCacheTime;

/// @brief Field startingMapConfig, offset 0x3a0, size 0x20 
 __declspec(property(get=__cordl_internal_get_startingMapConfig, put=__cordl_internal_set_startingMapConfig)) ::GlobalNamespace::SharedBlocksManager_StartingMapConfig  startingMapConfig;

/// @brief Field startingMapList, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_startingMapList, put=__cordl_internal_set_startingMapList)) ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  startingMapList;

/// @brief Field tableCenter, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableCenter, put=__cordl_internal_set_tableCenter)) ::UnityW<::UnityEngine::Transform>  tableCenter;

/// @brief Field tableData, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_tableData, put=__cordl_internal_set_tableData)) ::GorillaTagScripts::BuilderTableData*  tableData;

/// @brief Field tableState, offset 0x260, size 0x4 
 __declspec(property(get=__cordl_internal_get_tableState, put=__cordl_internal_set_tableState)) ::GlobalNamespace::BuilderTable_TableState  tableState;

/// @brief Field tableZone, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_tableZone, put=__cordl_internal_set_tableZone)) ::GlobalNamespace::GTZone  tableZone;

/// @brief Field tempAttachIndexes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempAttachIndexes, put=setStaticF_tempAttachIndexes)) ::System::Collections::Generic::List_1<int32_t>*  tempAttachIndexes;

/// @brief Field tempConveyors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempConveyors, put=setStaticF_tempConveyors)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*  tempConveyors;

/// @brief Field tempDeletePieces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempDeletePieces, put=setStaticF_tempDeletePieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  tempDeletePieces;

/// @brief Field tempDispensers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempDispensers, put=setStaticF_tempDispensers)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*  tempDispensers;

/// @brief Field tempDuplicateOverlaps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempDuplicateOverlaps, put=setStaticF_tempDuplicateOverlaps)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>*  tempDuplicateOverlaps;

/// @brief Field tempInLeftHand, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempInLeftHand, put=setStaticF_tempInLeftHand)) ::System::Collections::Generic::List_1<bool>*  tempInLeftHand;

/// @brief Field tempParentActorNumbers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempParentActorNumbers, put=setStaticF_tempParentActorNumbers)) ::System::Collections::Generic::List_1<int32_t>*  tempParentActorNumbers;

/// @brief Field tempParentAttachIndexes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempParentAttachIndexes, put=setStaticF_tempParentAttachIndexes)) ::System::Collections::Generic::List_1<int32_t>*  tempParentAttachIndexes;

/// @brief Field tempParentPeiceIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempParentPeiceIds, put=setStaticF_tempParentPeiceIds)) ::System::Collections::Generic::List_1<int32_t>*  tempParentPeiceIds;

/// @brief Field tempPeiceIds, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempPeiceIds, put=setStaticF_tempPeiceIds)) ::System::Collections::Generic::List_1<int32_t>*  tempPeiceIds;

/// @brief Field tempPiecePlacement, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempPiecePlacement, put=setStaticF_tempPiecePlacement)) ::System::Collections::Generic::List_1<int32_t>*  tempPiecePlacement;

/// @brief Field tempPieceSet, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempPieceSet, put=setStaticF_tempPieceSet)) ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  tempPieceSet;

/// @brief Field tempPieces, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempPieces, put=setStaticF_tempPieces)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  tempPieces;

/// @brief Field tempRecyclers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRecyclers, put=setStaticF_tempRecyclers)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*  tempRecyclers;

/// @brief Field tempRollForwardCommands, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_tempRollForwardCommands, put=setStaticF_tempRollForwardCommands)) ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  tempRollForwardCommands;

/// @brief Field totalReservedResources, offset 0x1c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalReservedResources, put=__cordl_internal_set_totalReservedResources)) ::UnityW<::GlobalNamespace::BuilderResources>  totalReservedResources;

/// @brief Field totalResources, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_totalResources, put=__cordl_internal_set_totalResources)) ::UnityW<::GlobalNamespace::BuilderResources>  totalResources;

/// @brief Field usePlacementStyle, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_usePlacementStyle, put=__cordl_internal_set_usePlacementStyle)) ::GorillaTagScripts::BuilderPlacementStyle  usePlacementStyle;

/// @brief Field useSnapRotation, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSnapRotation, put=__cordl_internal_set_useSnapRotation)) bool  useSnapRotation;

/// @brief Field usedResources, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_usedResources, put=__cordl_internal_set_usedResources)) ::ArrayW<int32_t>  usedResources;

/// @brief Field worldCenter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldCenter, put=__cordl_internal_set_worldCenter)) ::UnityW<::UnityEngine::Transform>  worldCenter;

/// @brief Field zoneToInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_zoneToInstance, put=setStaticF_zoneToInstance)) ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>*  zoneToInstance;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method AddGridPlaneData, addr 0x5b9fd24, size 0x8, virtual false, abstract: false, final false
inline int32_t AddGridPlaneData(::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane) ;

/// @brief Method AddPiece, addr 0x5b9bc8c, size 0xb4, virtual false, abstract: false, final false
inline void AddPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method AddPieceData, addr 0x5b8ffa8, size 0x8, virtual false, abstract: false, final false
inline int32_t AddPieceData(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method AddPieceToDropList, addr 0x5b9e324, size 0x12c, virtual false, abstract: false, final false
inline void AddPieceToDropList(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method AddPrivatePlotData, addr 0x5b9fd30, size 0x8, virtual false, abstract: false, final false
inline int32_t AddPrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot*  plot) ;

/// @brief Method AddQueuedCommand, addr 0x5b91490, size 0x100, virtual false, abstract: false, final false
inline void AddQueuedCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method AddResource, addr 0x5ba210c, size 0x58, virtual false, abstract: false, final false
inline void AddResource(::GlobalNamespace::BuilderResourceQuantity  quantity) ;

/// @brief Method AddResources, addr 0x5b9fc40, size 0xdc, virtual false, abstract: false, final false
inline void AddResources(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method AddRollForwardCommand, addr 0x5b919a4, size 0x100, virtual false, abstract: false, final false
inline void AddRollForwardCommand(::GlobalNamespace::BuilderTable_BuilderCommand  command) ;

/// @brief Method AddRollbackAction, addr 0x5b91738, size 0xe8, virtual false, abstract: false, final false
inline void AddRollbackAction(::GlobalNamespace::BuilderAction  action) ;

/// @brief Method AddRollbackBufferedCommand, addr 0x5b91ccc, size 0x100, virtual false, abstract: false, final false
inline void AddRollbackBufferedCommand(::GlobalNamespace::BuilderTable_BuilderCommand  bufferedCmd) ;

/// @brief Method AreStatesCompatibleForOverlap, addr 0x5b8d124, size 0x190, virtual false, abstract: false, final false
static inline bool AreStatesCompatibleForOverlap(::GlobalNamespace::BuilderPiece_State  stateA, ::GlobalNamespace::BuilderPiece_State  stateB, ::GlobalNamespace::BuilderPiece*  rootA, ::GlobalNamespace::BuilderPiece*  rootB) ;

/// @brief Method AttachPieceInternal, addr 0x5b9bfe8, size 0x264, virtual false, abstract: false, final false
inline void AttachPieceInternal(int32_t  pieceId, int32_t  attachIndex, int32_t  parentId, int32_t  parentAttachIndex, int32_t  placement) ;

/// @brief Method AttachPieceToActorInternal, addr 0x5b9c24c, size 0x688, virtual false, abstract: false, final false
inline void AttachPieceToActorInternal(int32_t  pieceId, int32_t  actorNumber, bool  isLeftHand) ;

/// @brief Method Awake, addr 0x5b8d350, size 0x908, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BuildInitialTableForPlayer, addr 0x5b92adc, size 0x258, virtual false, abstract: false, final false
inline void BuildInitialTableForPlayer() ;

/// @brief Method BuildOverlapKey, addr 0x5ba6e40, size 0x14, virtual false, abstract: false, final false
static inline ::GlobalNamespace::BuilderTable_SnapOverlapKey BuildOverlapKey(int32_t  pieceId, int32_t  otherPieceId, int32_t  attachGridIndex, int32_t  otherAttachGridIndex) ;

/// @brief Method BuildPiecesOnShelves, addr 0x5b98638, size 0x190, virtual false, abstract: false, final false
inline void BuildPiecesOnShelves() ;

/// @brief Method BuildSelectedSharedMap, addr 0x5b92d34, size 0x1c8, virtual false, abstract: false, final false
inline void BuildSelectedSharedMap() ;

/// @brief Method BuildTableFromJson, addr 0x5ba3c00, size 0x12b8, virtual false, abstract: false, final false
inline bool BuildTableFromJson(::StringW  tableJson, bool  fromTitleData) ;

/// @brief Method CalcAllPotentialPlacements, addr 0x5b8cb88, size 0x528, virtual false, abstract: false, final false
inline bool CalcAllPotentialPlacements(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlaneData, ::GorillaTagScripts::BuilderPotentialPlacement  potentialPlacement, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  allPlacements) ;

/// @brief Method CanPiecesPotentiallyOverlap, addr 0x5b8c9b4, size 0x1d4, virtual false, abstract: false, final false
inline bool CanPiecesPotentiallyOverlap(::GlobalNamespace::BuilderPiece*  pieceInHand, ::GlobalNamespace::BuilderPiece*  rootWhenPlaced, ::GlobalNamespace::BuilderPiece_State  stateWhenPlaced, ::GlobalNamespace::BuilderPiece*  otherPiece) ;

/// @brief Method CanPiecesPotentiallySnap, addr 0x5ba196c, size 0x174, virtual false, abstract: false, final false
inline bool CanPiecesPotentiallySnap(::GlobalNamespace::BuilderPiece*  pieceInHand, ::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method ChangeSetSelection, addr 0x5b99884, size 0x100, virtual false, abstract: false, final false
inline void ChangeSetSelection(int32_t  shelfID, int32_t  setID, bool  isConveyor) ;

/// [IteratorStateMachine(typeof(GorillaTagScripts.BuilderTable::<CheckForNoBlocks>d__392))]
/// @brief Method CheckForNoBlocks, addr 0x5ba5780, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CheckForNoBlocks() ;

/// @brief Method ChooseMapFromList, addr 0x5ba535c, size 0x174, virtual false, abstract: false, final false
inline void ChooseMapFromList() ;

/// @brief Method CleanUpDroppedPiece, addr 0x5b95514, size 0x27c, virtual false, abstract: false, final false
inline void CleanUpDroppedPiece() ;

/// @brief Method ClearBuiltInPlots, addr 0x5b9832c, size 0x168, virtual false, abstract: false, final false
inline void ClearBuiltInPlots() ;

/// @brief Method ClearLocalArmShelf, addr 0x5b9f0a8, size 0x1ec, virtual false, abstract: false, final false
inline void ClearLocalArmShelf() ;

/// @brief Method ClearQueuedCommands, addr 0x5b91590, size 0x9c, virtual false, abstract: false, final false
inline void ClearQueuedCommands() ;

/// @brief Method ClearTable, addr 0x5b8f1c8, size 0x4, virtual false, abstract: false, final false
inline void ClearTable() ;

/// @brief Method ClearTableInternal, addr 0x5b97970, size 0x934, virtual false, abstract: false, final false
inline void ClearTableInternal() ;

/// @brief Method CreateArmShelf, addr 0x5b9efa0, size 0x108, virtual false, abstract: false, final false
inline void CreateArmShelf(int32_t  pieceIdLeft, int32_t  pieceIdRight, int32_t  pieceType, ::Photon::Realtime::Player*  player) ;

/// @brief Method CreateArmShelvesForPlayersInBuilder, addr 0x5b987ec, size 0x1dc, virtual false, abstract: false, final false
inline void CreateArmShelvesForPlayersInBuilder() ;

/// @brief Method CreateConveyorPiece, addr 0x5b98cbc, size 0x1f0, virtual false, abstract: false, final false
inline void CreateConveyorPiece(int32_t  pieceType, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, int32_t  shelfID, int32_t  sendTimestamp) ;

/// @brief Method CreateData, addr 0x5b8ffa4, size 0x4, virtual false, abstract: false, final false
inline void CreateData() ;

/// @brief Method CreateDispenserShelfPiece, addr 0x5b98eac, size 0x1f4, virtual false, abstract: false, final false
inline void CreateDispenserShelfPiece(int32_t  pieceType, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, int32_t  shelfID) ;

/// @brief Method CreatePiece, addr 0x5b9a03c, size 0x94, virtual false, abstract: false, final false
inline void CreatePiece(int32_t  pieceType, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, ::GlobalNamespace::BuilderPiece_State  state, ::Photon::Realtime::Player*  player) ;

/// @brief Method CreatePieceId, addr 0x5b989c8, size 0x2c, virtual false, abstract: false, final false
inline int32_t CreatePieceId() ;

/// @brief Method CreatePieceInternal, addr 0x5b9ae6c, size 0x220, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> CreatePieceInternal(int32_t  newPieceType, int32_t  newPieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::GlobalNamespace::BuilderPiece_State  state, int32_t  materialType, int32_t  activateTimeStamp, ::GorillaTagScripts::BuilderTable*  table) ;

/// @brief Method DeserializeTableState, addr 0x5b93868, size 0x1cac, virtual false, abstract: false, final false
inline void DeserializeTableState(::ArrayW<uint8_t>  bytes, int32_t  numBytes) ;

/// @brief Method DestroyData, addr 0x5b8f434, size 0x4, virtual false, abstract: false, final false
inline void DestroyData() ;

/// @brief Method DetachPieceForPlayerLeavingInternal, addr 0x5b9ede4, size 0x1bc, virtual false, abstract: false, final false
inline void DetachPieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece*  piece, int32_t  playerActorNumber) ;

/// @brief Method DoesChainContainChain, addr 0x5b9a378, size 0x114, virtual false, abstract: false, final false
inline bool DoesChainContainChain(::GlobalNamespace::BuilderPiece*  chainARoot, ::GlobalNamespace::BuilderPiece*  chainBAttachPiece) ;

/// @brief Method DoesChainContainPiece, addr 0x5b9a244, size 0x134, virtual false, abstract: false, final false
inline bool DoesChainContainPiece(::GlobalNamespace::BuilderPiece*  targetPiece, ::GlobalNamespace::BuilderPiece*  firstInChain, ::GlobalNamespace::BuilderPiece*  nextInChain) ;

/// @brief Method DoesPlayerOwnPlot, addr 0x5b9e7d0, size 0x58, virtual false, abstract: false, final false
inline bool DoesPlayerOwnPlot(int32_t  actorNum) ;

/// @brief Method DropAllPiecesForPlayerLeaving, addr 0x5b9eb18, size 0x10c, virtual false, abstract: false, final false
inline void DropAllPiecesForPlayerLeaving(int32_t  playerActorNumber) ;

/// @brief Method DropPiece, addr 0x5b9de54, size 0x24, virtual false, abstract: false, final false
inline void DropPiece(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  droppedByPlayer, bool  force) ;

/// @brief Method DropPieceForPlayerLeavingInternal, addr 0x5b9e95c, size 0x1bc, virtual false, abstract: false, final false
inline void DropPieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece*  piece, int32_t  playerActorNumber) ;

/// @brief Method DumpTableConfig, addr 0x5ba32e0, size 0x380, virtual false, abstract: false, final false
inline void DumpTableConfig() ;

/// @brief Method ExecuteAction, addr 0x5b8b0b0, size 0x1750, virtual false, abstract: false, final false
inline void ExecuteAction(::GlobalNamespace::BuilderAction  action) ;

/// @brief Method ExecuteArmShelfCreated, addr 0x5b96d64, size 0x628, virtual false, abstract: false, final false
inline void ExecuteArmShelfCreated(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecuteBuildCommand, addr 0x5b92014, size 0x1e4, virtual false, abstract: false, final false
inline void ExecuteBuildCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecuteClaimPlot, addr 0x5b96b88, size 0x198, virtual false, abstract: false, final false
inline void ExecuteClaimPlot(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecuteFreePlot, addr 0x5b96d20, size 0x44, virtual false, abstract: false, final false
inline void ExecuteFreePlot(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePieceCreated, addr 0x5b958c8, size 0x25c, virtual false, abstract: false, final false
inline void ExecutePieceCreated(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePieceDroppedWithActions, addr 0x5b96758, size 0x35c, virtual false, abstract: false, final false
inline void ExecutePieceDroppedWithActions(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePieceGrabbedWithActions, addr 0x5b95ef8, size 0x860, virtual false, abstract: false, final false
inline void ExecutePieceGrabbedWithActions(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePiecePainted, addr 0x5b96ab4, size 0xb8, virtual false, abstract: false, final false
inline void ExecutePiecePainted(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePiecePlacedWithActions, addr 0x5b95b24, size 0x3d4, virtual false, abstract: false, final false
inline void ExecutePiecePlacedWithActions(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePieceRecycled, addr 0x5b96b6c, size 0x1c, virtual false, abstract: false, final false
inline void ExecutePieceRecycled(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePieceRepelled, addr 0x5b97580, size 0x3f0, virtual false, abstract: false, final false
inline void ExecutePieceRepelled(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecutePlayerLeftRoom, addr 0x5b9738c, size 0x128, virtual false, abstract: false, final false
inline void ExecutePlayerLeftRoom(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecuteRollBackActions, addr 0x5b91dcc, size 0xd4, virtual false, abstract: false, final false
inline void ExecuteRollBackActions() ;

/// @brief Method ExecuteRollForwardCommands, addr 0x5b921f8, size 0x360, virtual false, abstract: false, final false
inline void ExecuteRollForwardCommands() ;

/// @brief Method ExecuteRollbackBufferedCommands, addr 0x5b91ea0, size 0x174, virtual false, abstract: false, final false
inline void ExecuteRollbackBufferedCommands() ;

/// @brief Method ExecuteSetFunctionalPieceState, addr 0x5b974b4, size 0xb0, virtual false, abstract: false, final false
inline void ExecuteSetFunctionalPieceState(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ExecuteSetSelection, addr 0x5b97564, size 0x1c, virtual false, abstract: false, final false
inline void ExecuteSetSelection(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method FetchSharedBlocksStartingMapConfig, addr 0x5b8f084, size 0x12c, virtual false, abstract: false, final false
inline void FetchSharedBlocksStartingMapConfig() ;

/// @brief Method FindAndLoadSharedBlocksMap, addr 0x5ba37a0, size 0xc4, virtual false, abstract: false, final false
inline void FindAndLoadSharedBlocksMap(::StringW  mapID) ;

/// @brief Method FindFirstSleepingPiece, addr 0x5b9e03c, size 0x1d0, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> FindFirstSleepingPiece() ;

/// @brief Method FindStartingMap, addr 0x5ba5010, size 0x2bc, virtual false, abstract: false, final false
inline void FindStartingMap() ;

/// @brief Method FixedUpdate, addr 0x5b8ffb0, size 0x40c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method FoundDefaultSharedBlocksMap, addr 0x5ba52cc, size 0x90, virtual false, abstract: false, final false
inline void FoundDefaultSharedBlocksMap(bool  success, ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map) ;

/// @brief Method FoundSharedBlocksMap, addr 0x5ba388c, size 0x14c, virtual false, abstract: false, final false
inline void FoundSharedBlocksMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map) ;

/// @brief Method FoundStartingMapList, addr 0x5ba54d0, size 0x1dc, virtual false, abstract: false, final false
inline void FoundStartingMapList(bool  success) ;

/// @brief Method FoundTopMapData, addr 0x5ba56ac, size 0xd4, virtual false, abstract: false, final false
inline void FoundTopMapData(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map) ;

/// @brief Method FreePlotInternal, addr 0x5b9e5c8, size 0x184, virtual false, abstract: false, final false
inline void FreePlotInternal(int32_t  plotPieceId, int32_t  requestingPlayer) ;

/// @brief Method FreezeDroppedPiece, addr 0x5b9e20c, size 0x118, virtual false, abstract: false, final false
inline void FreezeDroppedPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method GetAvailableResources, addr 0x5ba2434, size 0x64, virtual false, abstract: false, final false
inline int32_t GetAvailableResources(::GlobalNamespace::BuilderResourceType  type) ;

/// @brief Method GetCurrentMapID, addr 0x5b9304c, size 0x18, virtual false, abstract: false, final false
inline ::StringW GetCurrentMapID() ;

/// @brief Method GetNumQueuedCommands, addr 0x5b916ec, size 0x4c, virtual false, abstract: false, final false
inline int32_t GetNumQueuedCommands() ;

/// @brief Method GetPendingMap, addr 0x5b93044, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetPendingMap() ;

/// @brief Method GetPiece, addr 0x5b8c800, size 0x1b4, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> GetPiece(int32_t  pieceId) ;

/// @brief Method GetPiecePrefab, addr 0x5b9b660, size 0x74, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BuilderPiece> GetPiecePrefab(int32_t  pieceType) ;

/// @brief Method GetPrivateResourceLimitForType, addr 0x5ba2498, size 0x30, virtual false, abstract: false, final false
inline int32_t GetPrivateResourceLimitForType(int32_t  type) ;

/// @brief Method GetSaveDataKey, addr 0x5ba3710, size 0x90, virtual false, abstract: false, final false
inline ::StringW GetSaveDataKey(int32_t  slot) ;

/// @brief Method GetSaveDataTimeKey, addr 0x5ba3660, size 0xb0, virtual false, abstract: false, final false
inline ::StringW GetSaveDataTimeKey(int32_t  slot) ;

/// @brief Method GetSharedBlocksMapID, addr 0x5ba3864, size 0x28, virtual false, abstract: false, final false
inline ::StringW GetSharedBlocksMapID() ;

/// @brief Method GetTableState, addr 0x5b928e4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::BuilderTable_TableState GetTableState() ;

/// @brief Method GrabPiece, addr 0x5b9d55c, size 0x4, virtual false, abstract: false, final false
inline void GrabPiece(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer, bool  force) ;

/// @brief Method HandleOnZoneChanged, addr 0x5b8ef44, size 0x6c, virtual false, abstract: false, final false
inline void HandleOnZoneChanged() ;

/// @brief Method HasEnoughResource, addr 0x5ba23c4, size 0x70, virtual false, abstract: false, final false
inline bool HasEnoughResource(::GlobalNamespace::BuilderResourceQuantity  quantity) ;

/// @brief Method HasEnoughResources, addr 0x5ba22d8, size 0xec, virtual false, abstract: false, final false
inline bool HasEnoughResources(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method HasEnoughUnreservedResource, addr 0x5ba2248, size 0x90, virtual false, abstract: false, final false
inline bool HasEnoughUnreservedResource(::GlobalNamespace::BuilderResourceQuantity  quantity) ;

/// @brief Method HasEnoughUnreservedResources, addr 0x5ba2164, size 0xe4, virtual false, abstract: false, final false
inline bool HasEnoughUnreservedResources(::GlobalNamespace::BuilderResources*  resources) ;

/// @brief Method HasRollBackActionsForCommand, addr 0x5b918f8, size 0xac, virtual false, abstract: false, final false
inline bool HasRollBackActionsForCommand(int32_t  localCommandId) ;

/// @brief Method HasRollForwardCommand, addr 0x5b91b7c, size 0xac, virtual false, abstract: false, final false
inline bool HasRollForwardCommand(int32_t  localCommandId) ;

/// @brief Method InitIfNeeded, addr 0x5b8f5bc, size 0x9e8, virtual false, abstract: false, final false
inline void InitIfNeeded() ;

/// @brief Method IsInBuilderZone, addr 0x5b9372c, size 0x8, virtual false, abstract: false, final false
inline bool IsInBuilderZone() ;

/// @brief Method IsLocalPlayerInBuilderZone, addr 0x5b935e4, size 0x148, virtual false, abstract: false, final false
static inline bool IsLocalPlayerInBuilderZone() ;

/// @brief Method IsLocationWithinSharedBuildArea, addr 0x5b9cf00, size 0x178, virtual false, abstract: false, final false
inline bool IsLocationWithinSharedBuildArea(::UnityEngine::Vector3  worldPosition) ;

/// @brief Method IsPlayerHandNearAction, addr 0x5b994c4, size 0x230, virtual false, abstract: false, final false
inline bool IsPlayerHandNearAction(::GlobalNamespace::NetPlayer*  player, ::UnityEngine::Vector3  worldPosition, bool  isLeftHand, bool  checkBothHands, float_t  acceptableRadius) ;

/// @brief Method LoadSharedMap, addr 0x5b93064, size 0x1ac, virtual false, abstract: false, final false
inline void LoadSharedMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  map) ;

static inline ::GorillaTagScripts::BuilderTable* New_ctor() ;

/// @brief Method NoBlocksCheck, addr 0x5b9d078, size 0x4b8, virtual false, abstract: false, final false
inline bool NoBlocksCheck() ;

/// @brief Method OnApplicationQuit, addr 0x5b8f1b0, size 0x18, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnAvailableResourcesChange, addr 0x5b8e94c, size 0x1a4, virtual false, abstract: false, final false
inline void OnAvailableResourcesChange() ;

/// @brief Method OnButtonClearLayout, addr 0x5b9fdb4, size 0x4, virtual false, abstract: false, final false
inline void OnButtonClearLayout(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnButtonFreePosition, addr 0x5b9fd6c, size 0x44, virtual false, abstract: false, final false
inline void OnButtonFreePosition(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnButtonFreeRotation, addr 0x5b9fd3c, size 0x30, virtual false, abstract: false, final false
inline void OnButtonFreeRotation(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnButtonSaveLayout, addr 0x5b9fdb0, size 0x4, virtual false, abstract: false, final false
inline void OnButtonSaveLayout(::GorillaTagScripts::BuilderOptionButton*  button, bool  isLeftHand) ;

/// @brief Method OnDeserializeUpdatePlots, addr 0x5b98508, size 0x130, virtual false, abstract: false, final false
inline void OnDeserializeUpdatePlots() ;

/// @brief Method OnDestroy, addr 0x5b8f1cc, size 0x268, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5b8e80c, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5b8e7a0, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFetchPrivateScanComplete, addr 0x5ba3aac, size 0x154, virtual false, abstract: false, final false
inline void OnFetchPrivateScanComplete(int32_t  slot, bool  success) ;

/// @brief Method OnFinishedInitialTableBuild, addr 0x5b987c8, size 0x24, virtual false, abstract: false, final false
inline void OnFinishedInitialTableBuild() ;

/// @brief Method OnFunctionalStateRequest, addr 0x5b99be0, size 0x138, virtual false, abstract: false, final false
inline void OnFunctionalStateRequest(int32_t  pieceID, uint8_t  state, ::GlobalNamespace::NetPlayer*  player, int32_t  timeStamp) ;

/// @brief Method OnGetStartingMapConfigFail, addr 0x5ba2d68, size 0x160, virtual false, abstract: false, final false
inline void OnGetStartingMapConfigFail(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnGetStartingMapConfigSuccess, addr 0x5ba27fc, size 0x4bc, virtual false, abstract: false, final false
inline void OnGetStartingMapConfigSuccess(::StringW  result) ;

/// @brief Method OnGetTableConfiguration, addr 0x5ba2ec8, size 0xec, virtual false, abstract: false, final false
inline void OnGetTableConfiguration(::StringW  configString) ;

/// @brief Method OnGetTitleDataBuildComplete, addr 0x5ba57f4, size 0x140, virtual false, abstract: false, final false
inline void OnGetTitleDataBuildComplete(::StringW  titleDataBuild) ;

/// @brief Method OnSaveScanFailure, addr 0x5ba6cc8, size 0x178, virtual false, abstract: false, final false
inline void OnSaveScanFailure(int32_t  scan, ::StringW  message) ;

/// @brief Method OnSaveScanSuccess, addr 0x5ba6b78, size 0x150, virtual false, abstract: false, final false
inline void OnSaveScanSuccess(int32_t  scan) ;

/// @brief Method OnTitleDataUpdate, addr 0x5ba27c0, size 0x3c, virtual false, abstract: false, final false
inline void OnTitleDataUpdate(::StringW  key) ;

/// @brief Method PackPiecePlacement, addr 0x5ba26c0, size 0x20, virtual false, abstract: false, final false
static inline int32_t PackPiecePlacement(uint8_t  twist, int8_t  xOffset, int8_t  zOffset) ;

/// @brief Method PackSnapInfo, addr 0x5ba26e0, size 0x94, virtual false, abstract: false, final false
inline int64_t PackSnapInfo(int32_t  attachGridIndex, int32_t  otherAttachGridIndex, ::UnityEngine::Vector2Int  min, ::UnityEngine::Vector2Int  max) ;

/// @brief Method PaintPiece, addr 0x5b9e840, size 0x4, virtual false, abstract: false, final false
inline void PaintPiece(int32_t  pieceId, int32_t  materialType, ::Photon::Realtime::Player*  paintingPlayer, bool  force) ;

/// @brief Method PaintPieceInternal, addr 0x5b9e844, size 0x118, virtual false, abstract: false, final false
inline void PaintPieceInternal(int32_t  pieceId, int32_t  materialType, ::Photon::Realtime::Player*  paintingPlayer, bool  force) ;

/// @brief Method ParseTableConfiguration, addr 0x5ba2fb4, size 0x32c, virtual false, abstract: false, final false
inline void ParseTableConfiguration(::StringW  dataRecord) ;

/// @brief Method PieceDroppedInternal, addr 0x5b9de78, size 0x1c4, virtual false, abstract: false, final false
inline void PieceDroppedInternal(int32_t  localCommandId, int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  droppedByPlayer, bool  force) ;

/// @brief Method PieceEnteredDropZone, addr 0x5b9f294, size 0x2c8, virtual false, abstract: false, final false
inline void PieceEnteredDropZone(int32_t  pieceId, ::UnityEngine::Vector3  worldPos, ::UnityEngine::Quaternion  worldRot, int32_t  dropZoneId) ;

/// @brief Method PieceGrabbedInternal, addr 0x5b9d560, size 0x1ac, virtual false, abstract: false, final false
inline void PieceGrabbedInternal(int32_t  localCommandId, int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer, bool  force) ;

/// @brief Method PiecePlacedInternal, addr 0x5b9c938, size 0x198, virtual false, abstract: false, final false
inline void PiecePlacedInternal(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::GlobalNamespace::NetPlayer*  placedByPlayer, int32_t  timeStamp, bool  force) ;

/// @brief Method PlacePiece, addr 0x5b9c90c, size 0x2c, virtual false, abstract: false, final false
inline void PlacePiece(int32_t  localCommandId, int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::GlobalNamespace::NetPlayer*  placedByPlayer, int32_t  timeStamp, bool  force) ;

/// @brief Method PlayerLeftRoom, addr 0x5b9e548, size 0x80, virtual false, abstract: false, final false
inline void PlayerLeftRoom(int32_t  playerActorNumber) ;

/// @brief Method PlotClaimed, addr 0x5b9e4c4, size 0x84, virtual false, abstract: false, final false
inline void PlotClaimed(int32_t  plotPieceId, ::Photon::Realtime::Player*  claimingPlayer) ;

/// @brief Method PlotFreed, addr 0x5b9e74c, size 0x84, virtual false, abstract: false, final false
inline void PlotFreed(int32_t  plotPieceId, ::Photon::Realtime::Player*  claimingPlayer) ;

/// @brief Method ReadQuaternion, addr 0x5ba262c, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::Quaternion ReadQuaternion(::System::IO::BinaryReader*  reader) ;

/// @brief Method ReadVector3, addr 0x5ba25bc, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ReadVector3(::System::IO::BinaryReader*  reader) ;

/// @brief Method RecycleAllPiecesForPlayerLeaving, addr 0x5b9ec24, size 0x108, virtual false, abstract: false, final false
inline void RecycleAllPiecesForPlayerLeaving(int32_t  playerActorNumber) ;

/// @brief Method RecyclePiece, addr 0x5b9a198, size 0xac, virtual false, abstract: false, final false
inline void RecyclePiece(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, bool  playFX, int32_t  recyclerID, ::Photon::Realtime::Player*  player) ;

/// @brief Method RecyclePieceForPlayerLeavingInternal, addr 0x5b9ed2c, size 0xb8, virtual false, abstract: false, final false
inline void RecyclePieceForPlayerLeavingInternal(::GlobalNamespace::BuilderPiece*  piece, int32_t  playerActorNumber) ;

/// @brief Method RecyclePieceInternal, addr 0x5b9b08c, size 0x5d4, virtual false, abstract: false, final false
inline void RecyclePieceInternal(int32_t  pieceId, bool  ignoreHaptics, bool  playFX, int32_t  recyclerId) ;

/// @brief Method RegisterFunctionalPiece, addr 0x5b99d9c, size 0xbc, virtual false, abstract: false, final false
inline void RegisterFunctionalPiece(::GlobalNamespace::IBuilderPieceFunctional*  component) ;

/// @brief Method RegisterFunctionalPieceFixedUpdate, addr 0x5b99f14, size 0xbc, virtual false, abstract: false, final false
inline void RegisterFunctionalPieceFixedUpdate(::GlobalNamespace::IBuilderPieceFunctional*  component) ;

/// @brief Method RemoveArmShelfForPlayer, addr 0x5b93210, size 0x3d4, virtual false, abstract: false, final false
inline void RemoveArmShelfForPlayer(::Photon::Realtime::Player*  player) ;

/// @brief Method RemoveGridPlaneData, addr 0x5b9fd2c, size 0x4, virtual false, abstract: false, final false
inline void RemoveGridPlaneData(::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane) ;

/// @brief Method RemovePiece, addr 0x5b982a4, size 0x88, virtual false, abstract: false, final false
inline void RemovePiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method RemovePieceData, addr 0x5b9fd1c, size 0x4, virtual false, abstract: false, final false
inline void RemovePieceData(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method RemovePieceFromDropList, addr 0x5b9e450, size 0x74, virtual false, abstract: false, final false
inline void RemovePieceFromDropList(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method RemovePrivatePlotData, addr 0x5b9fd38, size 0x4, virtual false, abstract: false, final false
inline void RemovePrivatePlotData(::GlobalNamespace::BuilderPiecePrivatePlot*  plot) ;

/// @brief Method RemoveRollBackActions, addr 0x5b9162c, size 0x50, virtual false, abstract: false, final false
inline void RemoveRollBackActions() ;

/// @brief Method RemoveRollBackActions, addr 0x5b91820, size 0xd8, virtual false, abstract: false, final false
inline void RemoveRollBackActions(int32_t  localCommandId) ;

/// @brief Method RemoveRollForwardCommands, addr 0x5b9167c, size 0x70, virtual false, abstract: false, final false
inline void RemoveRollForwardCommands() ;

/// @brief Method RemoveRollForwardCommands, addr 0x5b91aa4, size 0xd8, virtual false, abstract: false, final false
inline void RemoveRollForwardCommands(int32_t  localCommandId) ;

/// @brief Method RepelPieceTowardTable, addr 0x5b9f690, size 0x4d4, virtual false, abstract: false, final false
inline void RepelPieceTowardTable(int32_t  pieceID) ;

/// @brief Method RequestCreateConveyorPiece, addr 0x5b989f4, size 0x16c, virtual false, abstract: false, final false
inline void RequestCreateConveyorPiece(int32_t  newPieceType, int32_t  materialType, int32_t  shelfID) ;

/// @brief Method RequestCreateDispenserShelfPiece, addr 0x5b98b60, size 0x15c, virtual false, abstract: false, final false
inline void RequestCreateDispenserShelfPiece(int32_t  pieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType, int32_t  shelfID) ;

/// @brief Method RequestCreatePiece, addr 0x5b9a038, size 0x4, virtual false, abstract: false, final false
inline void RequestCreatePiece(int32_t  newPieceType, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, int32_t  materialType) ;

/// @brief Method RequestDropPiece, addr 0x5b9de04, size 0x50, virtual false, abstract: false, final false
inline void RequestDropPiece(::GlobalNamespace::BuilderPiece*  piece, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) ;

/// @brief Method RequestGrabPiece, addr 0x5b9d530, size 0x2c, virtual false, abstract: false, final false
inline void RequestGrabPiece(::GlobalNamespace::BuilderPiece*  piece, bool  isLefHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method RequestPaintPiece, addr 0x5b9e828, size 0x18, virtual false, abstract: false, final false
inline void RequestPaintPiece(int32_t  pieceId, int32_t  materialType) ;

/// @brief Method RequestPlacePiece, addr 0x5b9c8d4, size 0x38, virtual false, abstract: false, final false
inline void RequestPlacePiece(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  attachPiece, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, ::GlobalNamespace::BuilderPiece*  parentPiece, int32_t  attachIndex, int32_t  parentAttachIndex) ;

/// @brief Method RequestRecyclePiece, addr 0x5b9a0d0, size 0xc8, virtual false, abstract: false, final false
inline void RequestRecyclePiece(::GlobalNamespace::BuilderPiece*  piece, bool  playFX, int32_t  recyclerID) ;

/// @brief Method RequestShelfSelection, addr 0x5b990a0, size 0x2c, virtual false, abstract: false, final false
inline void RequestShelfSelection(int32_t  shelfId, int32_t  groupID, bool  isConveyor) ;

/// @brief Method RequestTableConfiguration, addr 0x5b8efb0, size 0xd4, virtual false, abstract: false, final false
inline void RequestTableConfiguration() ;

/// @brief Method ResetConveyors, addr 0x5b92efc, size 0x138, virtual false, abstract: false, final false
inline void ResetConveyors() ;

/// @brief Method ResetStartingMapConfig, addr 0x5ba2cb8, size 0xb0, virtual false, abstract: false, final false
inline void ResetStartingMapConfig() ;

/// @brief Method RollbackFailedCommand, addr 0x5b9289c, size 0x48, virtual false, abstract: false, final false
inline void RollbackFailedCommand(int32_t  localCommandId) ;

/// @brief Method Rotate180, addr 0x5ba0c0c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int Rotate180(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY) ;

/// @brief Method Rotate270, addr 0x5ba0c20, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int Rotate270(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY) ;

/// @brief Method Rotate90, addr 0x5ba0c2c, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2Int Rotate90(::UnityEngine::Vector2Int  v, int32_t  offsetX, int32_t  offsetY) ;

/// @brief Method RouteNewCommand, addr 0x5b95790, size 0xe8, virtual false, abstract: false, final false
inline void RouteNewCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd, bool  force) ;

/// @brief Method RunUpdate, addr 0x5b903c0, size 0xc4, virtual false, abstract: false, final false
inline void RunUpdate() ;

/// @brief Method SaveTableForPlayer, addr 0x5ba5934, size 0x344, virtual false, abstract: false, final false
inline void SaveTableForPlayer(::StringW  busyStr, ::StringW  blocksErrStr) ;

/// @brief Method SerializeTableState, addr 0x5ba6e54, size 0x1a4c, virtual false, abstract: false, final false
inline int32_t SerializeTableState(::ArrayW<uint8_t>  bytes, int32_t  maxBytes) ;

/// @brief Method SetConveyorSelection, addr 0x5b996f4, size 0xc8, virtual false, abstract: false, final false
inline void SetConveyorSelection(int32_t  conveyorId, int32_t  setId) ;

/// @brief Method SetDispenserSelection, addr 0x5b997bc, size 0xc8, virtual false, abstract: false, final false
inline void SetDispenserSelection(int32_t  conveyorId, int32_t  setId) ;

/// @brief Method SetFunctionalPieceState, addr 0x5b99d18, size 0x84, virtual false, abstract: false, final false
inline void SetFunctionalPieceState(int32_t  pieceID, uint8_t  state, ::GlobalNamespace::NetPlayer*  player, int32_t  timeStamp) ;

/// @brief Method SetInBuilderZone, addr 0x5b8f438, size 0x184, virtual false, abstract: false, final false
inline void SetInBuilderZone(bool  inBuilderZone) ;

/// @brief Method SetInRoom, addr 0x5b8ed88, size 0x1bc, virtual false, abstract: false, final false
inline void SetInRoom(bool  inRoom) ;

/// @brief Method SetIsDirty, addr 0x5b8d0b0, size 0x74, virtual false, abstract: false, final false
inline void SetIsDirty(bool  dirty) ;

/// @brief Method SetLocalPlayerOwnsPlot, addr 0x5b98494, size 0x74, virtual false, abstract: false, final false
inline void SetLocalPlayerOwnsPlot(bool  ownsPlot) ;

/// @brief Method SetPendingMap, addr 0x5b93034, size 0x10, virtual false, abstract: false, final false
inline void SetPendingMap(::StringW  mapID) ;

/// @brief Method SetTableState, addr 0x5b928ec, size 0x1f0, virtual false, abstract: false, final false
inline void SetTableState(::GlobalNamespace::BuilderTable_TableState  newState) ;

/// @brief Method SetupMonkeBlocksRoom, addr 0x5b8dc58, size 0x74c, virtual false, abstract: false, final false
inline void SetupMonkeBlocksRoom() ;

/// @brief Method SetupResources, addr 0x5b8e3a4, size 0x3fc, virtual false, abstract: false, final false
inline void SetupResources() ;

/// @brief Method ShareSameRoot, addr 0x5ba0a78, size 0x194, virtual false, abstract: false, final false
static inline bool ShareSameRoot(::GlobalNamespace::BuilderPiece*  piece, ::GlobalNamespace::BuilderPiece*  otherPiece) ;

/// @brief Method ShareSameRoot, addr 0x5ba0c3c, size 0x110, virtual false, abstract: false, final false
inline bool ShareSameRoot(::GorillaTagScripts::BuilderAttachGridPlane*  plane, ::GorillaTagScripts::BuilderAttachGridPlane*  otherPlane) ;

/// @brief Method ShouldDiscardCommand, addr 0x5b958a8, size 0x20, virtual false, abstract: false, final false
inline bool ShouldDiscardCommand() ;

/// @brief Method ShouldExecuteCommand, addr 0x5b95878, size 0x14, virtual false, abstract: false, final false
inline bool ShouldExecuteCommand() ;

/// @brief Method ShouldQueueCommand, addr 0x5b9588c, size 0x1c, virtual false, abstract: false, final false
inline bool ShouldQueueCommand() ;

/// @brief Method ShouldRollbackBufferCommand, addr 0x5b91c28, size 0xa4, virtual false, abstract: false, final false
inline bool ShouldRollbackBufferCommand(::GlobalNamespace::BuilderTable_BuilderCommand  cmd) ;

/// @brief Method ShowPieces, addr 0x5b93734, size 0x134, virtual false, abstract: false, final false
inline void ShowPieces(bool  show) ;

/// @brief Method Start, addr 0x5b8eaf0, size 0x298, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x5b903bc, size 0x4, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryBuildingFromTitleData, addr 0x5ba39d8, size 0xd4, virtual false, abstract: false, final false
inline void TryBuildingFromTitleData() ;

/// @brief Method TryBuildingSharedBlocksMap, addr 0x5ba4eb8, size 0x158, virtual false, abstract: false, final false
inline void TryBuildingSharedBlocksMap(::StringW  mapData) ;

/// @brief Method TryDropPiece, addr 0x5ba1ae0, size 0x160, virtual false, abstract: false, final false
inline void TryDropPiece(bool  leftHand, ::GlobalNamespace::BuilderPiece*  testPiece, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity) ;

/// @brief Method TryGetBuilderTableForZone, addr 0x5b8e878, size 0xd4, virtual false, abstract: false, final false
static inline bool TryGetBuilderTableForZone(::GlobalNamespace::GTZone  zone, ::by_ref<::GorillaTagScripts::BuilderTable*>  table) ;

/// @brief Method TryPlaceGridPlane, addr 0x5b9fdb8, size 0x19c, virtual false, abstract: false, final false
inline bool TryPlaceGridPlane(::GlobalNamespace::BuilderPiece*  piece, ::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanes, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement) ;

/// @brief Method TryPlaceGridPlaneOnGridPlane, addr 0x5b9ff54, size 0xb24, virtual false, abstract: false, final false
inline bool TryPlaceGridPlaneOnGridPlane(::GlobalNamespace::BuilderPiece*  piece, ::GorillaTagScripts::BuilderAttachGridPlane*  gridPlane, ::UnityEngine::Vector3  gridPlanePos, ::UnityEngine::Quaternion  gridPlaneRot, ::GorillaTagScripts::BuilderAttachGridPlane*  checkGridPlane, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement, ::by_ref<bool>  success) ;

/// @brief Method TryPlacePieceGridPlanesOnTableInternal, addr 0x5ba0e5c, size 0x2f0, virtual false, abstract: false, final false
inline bool TryPlacePieceGridPlanesOnTableInternal(::GlobalNamespace::BuilderPiece*  testPiece, int32_t  recurse, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesMale, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesFemale, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement) ;

/// @brief Method TryPlacePieceOnTableNoDrop, addr 0x5ba0d4c, size 0x110, virtual false, abstract: false, final false
inline bool TryPlacePieceOnTableNoDrop(bool  leftHand, ::GlobalNamespace::BuilderPiece*  testPiece, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesMale, ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  checkGridPlanesFemale, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement) ;

/// @brief Method TryPlacePieceOnTableNoDropJobs, addr 0x5ba114c, size 0x820, virtual false, abstract: false, final false
inline bool TryPlacePieceOnTableNoDropJobs(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  gridPlaneData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>  pieceData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  checkGridPlaneData, ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderPieceData>  checkPieceData, ::by_ref<::GorillaTagScripts::BuilderPotentialPlacement>  potentialPlacement, ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  allPlacements) ;

/// @brief Method TryPlaceRandomlyOnTable, addr 0x5ba1c40, size 0x474, virtual false, abstract: false, final false
inline void TryPlaceRandomlyOnTable(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method TryRollbackAndReExecute, addr 0x5b927f8, size 0xa4, virtual false, abstract: false, final false
inline bool TryRollbackAndReExecute(int32_t  localCommandId) ;

/// @brief Method UnpackPiecePlacement, addr 0x5b9bfc8, size 0x20, virtual false, abstract: false, final false
static inline void UnpackPiecePlacement(int32_t  packed, ::by_ref<uint8_t>  twist, ::by_ref<int8_t>  xOffset, ::by_ref<int8_t>  zOffset) ;

/// @brief Method UnpackSnapInfo, addr 0x5ba2774, size 0x4c, virtual false, abstract: false, final false
inline void UnpackSnapInfo(int64_t  packed, ::by_ref<int32_t>  attachGridIndex, ::by_ref<int32_t>  otherAttachGridIndex, ::by_ref<::UnityEngine::Vector2Int>  min, ::by_ref<::UnityEngine::Vector2Int>  max) ;

/// @brief Method UnregisterFunctionalPiece, addr 0x5b99e58, size 0xbc, virtual false, abstract: false, final false
inline void UnregisterFunctionalPiece(::GlobalNamespace::IBuilderPieceFunctional*  component) ;

/// @brief Method UnregisterFunctionalPieceFixedUpdate, addr 0x5b99fd0, size 0x68, virtual false, abstract: false, final false
inline void UnregisterFunctionalPieceFixedUpdate(::GlobalNamespace::IBuilderPieceFunctional*  component) ;

/// @brief Method UpdateDroppedPieces, addr 0x5b91100, size 0x390, virtual false, abstract: false, final false
inline void UpdateDroppedPieces(float_t  dt) ;

/// @brief Method UpdatePieceData, addr 0x5b9fd20, size 0x4, virtual false, abstract: false, final false
inline void UpdatePieceData(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method UpdateRollForwardCommandData, addr 0x5b92558, size 0x2a0, virtual false, abstract: false, final false
inline void UpdateRollForwardCommandData() ;

/// @brief Method UpdateTableState, addr 0x5b90484, size 0xc7c, virtual false, abstract: false, final false
inline void UpdateTableState() ;

/// @brief Method UseResource, addr 0x5ba20b4, size 0x58, virtual false, abstract: false, final false
inline void UseResource(::GlobalNamespace::BuilderResourceQuantity  quantity) ;

/// @brief Method UseResources, addr 0x5b9fb64, size 0xdc, virtual false, abstract: false, final false
inline void UseResources(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method ValidateAttachPieceParams, addr 0x5b9bd40, size 0x288, virtual false, abstract: false, final false
inline bool ValidateAttachPieceParams(int32_t  pieceId, int32_t  attachIndex, int32_t  parentId, int32_t  parentAttachIndex, int32_t  piecePlacement) ;

/// @brief Method ValidateCreatePieceParams, addr 0x5b9ada4, size 0xc8, virtual false, abstract: false, final false
inline bool ValidateCreatePieceParams(int32_t  newPieceType, int32_t  newPieceId, ::GlobalNamespace::BuilderPiece_State  state, int32_t  materialType) ;

/// @brief Method ValidateDeserializedChildPieceState, addr 0x5b9b9d4, size 0x158, virtual false, abstract: false, final false
inline bool ValidateDeserializedChildPieceState(int32_t  pieceId, ::GlobalNamespace::BuilderPiece_State  state) ;

/// @brief Method ValidateDeserializedRootPieceState, addr 0x5b9b6d4, size 0x300, virtual false, abstract: false, final false
inline bool ValidateDeserializedRootPieceState(int32_t  pieceId, ::GlobalNamespace::BuilderPiece_State  state, int32_t  shelfOwner, int32_t  heldByActor, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation) ;

/// @brief Method ValidateDropPieceParams, addr 0x5b9d70c, size 0x628, virtual false, abstract: false, final false
inline bool ValidateDropPieceParams(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::GlobalNamespace::NetPlayer*  droppedByPlayer) ;

/// @brief Method ValidateDropPieceState, addr 0x5b9dd34, size 0xd0, virtual false, abstract: false, final false
inline bool ValidateDropPieceState(int32_t  pieceId, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Vector3  velocity, ::UnityEngine::Vector3  angVelocity, ::Photon::Realtime::Player*  droppedByPlayer) ;

/// @brief Method ValidateFunctionalPieceState, addr 0x5b99984, size 0x25c, virtual false, abstract: false, final false
inline bool ValidateFunctionalPieceState(int32_t  pieceID, uint8_t  state, ::GlobalNamespace::NetPlayer*  player) ;

/// @brief Method ValidateGrabPieceParams, addr 0x5b9cad0, size 0x38c, virtual false, abstract: false, final false
inline bool ValidateGrabPieceParams(int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::GlobalNamespace::NetPlayer*  grabbedByPlayer) ;

/// @brief Method ValidateGrabPieceState, addr 0x5b9ce5c, size 0xa4, virtual false, abstract: false, final false
inline bool ValidateGrabPieceState(int32_t  pieceId, bool  isLeftHand, ::UnityEngine::Vector3  localPosition, ::UnityEngine::Quaternion  localRotation, ::Photon::Realtime::Player*  grabbedByPlayer) ;

/// @brief Method ValidatePieceWorldTransform, addr 0x5b9a9a4, size 0x294, virtual false, abstract: false, final false
inline bool ValidatePieceWorldTransform(::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method ValidatePlacePieceParams, addr 0x5b9a48c, size 0x518, virtual false, abstract: false, final false
inline bool ValidatePlacePieceParams(int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::GlobalNamespace::NetPlayer*  placedByPlayer) ;

/// @brief Method ValidatePlacePieceState, addr 0x5b9ac38, size 0x16c, virtual false, abstract: false, final false
inline bool ValidatePlacePieceState(int32_t  pieceId, int32_t  attachPieceId, int8_t  bumpOffsetX, int8_t  bumpOffsetZ, uint8_t  twist, int32_t  parentPieceId, int32_t  attachIndex, int32_t  parentAttachIndex, ::Photon::Realtime::Player*  placedByPlayer) ;

/// @brief Method ValidatePositionInArea, addr 0x5b9bb2c, size 0x160, virtual false, abstract: false, final false
inline bool ValidatePositionInArea(::UnityEngine::Vector3  position) ;

/// @brief Method ValidateRepelPiece, addr 0x5b9f55c, size 0x134, virtual false, abstract: false, final false
inline bool ValidateRepelPiece(::GlobalNamespace::BuilderPiece*  piece) ;

/// @brief Method ValidateShelfSelectionParams, addr 0x5b99314, size 0x1b0, virtual false, abstract: false, final false
inline bool ValidateShelfSelectionParams(int32_t  shelfId, int32_t  displayGroupID, bool  isConveyor, ::Photon::Realtime::Player*  player) ;

/// @brief Method VerifySetSelections, addr 0x5b990cc, size 0x248, virtual false, abstract: false, final false
inline void VerifySetSelections() ;

/// @brief Method WriteQuaternion, addr 0x5ba2530, size 0x8c, virtual false, abstract: false, final false
inline void WriteQuaternion(::System::IO::BinaryWriter*  writer, ::UnityEngine::Quaternion  data) ;

/// @brief Method WriteTableToJson, addr 0x5ba5c78, size 0xf00, virtual false, abstract: false, final false
inline ::StringW WriteTableToJson() ;

/// @brief Method WriteVector3, addr 0x5ba24c8, size 0x68, virtual false, abstract: false, final false
inline void WriteVector3(::System::IO::BinaryWriter*  writer, ::UnityEngine::Vector3  data) ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnLocalPlayerClaimedPlot() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnLocalPlayerClaimedPlot() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnMapCleared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnMapCleared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_OnMapLoadFailed() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_OnMapLoadFailed() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_OnMapLoaded() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_OnMapLoaded() ;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>* const& __cordl_internal_get_OnSaveDirtyChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<bool>*& __cordl_internal_get_OnSaveDirtyChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>* const& __cordl_internal_get_OnSaveFailure() const;

constexpr ::UnityEngine::Events::UnityEvent_1<::StringW>*& __cordl_internal_get_OnSaveFailure() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnSaveSuccess() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnSaveSuccess() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnSaveTimeUpdated() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnSaveTimeUpdated() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTableConfigurationUpdated() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTableConfigurationUpdated() ;

constexpr ::StringW const& __cordl_internal_get_SharedMapConfigTitleDataKey() const;

constexpr ::StringW& __cordl_internal_get_SharedMapConfigTitleDataKey() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_acceptableSqrDistFromCenter() const;

constexpr float_t& __cordl_internal_get_acceptableSqrDistFromCenter() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& __cordl_internal_get_activeFunctionalComponents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& __cordl_internal_get_activeFunctionalComponents() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_allPiecesMask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_allPiecesMask() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>* const& __cordl_internal_get_allPotentialPlacements() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*& __cordl_internal_get_allPotentialPlacements() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>* const& __cordl_internal_get_allPrivatePlots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>*& __cordl_internal_get_allPrivatePlots() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_allShelvesRoot() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_allShelvesRoot() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_armShelfPieceType() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_armShelfPieceType() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>* const& __cordl_internal_get_baseGridPlanes() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*& __cordl_internal_get_baseGridPlanes() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_basePieces() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_basePieces() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>* const& __cordl_internal_get_buildPieceSpawns() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*& __cordl_internal_get_buildPieceSpawns() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTableNetworking> const& __cordl_internal_get_builderNetworking() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTableNetworking>& __cordl_internal_get_builderNetworking() ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_builderPiecesVisited() const;

constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_builderPiecesVisited() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderPool> const& __cordl_internal_get_builderPool() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderPool>& __cordl_internal_get_builderPool() ;

constexpr ::UnityW<::GlobalNamespace::BuilderRenderer> const& __cordl_internal_get_builderRenderer() const;

constexpr ::UnityW<::GlobalNamespace::BuilderRenderer>& __cordl_internal_get_builderRenderer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_builtInPieceRoots() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_builtInPieceRoots() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_buttonClearLayout() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_buttonClearLayout() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_buttonSaveLayout() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_buttonSaveLayout() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_buttonSnapPosition() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_buttonSnapPosition() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton> const& __cordl_internal_get_buttonSnapRotation() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderOptionButton>& __cordl_internal_get_buttonSnapRotation() ;

constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData> const& __cordl_internal_get_checkGridPlaneData() const;

constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>& __cordl_internal_get_checkGridPlaneData() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager> const& __cordl_internal_get_conveyorManager() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>& __cordl_internal_get_conveyorManager() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>* const& __cordl_internal_get_conveyors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*& __cordl_internal_get_conveyors() ;

constexpr ::GlobalNamespace::BuilderTable_SnapParams const& __cordl_internal_get_currSnapParams() const;

constexpr ::GlobalNamespace::BuilderTable_SnapParams& __cordl_internal_get_currSnapParams() ;

constexpr int32_t const& __cordl_internal_get_currentSaveSlot() const;

constexpr int32_t& __cordl_internal_get_currentSaveSlot() ;

constexpr float_t const& __cordl_internal_get_defaultTint() const;

constexpr float_t& __cordl_internal_get_defaultTint() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>* const& __cordl_internal_get_dispenserShelves() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*& __cordl_internal_get_dispenserShelves() ;

constexpr bool const& __cordl_internal_get_doesLocalPlayerOwnPlot() const;

constexpr bool& __cordl_internal_get_doesLocalPlayerOwnPlot() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_dropZoneRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_dropZoneRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>* const& __cordl_internal_get_dropZones() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>*& __cordl_internal_get_dropZones() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>* const& __cordl_internal_get_droppedPieceData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>*& __cordl_internal_get_droppedPieceData() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_droppedPieces() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_droppedPieces() ;

constexpr float_t const& __cordl_internal_get_droppedTint() const;

constexpr float_t& __cordl_internal_get_droppedTint() ;

constexpr int32_t const& __cordl_internal_get_fetchConfigurationAttempts() const;

constexpr int32_t& __cordl_internal_get_fetchConfigurationAttempts() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& __cordl_internal_get_fixedUpdateFunctionalComponents() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& __cordl_internal_get_fixedUpdateFunctionalComponents() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& __cordl_internal_get_funcComponentsToRegister() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& __cordl_internal_get_funcComponentsToRegister() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& __cordl_internal_get_funcComponentsToRegisterFixed() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& __cordl_internal_get_funcComponentsToRegisterFixed() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& __cordl_internal_get_funcComponentsToUnregister() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& __cordl_internal_get_funcComponentsToUnregister() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>* const& __cordl_internal_get_funcComponentsToUnregisterFixed() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*& __cordl_internal_get_funcComponentsToUnregisterFixed() ;

constexpr bool const& __cordl_internal_get_getStartingMapInProgress() const;

constexpr bool& __cordl_internal_get_getStartingMapInProgress() ;

constexpr float_t const& __cordl_internal_get_grabbedTint() const;

constexpr float_t& __cordl_internal_get_grabbedTint() ;

constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData> const& __cordl_internal_get_gridPlaneData() const;

constexpr ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>& __cordl_internal_get_gridPlaneData() ;

constexpr bool const& __cordl_internal_get_hasCachedTopMaps() const;

constexpr bool& __cordl_internal_get_hasCachedTopMaps() ;

constexpr bool const& __cordl_internal_get_hasRequestedConfig() const;

constexpr bool& __cordl_internal_get_hasRequestedConfig() ;

constexpr bool const& __cordl_internal_get_hasStartingMap() const;

constexpr bool& __cordl_internal_get_hasStartingMap() ;

constexpr bool const& __cordl_internal_get_inBuilderZone() const;

constexpr bool& __cordl_internal_get_inBuilderZone() ;

constexpr bool const& __cordl_internal_get_inRoom() const;

constexpr bool& __cordl_internal_get_inRoom() ;

constexpr bool const& __cordl_internal_get_isDirty() const;

constexpr bool& __cordl_internal_get_isDirty() ;

constexpr bool const& __cordl_internal_get_isSetup() const;

constexpr bool& __cordl_internal_get_isSetup() ;

constexpr bool const& __cordl_internal_get_isTableMutable() const;

constexpr bool& __cordl_internal_get_isTableMutable() ;

constexpr double_t const& __cordl_internal_get_lastGetTopMapsTime() const;

constexpr double_t& __cordl_internal_get_lastGetTopMapsTime() ;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal> const& __cordl_internal_get_linkedTerminal() const;

constexpr ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>& __cordl_internal_get_linkedTerminal() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>* const& __cordl_internal_get_m_areaBounds() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>*& __cordl_internal_get_m_areaBounds() ;

constexpr int32_t const& __cordl_internal_get_maxPlacementChildDepth() const;

constexpr int32_t& __cordl_internal_get_maxPlacementChildDepth() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_maxResources() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_maxResources() ;

constexpr int32_t const& __cordl_internal_get_maxRetries() const;

constexpr int32_t& __cordl_internal_get_maxRetries() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand> const& __cordl_internal_get_nearbyPiecesCommands() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>& __cordl_internal_get_nearbyPiecesCommands() ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit> const& __cordl_internal_get_nearbyPiecesResults() const;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>& __cordl_internal_get_nearbyPiecesResults() ;

constexpr int32_t const& __cordl_internal_get_nextPieceId() const;

constexpr int32_t& __cordl_internal_get_nextPieceId() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_noBlocksArea() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_noBlocksArea() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>* const& __cordl_internal_get_noBlocksAreas() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>*& __cordl_internal_get_noBlocksAreas() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_noBlocksCheckResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_noBlocksCheckResults() ;

constexpr ::GlobalNamespace::BuilderTable_SnapParams const& __cordl_internal_get_overlapParams() const;

constexpr ::GlobalNamespace::BuilderTable_SnapParams& __cordl_internal_get_overlapParams() ;

constexpr float_t const& __cordl_internal_get_paintingTint() const;

constexpr float_t& __cordl_internal_get_paintingTint() ;

constexpr ::StringW const& __cordl_internal_get_pendingMapID() const;

constexpr ::StringW& __cordl_internal_get_pendingMapID() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_pieceIDToIndexCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_pieceIDToIndexCache() ;

constexpr float_t const& __cordl_internal_get_pieceScale() const;

constexpr float_t& __cordl_internal_get_pieceScale() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* const& __cordl_internal_get_pieces() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*& __cordl_internal_get_pieces() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_playerToArmShelfLeft() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_playerToArmShelfLeft() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_playerToArmShelfRight() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_playerToArmShelfRight() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_playersInBuilder() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_playersInBuilder() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_plotMaxResources() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_plotMaxResources() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>* const& __cordl_internal_get_plotOwners() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*& __cordl_internal_get_plotOwners() ;

constexpr float_t const& __cordl_internal_get_potentialGrabTint() const;

constexpr float_t& __cordl_internal_get_potentialGrabTint() ;

constexpr ::GlobalNamespace::BuilderTable_SnapParams const& __cordl_internal_get_pushAndEaseParams() const;

constexpr ::GlobalNamespace::BuilderTable_SnapParams& __cordl_internal_get_pushAndEaseParams() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* const& __cordl_internal_get_queuedBuildCommands() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*& __cordl_internal_get_queuedBuildCommands() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_recyclerRoot() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_recyclerRoot() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>* const& __cordl_internal_get_recyclers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*& __cordl_internal_get_recyclers() ;

constexpr int32_t const& __cordl_internal_get_repelHistoryIndex() const;

constexpr int32_t& __cordl_internal_get_repelHistoryIndex() ;

constexpr int32_t const& __cordl_internal_get_repelHistoryLength() const;

constexpr int32_t& __cordl_internal_get_repelHistoryLength() ;

constexpr ::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*> const& __cordl_internal_get_repelledPieceRoots() const;

constexpr ::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*>& __cordl_internal_get_repelledPieceRoots() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_reservedResources() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_reservedResources() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>* const& __cordl_internal_get_resourceMeters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*& __cordl_internal_get_resourceMeters() ;

constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& __cordl_internal_get_resourcesPerPrivatePlot() const;

constexpr ::UnityW<::GlobalNamespace::BuilderResources>& __cordl_internal_get_resourcesPerPrivatePlot() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>* const& __cordl_internal_get_rollBackActions() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>*& __cordl_internal_get_rollBackActions() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* const& __cordl_internal_get_rollBackBufferedCommands() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*& __cordl_internal_get_rollBackBufferedCommands() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* const& __cordl_internal_get_rollForwardCommands() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*& __cordl_internal_get_rollForwardCommands() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_roomCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_roomCenter() ;

constexpr bool const& __cordl_internal_get_saveInProgress() const;

constexpr bool& __cordl_internal_get_saveInProgress() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& __cordl_internal_get_sharedBlocksMap() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& __cordl_internal_get_sharedBlocksMap() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_sharedBuildArea() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_sharedBuildArea() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>> const& __cordl_internal_get_sharedBuildAreas() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>& __cordl_internal_get_sharedBuildAreas() ;

constexpr int32_t const& __cordl_internal_get_shelfSliceUpdateIndex() const;

constexpr int32_t& __cordl_internal_get_shelfSliceUpdateIndex() ;

constexpr float_t const& __cordl_internal_get_shelfTint() const;

constexpr float_t& __cordl_internal_get_shelfTint() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>* const& __cordl_internal_get_shelves() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*& __cordl_internal_get_shelves() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_shelvesRoot() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_shelvesRoot() ;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap* const& __cordl_internal_get_startingMap() const;

constexpr ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*& __cordl_internal_get_startingMap() ;

constexpr double_t const& __cordl_internal_get_startingMapCacheTime() const;

constexpr double_t& __cordl_internal_get_startingMapCacheTime() ;

constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig const& __cordl_internal_get_startingMapConfig() const;

constexpr ::GlobalNamespace::SharedBlocksManager_StartingMapConfig& __cordl_internal_get_startingMapConfig() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>* const& __cordl_internal_get_startingMapList() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*& __cordl_internal_get_startingMapList() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_tableCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_tableCenter() ;

constexpr ::GorillaTagScripts::BuilderTableData* const& __cordl_internal_get_tableData() const;

constexpr ::GorillaTagScripts::BuilderTableData*& __cordl_internal_get_tableData() ;

constexpr ::GlobalNamespace::BuilderTable_TableState const& __cordl_internal_get_tableState() const;

constexpr ::GlobalNamespace::BuilderTable_TableState& __cordl_internal_get_tableState() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get_tableZone() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get_tableZone() ;

constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& __cordl_internal_get_totalReservedResources() const;

constexpr ::UnityW<::GlobalNamespace::BuilderResources>& __cordl_internal_get_totalReservedResources() ;

constexpr ::UnityW<::GlobalNamespace::BuilderResources> const& __cordl_internal_get_totalResources() const;

constexpr ::UnityW<::GlobalNamespace::BuilderResources>& __cordl_internal_get_totalResources() ;

constexpr ::GorillaTagScripts::BuilderPlacementStyle const& __cordl_internal_get_usePlacementStyle() const;

constexpr ::GorillaTagScripts::BuilderPlacementStyle& __cordl_internal_get_usePlacementStyle() ;

constexpr bool const& __cordl_internal_get_useSnapRotation() const;

constexpr bool& __cordl_internal_get_useSnapRotation() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_usedResources() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_usedResources() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_worldCenter() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_worldCenter() ;

constexpr void __cordl_internal_set_OnLocalPlayerClaimedPlot(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnMapCleared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnMapLoadFailed(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnMapLoaded(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSaveDirtyChanged(::UnityEngine::Events::UnityEvent_1<bool>*  value) ;

constexpr void __cordl_internal_set_OnSaveFailure(::UnityEngine::Events::UnityEvent_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_OnSaveSuccess(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnSaveTimeUpdated(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnTableConfigurationUpdated(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_SharedMapConfigTitleDataKey(::StringW  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_acceptableSqrDistFromCenter(float_t  value) ;

constexpr void __cordl_internal_set_activeFunctionalComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value) ;

constexpr void __cordl_internal_set_allPiecesMask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_allPotentialPlacements(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  value) ;

constexpr void __cordl_internal_set_allPrivatePlots(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>*  value) ;

constexpr void __cordl_internal_set_allShelvesRoot(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_armShelfPieceType(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_baseGridPlanes(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  value) ;

constexpr void __cordl_internal_set_basePieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_buildPieceSpawns(::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*  value) ;

constexpr void __cordl_internal_set_builderNetworking(::UnityW<::GorillaTagScripts::BuilderTableNetworking>  value) ;

constexpr void __cordl_internal_set_builderPiecesVisited(::System::Collections::Generic::HashSet_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_builderPool(::UnityW<::GorillaTagScripts::BuilderPool>  value) ;

constexpr void __cordl_internal_set_builderRenderer(::UnityW<::GlobalNamespace::BuilderRenderer>  value) ;

constexpr void __cordl_internal_set_builtInPieceRoots(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_buttonClearLayout(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_buttonSaveLayout(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_buttonSnapPosition(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_buttonSnapRotation(::UnityW<::GorillaTagScripts::BuilderOptionButton>  value) ;

constexpr void __cordl_internal_set_checkGridPlaneData(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  value) ;

constexpr void __cordl_internal_set_conveyorManager(::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>  value) ;

constexpr void __cordl_internal_set_conveyors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*  value) ;

constexpr void __cordl_internal_set_currSnapParams(::GlobalNamespace::BuilderTable_SnapParams  value) ;

constexpr void __cordl_internal_set_currentSaveSlot(int32_t  value) ;

constexpr void __cordl_internal_set_defaultTint(float_t  value) ;

constexpr void __cordl_internal_set_dispenserShelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*  value) ;

constexpr void __cordl_internal_set_doesLocalPlayerOwnPlot(bool  value) ;

constexpr void __cordl_internal_set_dropZoneRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_dropZones(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>*  value) ;

constexpr void __cordl_internal_set_droppedPieceData(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>*  value) ;

constexpr void __cordl_internal_set_droppedPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_droppedTint(float_t  value) ;

constexpr void __cordl_internal_set_fetchConfigurationAttempts(int32_t  value) ;

constexpr void __cordl_internal_set_fixedUpdateFunctionalComponents(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value) ;

constexpr void __cordl_internal_set_funcComponentsToRegister(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value) ;

constexpr void __cordl_internal_set_funcComponentsToRegisterFixed(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value) ;

constexpr void __cordl_internal_set_funcComponentsToUnregister(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value) ;

constexpr void __cordl_internal_set_funcComponentsToUnregisterFixed(::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  value) ;

constexpr void __cordl_internal_set_getStartingMapInProgress(bool  value) ;

constexpr void __cordl_internal_set_grabbedTint(float_t  value) ;

constexpr void __cordl_internal_set_gridPlaneData(::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  value) ;

constexpr void __cordl_internal_set_hasCachedTopMaps(bool  value) ;

constexpr void __cordl_internal_set_hasRequestedConfig(bool  value) ;

constexpr void __cordl_internal_set_hasStartingMap(bool  value) ;

constexpr void __cordl_internal_set_inBuilderZone(bool  value) ;

constexpr void __cordl_internal_set_inRoom(bool  value) ;

constexpr void __cordl_internal_set_isDirty(bool  value) ;

constexpr void __cordl_internal_set_isSetup(bool  value) ;

constexpr void __cordl_internal_set_isTableMutable(bool  value) ;

constexpr void __cordl_internal_set_lastGetTopMapsTime(double_t  value) ;

constexpr void __cordl_internal_set_linkedTerminal(::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>  value) ;

constexpr void __cordl_internal_set_m_areaBounds(::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>*  value) ;

constexpr void __cordl_internal_set_maxPlacementChildDepth(int32_t  value) ;

constexpr void __cordl_internal_set_maxResources(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_maxRetries(int32_t  value) ;

constexpr void __cordl_internal_set_nearbyPiecesCommands(::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  value) ;

constexpr void __cordl_internal_set_nearbyPiecesResults(::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  value) ;

constexpr void __cordl_internal_set_nextPieceId(int32_t  value) ;

constexpr void __cordl_internal_set_noBlocksArea(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_noBlocksAreas(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>*  value) ;

constexpr void __cordl_internal_set_noBlocksCheckResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_overlapParams(::GlobalNamespace::BuilderTable_SnapParams  value) ;

constexpr void __cordl_internal_set_paintingTint(float_t  value) ;

constexpr void __cordl_internal_set_pendingMapID(::StringW  value) ;

constexpr void __cordl_internal_set_pieceIDToIndexCache(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_pieceScale(float_t  value) ;

constexpr void __cordl_internal_set_pieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

constexpr void __cordl_internal_set_playerToArmShelfLeft(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_playerToArmShelfRight(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_playersInBuilder(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_plotMaxResources(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_plotOwners(::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  value) ;

constexpr void __cordl_internal_set_potentialGrabTint(float_t  value) ;

constexpr void __cordl_internal_set_pushAndEaseParams(::GlobalNamespace::BuilderTable_SnapParams  value) ;

constexpr void __cordl_internal_set_queuedBuildCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value) ;

constexpr void __cordl_internal_set_recyclerRoot(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_recyclers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*  value) ;

constexpr void __cordl_internal_set_repelHistoryIndex(int32_t  value) ;

constexpr void __cordl_internal_set_repelHistoryLength(int32_t  value) ;

constexpr void __cordl_internal_set_repelledPieceRoots(::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*>  value) ;

constexpr void __cordl_internal_set_reservedResources(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_resourceMeters(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*  value) ;

constexpr void __cordl_internal_set_resourcesPerPrivatePlot(::UnityW<::GlobalNamespace::BuilderResources>  value) ;

constexpr void __cordl_internal_set_rollBackActions(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>*  value) ;

constexpr void __cordl_internal_set_rollBackBufferedCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value) ;

constexpr void __cordl_internal_set_rollForwardCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value) ;

constexpr void __cordl_internal_set_roomCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_saveInProgress(bool  value) ;

constexpr void __cordl_internal_set_sharedBlocksMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value) ;

constexpr void __cordl_internal_set_sharedBuildArea(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_sharedBuildAreas(::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  value) ;

constexpr void __cordl_internal_set_shelfSliceUpdateIndex(int32_t  value) ;

constexpr void __cordl_internal_set_shelfTint(float_t  value) ;

constexpr void __cordl_internal_set_shelves(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*  value) ;

constexpr void __cordl_internal_set_shelvesRoot(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_startingMap(::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  value) ;

constexpr void __cordl_internal_set_startingMapCacheTime(double_t  value) ;

constexpr void __cordl_internal_set_startingMapConfig(::GlobalNamespace::SharedBlocksManager_StartingMapConfig  value) ;

constexpr void __cordl_internal_set_startingMapList(::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  value) ;

constexpr void __cordl_internal_set_tableCenter(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_tableData(::GorillaTagScripts::BuilderTableData*  value) ;

constexpr void __cordl_internal_set_tableState(::GlobalNamespace::BuilderTable_TableState  value) ;

constexpr void __cordl_internal_set_tableZone(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_totalReservedResources(::UnityW<::GlobalNamespace::BuilderResources>  value) ;

constexpr void __cordl_internal_set_totalResources(::UnityW<::GlobalNamespace::BuilderResources>  value) ;

constexpr void __cordl_internal_set_usePlacementStyle(::GorillaTagScripts::BuilderPlacementStyle  value) ;

constexpr void __cordl_internal_set_useSnapRotation(bool  value) ;

constexpr void __cordl_internal_set_usedResources(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_worldCenter(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5ba88a0, size 0x4cc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_DROPPED_PIECE_LIMIT() ;

static inline float_t getStaticF_DROP_ZONE_REPEL() ;

static inline float_t getStaticF_MAX_DROP_ANG_VELOCITY() ;

static inline float_t getStaticF_MAX_DROP_VELOCITY() ;

static inline int32_t getStaticF_SHELF_SLICE_BUCKETS() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* getStaticF_childPieces() ;

static inline int32_t getStaticF_droppedLayer() ;

static inline int32_t getStaticF_heldLayer() ;

static inline int32_t getStaticF_heldLayerLocal() ;

static inline ::ArrayW<char16_t> getStaticF_mapIDBuffer() ;

static inline ::StringW getStaticF_nextUpdateOverride() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_overlapOtherPieces() ;

static inline ::System::Collections::Generic::List_1<int64_t>* getStaticF_overlapPacked() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_overlapPieces() ;

static inline ::StringW getStaticF_personalBuildKey() ;

static inline int32_t getStaticF_placedLayer() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* getStaticF_rootPieces() ;

static inline ::System::Collections::Generic::Dictionary_2<int64_t,int32_t>* getStaticF_snapOverlapSanity() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_tempAttachIndexes() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>* getStaticF_tempConveyors() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* getStaticF_tempDeletePieces() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>* getStaticF_tempDispensers() ;

static inline ::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>* getStaticF_tempDuplicateOverlaps() ;

static inline ::System::Collections::Generic::List_1<bool>* getStaticF_tempInLeftHand() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_tempParentActorNumbers() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_tempParentAttachIndexes() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_tempParentPeiceIds() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_tempPeiceIds() ;

static inline ::System::Collections::Generic::List_1<int32_t>* getStaticF_tempPiecePlacement() ;

static inline ::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>* getStaticF_tempPieceSet() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>* getStaticF_tempPieces() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>* getStaticF_tempRecyclers() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>* getStaticF_tempRollForwardCommands() ;

static inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>* getStaticF_zoneToInstance() ;

/// @brief Method get_CurrentSaveSlot, addr 0x5b8d2b4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentSaveSlot() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5b8b090, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Method get_gridSize, addr 0x5b8b0a0, size 0x10, virtual false, abstract: false, final false
inline float_t get_gridSize() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF_DROPPED_PIECE_LIMIT(int32_t  value) ;

static inline void setStaticF_DROP_ZONE_REPEL(float_t  value) ;

static inline void setStaticF_MAX_DROP_ANG_VELOCITY(float_t  value) ;

static inline void setStaticF_MAX_DROP_VELOCITY(float_t  value) ;

static inline void setStaticF_SHELF_SLICE_BUCKETS(int32_t  value) ;

static inline void setStaticF_childPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

static inline void setStaticF_droppedLayer(int32_t  value) ;

static inline void setStaticF_heldLayer(int32_t  value) ;

static inline void setStaticF_heldLayerLocal(int32_t  value) ;

static inline void setStaticF_mapIDBuffer(::ArrayW<char16_t>  value) ;

static inline void setStaticF_nextUpdateOverride(::StringW  value) ;

static inline void setStaticF_overlapOtherPieces(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_overlapPacked(::System::Collections::Generic::List_1<int64_t>*  value) ;

static inline void setStaticF_overlapPieces(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_personalBuildKey(::StringW  value) ;

static inline void setStaticF_placedLayer(int32_t  value) ;

static inline void setStaticF_rootPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

static inline void setStaticF_snapOverlapSanity(::System::Collections::Generic::Dictionary_2<int64_t,int32_t>*  value) ;

static inline void setStaticF_tempAttachIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_tempConveyors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*  value) ;

static inline void setStaticF_tempDeletePieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

static inline void setStaticF_tempDispensers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*  value) ;

static inline void setStaticF_tempDuplicateOverlaps(::System::Collections::Generic::HashSet_1<::GlobalNamespace::BuilderTable_SnapOverlapKey>*  value) ;

static inline void setStaticF_tempInLeftHand(::System::Collections::Generic::List_1<bool>*  value) ;

static inline void setStaticF_tempParentActorNumbers(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_tempParentAttachIndexes(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_tempParentPeiceIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_tempPeiceIds(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_tempPiecePlacement(::System::Collections::Generic::List_1<int32_t>*  value) ;

static inline void setStaticF_tempPieceSet(::System::Collections::Generic::HashSet_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

static inline void setStaticF_tempPieces(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  value) ;

static inline void setStaticF_tempRecyclers(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*  value) ;

static inline void setStaticF_tempRollForwardCommands(::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  value) ;

static inline void setStaticF_zoneToInstance(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::GTZone,::UnityW<::GorillaTagScripts::BuilderTable>>*  value) ;

/// @brief Method set_CurrentSaveSlot, addr 0x5b8d2bc, size 0x94, virtual false, abstract: false, final false
inline void set_CurrentSaveSlot(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5b8b098, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTable(BuilderTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTable(BuilderTable const& ) = delete;

/// @brief Field BUILDER_ZONE value: I32(18)
static ::GlobalNamespace::GTZone const BUILDER_ZONE;

/// @brief Field INITIAL_BUILTIN_PIECE_ID offset 0xffffffff size 0x4
static constexpr int32_t  INITIAL_BUILTIN_PIECE_ID{static_cast<int32_t>(0x5)};

/// @brief Field INITIAL_CREATED_PIECE_ID offset 0xffffffff size 0x4
static constexpr int32_t  INITIAL_CREATED_PIECE_ID{static_cast<int32_t>(0x2710)};

/// @brief Field MAX_DISTANCE_FROM_CENTER offset 0xffffffff size 0x4
static constexpr float_t  MAX_DISTANCE_FROM_CENTER{static_cast<float_t>(217.0f)};

/// @brief Field MAX_DISTANCE_FROM_HAND offset 0xffffffff size 0x4
static constexpr float_t  MAX_DISTANCE_FROM_HAND{static_cast<float_t>(2.5f)};

/// @brief Field MAX_GRID_PLANE_DATA offset 0xffffffff size 0x4
static constexpr int32_t  MAX_GRID_PLANE_DATA{static_cast<int32_t>(0x2800)};

/// @brief Field MAX_LOCAL_MAGNITUDE offset 0xffffffff size 0x4
static constexpr float_t  MAX_LOCAL_MAGNITUDE{static_cast<float_t>(80.0f)};

/// @brief Field MAX_PIECE_DATA offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PIECE_DATA{static_cast<int32_t>(0xa00)};

/// @brief Field MAX_PLAYER_DATA offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PLAYER_DATA{static_cast<int32_t>(0x40)};

/// @brief Field MAX_PRIVATE_PLOT_DATA offset 0xffffffff size 0x4
static constexpr int32_t  MAX_PRIVATE_PLOT_DATA{static_cast<int32_t>(0x40)};

/// @brief Field MAX_SPHERE_CHECK_RESULTS offset 0xffffffff size 0x4
static constexpr int32_t  MAX_SPHERE_CHECK_RESULTS{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3949};

/// @brief Field acceptableSqrDistFromCenter, offset: 0x20, size: 0x4, def value: None
 float_t  ___acceptableSqrDistFromCenter;

/// @brief Field pieceScale, offset: 0x24, size: 0x4, def value: None
 float_t  ___pieceScale;

/// @brief Field tableZone, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ___tableZone;

/// [SerializeField]
/// @brief Field SharedMapConfigTitleDataKey, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___SharedMapConfigTitleDataKey;

/// @brief Field builderNetworking, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTableNetworking>  ___builderNetworking;

/// @brief Field builderRenderer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderRenderer>  ___builderRenderer;

/// [HideInInspector]
/// @brief Field builderPool, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderPool>  ___builderPool;

/// @brief Field tableCenter, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___tableCenter;

/// @brief Field roomCenter, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___roomCenter;

/// @brief Field worldCenter, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___worldCenter;

/// @brief Field noBlocksArea, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___noBlocksArea;

/// @brief Field builtInPieceRoots, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___builtInPieceRoots;

/// [Tooltip("Optional terminal to control loaded blocks")]
/// @brief Field linkedTerminal, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::SharedBlocksTerminal>  ___linkedTerminal;

/// [Tooltip("Can Blocks Be Placed and Grabbed")]
/// @brief Field isTableMutable, offset: 0x80, size: 0x1, def value: None
 bool  ___isTableMutable;

/// @brief Field shelvesRoot, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___shelvesRoot;

/// @brief Field dropZoneRoot, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___dropZoneRoot;

/// @brief Field recyclerRoot, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___recyclerRoot;

/// @brief Field allShelvesRoot, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___allShelvesRoot;

/// @brief Field conveyors, offset: 0xa8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderConveyor>>*  ___conveyors;

/// @brief Field dispenserShelves, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDispenserShelf>>*  ___dispenserShelves;

/// @brief Field conveyorManager, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::Builder::BuilderConveyorManager>  ___conveyorManager;

/// @brief Field resourceMeters, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderResourceMeter>>*  ___resourceMeters;

/// @brief Field sharedBuildArea, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___sharedBuildArea;

/// @brief Field sharedBuildAreas, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::BoxCollider>>  ___sharedBuildAreas;

/// @brief Field armShelfPieceType, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___armShelfPieceType;

/// @brief Field recyclers, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderRecycler>>*  ___recyclers;

/// @brief Field dropZones, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderDropZone>>*  ___dropZones;

/// @brief Field shelfSliceUpdateIndex, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___shelfSliceUpdateIndex;

/// @brief Field defaultTint, offset: 0xf4, size: 0x4, def value: None
 float_t  ___defaultTint;

/// @brief Field droppedTint, offset: 0xf8, size: 0x4, def value: None
 float_t  ___droppedTint;

/// @brief Field grabbedTint, offset: 0xfc, size: 0x4, def value: None
 float_t  ___grabbedTint;

/// @brief Field shelfTint, offset: 0x100, size: 0x4, def value: None
 float_t  ___shelfTint;

/// @brief Field potentialGrabTint, offset: 0x104, size: 0x4, def value: None
 float_t  ___potentialGrabTint;

/// @brief Field paintingTint, offset: 0x108, size: 0x4, def value: None
 float_t  ___paintingTint;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x10c, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field noBlocksAreas, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BoxCheckParams>*  ___noBlocksAreas;

/// @brief Field noBlocksCheckResults, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___noBlocksCheckResults;

/// @brief Field allPiecesMask, offset: 0x120, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___allPiecesMask;

/// @brief Field useSnapRotation, offset: 0x124, size: 0x1, def value: None
 bool  ___useSnapRotation;

/// @brief Field usePlacementStyle, offset: 0x128, size: 0x4, def value: None
 ::GorillaTagScripts::BuilderPlacementStyle  ___usePlacementStyle;

/// @brief Field buttonSnapRotation, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___buttonSnapRotation;

/// @brief Field buttonSnapPosition, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___buttonSnapPosition;

/// @brief Field buttonSaveLayout, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___buttonSaveLayout;

/// @brief Field buttonClearLayout, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderOptionButton>  ___buttonClearLayout;

/// [HideInInspector]
/// @brief Field baseGridPlanes, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::BuilderAttachGridPlane>>*  ___baseGridPlanes;

/// @brief Field basePieces, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___basePieces;

/// [HideInInspector]
/// @brief Field allPrivatePlots, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiecePrivatePlot>>*  ___allPrivatePlots;

/// @brief Field nextPieceId, offset: 0x168, size: 0x4, def value: None
 int32_t  ___nextPieceId;

/// [HideInInspector]
/// @brief Field buildPieceSpawns, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderTable_BuildPieceSpawn*>*  ___buildPieceSpawns;

/// [HideInInspector]
/// @brief Field shelves, offset: 0x178, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderShelf>>*  ___shelves;

/// @brief Field pieces, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___pieces;

/// @brief Field pieceIDToIndexCache, offset: 0x188, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___pieceIDToIndexCache;

/// [HideInInspector]
/// @brief Field plotOwners, offset: 0x190, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___plotOwners;

/// @brief Field doesLocalPlayerOwnPlot, offset: 0x198, size: 0x1, def value: None
 bool  ___doesLocalPlayerOwnPlot;

/// @brief Field playerToArmShelfLeft, offset: 0x1a0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___playerToArmShelfLeft;

/// @brief Field playerToArmShelfRight, offset: 0x1a8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,int32_t>*  ___playerToArmShelfRight;

/// @brief Field builderPiecesVisited, offset: 0x1b0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int32_t>*  ___builderPiecesVisited;

/// @brief Field totalResources, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderResources>  ___totalResources;

/// [Tooltip("Resources reserved for conveyors and dispensers")]
/// @brief Field totalReservedResources, offset: 0x1c0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderResources>  ___totalReservedResources;

/// @brief Field resourcesPerPrivatePlot, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderResources>  ___resourcesPerPrivatePlot;

/// @brief Field maxResources, offset: 0x1d0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___maxResources;

/// @brief Field plotMaxResources, offset: 0x1d8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___plotMaxResources;

/// @brief Field usedResources, offset: 0x1e0, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___usedResources;

/// @brief Field reservedResources, offset: 0x1e8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___reservedResources;

/// @brief Field playersInBuilder, offset: 0x1f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___playersInBuilder;

/// @brief Field activeFunctionalComponents, offset: 0x1f8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  ___activeFunctionalComponents;

/// @brief Field funcComponentsToRegister, offset: 0x200, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  ___funcComponentsToRegister;

/// @brief Field funcComponentsToUnregister, offset: 0x208, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  ___funcComponentsToUnregister;

/// @brief Field fixedUpdateFunctionalComponents, offset: 0x210, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  ___fixedUpdateFunctionalComponents;

/// @brief Field funcComponentsToRegisterFixed, offset: 0x218, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  ___funcComponentsToRegisterFixed;

/// @brief Field funcComponentsToUnregisterFixed, offset: 0x220, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::IBuilderPieceFunctional*>*  ___funcComponentsToUnregisterFixed;

/// @brief Field gridPlaneData, offset: 0x228, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  ___gridPlaneData;

/// @brief Field checkGridPlaneData, offset: 0x230, size: 0x8, def value: None
 ::Unity::Collections::NativeList_1<::GorillaTagScripts::BuilderGridPlaneData>  ___checkGridPlaneData;

/// @brief Field nearbyPiecesResults, offset: 0x238, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::ColliderHit>  ___nearbyPiecesResults;

/// @brief Field nearbyPiecesCommands, offset: 0x248, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::UnityEngine::OverlapSphereCommand>  ___nearbyPiecesCommands;

/// @brief Field allPotentialPlacements, offset: 0x258, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::BuilderPotentialPlacement>*  ___allPotentialPlacements;

/// @brief Field tableState, offset: 0x260, size: 0x4, def value: None
 ::GlobalNamespace::BuilderTable_TableState  ___tableState;

/// @brief Field inRoom, offset: 0x264, size: 0x1, def value: None
 bool  ___inRoom;

/// @brief Field inBuilderZone, offset: 0x265, size: 0x1, def value: None
 bool  ___inBuilderZone;

/// @brief Field droppedPieces, offset: 0x268, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BuilderPiece>>*  ___droppedPieces;

/// @brief Field droppedPieceData, offset: 0x270, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_DroppedPieceData>*  ___droppedPieceData;

/// @brief Field repelledPieceRoots, offset: 0x278, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::HashSet_1<int32_t>*>  ___repelledPieceRoots;

/// @brief Field repelHistoryLength, offset: 0x280, size: 0x4, def value: None
 int32_t  ___repelHistoryLength;

/// @brief Field repelHistoryIndex, offset: 0x284, size: 0x4, def value: None
 int32_t  ___repelHistoryIndex;

/// @brief Field hasRequestedConfig, offset: 0x288, size: 0x1, def value: None
 bool  ___hasRequestedConfig;

/// @brief Field isDirty, offset: 0x289, size: 0x1, def value: None
 bool  ___isDirty;

/// @brief Field saveInProgress, offset: 0x28a, size: 0x1, def value: None
 bool  ___saveInProgress;

/// @brief Field currentSaveSlot, offset: 0x28c, size: 0x4, def value: None
 int32_t  ___currentSaveSlot;

/// [HideInInspector]
/// @brief Field OnSaveTimeUpdated, offset: 0x290, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnSaveTimeUpdated;

/// [HideInInspector]
/// @brief Field OnSaveDirtyChanged, offset: 0x298, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnSaveDirtyChanged;

/// [HideInInspector]
/// @brief Field OnSaveSuccess, offset: 0x2a0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnSaveSuccess;

/// [HideInInspector]
/// @brief Field OnSaveFailure, offset: 0x2a8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___OnSaveFailure;

/// [HideInInspector]
/// @brief Field OnTableConfigurationUpdated, offset: 0x2b0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTableConfigurationUpdated;

/// [HideInInspector]
/// @brief Field OnLocalPlayerClaimedPlot, offset: 0x2b8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<bool>*  ___OnLocalPlayerClaimedPlot;

/// [HideInInspector]
/// @brief Field OnMapCleared, offset: 0x2c0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnMapCleared;

/// [HideInInspector]
/// @brief Field OnMapLoaded, offset: 0x2c8, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___OnMapLoaded;

/// [HideInInspector]
/// @brief Field OnMapLoadFailed, offset: 0x2d0, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<::StringW>*  ___OnMapLoadFailed;

/// @brief Field queuedBuildCommands, offset: 0x2d8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  ___queuedBuildCommands;

/// @brief Field rollBackActions, offset: 0x2e0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderAction>*  ___rollBackActions;

/// @brief Field rollBackBufferedCommands, offset: 0x2e8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  ___rollBackBufferedCommands;

/// @brief Field rollForwardCommands, offset: 0x2f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::BuilderTable_BuilderCommand>*  ___rollForwardCommands;

/// @brief Field isSetup, offset: 0x2f8, size: 0x1, def value: None
 bool  ___isSetup;

/// @brief Field pushAndEaseParams, offset: 0x2fc, size: 0x28, def value: None
 ::GlobalNamespace::BuilderTable_SnapParams  ___pushAndEaseParams;

/// @brief Field overlapParams, offset: 0x324, size: 0x28, def value: None
 ::GlobalNamespace::BuilderTable_SnapParams  ___overlapParams;

/// @brief Field currSnapParams, offset: 0x34c, size: 0x28, def value: None
 ::GlobalNamespace::BuilderTable_SnapParams  ___currSnapParams;

/// @brief Field maxPlacementChildDepth, offset: 0x374, size: 0x4, def value: None
 int32_t  ___maxPlacementChildDepth;

/// @brief Field m_areaBounds, offset: 0x378, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTag::SimpleAABB>>*  ___m_areaBounds;

/// @brief Field tableData, offset: 0x380, size: 0x8, def value: None
 ::GorillaTagScripts::BuilderTableData*  ___tableData;

/// @brief Field fetchConfigurationAttempts, offset: 0x388, size: 0x4, def value: None
 int32_t  ___fetchConfigurationAttempts;

/// @brief Field maxRetries, offset: 0x38c, size: 0x4, def value: None
 int32_t  ___maxRetries;

/// @brief Field sharedBlocksMap, offset: 0x390, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  ___sharedBlocksMap;

/// @brief Field pendingMapID, offset: 0x398, size: 0x8, def value: None
 ::StringW  ___pendingMapID;

/// @brief Field startingMapConfig, offset: 0x3a0, size: 0x20, def value: None
 ::GlobalNamespace::SharedBlocksManager_StartingMapConfig  ___startingMapConfig;

/// @brief Field startingMapList, offset: 0x3c0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*>*  ___startingMapList;

/// @brief Field startingMap, offset: 0x3c8, size: 0x8, def value: None
 ::GorillaTagScripts::Builder::SharedBlocksManager_SharedBlocksMap*  ___startingMap;

/// @brief Field hasStartingMap, offset: 0x3d0, size: 0x1, def value: None
 bool  ___hasStartingMap;

/// @brief Field startingMapCacheTime, offset: 0x3d8, size: 0x8, def value: None
 double_t  ___startingMapCacheTime;

/// @brief Field getStartingMapInProgress, offset: 0x3e0, size: 0x1, def value: None
 bool  ___getStartingMapInProgress;

/// @brief Field hasCachedTopMaps, offset: 0x3e1, size: 0x1, def value: None
 bool  ___hasCachedTopMaps;

/// @brief Field lastGetTopMapsTime, offset: 0x3e8, size: 0x8, def value: None
 double_t  ___lastGetTopMapsTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___acceptableSqrDistFromCenter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___pieceScale) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___tableZone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___SharedMapConfigTitleDataKey) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___builderNetworking) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___builderRenderer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___builderPool) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___tableCenter) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___roomCenter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___worldCenter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___noBlocksArea) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___builtInPieceRoots) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___linkedTerminal) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___isTableMutable) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___shelvesRoot) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___dropZoneRoot) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___recyclerRoot) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___allShelvesRoot) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___conveyors) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___dispenserShelves) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___conveyorManager) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___resourceMeters) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___sharedBuildArea) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___sharedBuildAreas) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___armShelfPieceType) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___recyclers) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___dropZones) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___shelfSliceUpdateIndex) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___defaultTint) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___droppedTint) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___grabbedTint) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___shelfTint) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___potentialGrabTint) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___paintingTint) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ____TickRunning_k__BackingField) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___noBlocksAreas) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___noBlocksCheckResults) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___allPiecesMask) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___useSnapRotation) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___usePlacementStyle) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___buttonSnapRotation) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___buttonSnapPosition) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___buttonSaveLayout) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___buttonClearLayout) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___baseGridPlanes) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___basePieces) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___allPrivatePlots) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___nextPieceId) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___buildPieceSpawns) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___shelves) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___pieces) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___pieceIDToIndexCache) == 0x188, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___plotOwners) == 0x190, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___doesLocalPlayerOwnPlot) == 0x198, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___playerToArmShelfLeft) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___playerToArmShelfRight) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___builderPiecesVisited) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___totalResources) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___totalReservedResources) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___resourcesPerPrivatePlot) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___maxResources) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___plotMaxResources) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___usedResources) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___reservedResources) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___playersInBuilder) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___activeFunctionalComponents) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___funcComponentsToRegister) == 0x200, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___funcComponentsToUnregister) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___fixedUpdateFunctionalComponents) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___funcComponentsToRegisterFixed) == 0x218, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___funcComponentsToUnregisterFixed) == 0x220, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___gridPlaneData) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___checkGridPlaneData) == 0x230, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___nearbyPiecesResults) == 0x238, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___nearbyPiecesCommands) == 0x248, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___allPotentialPlacements) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___tableState) == 0x260, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___inRoom) == 0x264, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___inBuilderZone) == 0x265, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___droppedPieces) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___droppedPieceData) == 0x270, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___repelledPieceRoots) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___repelHistoryLength) == 0x280, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___repelHistoryIndex) == 0x284, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___hasRequestedConfig) == 0x288, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___isDirty) == 0x289, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___saveInProgress) == 0x28a, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___currentSaveSlot) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnSaveTimeUpdated) == 0x290, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnSaveDirtyChanged) == 0x298, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnSaveSuccess) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnSaveFailure) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnTableConfigurationUpdated) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnLocalPlayerClaimedPlot) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnMapCleared) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnMapLoaded) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___OnMapLoadFailed) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___queuedBuildCommands) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___rollBackActions) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___rollBackBufferedCommands) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___rollForwardCommands) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___isSetup) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___pushAndEaseParams) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___overlapParams) == 0x324, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___currSnapParams) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___maxPlacementChildDepth) == 0x374, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___m_areaBounds) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___tableData) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___fetchConfigurationAttempts) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___maxRetries) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___sharedBlocksMap) == 0x390, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___pendingMapID) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___startingMapConfig) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___startingMapList) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___startingMap) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___hasStartingMap) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___startingMapCacheTime) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___getStartingMapInProgress) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___hasCachedTopMaps) == 0x3e1, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable, ___lastGetTopMapsTime) == 0x3e8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderTable) == 0x3f0, "Size mismatch!");

} // namespace end def GorillaTagScripts
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTable/<CheckForNoBlocks>d__392
class CORDL_TYPE BuilderTable__CheckForNoBlocks_d__392 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTagScripts::BuilderTable>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5ba975c, size 0x17c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5ba9cc0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5ba9cc8, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5ba9d00, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5ba9758, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTagScripts::BuilderTable>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTagScripts::BuilderTable>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5ba9730, size 0x28, virtual false, abstract: false, final false
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
constexpr BuilderTable__CheckForNoBlocks_d__392() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTable__CheckForNoBlocks_d__392", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTable__CheckForNoBlocks_d__392(BuilderTable__CheckForNoBlocks_d__392 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTable__CheckForNoBlocks_d__392", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTable__CheckForNoBlocks_d__392(BuilderTable__CheckForNoBlocks_d__392 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3948};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::BuilderTable>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderTable__CheckForNoBlocks_d__392) == 0x28, "Size mismatch!");

} // namespace end def GorillaTagScripts
// Dependencies System.Object
namespace GorillaTagScripts {
// Is value type: false
// CS Name: GorillaTagScripts.BuilderTable/BuildPieceSpawn
class CORDL_TYPE BuilderTable_BuildPieceSpawn : public ::System::Object {
public:
// Declarations
/// @brief Field buildPiecePrefab, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buildPiecePrefab, put=__cordl_internal_set_buildPiecePrefab)) ::UnityW<::UnityEngine::GameObject>  buildPiecePrefab;

/// @brief Field count, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_count, put=__cordl_internal_set_count)) int32_t  count;

static inline ::GorillaTagScripts::BuilderTable_BuildPieceSpawn* New_ctor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_buildPiecePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_buildPiecePrefab() ;

constexpr int32_t const& __cordl_internal_get_count() const;

constexpr int32_t& __cordl_internal_get_count() ;

constexpr void __cordl_internal_set_buildPiecePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_count(int32_t  value) ;

/// @brief Method .ctor, addr 0x5ba95d8, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderTable_BuildPieceSpawn() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderTable_BuildPieceSpawn", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderTable_BuildPieceSpawn(BuilderTable_BuildPieceSpawn && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderTable_BuildPieceSpawn", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderTable_BuildPieceSpawn(BuilderTable_BuildPieceSpawn const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3940};

/// @brief Field buildPiecePrefab, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___buildPiecePrefab;

/// @brief Field count, offset: 0x18, size: 0x4, def value: None
 int32_t  ___count;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::BuilderTable_BuildPieceSpawn, ___buildPiecePrefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::BuilderTable_BuildPieceSpawn, ___count) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::BuilderTable_BuildPieceSpawn) == 0x20, "Size mismatch!");

} // namespace end def GorillaTagScripts
