#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionNetworkObjectStatsGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__FusionStatsGraphBase_def.hpp"
#include "Fusion/Statistics/zzzz__NetworkObjectStat_def.hpp"
#include "Fusion/zzzz__NetworkId_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FusionNetworkObjectStatsGraph)
namespace Fusion::Statistics {
class FusionNetworkObjectStatsGraphCombine;
}
namespace Fusion::Statistics {
class FusionStatisticsManager;
}
namespace Fusion::Statistics {
struct NetworkObjectStat;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
class NetworkRunner;
}
namespace System {
struct DateTime;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionNetworkObjectStatsGraph;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionNetworkObjectStatsGraph*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionNetworkObjectStatsGraph*, "Fusion.Statistics", "FusionNetworkObjectStatsGraph");
// Dependencies Fusion.NetworkId, Fusion.Statistics.FusionStatsGraphBase, Fusion.Statistics.NetworkObjectStat
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionNetworkObjectStatsGraph
class CORDL_TYPE FusionNetworkObjectStatsGraph : public ::Fusion::Statistics::FusionStatsGraphBase {
public:
// Declarations
/// @brief Field _combineParentGraph, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get__combineParentGraph, put=__cordl_internal_set__combineParentGraph)) ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  _combineParentGraph;

/// @brief Field _description, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__description, put=__cordl_internal_set__description)) ::UnityW<::UnityEngine::UI::Text>  _description;

/// @brief Field _id, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__id, put=__cordl_internal_set__id)) ::Fusion::NetworkId  _id;

/// @brief Field _stat, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__stat, put=__cordl_internal_set__stat)) ::Fusion::Statistics::NetworkObjectStat  _stat;

/// @brief Method GetNetworkObjectStatValue, addr 0x60f8198, size 0x100, virtual false, abstract: false, final false
inline float_t GetNetworkObjectStatValue(::Fusion::Statistics::FusionStatisticsManager*  statisticsManager) ;

static inline ::Fusion::Statistics::FusionNetworkObjectStatsGraph* New_ctor() ;

/// @brief Method SetupNetworkObjectStat, addr 0x60f8298, size 0x1ec, virtual false, abstract: false, final false
inline void SetupNetworkObjectStat(::Fusion::NetworkId  id, ::Fusion::Statistics::NetworkObjectStat  stat) ;

/// @brief Method UpdateGraph, addr 0x60f8164, size 0x34, virtual true, abstract: false, final false
inline void UpdateGraph(::Fusion::NetworkRunner*  runner, ::Fusion::Statistics::FusionStatisticsManager*  statisticsManager, ::by_ref<::System::DateTime>  now) ;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine> const& __cordl_internal_get__combineParentGraph() const;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>& __cordl_internal_get__combineParentGraph() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__description() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__description() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get__id() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get__id() ;

constexpr ::Fusion::Statistics::NetworkObjectStat const& __cordl_internal_get__stat() const;

constexpr ::Fusion::Statistics::NetworkObjectStat& __cordl_internal_get__stat() ;

constexpr void __cordl_internal_set__combineParentGraph(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  value) ;

constexpr void __cordl_internal_set__description(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__id(::Fusion::NetworkId  value) ;

constexpr void __cordl_internal_set__stat(::Fusion::Statistics::NetworkObjectStat  value) ;

/// @brief Method .ctor, addr 0x60f8484, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionNetworkObjectStatsGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkObjectStatsGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionNetworkObjectStatsGraph(FusionNetworkObjectStatsGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkObjectStatsGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionNetworkObjectStatsGraph(FusionNetworkObjectStatsGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23494};

/// [SerializeField]
/// @brief Field _description, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____description;

/// @brief Field _id, offset: 0x128, size: 0x4, def value: None
 ::Fusion::NetworkId  ____id;

/// @brief Field _stat, offset: 0x12c, size: 0x4, def value: None
 ::Fusion::Statistics::NetworkObjectStat  ____stat;

/// @brief Field _combineParentGraph, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine>  ____combineParentGraph;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraph, ____description) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraph, ____id) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraph, ____stat) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraph, ____combineParentGraph) == 0x130, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionNetworkObjectStatsGraph) == 0x138, "Size mismatch!");

} // namespace end def Fusion::Statistics
