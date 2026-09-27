#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionNetworkObjectStatsGraphCombine.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__NetworkObjectStat_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionNetworkObjectStatsGraphCombine)
namespace Fusion::Statistics {
class FusionNetworkObjectStatistics;
}
namespace Fusion::Statistics {
class FusionNetworkObjectStatsGraph;
}
namespace Fusion::Statistics {
class FusionStatistics;
}
namespace Fusion::Statistics {
struct NetworkObjectStat;
}
namespace Fusion {
struct NetworkId;
}
namespace Fusion {
class NetworkObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class ContentSizeFitter;
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
class FusionNetworkObjectStatsGraphCombine;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine*, "Fusion.Statistics", "FusionNetworkObjectStatsGraphCombine");
// Dependencies Fusion.Statistics.NetworkObjectStat, UnityEngine.MonoBehaviour
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionNetworkObjectStatsGraphCombine
class CORDL_TYPE FusionNetworkObjectStatsGraphCombine : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_NetworkObjectID)) ::Fusion::NetworkId  NetworkObjectID;

/// @brief Field _combinedGraphRender, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__combinedGraphRender, put=__cordl_internal_set__combinedGraphRender)) ::UnityW<::UnityEngine::RectTransform>  _combinedGraphRender;

/// @brief Field _fusionStatistics, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__fusionStatistics, put=__cordl_internal_set__fusionStatistics)) ::UnityW<::Fusion::Statistics::FusionStatistics>  _fusionStatistics;

/// @brief Field _graphHeight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__graphHeight, put=__cordl_internal_set__graphHeight)) float_t  _graphHeight;

/// @brief Field _headerHeight, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__headerHeight, put=__cordl_internal_set__headerHeight)) float_t  _headerHeight;

/// @brief Field _networkObject, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__networkObject, put=__cordl_internal_set__networkObject)) ::UnityW<::Fusion::NetworkObject>  _networkObject;

/// @brief Field _objectStatisticsInstance, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectStatisticsInstance, put=__cordl_internal_set__objectStatisticsInstance)) ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>  _objectStatisticsInstance;

/// @brief Field _parentContentSizeFitter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__parentContentSizeFitter, put=__cordl_internal_set__parentContentSizeFitter)) ::UnityW<::UnityEngine::UI::ContentSizeFitter>  _parentContentSizeFitter;

/// @brief Field _rect, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__rect, put=__cordl_internal_set__rect)) ::UnityW<::UnityEngine::RectTransform>  _rect;

/// @brief Field _statDropdown, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__statDropdown, put=__cordl_internal_set__statDropdown)) ::UnityW<::UnityEngine::UI::Dropdown>  _statDropdown;

/// @brief Field _statsGraphPrefab, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsGraphPrefab, put=__cordl_internal_set__statsGraphPrefab)) ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>  _statsGraphPrefab;

/// @brief Field _statsGraphs, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__statsGraphs, put=__cordl_internal_set__statsGraphs)) ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>*  _statsGraphs;

/// @brief Field _statsToRender, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__statsToRender, put=__cordl_internal_set__statsToRender)) ::Fusion::Statistics::NetworkObjectStat  _statsToRender;

/// @brief Field _titleText, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleText, put=__cordl_internal_set__titleText)) ::UnityW<::UnityEngine::UI::Text>  _titleText;

/// @brief Field _toggleButton, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__toggleButton, put=__cordl_internal_set__toggleButton)) ::UnityW<::UnityEngine::UI::Button>  _toggleButton;

/// @brief Method DestroyCombinedGraph, addr 0x60f8fe0, size 0x24, virtual false, abstract: false, final false
inline void DestroyCombinedGraph() ;

/// @brief Method DestroyStatGraph, addr 0x60f8a18, size 0xf4, virtual false, abstract: false, final false
inline void DestroyStatGraph(::Fusion::Statistics::NetworkObjectStat  stat) ;

/// @brief Method InstantiateStatGraph, addr 0x60f8b0c, size 0xe8, virtual false, abstract: false, final false
inline void InstantiateStatGraph(::Fusion::Statistics::NetworkObjectStat  stat) ;

static inline ::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine* New_ctor() ;

/// @brief Method OnDisable, addr 0x60f8bf4, size 0x168, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDropDownChanged, addr 0x60f89a0, size 0x78, virtual false, abstract: false, final false
inline void OnDropDownChanged(int32_t  arg0) ;

/// @brief Method OnEnable, addr 0x60f8d5c, size 0x168, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetupNetworkObject, addr 0x60f8504, size 0x44, virtual false, abstract: false, final false
inline void SetupNetworkObject(::Fusion::NetworkObject*  networkObject, ::Fusion::Statistics::FusionStatistics*  fusionStatistics, ::Fusion::Statistics::FusionNetworkObjectStatistics*  objectStatisticsInstance) ;

/// @brief Method Start, addr 0x60f8548, size 0x38c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method ToggleRenderDisplay, addr 0x60f8ec4, size 0x11c, virtual false, abstract: false, final false
inline void ToggleRenderDisplay() ;

/// @brief Method UpdateHeight, addr 0x60f88d4, size 0xcc, virtual false, abstract: false, final false
inline void UpdateHeight(float_t  overrideValue) ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__combinedGraphRender() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__combinedGraphRender() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatistics> const& __cordl_internal_get__fusionStatistics() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatistics>& __cordl_internal_get__fusionStatistics() ;

constexpr float_t const& __cordl_internal_get__graphHeight() const;

constexpr float_t& __cordl_internal_get__graphHeight() ;

constexpr float_t const& __cordl_internal_get__headerHeight() const;

constexpr float_t& __cordl_internal_get__headerHeight() ;

constexpr ::UnityW<::Fusion::NetworkObject> const& __cordl_internal_get__networkObject() const;

constexpr ::UnityW<::Fusion::NetworkObject>& __cordl_internal_get__networkObject() ;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics> const& __cordl_internal_get__objectStatisticsInstance() const;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>& __cordl_internal_get__objectStatisticsInstance() ;

constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter> const& __cordl_internal_get__parentContentSizeFitter() const;

constexpr ::UnityW<::UnityEngine::UI::ContentSizeFitter>& __cordl_internal_get__parentContentSizeFitter() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__rect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__rect() ;

constexpr ::UnityW<::UnityEngine::UI::Dropdown> const& __cordl_internal_get__statDropdown() const;

constexpr ::UnityW<::UnityEngine::UI::Dropdown>& __cordl_internal_get__statDropdown() ;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph> const& __cordl_internal_get__statsGraphPrefab() const;

constexpr ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>& __cordl_internal_get__statsGraphPrefab() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>* const& __cordl_internal_get__statsGraphs() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>*& __cordl_internal_get__statsGraphs() ;

constexpr ::Fusion::Statistics::NetworkObjectStat const& __cordl_internal_get__statsToRender() const;

constexpr ::Fusion::Statistics::NetworkObjectStat& __cordl_internal_get__statsToRender() ;

constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get__titleText() const;

constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get__titleText() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__toggleButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__toggleButton() ;

constexpr void __cordl_internal_set__combinedGraphRender(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__fusionStatistics(::UnityW<::Fusion::Statistics::FusionStatistics>  value) ;

constexpr void __cordl_internal_set__graphHeight(float_t  value) ;

constexpr void __cordl_internal_set__headerHeight(float_t  value) ;

constexpr void __cordl_internal_set__networkObject(::UnityW<::Fusion::NetworkObject>  value) ;

constexpr void __cordl_internal_set__objectStatisticsInstance(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>  value) ;

constexpr void __cordl_internal_set__parentContentSizeFitter(::UnityW<::UnityEngine::UI::ContentSizeFitter>  value) ;

constexpr void __cordl_internal_set__rect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__statDropdown(::UnityW<::UnityEngine::UI::Dropdown>  value) ;

constexpr void __cordl_internal_set__statsGraphPrefab(::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>  value) ;

constexpr void __cordl_internal_set__statsGraphs(::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>*  value) ;

constexpr void __cordl_internal_set__statsToRender(::Fusion::Statistics::NetworkObjectStat  value) ;

constexpr void __cordl_internal_set__titleText(::UnityW<::UnityEngine::UI::Text>  value) ;

constexpr void __cordl_internal_set__toggleButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x60f9004, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_NetworkObjectID, addr 0x60f84dc, size 0x28, virtual false, abstract: false, final false
inline ::Fusion::NetworkId get_NetworkObjectID() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionNetworkObjectStatsGraphCombine() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkObjectStatsGraphCombine", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionNetworkObjectStatsGraphCombine(FusionNetworkObjectStatsGraphCombine && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionNetworkObjectStatsGraphCombine", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionNetworkObjectStatsGraphCombine(FusionNetworkObjectStatsGraphCombine const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23495};

/// [SerializeField]
/// @brief Field _titleText, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Text>  ____titleText;

/// [SerializeField]
/// @brief Field _statDropdown, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Dropdown>  ____statDropdown;

/// [SerializeField]
/// @brief Field _statsToRender, offset: 0x30, size: 0x4, def value: None
 ::Fusion::Statistics::NetworkObjectStat  ____statsToRender;

/// [SerializeField]
/// @brief Field _rect, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____rect;

/// [SerializeField]
/// @brief Field _combinedGraphRender, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____combinedGraphRender;

/// [SerializeField]
/// @brief Field _toggleButton, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____toggleButton;

/// @brief Field _headerHeight, offset: 0x50, size: 0x4, def value: None
 float_t  ____headerHeight;

/// @brief Field _graphHeight, offset: 0x54, size: 0x4, def value: None
 float_t  ____graphHeight;

/// @brief Field _statsGraphs, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Fusion::Statistics::NetworkObjectStat,::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>>*  ____statsGraphs;

/// [SerializeField]
/// @brief Field _statsGraphPrefab, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatsGraph>  ____statsGraphPrefab;

/// @brief Field _parentContentSizeFitter, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::ContentSizeFitter>  ____parentContentSizeFitter;

/// @brief Field _networkObject, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Fusion::NetworkObject>  ____networkObject;

/// @brief Field _fusionStatistics, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatistics>  ____fusionStatistics;

/// @brief Field _objectStatisticsInstance, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionNetworkObjectStatistics>  ____objectStatisticsInstance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____titleText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____statDropdown) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____statsToRender) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____rect) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____combinedGraphRender) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____toggleButton) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____headerHeight) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____graphHeight) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____statsGraphs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____statsGraphPrefab) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____parentContentSizeFitter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____networkObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____fusionStatistics) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine, ____objectStatisticsInstance) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionNetworkObjectStatsGraphCombine) == 0x88, "Size mismatch!");

} // namespace end def Fusion::Statistics
