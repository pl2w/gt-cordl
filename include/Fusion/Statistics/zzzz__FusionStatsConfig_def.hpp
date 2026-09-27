#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsConfig.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(FusionStatsConfig)
namespace Fusion::Statistics {
class FusionStatistics;
}
namespace Fusion::Statistics {
class FusionStatsConfig___c__DisplayClass21_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatsConfig;
}
namespace Fusion::Statistics {
class FusionStatsConfig___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatsConfig*);
MARK_REF_T(::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatsConfig*, "Fusion.Statistics", "FusionStatsConfig");
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0*, "Fusion.Statistics", "FusionStatsConfig/<>c__DisplayClass21_0");
// Dependencies UnityEngine.MonoBehaviour
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatsConfig
class CORDL_TYPE FusionStatsConfig : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass21_0 = ::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0;

 __declspec(property(get=get_IsWorldAnchored)) bool  IsWorldAnchored;

/// @brief Field _canvas, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _configPanel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__configPanel, put=__cordl_internal_set__configPanel)) ::UnityW<::UnityEngine::GameObject>  _configPanel;

/// @brief Field _fusionStatistics, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__fusionStatistics, put=__cordl_internal_set__fusionStatistics)) ::UnityW<::Fusion::Statistics::FusionStatistics>  _fusionStatistics;

/// @brief Field _onWorldAnchorCandidatesUpdate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onWorldAnchorCandidatesUpdate, put=setStaticF__onWorldAnchorCandidatesUpdate)) ::System::Action*  _onWorldAnchorCandidatesUpdate;

/// @brief Field _renderPanelRectTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__renderPanelRectTransform, put=__cordl_internal_set__renderPanelRectTransform)) ::UnityW<::UnityEngine::RectTransform>  _renderPanelRectTransform;

/// @brief Field _worldAnchorButtonPrefab, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__worldAnchorButtonPrefab, put=__cordl_internal_set__worldAnchorButtonPrefab)) ::UnityW<::UnityEngine::UI::Button>  _worldAnchorButtonPrefab;

/// @brief Field _worldAnchorCandidates, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__worldAnchorCandidates, put=setStaticF__worldAnchorCandidates)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  _worldAnchorCandidates;

/// @brief Field _worldAnchorListContainer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__worldAnchorListContainer, put=__cordl_internal_set__worldAnchorListContainer)) ::UnityW<::UnityEngine::Transform>  _worldAnchorListContainer;

/// @brief Field _worldCanvasScale, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__worldCanvasScale, put=__cordl_internal_set__worldCanvasScale)) float_t  _worldCanvasScale;

/// @brief Field _worldTransformAnchor, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__worldTransformAnchor, put=__cordl_internal_set__worldTransformAnchor)) ::UnityW<::UnityEngine::Transform>  _worldTransformAnchor;

static inline ::Fusion::Statistics::FusionStatsConfig* New_ctor() ;

/// @brief Method OnDestroy, addr 0x60fbeb0, size 0xa0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnEnable, addr 0x60fbde4, size 0xcc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetToCanvasAnchor, addr 0x60fa264, size 0x214, virtual false, abstract: false, final false
inline void ResetToCanvasAnchor() ;

/// @brief Method SetWorldAnchor, addr 0x60fa478, size 0x1ac, virtual false, abstract: false, final false
inline void SetWorldAnchor(::UnityEngine::Transform*  worldTransformAnchor) ;

/// @brief Method SetWorldAnchorCandidate, addr 0x60fb870, size 0x1a0, virtual false, abstract: false, final false
static inline void SetWorldAnchorCandidate(::UnityEngine::Transform*  candidate, bool  _cordl_register) ;

/// @brief Method SetWorldCanvasScale, addr 0x60fba58, size 0x8, virtual false, abstract: false, final false
inline void SetWorldCanvasScale(float_t  value) ;

/// @brief Method SetupStatisticReference, addr 0x60fba10, size 0x8, virtual false, abstract: false, final false
inline void SetupStatisticReference(::Fusion::Statistics::FusionStatistics*  fusionStatistics) ;

/// @brief Method ToggleConfigPanel, addr 0x60fba18, size 0x34, virtual false, abstract: false, final false
inline void ToggleConfigPanel() ;

/// @brief Method ToggleUseWorldAnchor, addr 0x60fba4c, size 0xc, virtual false, abstract: false, final false
inline void ToggleUseWorldAnchor(bool  value) ;

/// @brief Method UpdateWorldAnchorButtons, addr 0x60fba60, size 0x37c, virtual false, abstract: false, final false
inline void UpdateWorldAnchorButtons() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__configPanel() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__configPanel() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatistics> const& __cordl_internal_get__fusionStatistics() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatistics>& __cordl_internal_get__fusionStatistics() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__renderPanelRectTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__renderPanelRectTransform() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__worldAnchorButtonPrefab() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__worldAnchorButtonPrefab() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__worldAnchorListContainer() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__worldAnchorListContainer() ;

constexpr float_t const& __cordl_internal_get__worldCanvasScale() const;

constexpr float_t& __cordl_internal_get__worldCanvasScale() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__worldTransformAnchor() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__worldTransformAnchor() ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set__configPanel(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set__fusionStatistics(::UnityW<::Fusion::Statistics::FusionStatistics>  value) ;

constexpr void __cordl_internal_set__renderPanelRectTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__worldAnchorButtonPrefab(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__worldAnchorListContainer(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__worldCanvasScale(float_t  value) ;

constexpr void __cordl_internal_set__worldTransformAnchor(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x60fbf50, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add__onWorldAnchorCandidatesUpdate, addr 0x60fb6b8, size 0xdc, virtual false, abstract: false, final false
static inline void add__onWorldAnchorCandidatesUpdate(::System::Action*  value) ;

static inline ::System::Action* getStaticF__onWorldAnchorCandidatesUpdate() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>* getStaticF__worldAnchorCandidates() ;

/// @brief Method get_IsWorldAnchored, addr 0x60fadb4, size 0x60, virtual false, abstract: false, final false
inline bool get_IsWorldAnchored() ;

/// [CompilerGenerated]
/// @brief Method remove__onWorldAnchorCandidatesUpdate, addr 0x60fb794, size 0xdc, virtual false, abstract: false, final false
static inline void remove__onWorldAnchorCandidatesUpdate(::System::Action*  value) ;

static inline void setStaticF__onWorldAnchorCandidatesUpdate(::System::Action*  value) ;

static inline void setStaticF__worldAnchorCandidates(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Transform>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsConfig() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsConfig", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatsConfig(FusionStatsConfig && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsConfig", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatsConfig(FusionStatsConfig const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23502};

/// [SerializeField]
/// @brief Field _worldAnchorButtonPrefab, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____worldAnchorButtonPrefab;

/// [SerializeField]
/// @brief Field _worldAnchorListContainer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____worldAnchorListContainer;

/// [SerializeField]
/// @brief Field _configPanel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____configPanel;

/// [SerializeField]
/// @brief Field _canvas, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// [SerializeField]
/// @brief Field _renderPanelRectTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____renderPanelRectTransform;

/// @brief Field _worldTransformAnchor, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____worldTransformAnchor;

/// @brief Field _worldCanvasScale, offset: 0x50, size: 0x4, def value: None
 float_t  ____worldCanvasScale;

/// @brief Field _fusionStatistics, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatistics>  ____fusionStatistics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____worldAnchorButtonPrefab) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____worldAnchorListContainer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____configPanel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____canvas) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____renderPanelRectTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____worldTransformAnchor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____worldCanvasScale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig, ____fusionStatistics) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatsConfig) == 0x60, "Size mismatch!");

} // namespace end def Fusion::Statistics
// [CompilerGenerated]
// Dependencies System.Object
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatsConfig/<>c__DisplayClass21_0
class CORDL_TYPE FusionStatsConfig___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Fusion::Statistics::FusionStatsConfig>  __4__this;

/// @brief Field candidate, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_candidate, put=__cordl_internal_set_candidate)) ::UnityW<::UnityEngine::Transform>  candidate;

static inline ::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <UpdateWorldAnchorButtons>b__0, addr 0x60fbffc, size 0x1c, virtual false, abstract: false, final false
inline void _UpdateWorldAnchorButtons_b__0() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_candidate() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_candidate() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Fusion::Statistics::FusionStatsConfig>  value) ;

constexpr void __cordl_internal_set_candidate(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x60fbddc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsConfig___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsConfig___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatsConfig___c__DisplayClass21_0(FusionStatsConfig___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsConfig___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatsConfig___c__DisplayClass21_0(FusionStatsConfig___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23501};

/// @brief Field candidate, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___candidate;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatsConfig>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0, ___candidate) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatsConfig___c__DisplayClass21_0) == 0x20, "Size mismatch!");

} // namespace end def Fusion::Statistics
