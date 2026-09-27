#pragma once
// IWYU pragma private; include "GlobalNamespace/AstarPath.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AstarPath_AstarDistribution_def.hpp"
#include "Pathfinding/zzzz__AstarWorkItem_def.hpp"
#include "Pathfinding/zzzz__GraphDebugMode_def.hpp"
#include "Pathfinding/zzzz__Heuristic_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__PathLog_def.hpp"
#include "Pathfinding/zzzz__PathProcessor_GraphUpdateLock_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "Pathfinding/zzzz__ThreadCount_def.hpp"
#include "Pathfinding/zzzz__VersionedMonoBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AstarPath)
namespace GlobalNamespace {
struct AstarPath_AstarDistribution;
}
namespace GlobalNamespace {
class AstarPath__DelayedGraphUpdate_d__109;
}
namespace GlobalNamespace {
class AstarPath__ScanAsync_d__142;
}
namespace GlobalNamespace {
class AstarPath__ScanGraph_d__143;
}
namespace GlobalNamespace {
class AstarPath__UpdateGraphsInternal_d__112;
}
namespace GlobalNamespace {
class AstarPath___c;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass108_0;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass143_0;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass153_0;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass97_0;
}
namespace GlobalNamespace {
struct PathProcessor_GraphUpdateLock;
}
namespace Pathfinding::Util {
class RetainedGizmos;
}
namespace Pathfinding {
class AstarColor;
}
namespace Pathfinding {
class AstarData;
}
namespace Pathfinding {
struct AstarWorkItem;
}
namespace Pathfinding {
class EuclideanEmbedding;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
class GraphUpdateProcessor;
}
namespace Pathfinding {
class HierarchicalGraph;
}
namespace Pathfinding {
class IWorkItemContext;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
struct NNInfo;
}
namespace Pathfinding {
class NavGraph;
}
namespace Pathfinding {
class NavmeshUpdates;
}
namespace Pathfinding {
class OnGraphDelegate;
}
namespace Pathfinding {
class OnPathDelegate;
}
namespace Pathfinding {
class OnScanDelegate;
}
namespace Pathfinding {
class PathHandler;
}
namespace Pathfinding {
class PathProcessor;
}
namespace Pathfinding {
class PathReturnQueue;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
struct Progress;
}
namespace Pathfinding {
struct ThreadCount;
}
namespace Pathfinding {
class WorkItemProcessor;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Diagnostics {
class Stopwatch;
}
namespace System {
template<typename T>
class Action_1;
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
class Version;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class AstarPath;
}
namespace GlobalNamespace {
class AstarPath__DelayedGraphUpdate_d__109;
}
namespace GlobalNamespace {
class AstarPath__ScanAsync_d__142;
}
namespace GlobalNamespace {
class AstarPath__ScanGraph_d__143;
}
namespace GlobalNamespace {
class AstarPath__UpdateGraphsInternal_d__112;
}
namespace GlobalNamespace {
class AstarPath___c;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass108_0;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass143_0;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass153_0;
}
namespace GlobalNamespace {
class AstarPath___c__DisplayClass97_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AstarPath*);
MARK_REF_T(::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*);
MARK_REF_T(::GlobalNamespace::AstarPath__ScanAsync_d__142*);
MARK_REF_T(::GlobalNamespace::AstarPath__ScanGraph_d__143*);
MARK_REF_T(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*);
MARK_REF_T(::GlobalNamespace::AstarPath___c*);
MARK_REF_T(::GlobalNamespace::AstarPath___c__DisplayClass108_0*);
MARK_REF_T(::GlobalNamespace::AstarPath___c__DisplayClass143_0*);
MARK_REF_T(::GlobalNamespace::AstarPath___c__DisplayClass153_0*);
MARK_REF_T(::GlobalNamespace::AstarPath___c__DisplayClass97_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath*, "", "AstarPath");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109*, "", "AstarPath/<DelayedGraphUpdate>d__109");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath__ScanAsync_d__142*, "", "AstarPath/<ScanAsync>d__142");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath__ScanGraph_d__143*, "", "AstarPath/<ScanGraph>d__143");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112*, "", "AstarPath/<UpdateGraphsInternal>d__112");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath___c*, "", "AstarPath/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath___c__DisplayClass108_0*, "", "AstarPath/<>c__DisplayClass108_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath___c__DisplayClass143_0*, "", "AstarPath/<>c__DisplayClass143_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath___c__DisplayClass153_0*, "", "AstarPath/<>c__DisplayClass153_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarPath___c__DisplayClass97_0*, "", "AstarPath/<>c__DisplayClass97_0");
// [ExecuteInEditMode]
// [AddComponentMenu("Pathfinding/Pathfinder")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_astar_path.php")]
// Dependencies AstarPath::AstarDistribution, Pathfinding.GraphDebugMode, Pathfinding.Heuristic, Pathfinding.PathLog, Pathfinding.PathProcessor::GraphUpdateLock, Pathfinding.ThreadCount, Pathfinding.VersionedMonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath
class CORDL_TYPE AstarPath : public ::Pathfinding::VersionedMonoBehaviour {
public:
// Declarations
using AstarDistribution = ::GlobalNamespace::AstarPath_AstarDistribution;

using _DelayedGraphUpdate_d__109 = ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109;

using _ScanAsync_d__142 = ::GlobalNamespace::AstarPath__ScanAsync_d__142;

using _ScanGraph_d__143 = ::GlobalNamespace::AstarPath__ScanGraph_d__143;

using _UpdateGraphsInternal_d__112 = ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112;

using __c = ::GlobalNamespace::AstarPath___c;

using __c__DisplayClass108_0 = ::GlobalNamespace::AstarPath___c__DisplayClass108_0;

using __c__DisplayClass143_0 = ::GlobalNamespace::AstarPath___c__DisplayClass143_0;

using __c__DisplayClass153_0 = ::GlobalNamespace::AstarPath___c__DisplayClass153_0;

using __c__DisplayClass97_0 = ::GlobalNamespace::AstarPath___c__DisplayClass97_0;

/// @brief Field Branch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Branch, put=setStaticF_Branch)) ::StringW  Branch;

/// @brief Field Distribution, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Distribution, put=setStaticF_Distribution)) ::GlobalNamespace::AstarPath_AstarDistribution  Distribution;

 __declspec(property(get=get_IsAnyGraphUpdateInProgress)) bool  IsAnyGraphUpdateInProgress;

 __declspec(property(get=get_IsAnyGraphUpdateQueued)) bool  IsAnyGraphUpdateQueued;

/// @brief [Obsolete("Fixed grammar, use IsAnyGraphUpdateQueued instead")]
 __declspec(property(get=get_IsAnyGraphUpdatesQueued)) bool  IsAnyGraphUpdatesQueued;

 __declspec(property(get=get_IsAnyWorkItemInProgress)) bool  IsAnyWorkItemInProgress;

 __declspec(property(get=get_IsInsideWorkItem)) bool  IsInsideWorkItem;

 __declspec(property(get=get_IsUsingMultithreading)) bool  IsUsingMultithreading;

/// @brief Field NNConstraintNone, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_NNConstraintNone, put=setStaticF_NNConstraintNone)) ::Pathfinding::NNConstraint*  NNConstraintNone;

 __declspec(property(get=get_NumParallelThreads)) int32_t  NumParallelThreads;

/// @brief Field On65KOverflow, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_On65KOverflow, put=setStaticF_On65KOverflow)) ::System::Action*  On65KOverflow;

/// @brief Field OnAwakeSettings, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnAwakeSettings, put=setStaticF_OnAwakeSettings)) ::System::Action*  OnAwakeSettings;

/// @brief Field OnGraphPostScan, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGraphPostScan, put=setStaticF_OnGraphPostScan)) ::Pathfinding::OnGraphDelegate*  OnGraphPostScan;

/// @brief Field OnGraphPreScan, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGraphPreScan, put=setStaticF_OnGraphPreScan)) ::Pathfinding::OnGraphDelegate*  OnGraphPreScan;

/// @brief Field OnGraphsUpdated, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnGraphsUpdated, put=setStaticF_OnGraphsUpdated)) ::Pathfinding::OnScanDelegate*  OnGraphsUpdated;

/// @brief Field OnGraphsWillBeUpdated, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGraphsWillBeUpdated, put=__cordl_internal_set_OnGraphsWillBeUpdated)) ::System::Action*  OnGraphsWillBeUpdated;

/// @brief Field OnGraphsWillBeUpdated2, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGraphsWillBeUpdated2, put=__cordl_internal_set_OnGraphsWillBeUpdated2)) ::System::Action*  OnGraphsWillBeUpdated2;

/// @brief Field OnLatePostScan, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnLatePostScan, put=setStaticF_OnLatePostScan)) ::Pathfinding::OnScanDelegate*  OnLatePostScan;

/// @brief Field OnPathPostSearch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPathPostSearch, put=setStaticF_OnPathPostSearch)) ::Pathfinding::OnPathDelegate*  OnPathPostSearch;

/// @brief Field OnPathPreSearch, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPathPreSearch, put=setStaticF_OnPathPreSearch)) ::Pathfinding::OnPathDelegate*  OnPathPreSearch;

/// @brief Field OnPostScan, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPostScan, put=setStaticF_OnPostScan)) ::Pathfinding::OnScanDelegate*  OnPostScan;

/// @brief Field OnPreScan, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_OnPreScan, put=setStaticF_OnPreScan)) ::Pathfinding::OnScanDelegate*  OnPreScan;

/// @brief Field Version, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Version, put=setStaticF_Version)) ::System::Version*  Version;

/// @brief Field <lastScanTime>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastScanTime_k__BackingField, put=__cordl_internal_set__lastScanTime_k__BackingField)) float_t  _lastScanTime_k__BackingField;

/// @brief Field active, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_active, put=setStaticF_active)) ::UnityW<::GlobalNamespace::AstarPath>  active;

/// @brief [Obsolete("The \'astarData\' field has been renamed to \'data\'")]
 __declspec(property(get=get_astarData)) ::Pathfinding::AstarData*  astarData;

/// @brief Field batchGraphUpdates, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_batchGraphUpdates, put=__cordl_internal_set_batchGraphUpdates)) bool  batchGraphUpdates;

/// @brief Field colorSettings, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorSettings, put=__cordl_internal_set_colorSettings)) ::Pathfinding::AstarColor*  colorSettings;

/// @brief Field data, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::Pathfinding::AstarData*  data;

/// @brief Field debugFloor, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugFloor, put=__cordl_internal_set_debugFloor)) float_t  debugFloor;

/// @brief Field debugMode, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugMode, put=__cordl_internal_set_debugMode)) ::Pathfinding::GraphDebugMode  debugMode;

/// @brief Field debugPathData, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugPathData, put=__cordl_internal_set_debugPathData)) ::Pathfinding::PathHandler*  debugPathData;

/// @brief Field debugPathID, offset 0x90, size 0x2 
 __declspec(property(get=__cordl_internal_get_debugPathID, put=__cordl_internal_set_debugPathID)) uint16_t  debugPathID;

/// @brief Field debugRoof, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugRoof, put=__cordl_internal_set_debugRoof)) float_t  debugRoof;

/// @brief Field euclideanEmbedding, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_euclideanEmbedding, put=__cordl_internal_set_euclideanEmbedding)) ::Pathfinding::EuclideanEmbedding*  euclideanEmbedding;

/// @brief Field fullGetNearestSearch, offset 0x51, size 0x1 
 __declspec(property(get=__cordl_internal_get_fullGetNearestSearch, put=__cordl_internal_set_fullGetNearestSearch)) bool  fullGetNearestSearch;

/// @brief Field gizmos, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_gizmos, put=__cordl_internal_set_gizmos)) ::Pathfinding::Util::RetainedGizmos*  gizmos;

/// @brief [Obsolete]
 __declspec(property(get=get_graphTypes)) ::ArrayW<::System::Type*>  graphTypes;

/// @brief Field graphUpdateBatchingInterval, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_graphUpdateBatchingInterval, put=__cordl_internal_set_graphUpdateBatchingInterval)) float_t  graphUpdateBatchingInterval;

/// @brief Field graphUpdateRoutineRunning, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get_graphUpdateRoutineRunning, put=__cordl_internal_set_graphUpdateRoutineRunning)) bool  graphUpdateRoutineRunning;

/// @brief Field graphUpdates, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphUpdates, put=__cordl_internal_set_graphUpdates)) ::Pathfinding::GraphUpdateProcessor*  graphUpdates;

/// @brief Field graphUpdatesWorkItemAdded, offset 0xe1, size 0x1 
 __declspec(property(get=__cordl_internal_get_graphUpdatesWorkItemAdded, put=__cordl_internal_set_graphUpdatesWorkItemAdded)) bool  graphUpdatesWorkItemAdded;

 __declspec(property(get=get_graphs)) ::ArrayW<::Pathfinding::NavGraph*>  graphs;

/// @brief Field heuristic, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_heuristic, put=__cordl_internal_set_heuristic)) ::Pathfinding::Heuristic  heuristic;

/// @brief Field heuristicScale, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_heuristicScale, put=__cordl_internal_set_heuristicScale)) float_t  heuristicScale;

/// @brief Field hierarchicalGraph, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_hierarchicalGraph, put=__cordl_internal_set_hierarchicalGraph)) ::Pathfinding::HierarchicalGraph*  hierarchicalGraph;

/// @brief Field inGameDebugPath, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_inGameDebugPath, put=__cordl_internal_set_inGameDebugPath)) ::StringW  inGameDebugPath;

/// @brief Field initialized, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialized, put=__cordl_internal_set_initialized)) bool  initialized;

 __declspec(property(get=get_isScanning, put=set_isScanning)) bool  isScanning;

/// @brief Field isScanningBacking, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get_isScanningBacking, put=__cordl_internal_set_isScanningBacking)) bool  isScanningBacking;

/// @brief Field lastGraphUpdate, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastGraphUpdate, put=__cordl_internal_set_lastGraphUpdate)) float_t  lastGraphUpdate;

 __declspec(property(get=get_lastScanTime, put=set_lastScanTime)) float_t  lastScanTime;

/// @brief [Obsolete("This field has been renamed to \'batchGraphUpdates\'")]
 __declspec(property(get=get_limitGraphUpdates, put=set_limitGraphUpdates)) bool  limitGraphUpdates;

/// @brief Field logPathResults, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_logPathResults, put=__cordl_internal_set_logPathResults)) ::Pathfinding::PathLog  logPathResults;

/// @brief Field manualDebugFloorRoof, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_manualDebugFloorRoof, put=__cordl_internal_set_manualDebugFloorRoof)) bool  manualDebugFloorRoof;

/// @brief Field maxFrameTime, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxFrameTime, put=__cordl_internal_set_maxFrameTime)) float_t  maxFrameTime;

/// @brief [Obsolete("This field has been renamed to \'graphUpdateBatchingInterval\'")]
 __declspec(property(get=get_maxGraphUpdateFreq, put=set_maxGraphUpdateFreq)) float_t  maxGraphUpdateFreq;

/// @brief Field maxNearestNodeDistance, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxNearestNodeDistance, put=__cordl_internal_set_maxNearestNodeDistance)) float_t  maxNearestNodeDistance;

 __declspec(property(get=get_maxNearestNodeDistanceSqr)) float_t  maxNearestNodeDistanceSqr;

/// @brief Field navmeshUpdates, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_navmeshUpdates, put=__cordl_internal_set_navmeshUpdates)) ::Pathfinding::NavmeshUpdates*  navmeshUpdates;

/// @brief Field nextFreePathID, offset 0x10a, size 0x2 
 __declspec(property(get=__cordl_internal_get_nextFreePathID, put=__cordl_internal_set_nextFreePathID)) uint16_t  nextFreePathID;

/// @brief Field pathProcessor, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathProcessor, put=__cordl_internal_set_pathProcessor)) ::Pathfinding::PathProcessor*  pathProcessor;

/// @brief Field pathReturnQueue, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathReturnQueue, put=__cordl_internal_set_pathReturnQueue)) ::Pathfinding::PathReturnQueue*  pathReturnQueue;

/// @brief Field prioritizeGraphs, offset 0x52, size 0x1 
 __declspec(property(get=__cordl_internal_get_prioritizeGraphs, put=__cordl_internal_set_prioritizeGraphs)) bool  prioritizeGraphs;

/// @brief Field prioritizeGraphsLimit, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_prioritizeGraphsLimit, put=__cordl_internal_set_prioritizeGraphsLimit)) float_t  prioritizeGraphsLimit;

/// @brief Field scanOnStartup, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_scanOnStartup, put=__cordl_internal_set_scanOnStartup)) bool  scanOnStartup;

/// @brief Field showGraphs, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_showGraphs, put=__cordl_internal_set_showGraphs)) bool  showGraphs;

/// @brief Field showNavGraphs, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_showNavGraphs, put=__cordl_internal_set_showNavGraphs)) bool  showNavGraphs;

/// @brief Field showSearchTree, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_showSearchTree, put=__cordl_internal_set_showSearchTree)) bool  showSearchTree;

/// @brief Field showUnwalkableNodes, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_showUnwalkableNodes, put=__cordl_internal_set_showUnwalkableNodes)) bool  showUnwalkableNodes;

/// @brief Field tagNames, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_tagNames, put=__cordl_internal_set_tagNames)) ::ArrayW<::StringW>  tagNames;

/// @brief Field threadCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_threadCount, put=__cordl_internal_set_threadCount)) ::Pathfinding::ThreadCount  threadCount;

/// @brief Field unwalkableNodeDebugSize, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_unwalkableNodeDebugSize, put=__cordl_internal_set_unwalkableNodeDebugSize)) float_t  unwalkableNodeDebugSize;

/// @brief Field waitForPathDepth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_waitForPathDepth, put=setStaticF_waitForPathDepth)) int32_t  waitForPathDepth;

/// @brief Field workItemLock, offset 0xe8, size 0x10 
 __declspec(property(get=__cordl_internal_get_workItemLock, put=__cordl_internal_set_workItemLock)) ::GlobalNamespace::PathProcessor_GraphUpdateLock  workItemLock;

/// @brief Field workItems, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_workItems, put=__cordl_internal_set_workItems)) ::Pathfinding::WorkItemProcessor*  workItems;

/// @brief Method AddWorkItem, addr 0x5e33190, size 0x44, virtual false, abstract: false, final false
inline void AddWorkItem(::System::Action*  callback) ;

/// @brief Method AddWorkItem, addr 0x5e33234, size 0x44, virtual false, abstract: false, final false
inline void AddWorkItem(::System::Action_1<::Pathfinding::IWorkItemContext*>*  callback) ;

/// @brief Method AddWorkItem, addr 0x5e331d4, size 0x60, virtual false, abstract: false, final false
inline void AddWorkItem(::Pathfinding::AstarWorkItem  item) ;

/// @brief Method Awake, addr 0x5e339d4, size 0x3b4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BlockUntilCalculated, addr 0x5e34d4c, size 0x4d4, virtual false, abstract: false, final false
static inline void BlockUntilCalculated(::Pathfinding::Path*  path) ;

/// [Obsolete("Use PausePathfinding instead. Make sure to call Release on the returned lock.", true)]
/// @brief Method BlockUntilPathQueueBlocked, addr 0x5e349c0, size 0x4, virtual false, abstract: false, final false
inline void BlockUntilPathQueueBlocked() ;

/// @brief Method CalculateThreadCount, addr 0x5e33838, size 0x184, virtual false, abstract: false, final false
static inline int32_t CalculateThreadCount(::Pathfinding::ThreadCount  count) ;

/// @brief Method ConfigureReferencesInternal, addr 0x5e34020, size 0x100, virtual false, abstract: false, final false
inline void ConfigureReferencesInternal() ;

/// [IteratorStateMachine(typeof(AstarPath::<DelayedGraphUpdate>d__109))]
/// @brief Method DelayedGraphUpdate, addr 0x5e333c0, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* DelayedGraphUpdate() ;

/// @brief Method DestroyNode, addr 0x5e349a8, size 0x18, virtual false, abstract: false, final false
inline void DestroyNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method EnsureInitialized, addr 0x5e339bc, size 0x18, virtual false, abstract: false, final false
inline void EnsureInitialized() ;

/// [Obsolete("This method has been moved. Use the method on the context object that can be sent with work item delegates instead")]
/// @brief Method EnsureValidFloodFill, addr 0x5e33144, size 0x4c, virtual false, abstract: false, final false
inline void EnsureValidFloodFill() ;

/// @brief Method FindAstarPath, addr 0x5e325d4, size 0x1fc, virtual false, abstract: false, final false
static inline void FindAstarPath() ;

/// @brief Method FindTagNames, addr 0x5e327d0, size 0x120, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> FindTagNames() ;

/// [ContextMenu("Flood Fill Graphs")]
/// [Obsolete("Avoid using. This will force a full recalculation of the connected components. In most cases the HierarchicalGraph class takes care of things automatically behind the scenes now.")]
/// @brief Method FloodFill, addr 0x5e34948, size 0x30, virtual false, abstract: false, final false
inline void FloodFill() ;

/// [Obsolete("Not meaningful anymore. The HierarchicalGraph takes care of things automatically behind the scenes")]
/// @brief Method FloodFill, addr 0x5e34940, size 0x4, virtual false, abstract: false, final false
inline void FloodFill(::Pathfinding::GraphNode*  seed) ;

/// [Obsolete("Not meaningful anymore. The HierarchicalGraph takes care of things automatically behind the scenes")]
/// @brief Method FloodFill, addr 0x5e34944, size 0x4, virtual false, abstract: false, final false
inline void FloodFill(::Pathfinding::GraphNode*  seed, uint32_t  area) ;

/// @brief Method FlushGraphUpdates, addr 0x5e3373c, size 0x3c, virtual false, abstract: false, final false
inline void FlushGraphUpdates() ;

/// [Obsolete("Use FlushWorkItems instead")]
/// @brief Method FlushThreadSafeCallbacks, addr 0x5e33834, size 0x4, virtual false, abstract: false, final false
inline void FlushThreadSafeCallbacks() ;

/// @brief Method FlushWorkItems, addr 0x5e33778, size 0x58, virtual false, abstract: false, final false
inline void FlushWorkItems() ;

/// [Obsolete("Use FlushWorkItems() instead")]
/// @brief Method FlushWorkItems, addr 0x5e337ec, size 0x48, virtual false, abstract: false, final false
inline void FlushWorkItems(bool  unblockOnComplete, bool  block) ;

/// @brief Method GetNearest, addr 0x5e35b64, size 0x18c, virtual false, abstract: false, final false
inline ::Pathfinding::GraphNode* GetNearest(::UnityEngine::Ray  ray) ;

/// @brief Method GetNearest, addr 0x5e356a8, size 0xb4, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfo GetNearest(::UnityEngine::Vector3  position) ;

/// @brief Method GetNearest, addr 0x5e3575c, size 0x30, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfo GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNearest, addr 0x5e3578c, size 0x3d8, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfo GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint) ;

/// @brief Method GetNewNodeIndex, addr 0x5e34978, size 0x18, virtual false, abstract: false, final false
inline int32_t GetNewNodeIndex() ;

/// @brief Method GetNextPathID, addr 0x5e328f0, size 0xcc, virtual false, abstract: false, final false
inline uint16_t GetNextPathID() ;

/// @brief Method GetTagNames, addr 0x5e324a4, size 0x130, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetTagNames() ;

/// @brief Method InitializeAstarData, addr 0x5e34120, size 0x40, virtual false, abstract: false, final false
inline void InitializeAstarData() ;

/// @brief Method InitializeNode, addr 0x5e34990, size 0x18, virtual false, abstract: false, final false
inline void InitializeNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method InitializePathProcessor, addr 0x5e33d88, size 0x294, virtual false, abstract: false, final false
inline void InitializePathProcessor() ;

/// @brief Method InitializeProfiler, addr 0x5e3401c, size 0x4, virtual false, abstract: false, final false
inline void InitializeProfiler() ;

/// @brief Method LogPathResults, addr 0x5e32e5c, size 0x160, virtual false, abstract: false, final false
inline void LogPathResults(::Pathfinding::Path*  path) ;

static inline ::GlobalNamespace::AstarPath* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e34598, size 0x3a8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5e34580, size 0x18, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrawGizmos, addr 0x5e32bc8, size 0x294, virtual false, abstract: false, final false
inline void OnDrawGizmos() ;

/// @brief Method PausePathfinding, addr 0x5e337d0, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock PausePathfinding() ;

/// @brief Method PausePathfindingSoon, addr 0x5e33278, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock PausePathfindingSoon() ;

/// @brief Method PerformBlockingActions, addr 0x5e3306c, size 0x8c, virtual false, abstract: false, final false
inline void PerformBlockingActions(bool  force) ;

/// @brief Method QueueGraphUpdates, addr 0x5e33294, size 0x124, virtual false, abstract: false, final false
inline void QueueGraphUpdates() ;

/// [Obsolete("This method has been moved. Use the method on the context object that can be sent with work item delegates instead")]
/// @brief Method QueueWorkItemFloodFill, addr 0x5e330f8, size 0x4c, virtual false, abstract: false, final false
inline void QueueWorkItemFloodFill() ;

/// @brief Method RecalculateDebugLimits, addr 0x5e329bc, size 0x204, virtual false, abstract: false, final false
inline void RecalculateDebugLimits() ;

/// [Obsolete("Use AddWorkItem(System.Action) instead. Note the slight change in behavior (mentioned in the documentation).")]
/// @brief Method RegisterSafeUpdate, addr 0x5e35220, size 0x9c, virtual false, abstract: false, final false
static inline void RegisterSafeUpdate(::System::Action*  callback) ;

/// @brief Method Scan, addr 0x5e349c4, size 0xd8, virtual false, abstract: false, final false
inline void Scan(::Pathfinding::NavGraph*  graphToScan) ;

/// @brief Method Scan, addr 0x5e34160, size 0x2b0, virtual false, abstract: false, final false
inline void Scan(::ArrayW<::Pathfinding::NavGraph*>  graphsToScan) ;

/// @brief Method ScanAsync, addr 0x5e34b38, size 0xd8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanAsync(::Pathfinding::NavGraph*  graphToScan) ;

/// [IteratorStateMachine(typeof(AstarPath::<ScanAsync>d__142))]
/// @brief Method ScanAsync, addr 0x5e34a9c, size 0x9c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanAsync(::ArrayW<::Pathfinding::NavGraph*>  graphsToScan) ;

/// [IteratorStateMachine(typeof(AstarPath::<ScanGraph>d__143))]
/// @brief Method ScanGraph, addr 0x5e34c44, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanGraph(::Pathfinding::NavGraph*  graph) ;

/// @brief Method StartPath, addr 0x5e352bc, size 0x3ec, virtual false, abstract: false, final false
static inline void StartPath(::Pathfinding::Path*  path, bool  pushToFront) ;

/// @brief Method Update, addr 0x5e32fbc, size 0xb0, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateGraphs, addr 0x5e335dc, size 0x88, virtual false, abstract: false, final false
inline void UpdateGraphs(::UnityEngine::Bounds  bounds) ;

/// @brief Method UpdateGraphs, addr 0x5e33454, size 0xa8, virtual false, abstract: false, final false
inline void UpdateGraphs(::UnityEngine::Bounds  bounds, float_t  delay) ;

/// @brief Method UpdateGraphs, addr 0x5e33664, size 0xd8, virtual false, abstract: false, final false
inline void UpdateGraphs(::Pathfinding::GraphUpdateObject*  ob) ;

/// @brief Method UpdateGraphs, addr 0x5e334fc, size 0x20, virtual false, abstract: false, final false
inline void UpdateGraphs(::Pathfinding::GraphUpdateObject*  ob, float_t  delay) ;

/// [IteratorStateMachine(typeof(AstarPath::<UpdateGraphsInternal>d__112))]
/// @brief Method UpdateGraphsInternal, addr 0x5e3351c, size 0x98, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateGraphsInternal(::Pathfinding::GraphUpdateObject*  ob, float_t  delay) ;

/// @brief Method VerifyIntegrity, addr 0x5e34410, size 0x170, virtual false, abstract: false, final false
inline void VerifyIntegrity() ;

/// [Obsolete("This method has been renamed to BlockUntilCalculated")]
/// @brief Method WaitForPath, addr 0x5e34cf8, size 0x54, virtual false, abstract: false, final false
static inline void WaitForPath(::Pathfinding::Path*  path) ;

/// [CompilerGenerated]
/// @brief Method <InitializePathProcessor>b__123_1, addr 0x5e35e80, size 0x98, virtual false, abstract: false, final false
inline void _InitializePathProcessor_b__123_1(::Pathfinding::Path*  path) ;

/// [CompilerGenerated]
/// @brief Method <InitializePathProcessor>b__123_2, addr 0x5e35f18, size 0x24, virtual false, abstract: false, final false
inline void _InitializePathProcessor_b__123_2() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGraphsWillBeUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnGraphsWillBeUpdated() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGraphsWillBeUpdated2() const;

constexpr ::System::Action*& __cordl_internal_get_OnGraphsWillBeUpdated2() ;

constexpr float_t const& __cordl_internal_get__lastScanTime_k__BackingField() const;

constexpr float_t& __cordl_internal_get__lastScanTime_k__BackingField() ;

constexpr bool const& __cordl_internal_get_batchGraphUpdates() const;

constexpr bool& __cordl_internal_get_batchGraphUpdates() ;

constexpr ::Pathfinding::AstarColor* const& __cordl_internal_get_colorSettings() const;

constexpr ::Pathfinding::AstarColor*& __cordl_internal_get_colorSettings() ;

constexpr ::Pathfinding::AstarData* const& __cordl_internal_get_data() const;

constexpr ::Pathfinding::AstarData*& __cordl_internal_get_data() ;

constexpr float_t const& __cordl_internal_get_debugFloor() const;

constexpr float_t& __cordl_internal_get_debugFloor() ;

constexpr ::Pathfinding::GraphDebugMode const& __cordl_internal_get_debugMode() const;

constexpr ::Pathfinding::GraphDebugMode& __cordl_internal_get_debugMode() ;

constexpr ::Pathfinding::PathHandler* const& __cordl_internal_get_debugPathData() const;

constexpr ::Pathfinding::PathHandler*& __cordl_internal_get_debugPathData() ;

constexpr uint16_t const& __cordl_internal_get_debugPathID() const;

constexpr uint16_t& __cordl_internal_get_debugPathID() ;

constexpr float_t const& __cordl_internal_get_debugRoof() const;

constexpr float_t& __cordl_internal_get_debugRoof() ;

constexpr ::Pathfinding::EuclideanEmbedding* const& __cordl_internal_get_euclideanEmbedding() const;

constexpr ::Pathfinding::EuclideanEmbedding*& __cordl_internal_get_euclideanEmbedding() ;

constexpr bool const& __cordl_internal_get_fullGetNearestSearch() const;

constexpr bool& __cordl_internal_get_fullGetNearestSearch() ;

constexpr ::Pathfinding::Util::RetainedGizmos* const& __cordl_internal_get_gizmos() const;

constexpr ::Pathfinding::Util::RetainedGizmos*& __cordl_internal_get_gizmos() ;

constexpr float_t const& __cordl_internal_get_graphUpdateBatchingInterval() const;

constexpr float_t& __cordl_internal_get_graphUpdateBatchingInterval() ;

constexpr bool const& __cordl_internal_get_graphUpdateRoutineRunning() const;

constexpr bool& __cordl_internal_get_graphUpdateRoutineRunning() ;

constexpr ::Pathfinding::GraphUpdateProcessor* const& __cordl_internal_get_graphUpdates() const;

constexpr ::Pathfinding::GraphUpdateProcessor*& __cordl_internal_get_graphUpdates() ;

constexpr bool const& __cordl_internal_get_graphUpdatesWorkItemAdded() const;

constexpr bool& __cordl_internal_get_graphUpdatesWorkItemAdded() ;

constexpr ::Pathfinding::Heuristic const& __cordl_internal_get_heuristic() const;

constexpr ::Pathfinding::Heuristic& __cordl_internal_get_heuristic() ;

constexpr float_t const& __cordl_internal_get_heuristicScale() const;

constexpr float_t& __cordl_internal_get_heuristicScale() ;

constexpr ::Pathfinding::HierarchicalGraph* const& __cordl_internal_get_hierarchicalGraph() const;

constexpr ::Pathfinding::HierarchicalGraph*& __cordl_internal_get_hierarchicalGraph() ;

constexpr ::StringW const& __cordl_internal_get_inGameDebugPath() const;

constexpr ::StringW& __cordl_internal_get_inGameDebugPath() ;

constexpr bool const& __cordl_internal_get_initialized() const;

constexpr bool& __cordl_internal_get_initialized() ;

constexpr bool const& __cordl_internal_get_isScanningBacking() const;

constexpr bool& __cordl_internal_get_isScanningBacking() ;

constexpr float_t const& __cordl_internal_get_lastGraphUpdate() const;

constexpr float_t& __cordl_internal_get_lastGraphUpdate() ;

constexpr ::Pathfinding::PathLog const& __cordl_internal_get_logPathResults() const;

constexpr ::Pathfinding::PathLog& __cordl_internal_get_logPathResults() ;

constexpr bool const& __cordl_internal_get_manualDebugFloorRoof() const;

constexpr bool& __cordl_internal_get_manualDebugFloorRoof() ;

constexpr float_t const& __cordl_internal_get_maxFrameTime() const;

constexpr float_t& __cordl_internal_get_maxFrameTime() ;

constexpr float_t const& __cordl_internal_get_maxNearestNodeDistance() const;

constexpr float_t& __cordl_internal_get_maxNearestNodeDistance() ;

constexpr ::Pathfinding::NavmeshUpdates* const& __cordl_internal_get_navmeshUpdates() const;

constexpr ::Pathfinding::NavmeshUpdates*& __cordl_internal_get_navmeshUpdates() ;

constexpr uint16_t const& __cordl_internal_get_nextFreePathID() const;

constexpr uint16_t& __cordl_internal_get_nextFreePathID() ;

constexpr ::Pathfinding::PathProcessor* const& __cordl_internal_get_pathProcessor() const;

constexpr ::Pathfinding::PathProcessor*& __cordl_internal_get_pathProcessor() ;

constexpr ::Pathfinding::PathReturnQueue* const& __cordl_internal_get_pathReturnQueue() const;

constexpr ::Pathfinding::PathReturnQueue*& __cordl_internal_get_pathReturnQueue() ;

constexpr bool const& __cordl_internal_get_prioritizeGraphs() const;

constexpr bool& __cordl_internal_get_prioritizeGraphs() ;

constexpr float_t const& __cordl_internal_get_prioritizeGraphsLimit() const;

constexpr float_t& __cordl_internal_get_prioritizeGraphsLimit() ;

constexpr bool const& __cordl_internal_get_scanOnStartup() const;

constexpr bool& __cordl_internal_get_scanOnStartup() ;

constexpr bool const& __cordl_internal_get_showGraphs() const;

constexpr bool& __cordl_internal_get_showGraphs() ;

constexpr bool const& __cordl_internal_get_showNavGraphs() const;

constexpr bool& __cordl_internal_get_showNavGraphs() ;

constexpr bool const& __cordl_internal_get_showSearchTree() const;

constexpr bool& __cordl_internal_get_showSearchTree() ;

constexpr bool const& __cordl_internal_get_showUnwalkableNodes() const;

constexpr bool& __cordl_internal_get_showUnwalkableNodes() ;

constexpr ::ArrayW<::StringW> const& __cordl_internal_get_tagNames() const;

constexpr ::ArrayW<::StringW>& __cordl_internal_get_tagNames() ;

constexpr ::Pathfinding::ThreadCount const& __cordl_internal_get_threadCount() const;

constexpr ::Pathfinding::ThreadCount& __cordl_internal_get_threadCount() ;

constexpr float_t const& __cordl_internal_get_unwalkableNodeDebugSize() const;

constexpr float_t& __cordl_internal_get_unwalkableNodeDebugSize() ;

constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock const& __cordl_internal_get_workItemLock() const;

constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock& __cordl_internal_get_workItemLock() ;

constexpr ::Pathfinding::WorkItemProcessor* const& __cordl_internal_get_workItems() const;

constexpr ::Pathfinding::WorkItemProcessor*& __cordl_internal_get_workItems() ;

constexpr void __cordl_internal_set_OnGraphsWillBeUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnGraphsWillBeUpdated2(::System::Action*  value) ;

constexpr void __cordl_internal_set__lastScanTime_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set_batchGraphUpdates(bool  value) ;

constexpr void __cordl_internal_set_colorSettings(::Pathfinding::AstarColor*  value) ;

constexpr void __cordl_internal_set_data(::Pathfinding::AstarData*  value) ;

constexpr void __cordl_internal_set_debugFloor(float_t  value) ;

constexpr void __cordl_internal_set_debugMode(::Pathfinding::GraphDebugMode  value) ;

constexpr void __cordl_internal_set_debugPathData(::Pathfinding::PathHandler*  value) ;

constexpr void __cordl_internal_set_debugPathID(uint16_t  value) ;

constexpr void __cordl_internal_set_debugRoof(float_t  value) ;

constexpr void __cordl_internal_set_euclideanEmbedding(::Pathfinding::EuclideanEmbedding*  value) ;

constexpr void __cordl_internal_set_fullGetNearestSearch(bool  value) ;

constexpr void __cordl_internal_set_gizmos(::Pathfinding::Util::RetainedGizmos*  value) ;

constexpr void __cordl_internal_set_graphUpdateBatchingInterval(float_t  value) ;

constexpr void __cordl_internal_set_graphUpdateRoutineRunning(bool  value) ;

constexpr void __cordl_internal_set_graphUpdates(::Pathfinding::GraphUpdateProcessor*  value) ;

constexpr void __cordl_internal_set_graphUpdatesWorkItemAdded(bool  value) ;

constexpr void __cordl_internal_set_heuristic(::Pathfinding::Heuristic  value) ;

constexpr void __cordl_internal_set_heuristicScale(float_t  value) ;

constexpr void __cordl_internal_set_hierarchicalGraph(::Pathfinding::HierarchicalGraph*  value) ;

constexpr void __cordl_internal_set_inGameDebugPath(::StringW  value) ;

constexpr void __cordl_internal_set_initialized(bool  value) ;

constexpr void __cordl_internal_set_isScanningBacking(bool  value) ;

constexpr void __cordl_internal_set_lastGraphUpdate(float_t  value) ;

constexpr void __cordl_internal_set_logPathResults(::Pathfinding::PathLog  value) ;

constexpr void __cordl_internal_set_manualDebugFloorRoof(bool  value) ;

constexpr void __cordl_internal_set_maxFrameTime(float_t  value) ;

constexpr void __cordl_internal_set_maxNearestNodeDistance(float_t  value) ;

constexpr void __cordl_internal_set_navmeshUpdates(::Pathfinding::NavmeshUpdates*  value) ;

constexpr void __cordl_internal_set_nextFreePathID(uint16_t  value) ;

constexpr void __cordl_internal_set_pathProcessor(::Pathfinding::PathProcessor*  value) ;

constexpr void __cordl_internal_set_pathReturnQueue(::Pathfinding::PathReturnQueue*  value) ;

constexpr void __cordl_internal_set_prioritizeGraphs(bool  value) ;

constexpr void __cordl_internal_set_prioritizeGraphsLimit(float_t  value) ;

constexpr void __cordl_internal_set_scanOnStartup(bool  value) ;

constexpr void __cordl_internal_set_showGraphs(bool  value) ;

constexpr void __cordl_internal_set_showNavGraphs(bool  value) ;

constexpr void __cordl_internal_set_showSearchTree(bool  value) ;

constexpr void __cordl_internal_set_showUnwalkableNodes(bool  value) ;

constexpr void __cordl_internal_set_tagNames(::ArrayW<::StringW>  value) ;

constexpr void __cordl_internal_set_threadCount(::Pathfinding::ThreadCount  value) ;

constexpr void __cordl_internal_set_unwalkableNodeDebugSize(float_t  value) ;

constexpr void __cordl_internal_set_workItemLock(::GlobalNamespace::PathProcessor_GraphUpdateLock  value) ;

constexpr void __cordl_internal_set_workItems(::Pathfinding::WorkItemProcessor*  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__92_0, addr 0x5e35de4, size 0x9c, virtual false, abstract: false, final false
inline void __ctor_b__92_0() ;

/// @brief Method .ctor, addr 0x5e3219c, size 0x308, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_Branch() ;

static inline ::GlobalNamespace::AstarPath_AstarDistribution getStaticF_Distribution() ;

static inline ::Pathfinding::NNConstraint* getStaticF_NNConstraintNone() ;

static inline ::System::Action* getStaticF_On65KOverflow() ;

static inline ::System::Action* getStaticF_OnAwakeSettings() ;

static inline ::Pathfinding::OnGraphDelegate* getStaticF_OnGraphPostScan() ;

static inline ::Pathfinding::OnGraphDelegate* getStaticF_OnGraphPreScan() ;

static inline ::Pathfinding::OnScanDelegate* getStaticF_OnGraphsUpdated() ;

static inline ::Pathfinding::OnScanDelegate* getStaticF_OnLatePostScan() ;

static inline ::Pathfinding::OnPathDelegate* getStaticF_OnPathPostSearch() ;

static inline ::Pathfinding::OnPathDelegate* getStaticF_OnPathPreSearch() ;

static inline ::Pathfinding::OnScanDelegate* getStaticF_OnPostScan() ;

static inline ::Pathfinding::OnScanDelegate* getStaticF_OnPreScan() ;

static inline ::System::Version* getStaticF_Version() ;

static inline ::UnityW<::GlobalNamespace::AstarPath> getStaticF_active() ;

static inline int32_t getStaticF_waitForPathDepth() ;

/// @brief Method get_IsAnyGraphUpdateInProgress, addr 0x5e32154, size 0x18, virtual false, abstract: false, final false
inline bool get_IsAnyGraphUpdateInProgress() ;

/// @brief Method get_IsAnyGraphUpdateQueued, addr 0x5e3213c, size 0x18, virtual false, abstract: false, final false
inline bool get_IsAnyGraphUpdateQueued() ;

/// @brief Method get_IsAnyGraphUpdatesQueued, addr 0x5e32124, size 0x18, virtual false, abstract: false, final false
inline bool get_IsAnyGraphUpdatesQueued() ;

/// @brief Method get_IsAnyWorkItemInProgress, addr 0x5e3216c, size 0x18, virtual false, abstract: false, final false
inline bool get_IsAnyWorkItemInProgress() ;

/// @brief Method get_IsInsideWorkItem, addr 0x5e32184, size 0x18, virtual false, abstract: false, final false
inline bool get_IsInsideWorkItem() ;

/// @brief Method get_IsUsingMultithreading, addr 0x5e3210c, size 0x18, virtual false, abstract: false, final false
inline bool get_IsUsingMultithreading() ;

/// @brief Method get_NumParallelThreads, addr 0x5e320f4, size 0x18, virtual false, abstract: false, final false
inline int32_t get_NumParallelThreads() ;

/// @brief Method get_astarData, addr 0x5e32024, size 0x8, virtual false, abstract: false, final false
inline ::Pathfinding::AstarData* get_astarData() ;

/// @brief Method get_graphTypes, addr 0x5e3200c, size 0x18, virtual false, abstract: false, final false
inline ::ArrayW<::System::Type*> get_graphTypes() ;

/// @brief Method get_graphs, addr 0x5e3202c, size 0x7c, virtual false, abstract: false, final false
inline ::ArrayW<::Pathfinding::NavGraph*> get_graphs() ;

/// @brief Method get_isScanning, addr 0x5e320e4, size 0x8, virtual false, abstract: false, final false
inline bool get_isScanning() ;

/// [CompilerGenerated]
/// @brief Method get_lastScanTime, addr 0x5e320d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_lastScanTime() ;

/// @brief Method get_limitGraphUpdates, addr 0x5e320b4, size 0x8, virtual false, abstract: false, final false
inline bool get_limitGraphUpdates() ;

/// @brief Method get_maxGraphUpdateFreq, addr 0x5e320c4, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxGraphUpdateFreq() ;

/// @brief Method get_maxNearestNodeDistanceSqr, addr 0x5e320a8, size 0xc, virtual false, abstract: false, final false
inline float_t get_maxNearestNodeDistanceSqr() ;

static inline void setStaticF_Branch(::StringW  value) ;

static inline void setStaticF_Distribution(::GlobalNamespace::AstarPath_AstarDistribution  value) ;

static inline void setStaticF_NNConstraintNone(::Pathfinding::NNConstraint*  value) ;

static inline void setStaticF_On65KOverflow(::System::Action*  value) ;

static inline void setStaticF_OnAwakeSettings(::System::Action*  value) ;

static inline void setStaticF_OnGraphPostScan(::Pathfinding::OnGraphDelegate*  value) ;

static inline void setStaticF_OnGraphPreScan(::Pathfinding::OnGraphDelegate*  value) ;

static inline void setStaticF_OnGraphsUpdated(::Pathfinding::OnScanDelegate*  value) ;

static inline void setStaticF_OnLatePostScan(::Pathfinding::OnScanDelegate*  value) ;

static inline void setStaticF_OnPathPostSearch(::Pathfinding::OnPathDelegate*  value) ;

static inline void setStaticF_OnPathPreSearch(::Pathfinding::OnPathDelegate*  value) ;

static inline void setStaticF_OnPostScan(::Pathfinding::OnScanDelegate*  value) ;

static inline void setStaticF_OnPreScan(::Pathfinding::OnScanDelegate*  value) ;

static inline void setStaticF_Version(::System::Version*  value) ;

static inline void setStaticF_active(::UnityW<::GlobalNamespace::AstarPath>  value) ;

static inline void setStaticF_waitForPathDepth(int32_t  value) ;

/// @brief Method set_isScanning, addr 0x5e320ec, size 0x8, virtual false, abstract: false, final false
inline void set_isScanning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_lastScanTime, addr 0x5e320dc, size 0x8, virtual false, abstract: false, final false
inline void set_lastScanTime(float_t  value) ;

/// @brief Method set_limitGraphUpdates, addr 0x5e320bc, size 0x8, virtual false, abstract: false, final false
inline void set_limitGraphUpdates(bool  value) ;

/// @brief Method set_maxGraphUpdateFreq, addr 0x5e320cc, size 0x8, virtual false, abstract: false, final false
inline void set_maxGraphUpdateFreq(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath(AstarPath && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath(AstarPath const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21170};

/// [FormerlySerializedAs("astarData")]
/// @brief Field data, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::AstarData*  ___data;

/// @brief Field showNavGraphs, offset: 0x30, size: 0x1, def value: None
 bool  ___showNavGraphs;

/// @brief Field showUnwalkableNodes, offset: 0x31, size: 0x1, def value: None
 bool  ___showUnwalkableNodes;

/// @brief Field debugMode, offset: 0x34, size: 0x4, def value: None
 ::Pathfinding::GraphDebugMode  ___debugMode;

/// @brief Field debugFloor, offset: 0x38, size: 0x4, def value: None
 float_t  ___debugFloor;

/// @brief Field debugRoof, offset: 0x3c, size: 0x4, def value: None
 float_t  ___debugRoof;

/// @brief Field manualDebugFloorRoof, offset: 0x40, size: 0x1, def value: None
 bool  ___manualDebugFloorRoof;

/// @brief Field showSearchTree, offset: 0x41, size: 0x1, def value: None
 bool  ___showSearchTree;

/// @brief Field unwalkableNodeDebugSize, offset: 0x44, size: 0x4, def value: None
 float_t  ___unwalkableNodeDebugSize;

/// @brief Field logPathResults, offset: 0x48, size: 0x4, def value: None
 ::Pathfinding::PathLog  ___logPathResults;

/// @brief Field maxNearestNodeDistance, offset: 0x4c, size: 0x4, def value: None
 float_t  ___maxNearestNodeDistance;

/// @brief Field scanOnStartup, offset: 0x50, size: 0x1, def value: None
 bool  ___scanOnStartup;

/// @brief Field fullGetNearestSearch, offset: 0x51, size: 0x1, def value: None
 bool  ___fullGetNearestSearch;

/// [Obsolete("This setting is discouraged, and it will be removed in a future update")]
/// @brief Field prioritizeGraphs, offset: 0x52, size: 0x1, def value: None
 bool  ___prioritizeGraphs;

/// [Obsolete("This setting is discouraged, and it will be removed in a future update")]
/// @brief Field prioritizeGraphsLimit, offset: 0x54, size: 0x4, def value: None
 float_t  ___prioritizeGraphsLimit;

/// @brief Field colorSettings, offset: 0x58, size: 0x8, def value: None
 ::Pathfinding::AstarColor*  ___colorSettings;

/// [SerializeField]
/// @brief Field tagNames, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::StringW>  ___tagNames;

/// @brief Field heuristic, offset: 0x68, size: 0x4, def value: None
 ::Pathfinding::Heuristic  ___heuristic;

/// @brief Field heuristicScale, offset: 0x6c, size: 0x4, def value: None
 float_t  ___heuristicScale;

/// @brief Field threadCount, offset: 0x70, size: 0x4, def value: None
 ::Pathfinding::ThreadCount  ___threadCount;

/// @brief Field maxFrameTime, offset: 0x74, size: 0x4, def value: None
 float_t  ___maxFrameTime;

/// @brief Field batchGraphUpdates, offset: 0x78, size: 0x1, def value: None
 bool  ___batchGraphUpdates;

/// @brief Field graphUpdateBatchingInterval, offset: 0x7c, size: 0x4, def value: None
 float_t  ___graphUpdateBatchingInterval;

/// [CompilerGenerated]
/// @brief Field <lastScanTime>k__BackingField, offset: 0x80, size: 0x4, def value: None
 float_t  ____lastScanTime_k__BackingField;

/// @brief Field debugPathData, offset: 0x88, size: 0x8, def value: None
 ::Pathfinding::PathHandler*  ___debugPathData;

/// @brief Field debugPathID, offset: 0x90, size: 0x2, def value: None
 uint16_t  ___debugPathID;

/// @brief Field inGameDebugPath, offset: 0x98, size: 0x8, def value: None
 ::StringW  ___inGameDebugPath;

/// @brief Field isScanningBacking, offset: 0xa0, size: 0x1, def value: None
 bool  ___isScanningBacking;

/// [Obsolete]
/// @brief Field OnGraphsWillBeUpdated, offset: 0xa8, size: 0x8, def value: None
 ::System::Action*  ___OnGraphsWillBeUpdated;

/// [Obsolete]
/// @brief Field OnGraphsWillBeUpdated2, offset: 0xb0, size: 0x8, def value: None
 ::System::Action*  ___OnGraphsWillBeUpdated2;

/// @brief Field graphUpdates, offset: 0xb8, size: 0x8, def value: None
 ::Pathfinding::GraphUpdateProcessor*  ___graphUpdates;

/// @brief Field hierarchicalGraph, offset: 0xc0, size: 0x8, def value: None
 ::Pathfinding::HierarchicalGraph*  ___hierarchicalGraph;

/// @brief Field navmeshUpdates, offset: 0xc8, size: 0x8, def value: None
 ::Pathfinding::NavmeshUpdates*  ___navmeshUpdates;

/// @brief Field workItems, offset: 0xd0, size: 0x8, def value: None
 ::Pathfinding::WorkItemProcessor*  ___workItems;

/// @brief Field pathProcessor, offset: 0xd8, size: 0x8, def value: None
 ::Pathfinding::PathProcessor*  ___pathProcessor;

/// @brief Field graphUpdateRoutineRunning, offset: 0xe0, size: 0x1, def value: None
 bool  ___graphUpdateRoutineRunning;

/// @brief Field graphUpdatesWorkItemAdded, offset: 0xe1, size: 0x1, def value: None
 bool  ___graphUpdatesWorkItemAdded;

/// @brief Field lastGraphUpdate, offset: 0xe4, size: 0x4, def value: None
 float_t  ___lastGraphUpdate;

/// @brief Field workItemLock, offset: 0xe8, size: 0x10, def value: None
 ::GlobalNamespace::PathProcessor_GraphUpdateLock  ___workItemLock;

/// @brief Field pathReturnQueue, offset: 0xf8, size: 0x8, def value: None
 ::Pathfinding::PathReturnQueue*  ___pathReturnQueue;

/// @brief Field euclideanEmbedding, offset: 0x100, size: 0x8, def value: None
 ::Pathfinding::EuclideanEmbedding*  ___euclideanEmbedding;

/// @brief Field showGraphs, offset: 0x108, size: 0x1, def value: None
 bool  ___showGraphs;

/// @brief Field nextFreePathID, offset: 0x10a, size: 0x2, def value: None
 uint16_t  ___nextFreePathID;

/// @brief Field gizmos, offset: 0x110, size: 0x8, def value: None
 ::Pathfinding::Util::RetainedGizmos*  ___gizmos;

/// @brief Field initialized, offset: 0x118, size: 0x1, def value: None
 bool  ___initialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___showNavGraphs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___showUnwalkableNodes) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___debugMode) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___debugFloor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___debugRoof) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___manualDebugFloorRoof) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___showSearchTree) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___unwalkableNodeDebugSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___logPathResults) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___maxNearestNodeDistance) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___scanOnStartup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___fullGetNearestSearch) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___prioritizeGraphs) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___prioritizeGraphsLimit) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___colorSettings) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___tagNames) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___heuristic) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___heuristicScale) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___threadCount) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___maxFrameTime) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___batchGraphUpdates) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___graphUpdateBatchingInterval) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ____lastScanTime_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___debugPathData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___debugPathID) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___inGameDebugPath) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___isScanningBacking) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___OnGraphsWillBeUpdated) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___OnGraphsWillBeUpdated2) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___graphUpdates) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___hierarchicalGraph) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___navmeshUpdates) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___workItems) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___pathProcessor) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___graphUpdateRoutineRunning) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___graphUpdatesWorkItemAdded) == 0xe1, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___lastGraphUpdate) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___workItemLock) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___pathReturnQueue) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___euclideanEmbedding) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___showGraphs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___nextFreePathID) == 0x10a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___gizmos) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath, ___initialized) == 0x118, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath) == 0x120, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<UpdateGraphsInternal>d__112
class CORDL_TYPE AstarPath__UpdateGraphsInternal_d__112 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AstarPath>  __4__this;

/// @brief Field delay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_delay, put=__cordl_internal_set_delay)) float_t  delay;

/// @brief Field ob, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ob, put=__cordl_internal_set_ob)) ::Pathfinding::GraphUpdateObject*  ob;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e37a94, size 0xbc, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e37b50, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e37b58, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e37b90, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e37a90, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get_delay() const;

constexpr float_t& __cordl_internal_get_delay() ;

constexpr ::Pathfinding::GraphUpdateObject* const& __cordl_internal_get_ob() const;

constexpr ::Pathfinding::GraphUpdateObject*& __cordl_internal_get_ob() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set_delay(float_t  value) ;

constexpr void __cordl_internal_set_ob(::Pathfinding::GraphUpdateObject*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e335b4, size 0x28, virtual false, abstract: false, final false
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
constexpr AstarPath__UpdateGraphsInternal_d__112() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__UpdateGraphsInternal_d__112", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath__UpdateGraphsInternal_d__112(AstarPath__UpdateGraphsInternal_d__112 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__UpdateGraphsInternal_d__112", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath__UpdateGraphsInternal_d__112(AstarPath__UpdateGraphsInternal_d__112 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21169};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field delay, offset: 0x20, size: 0x4, def value: None
 float_t  ___delay;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  _____4__this;

/// @brief Field ob, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::GraphUpdateObject*  ___ob;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112, ___delay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112, ___ob) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath__UpdateGraphsInternal_d__112) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies Pathfinding.Progress, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<ScanGraph>d__143
class CORDL_TYPE AstarPath__ScanGraph_d__143 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>3__graph, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__graph, put=__cordl_internal_set___3__graph)) ::Pathfinding::NavGraph*  __3__graph;

/// @brief Field <>7__wrap1, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  __7__wrap1;

/// @brief Field <>8__1, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___8__1, put=__cordl_internal_set___8__1)) ::GlobalNamespace::AstarPath___c__DisplayClass143_0*  __8__1;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field graph, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::NavGraph*  graph;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e371b8, size 0x6e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::AstarPath__ScanGraph_d__143* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e379e8, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e37948, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e37a8c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e37954, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e3798c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e3719c, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::NavGraph* const& __cordl_internal_get___3__graph() const;

constexpr ::Pathfinding::NavGraph*& __cordl_internal_get___3__graph() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& __cordl_internal_get___7__wrap1() ;

constexpr ::GlobalNamespace::AstarPath___c__DisplayClass143_0* const& __cordl_internal_get___8__1() const;

constexpr ::GlobalNamespace::AstarPath___c__DisplayClass143_0*& __cordl_internal_get___8__1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::Pathfinding::NavGraph* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::NavGraph*& __cordl_internal_get_graph() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___3__graph(::Pathfinding::NavGraph*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value) ;

constexpr void __cordl_internal_set___8__1(::GlobalNamespace::AstarPath___c__DisplayClass143_0*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_graph(::Pathfinding::NavGraph*  value) ;

/// @brief Method <>m__Finally1, addr 0x5e37898, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e34cc4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath__ScanGraph_d__143() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__ScanGraph_d__143", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath__ScanGraph_d__143(AstarPath__ScanGraph_d__143 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__ScanGraph_d__143", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath__ScanGraph_d__143(AstarPath__ScanGraph_d__143 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21168};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field graph, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::NavGraph*  ___graph;

/// @brief Field <>3__graph, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::NavGraph*  _____3__graph;

/// @brief Field <>8__1, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::AstarPath___c__DisplayClass143_0*  _____8__1;

/// @brief Field <>7__wrap1, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath__ScanGraph_d__143, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanGraph_d__143, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanGraph_d__143, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanGraph_d__143, ___graph) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanGraph_d__143, _____3__graph) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanGraph_d__143, _____8__1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanGraph_d__143, _____7__wrap1) == 0x48, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath__ScanGraph_d__143) == 0x50, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies Pathfinding.NavGraph, Pathfinding.PathProcessor::GraphUpdateLock, Pathfinding.Progress, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<ScanAsync>d__142
class CORDL_TYPE AstarPath__ScanAsync_d__142 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>3__graphsToScan, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__graphsToScan, put=__cordl_internal_set___3__graphsToScan)) ::ArrayW<::Pathfinding::NavGraph*>  __3__graphsToScan;

/// @brief Field <>4__this, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AstarPath>  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <coroutine>5__8, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__coroutine_5__8, put=__cordl_internal_set__coroutine_5__8)) ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  _coroutine_5__8;

/// @brief Field <graphUpdateLock>5__2, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get__graphUpdateLock_5__2, put=__cordl_internal_set__graphUpdateLock_5__2)) ::GlobalNamespace::PathProcessor_GraphUpdateLock  _graphUpdateLock_5__2;

/// @brief Field <i>5__4, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__4, put=__cordl_internal_set__i_5__4)) int32_t  _i_5__4;

/// @brief Field <maxp>5__6, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxp_5__6, put=__cordl_internal_set__maxp_5__6)) float_t  _maxp_5__6;

/// @brief Field <minp>5__5, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get__minp_5__5, put=__cordl_internal_set__minp_5__5)) float_t  _minp_5__5;

/// @brief Field <progressDescriptionPrefix>5__7, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__progressDescriptionPrefix_5__7, put=__cordl_internal_set__progressDescriptionPrefix_5__7)) ::StringW  _progressDescriptionPrefix_5__7;

/// @brief Field <watch>5__3, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__watch_5__3, put=__cordl_internal_set__watch_5__3)) ::System::Diagnostics::Stopwatch*  _watch_5__3;

/// @brief Field graphsToScan, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphsToScan, put=__cordl_internal_set_graphsToScan)) ::ArrayW<::Pathfinding::NavGraph*>  graphsToScan;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e36400, size 0xc44, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::AstarPath__ScanAsync_d__142* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e370e4, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e37044, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e37198, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e37050, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e37088, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e363fc, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::ArrayW<::Pathfinding::NavGraph*> const& __cordl_internal_get___3__graphsToScan() const;

constexpr ::ArrayW<::Pathfinding::NavGraph*>& __cordl_internal_get___3__graphsToScan() ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& __cordl_internal_get__coroutine_5__8() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& __cordl_internal_get__coroutine_5__8() ;

constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock const& __cordl_internal_get__graphUpdateLock_5__2() const;

constexpr ::GlobalNamespace::PathProcessor_GraphUpdateLock& __cordl_internal_get__graphUpdateLock_5__2() ;

constexpr int32_t const& __cordl_internal_get__i_5__4() const;

constexpr int32_t& __cordl_internal_get__i_5__4() ;

constexpr float_t const& __cordl_internal_get__maxp_5__6() const;

constexpr float_t& __cordl_internal_get__maxp_5__6() ;

constexpr float_t const& __cordl_internal_get__minp_5__5() const;

constexpr float_t& __cordl_internal_get__minp_5__5() ;

constexpr ::StringW const& __cordl_internal_get__progressDescriptionPrefix_5__7() const;

constexpr ::StringW& __cordl_internal_get__progressDescriptionPrefix_5__7() ;

constexpr ::System::Diagnostics::Stopwatch* const& __cordl_internal_get__watch_5__3() const;

constexpr ::System::Diagnostics::Stopwatch*& __cordl_internal_get__watch_5__3() ;

constexpr ::ArrayW<::Pathfinding::NavGraph*> const& __cordl_internal_get_graphsToScan() const;

constexpr ::ArrayW<::Pathfinding::NavGraph*>& __cordl_internal_get_graphsToScan() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___3__graphsToScan(::ArrayW<::Pathfinding::NavGraph*>  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__coroutine_5__8(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value) ;

constexpr void __cordl_internal_set__graphUpdateLock_5__2(::GlobalNamespace::PathProcessor_GraphUpdateLock  value) ;

constexpr void __cordl_internal_set__i_5__4(int32_t  value) ;

constexpr void __cordl_internal_set__maxp_5__6(float_t  value) ;

constexpr void __cordl_internal_set__minp_5__5(float_t  value) ;

constexpr void __cordl_internal_set__progressDescriptionPrefix_5__7(::StringW  value) ;

constexpr void __cordl_internal_set__watch_5__3(::System::Diagnostics::Stopwatch*  value) ;

constexpr void __cordl_internal_set_graphsToScan(::ArrayW<::Pathfinding::NavGraph*>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e34c10, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath__ScanAsync_d__142() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__ScanAsync_d__142", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath__ScanAsync_d__142(AstarPath__ScanAsync_d__142 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__ScanAsync_d__142", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath__ScanAsync_d__142(AstarPath__ScanAsync_d__142 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21167};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field graphsToScan, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::NavGraph*>  ___graphsToScan;

/// @brief Field <>3__graphsToScan, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::NavGraph*>  _____3__graphsToScan;

/// @brief Field <>4__this, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  _____4__this;

/// @brief Field <graphUpdateLock>5__2, offset: 0x48, size: 0x10, def value: None
 ::GlobalNamespace::PathProcessor_GraphUpdateLock  ____graphUpdateLock_5__2;

/// @brief Field <watch>5__3, offset: 0x58, size: 0x8, def value: None
 ::System::Diagnostics::Stopwatch*  ____watch_5__3;

/// @brief Field <i>5__4, offset: 0x60, size: 0x4, def value: None
 int32_t  ____i_5__4;

/// @brief Field <minp>5__5, offset: 0x64, size: 0x4, def value: None
 float_t  ____minp_5__5;

/// @brief Field <maxp>5__6, offset: 0x68, size: 0x4, def value: None
 float_t  ____maxp_5__6;

/// @brief Field <progressDescriptionPrefix>5__7, offset: 0x70, size: 0x8, def value: None
 ::StringW  ____progressDescriptionPrefix_5__7;

/// @brief Field <coroutine>5__8, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  ____coroutine_5__8;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ___graphsToScan) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, _____3__graphsToScan) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, _____4__this) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ____graphUpdateLock_5__2) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ____watch_5__3) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ____i_5__4) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ____minp_5__5) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ____maxp_5__6) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ____progressDescriptionPrefix_5__7) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__ScanAsync_d__142, ____coroutine_5__8) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath__ScanAsync_d__142) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<DelayedGraphUpdate>d__109
class CORDL_TYPE AstarPath__DelayedGraphUpdate_d__109 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AstarPath>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e362c8, size 0xec, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e363b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e363bc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e363f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e362c4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e3342c, size 0x28, virtual false, abstract: false, final false
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
constexpr AstarPath__DelayedGraphUpdate_d__109() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__DelayedGraphUpdate_d__109", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath__DelayedGraphUpdate_d__109(AstarPath__DelayedGraphUpdate_d__109 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath__DelayedGraphUpdate_d__109", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath__DelayedGraphUpdate_d__109(AstarPath__DelayedGraphUpdate_d__109 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21166};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath__DelayedGraphUpdate_d__109) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<>c__DisplayClass97_0
class CORDL_TYPE AstarPath___c__DisplayClass97_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AstarPath>  __4__this;

/// @brief Field <>9__0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field ignoreSearchTree, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_ignoreSearchTree, put=__cordl_internal_set_ignoreSearchTree)) bool  ignoreSearchTree;

static inline ::GlobalNamespace::AstarPath___c__DisplayClass97_0* New_ctor() ;

/// @brief Method <RecalculateDebugLimits>b__0, addr 0x5e3616c, size 0x158, virtual false, abstract: false, final false
inline void _RecalculateDebugLimits_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get___4__this() ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr bool const& __cordl_internal_get_ignoreSearchTree() const;

constexpr bool& __cordl_internal_get_ignoreSearchTree() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_ignoreSearchTree(bool  value) ;

/// @brief Method .ctor, addr 0x5e32bc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath___c__DisplayClass97_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass97_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath___c__DisplayClass97_0(AstarPath___c__DisplayClass97_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass97_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath___c__DisplayClass97_0(AstarPath___c__DisplayClass97_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21165};

/// @brief Field ignoreSearchTree, offset: 0x10, size: 0x1, def value: None
 bool  ___ignoreSearchTree;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  _____4__this;

/// @brief Field <>9__0, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass97_0, ___ignoreSearchTree) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass97_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass97_0, _____9__0) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath___c__DisplayClass97_0) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<>c__DisplayClass153_0
class CORDL_TYPE AstarPath___c__DisplayClass153_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9__0, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get___9__0, put=__cordl_internal_set___9__0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__0;

/// @brief Field lineDirection, offset 0x1c, size 0xc 
 __declspec(property(get=__cordl_internal_get_lineDirection, put=__cordl_internal_set_lineDirection)) ::UnityEngine::Vector3  lineDirection;

/// @brief Field lineOrigin, offset 0x10, size 0xc 
 __declspec(property(get=__cordl_internal_get_lineOrigin, put=__cordl_internal_set_lineOrigin)) ::UnityEngine::Vector3  lineOrigin;

/// @brief Field minDist, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_minDist, put=__cordl_internal_set_minDist)) float_t  minDist;

/// @brief Field nearestNode, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_nearestNode, put=__cordl_internal_set_nearestNode)) ::Pathfinding::GraphNode*  nearestNode;

static inline ::GlobalNamespace::AstarPath___c__DisplayClass153_0* New_ctor() ;

/// @brief Method <GetNearest>b__0, addr 0x5e360a4, size 0xc8, virtual false, abstract: false, final false
inline void _GetNearest_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get___9__0() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get___9__0() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lineDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lineDirection() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lineOrigin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lineOrigin() ;

constexpr float_t const& __cordl_internal_get_minDist() const;

constexpr float_t& __cordl_internal_get_minDist() ;

constexpr ::Pathfinding::GraphNode* const& __cordl_internal_get_nearestNode() const;

constexpr ::Pathfinding::GraphNode*& __cordl_internal_get_nearestNode() ;

constexpr void __cordl_internal_set___9__0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_lineDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lineOrigin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_minDist(float_t  value) ;

constexpr void __cordl_internal_set_nearestNode(::Pathfinding::GraphNode*  value) ;

/// @brief Method .ctor, addr 0x5e35cf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath___c__DisplayClass153_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass153_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath___c__DisplayClass153_0(AstarPath___c__DisplayClass153_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass153_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath___c__DisplayClass153_0(AstarPath___c__DisplayClass153_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21164};

/// @brief Field lineOrigin, offset: 0x10, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lineOrigin;

/// @brief Field lineDirection, offset: 0x1c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lineDirection;

/// @brief Field minDist, offset: 0x28, size: 0x4, def value: None
 float_t  ___minDist;

/// @brief Field nearestNode, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  ___nearestNode;

/// @brief Field <>9__0, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  _____9__0;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass153_0, ___lineOrigin) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass153_0, ___lineDirection) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass153_0, ___minDist) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass153_0, ___nearestNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass153_0, _____9__0) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath___c__DisplayClass153_0) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<>c__DisplayClass143_0
class CORDL_TYPE AstarPath___c__DisplayClass143_0 : public ::System::Object {
public:
// Declarations
/// @brief Field graph, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_graph, put=__cordl_internal_set_graph)) ::Pathfinding::NavGraph*  graph;

static inline ::GlobalNamespace::AstarPath___c__DisplayClass143_0* New_ctor() ;

/// @brief Method <ScanGraph>b__0, addr 0x5e36078, size 0x2c, virtual false, abstract: false, final false
inline void _ScanGraph_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::NavGraph* const& __cordl_internal_get_graph() const;

constexpr ::Pathfinding::NavGraph*& __cordl_internal_get_graph() ;

constexpr void __cordl_internal_set_graph(::Pathfinding::NavGraph*  value) ;

/// @brief Method .ctor, addr 0x5e36070, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath___c__DisplayClass143_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass143_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath___c__DisplayClass143_0(AstarPath___c__DisplayClass143_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass143_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath___c__DisplayClass143_0(AstarPath___c__DisplayClass143_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21163};

/// @brief Field graph, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::NavGraph*  ___graph;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass143_0, ___graph) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath___c__DisplayClass143_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies Pathfinding.AstarWorkItem, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<>c__DisplayClass108_0
class CORDL_TYPE AstarPath___c__DisplayClass108_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::AstarPath>  __4__this;

/// @brief Field workItem, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_workItem, put=__cordl_internal_set_workItem)) ::Pathfinding::AstarWorkItem  workItem;

static inline ::GlobalNamespace::AstarPath___c__DisplayClass108_0* New_ctor() ;

/// @brief Method <QueueGraphUpdates>b__0, addr 0x5e36028, size 0x48, virtual false, abstract: false, final false
inline void _QueueGraphUpdates_b__0() ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::AstarWorkItem const& __cordl_internal_get_workItem() const;

constexpr ::Pathfinding::AstarWorkItem& __cordl_internal_get_workItem() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set_workItem(::Pathfinding::AstarWorkItem  value) ;

/// @brief Method .ctor, addr 0x5e333b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath___c__DisplayClass108_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass108_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath___c__DisplayClass108_0(AstarPath___c__DisplayClass108_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c__DisplayClass108_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath___c__DisplayClass108_0(AstarPath___c__DisplayClass108_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21162};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  _____4__this;

/// @brief Field workItem, offset: 0x18, size: 0x20, def value: None
 ::Pathfinding::AstarWorkItem  ___workItem;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass108_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarPath___c__DisplayClass108_0, ___workItem) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarPath___c__DisplayClass108_0) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AstarPath/<>c
class CORDL_TYPE AstarPath___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::AstarPath___c*  __9;

/// @brief Field <>9__123_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__123_0, put=setStaticF___9__123_0)) ::System::Action_1<::Pathfinding::Path*>*  __9__123_0;

static inline ::GlobalNamespace::AstarPath___c* New_ctor() ;

/// @brief Method <InitializePathProcessor>b__123_0, addr 0x5e35fac, size 0x7c, virtual false, abstract: false, final false
inline void _InitializePathProcessor_b__123_0(::Pathfinding::Path*  path) ;

/// @brief Method .ctor, addr 0x5e35fa4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::AstarPath___c* getStaticF___9() ;

static inline ::System::Action_1<::Pathfinding::Path*>* getStaticF___9__123_0() ;

static inline void setStaticF___9(::GlobalNamespace::AstarPath___c*  value) ;

static inline void setStaticF___9__123_0(::System::Action_1<::Pathfinding::Path*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AstarPath___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AstarPath___c(AstarPath___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AstarPath___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AstarPath___c(AstarPath___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21161};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::AstarPath___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
