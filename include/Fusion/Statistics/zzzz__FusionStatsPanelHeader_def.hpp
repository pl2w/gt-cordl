#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsPanelHeader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__RenderSimStats_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatsPanelHeader)
namespace Fusion::Statistics {
class FusionStatistics;
}
namespace Fusion::Statistics {
class FusionStatsGraphDefault;
}
namespace Fusion::Statistics {
struct RenderSimStats;
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
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Dropdown;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatsPanelHeader;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatsPanelHeader*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatsPanelHeader*, "Fusion.Statistics", "FusionStatsPanelHeader");
// Dependencies Fusion.Statistics.RenderSimStats, UnityEngine.MonoBehaviour
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatsPanelHeader
class CORDL_TYPE FusionStatsPanelHeader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field ContentRect, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_ContentRect, put=__cordl_internal_set_ContentRect)) ::UnityW<::UnityEngine::RectTransform>  ContentRect;

/// @brief Field OnRenderStatsUpdate, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRenderStatsUpdate, put=__cordl_internal_set_OnRenderStatsUpdate)) ::System::Action*  OnRenderStatsUpdate;

/// @brief Field _defaultGraphPrefab, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultGraphPrefab, put=__cordl_internal_set__defaultGraphPrefab)) ::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>  _defaultGraphPrefab;

/// @brief Field _defaultStatsGraph, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultStatsGraph, put=__cordl_internal_set__defaultStatsGraph)) ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>*  _defaultStatsGraph;

/// @brief Field _fusionStatistics, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__fusionStatistics, put=__cordl_internal_set__fusionStatistics)) ::UnityW<::Fusion::Statistics::FusionStatistics>  _fusionStatistics;

/// @brief Field _statsDropdown, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsDropdown, put=__cordl_internal_set__statsDropdown)) ::UnityW<::UnityEngine::UI::Dropdown>  _statsDropdown;

/// @brief Field _statsHeaderTitle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsHeaderTitle, put=__cordl_internal_set__statsHeaderTitle)) ::UnityW<::UnityEngine::UI::Text>  _statsHeaderTitle;

/// @brief Field _statsToRender, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__statsToRender, put=__cordl_internal_set__statsToRender)) ::Fusion::Statistics::RenderSimStats  _statsToRender;

/// @brief Method AddStat, addr 0x60fc780, size 0x3c, virtual false, abstract: false, final false
inline void AddStat(::Fusion::Statistics::RenderSimStats  stat) ;

/// @brief Method ApplyCustomStatsConfig, addr 0x60fcb74, size 0x44, virtual false, abstract: false, final false
inline void ApplyCustomStatsConfig(::Fusion::Statistics::FusionStatsGraphDefault*  graph, ::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig  config) ;

/// @brief Method ApplyStatsConfig, addr 0x60f9a14, size 0x1c8, virtual false, abstract: false, final false
inline void ApplyStatsConfig(::System::Collections::Generic::List_1<::GlobalNamespace::FusionStatistics_FusionStatisticsStatCustomConfig>*  statsConfig) ;

/// @brief Method DestroyStatGraph, addr 0x60fc8e0, size 0xb8, virtual false, abstract: false, final false
inline void DestroyStatGraph(::Fusion::Statistics::RenderSimStats  stat) ;

/// @brief Method InstantiateStatGraph, addr 0x60fc7f8, size 0xcc, virtual false, abstract: false, final false
inline void InstantiateStatGraph(::Fusion::Statistics::RenderSimStats  stat) ;

/// @brief Method InvokeRenderStatsUpdate, addr 0x60fc8c4, size 0x1c, virtual false, abstract: false, final false
inline void InvokeRenderStatsUpdate() ;

static inline ::Fusion::Statistics::FusionStatsPanelHeader* New_ctor() ;

/// @brief Method OnDropDownChanged, addr 0x60fc998, size 0x60, virtual false, abstract: false, final false
inline void OnDropDownChanged(int32_t  arg0) ;

/// @brief Method RemoveStat, addr 0x60fc7bc, size 0x3c, virtual false, abstract: false, final false
inline void RemoveStat(::Fusion::Statistics::RenderSimStats  stat) ;

/// @brief Method SetStatsToRender, addr 0x60f9c30, size 0x348, virtual false, abstract: false, final false
inline void SetStatsToRender(::Fusion::Statistics::RenderSimStats  stats) ;

/// @brief Method SetupDropdown, addr 0x60fc460, size 0x320, virtual false, abstract: false, final false
inline void SetupDropdown() ;

/// @brief Method SetupHeader, addr 0x60fa15c, size 0x4c, virtual false, abstract: false, final false
inline void SetupHeader(::StringW  title, ::Fusion::Statistics::FusionStatistics*  fusionStatistics) ;

/// @brief Method TryApplyCustomStatConfig, addr 0x60fc9f8, size 0x17c, virtual false, abstract: false, final false
inline void TryApplyCustomStatConfig(::Fusion::Statistics::FusionStatsGraphDefault*  graph) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_ContentRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_ContentRect() ;

constexpr ::System::Action* const& __cordl_internal_get_OnRenderStatsUpdate() const;

constexpr ::System::Action*& __cordl_internal_get_OnRenderStatsUpdate() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsGraphDefault> const& __cordl_internal_get__defaultGraphPrefab() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>& __cordl_internal_get__defaultGraphPrefab() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>* const& __cordl_internal_get__defaultStatsGraph() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>*& __cordl_internal_get__defaultStatsGraph() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatistics> const& __cordl_internal_get__fusionStatistics() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatistics>& __cordl_internal_get__fusionStatistics() ;

constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get__statsDropdown() const;

constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get__statsDropdown() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__statsHeaderTitle() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__statsHeaderTitle() ;

constexpr ::Fusion::Statistics::RenderSimStats const& __cordl_internal_get__statsToRender() const;

constexpr ::Fusion::Statistics::RenderSimStats& __cordl_internal_get__statsToRender() ;

constexpr void __cordl_internal_set_ContentRect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_OnRenderStatsUpdate(::System::Action*  value) ;

constexpr void __cordl_internal_set__defaultGraphPrefab(::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>  value) ;

constexpr void __cordl_internal_set__defaultStatsGraph(::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>*  value) ;

constexpr void __cordl_internal_set__fusionStatistics(::UnityW<::Fusion::Statistics::FusionStatistics>  value) ;

constexpr void __cordl_internal_set__statsDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value) ;

constexpr void __cordl_internal_set__statsHeaderTitle(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__statsToRender(::Fusion::Statistics::RenderSimStats  value) ;

/// @brief Method .ctor, addr 0x60fcbb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnRenderStatsUpdate, addr 0x60fb4c4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnRenderStatsUpdate(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRenderStatsUpdate, addr 0x60fb614, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnRenderStatsUpdate(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsPanelHeader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsPanelHeader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatsPanelHeader(FusionStatsPanelHeader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsPanelHeader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatsPanelHeader(FusionStatsPanelHeader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23505};

/// [CompilerGenerated]
/// @brief Field OnRenderStatsUpdate, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnRenderStatsUpdate;

/// [SerializeField]
/// @brief Field _statsHeaderTitle, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____statsHeaderTitle;

/// [SerializeField]
/// @brief Field _statsDropdown, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Dropdown>  ____statsDropdown;

/// [SerializeField]
/// @brief Field _defaultGraphPrefab, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>  ____defaultGraphPrefab;

/// @brief Field ContentRect, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___ContentRect;

/// @brief Field _defaultStatsGraph, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::RenderSimStats,::UnityW<::Fusion::Statistics::FusionStatsGraphDefault>>*  ____defaultStatsGraph;

/// @brief Field _fusionStatistics, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatistics>  ____fusionStatistics;

/// @brief Field _statsToRender, offset: 0x58, size: 0x4, def value: None
 ::Fusion::Statistics::RenderSimStats  ____statsToRender;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ___OnRenderStatsUpdate) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ____statsHeaderTitle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ____statsDropdown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ____defaultGraphPrefab) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ___ContentRect) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ____defaultStatsGraph) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ____fusionStatistics) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsPanelHeader, ____statsToRender) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatsPanelHeader) == 0x60, "Size mismatch!");

} // namespace end def Fusion::Statistics
