#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatistics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__CanvasAnchor_def.hpp"
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
#include "Fusion/zzzz__SimulationBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FusionStatistics)
namespace Fusion::Statistics {
struct CanvasAnchor;
}
namespace Fusion::Statistics {
class FusionNetworkObjectStatistics;
}
namespace Fusion::Statistics {
class FusionNetworkObjectStatsGraphCombine;
}
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion::Statistics {
class FusionStatsCanvas;
}
namespace Fusion::Statistics {
class FusionStatsConfig;
}
namespace Fusion::Statistics {
class FusionStatsGraphBase;
}
namespace Fusion::Statistics {
class FusionStatsPanelHeader;
}
namespace Fusion::Statistics {
class FusionStatsWorldAnchor;
}
namespace Fusion::Statistics {
struct RenderSimStats;
}
namespace Fusion {
class IPublicFacingInterface;
}
namespace Fusion {
class ISpawned;
}
namespace Fusion {
class NetworkObject;
}
namespace GlobalNamespace {
struct FusionStatistics_FusionStatisticsStatCustomConfig;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatistics;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatistics*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatistics*, "Fusion.Statistics", "FusionStatistics");
// [RequireComponent(typeof(Fusion.NetworkRunner))]
// [AddComponentMenu("Fusion/Statistics/Fusion Statistics")]
// Dependencies Fusion.SimulationBehaviour, Fusion.Statistics.CanvasAnchor, Fusion.Statistics.RenderSimStats
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatistics
class CORDL_TYPE FusionStatistics : public ::Fusion::SimulationBehaviour {
public:
// Declarations
using FusionStatisticsStatCustomConfig = ::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig;

 __declspec(property(get=get_ActiveGraphs)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*  ActiveGraphs;

 __declspec(property(get=get_IsPanelActive)) bool  IsPanelActive;

 __declspec(property(get=get_StatsCustomConfig)) ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  StatsCustomConfig;

/// @brief Field _canvasAnchor, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__canvasAnchor, put=__cordl_internal_set__canvasAnchor)) ::Fusion::Statistics::CanvasAnchor  _canvasAnchor;

/// @brief Field _config, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::UnityW<::Fusion::Statistics::FusionStatsConfig>  _config;

/// @brief Field _header, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  _header;

/// @brief Field _objectGraphCombinePrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectGraphCombinePrefab, put=__cordl_internal_set__objectGraphCombinePrefab)) ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  _objectGraphCombinePrefab;

/// @brief Field _objectStatsGraphCombines, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectStatsGraphCombines, put=__cordl_internal_set__objectStatsGraphCombines)) ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>*  _objectStatsGraphCombines;

/// @brief Field _statsCanvas, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsCanvas, put=__cordl_internal_set__statsCanvas)) ::UnityW<::Fusion::Statistics::FusionStatsCanvas>  _statsCanvas;

/// @brief Field _statsCanvasPrefab, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsCanvasPrefab, put=__cordl_internal_set__statsCanvasPrefab)) ::UnityW<::UnityEngine::GameObject>  _statsCanvasPrefab;

/// @brief Field _statsCustomConfig, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsCustomConfig, put=__cordl_internal_set__statsCustomConfig)) ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  _statsCustomConfig;

/// @brief Field _statsEnabled, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__statsEnabled, put=__cordl_internal_set__statsEnabled)) ::Fusion::Statistics::RenderSimStats  _statsEnabled;

/// @brief Field _statsGraph, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsGraph, put=__cordl_internal_set__statsGraph)) ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*  _statsGraph;

/// @brief Field _statsPanelObject, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsPanelObject, put=__cordl_internal_set__statsPanelObject)) ::UnityW<::UnityEngine::GameObject>  _statsPanelObject;

/// @brief Convert operator to "::Fusion::IPublicFacingInterface"
constexpr operator  ::Fusion::IPublicFacingInterface*() noexcept;

/// @brief Convert operator to "::Fusion::ISpawned"
constexpr operator  ::Fusion::ISpawned*() noexcept;

/// @brief Method ApplyCustomConfig, addr 0x60f98f8, size 0x80, virtual false, abstract: false, final false
inline void ApplyCustomConfig() ;

/// @brief Method Awake, addr 0x60f9084, size 0x214, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method DestroyStatisticsPanel, addr 0x60fa624, size 0x1b0, virtual false, abstract: false, final false
inline void DestroyStatisticsPanel() ;

/// @brief Method Fusion.ISpawned.Spawned, addr 0x60f9298, size 0x4, virtual true, abstract: false, final true
inline void Fusion_ISpawned_Spawned() ;

/// @brief Method MonitorNetworkObject, addr 0x60f7f5c, size 0x1f0, virtual false, abstract: false, final false
inline bool MonitorNetworkObject(::Fusion::NetworkObject*  networkObject, ::Fusion::Statistics::FusionNetworkObjectStatistics*  objectStatisticsInstance, bool  monitor) ;

static inline ::Fusion::Statistics::FusionStatistics* New_ctor() ;

/// @brief Method OnEditorChange, addr 0x60f9bdc, size 0x24, virtual false, abstract: false, final false
inline void OnEditorChange() ;

/// @brief Method RegisterGraph, addr 0x60fa958, size 0xac, virtual false, abstract: false, final false
inline void RegisterGraph(::Fusion::Statistics::FusionStatsGraphBase*  graph) ;

/// @brief Method RenderEnabledStats, addr 0x60f9c00, size 0x30, virtual false, abstract: false, final false
inline void RenderEnabledStats() ;

/// @brief Method SetCanvasAnchor, addr 0x60f9978, size 0x94, virtual false, abstract: false, final false
inline void SetCanvasAnchor(::Fusion::Statistics::CanvasAnchor  anchor) ;

/// @brief Method SetStatsCustomConfig, addr 0x60f983c, size 0xbc, virtual false, abstract: false, final false
inline void SetStatsCustomConfig(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  customConfig) ;

/// @brief Method SetWorldAnchor, addr 0x60fa1a8, size 0xbc, virtual false, abstract: false, final false
inline void SetWorldAnchor(::Fusion::Statistics::FusionStatsWorldAnchor*  anchor, float_t  scale) ;

/// @brief Method SetupStatisticsPanel, addr 0x60f929c, size 0x5a0, virtual false, abstract: false, final false
inline void SetupStatisticsPanel() ;

/// @brief Method UnregisterGraph, addr 0x60faa04, size 0x58, virtual false, abstract: false, final false
inline void UnregisterGraph(::Fusion::Statistics::FusionStatsGraphBase*  graph) ;

/// @brief Method Update, addr 0x60faa5c, size 0x98, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateAllGraphs, addr 0x60fa7d4, size 0x184, virtual false, abstract: false, final false
inline void UpdateAllGraphs(::Fusion::Statistics::FusionStatisticsManager*  statisticsManager) ;

/// @brief Method UpdateStatsEnabled, addr 0x60f9f78, size 0x8, virtual false, abstract: false, final false
inline void UpdateStatsEnabled(::Fusion::Statistics::RenderSimStats  stats) ;

constexpr ::Fusion::Statistics::CanvasAnchor const& __cordl_internal_get__canvasAnchor() const;

constexpr ::Fusion::Statistics::CanvasAnchor& __cordl_internal_get__canvasAnchor() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig> const& __cordl_internal_get__config() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig>& __cordl_internal_get__config() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader> const& __cordl_internal_get__header() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>& __cordl_internal_get__header() ;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine> const& __cordl_internal_get__objectGraphCombinePrefab() const;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>& __cordl_internal_get__objectGraphCombinePrefab() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>* const& __cordl_internal_get__objectStatsGraphCombines() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>*& __cordl_internal_get__objectStatsGraphCombines() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsCanvas> const& __cordl_internal_get__statsCanvas() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsCanvas>& __cordl_internal_get__statsCanvas() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__statsCanvasPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__statsCanvasPrefab() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>* const& __cordl_internal_get__statsCustomConfig() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*& __cordl_internal_get__statsCustomConfig() ;

constexpr ::Fusion::Statistics::RenderSimStats const& __cordl_internal_get__statsEnabled() const;

constexpr ::Fusion::Statistics::RenderSimStats& __cordl_internal_get__statsEnabled() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>* const& __cordl_internal_get__statsGraph() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*& __cordl_internal_get__statsGraph() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__statsPanelObject() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__statsPanelObject() ;

constexpr void __cordl_internal_set__canvasAnchor(::Fusion::Statistics::CanvasAnchor  value) ;

constexpr void __cordl_internal_set__config(::UnityW<::Fusion::Statistics::FusionStatsConfig>  value) ;

constexpr void __cordl_internal_set__header(::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  value) ;

constexpr void __cordl_internal_set__objectGraphCombinePrefab(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  value) ;

constexpr void __cordl_internal_set__objectStatsGraphCombines(::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>*  value) ;

constexpr void __cordl_internal_set__statsCanvas(::UnityW<::Fusion::Statistics::FusionStatsCanvas>  value) ;

constexpr void __cordl_internal_set__statsCanvasPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__statsCustomConfig(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  value) ;

constexpr void __cordl_internal_set__statsEnabled(::Fusion::Statistics::RenderSimStats  value) ;

constexpr void __cordl_internal_set__statsGraph(::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*  value) ;

constexpr void __cordl_internal_set__statsPanelObject(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x60faaf4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ActiveGraphs, addr 0x60f9018, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>* get_ActiveGraphs() ;

/// @brief Method get_IsPanelActive, addr 0x60f9028, size 0x5c, virtual false, abstract: false, final false
inline bool get_IsPanelActive() ;

/// @brief Method get_StatsCustomConfig, addr 0x60f9020, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>* get_StatsCustomConfig() ;

/// @brief Convert to "::Fusion::IPublicFacingInterface"
constexpr ::Fusion::IPublicFacingInterface* i___Fusion__IPublicFacingInterface() noexcept;

/// @brief Convert to "::Fusion::ISpawned"
constexpr ::Fusion::ISpawned* i___Fusion__ISpawned() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatistics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatistics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatistics(FusionStatistics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatistics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatistics(FusionStatistics const& ) = delete;

/// @brief Field STATS_CANVAS_PREFAB_PATH offset 0xffffffff size 0x8
static constexpr ::ConstString  STATS_CANVAS_PREFAB_PATH{u"FusionStatsResources/FusionStatsRenderPanel"};

/// @brief Field STATS_OBJECT_COMBINE_PREFAB_PATH offset 0xffffffff size 0x8
static constexpr ::ConstString  STATS_OBJECT_COMBINE_PREFAB_PATH{u"FusionStatsResources/NetworkObjectStatistics"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23497};

/// @brief Field _statsCanvasPrefab, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____statsCanvasPrefab;

/// @brief Field _objectGraphCombinePrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  ____objectGraphCombinePrefab;

/// @brief Field _statsGraph, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::Fusion::Statistics::FusionStatsGraphBase>>*  ____statsGraph;

/// @brief Field _header, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  ____header;

/// @brief Field _config, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatsConfig>  ____config;

/// @brief Field _statsCanvas, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatsCanvas>  ____statsCanvas;

/// @brief Field _statsPanelObject, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____statsPanelObject;

/// @brief Field _objectStatsGraphCombines, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>>*  ____objectStatsGraphCombines;

/// [InlineHelp]
/// [ExpandableEnum]
/// [SerializeField]
/// @brief Field _statsEnabled, offset: 0x88, size: 0x4, def value: None
 ::Fusion::Statistics::RenderSimStats  ____statsEnabled;

/// [InlineHelp]
/// [SerializeField]
/// @brief Field _canvasAnchor, offset: 0x8c, size: 0x4, def value: None
 ::Fusion::Statistics::CanvasAnchor  ____canvasAnchor;

/// [FormerlySerializedAs("_statsConfig")]
/// [SerializeField]
/// [Header("Custom configuration to override default values.\nSelect only one stat flag per configuration.")]
/// @brief Field _statsCustomConfig, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  ____statsCustomConfig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____statsCanvasPrefab) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____objectGraphCombinePrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____statsGraph) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____header) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____config) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____statsCanvas) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____statsPanelObject) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____objectStatsGraphCombines) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____statsEnabled) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____canvasAnchor) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatistics, ____statsCustomConfig) == 0x90, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatistics) == 0x98, "Size mismatch!");

} // namespace end def Fusion::Statistics
