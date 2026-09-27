#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsCanvas.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Statistics/zzzz__CanvasAnchor_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsCanvas_DragMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FusionStatsCanvas)
namespace Fusion::Statistics {
struct CanvasAnchor;
}
namespace Fusion::Statistics {
class FusionStatistics;
}
namespace Fusion::Statistics {
class FusionStatsConfig;
}
namespace Fusion::Statistics {
class FusionStatsPanelHeader;
}
namespace GlobalNamespace {
struct FusionStatsCanvas_DragMode;
}
namespace UnityEngine::EventSystems {
class IBeginDragHandler;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEndDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class CanvasScaler;
}
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Fusion::Statistics {
class FusionStatsCanvas;
}
// Write type traits
MARK_REF_T(::Fusion::Statistics::FusionStatsCanvas*);
DEFINE_IL2CPP_CLASS(::Fusion::Statistics::FusionStatsCanvas*, "Fusion.Statistics", "FusionStatsCanvas");
// Dependencies Fusion.Statistics.CanvasAnchor, Fusion.Statistics.FusionStatsCanvas::DragMode, UnityEngine.MonoBehaviour
namespace Fusion::Statistics {
// Is value type: false
// CS Name: Fusion.Statistics.FusionStatsCanvas
class CORDL_TYPE FusionStatsCanvas : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DragMode = ::GlobalNamespace::FusionStatsCanvas_DragMode;

/// @brief Field _anchor, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__anchor, put=__cordl_internal_set__anchor)) ::Fusion::Statistics::CanvasAnchor  _anchor;

/// @brief Field _bottomPanel, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__bottomPanel, put=__cordl_internal_set__bottomPanel)) ::UnityW<::UnityEngine::RectTransform>  _bottomPanel;

/// @brief Field _canvas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvas, put=__cordl_internal_set__canvas)) ::UnityW<::UnityEngine::Canvas>  _canvas;

/// @brief Field _canvasPanel, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasPanel, put=__cordl_internal_set__canvasPanel)) ::UnityW<::UnityEngine::RectTransform>  _canvasPanel;

/// @brief Field _canvasScaler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__canvasScaler, put=__cordl_internal_set__canvasScaler)) ::UnityW<::UnityEngine::UI::CanvasScaler>  _canvasScaler;

/// @brief Field _closeButton, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__closeButton, put=__cordl_internal_set__closeButton)) ::UnityW<::UnityEngine::UI::Button>  _closeButton;

/// @brief Field _config, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__config, put=__cordl_internal_set__config)) ::UnityW<::Fusion::Statistics::FusionStatsConfig>  _config;

/// @brief Field _contentContainer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentContainer, put=__cordl_internal_set__contentContainer)) ::UnityW<::UnityEngine::RectTransform>  _contentContainer;

/// @brief Field _contentPanel, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentPanel, put=__cordl_internal_set__contentPanel)) ::UnityW<::UnityEngine::RectTransform>  _contentPanel;

/// @brief Field _dragMode, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__dragMode, put=__cordl_internal_set__dragMode)) ::GlobalNamespace::FusionStatsCanvas_DragMode  _dragMode;

/// @brief Field _header, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__header, put=__cordl_internal_set__header)) ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  _header;

/// @brief Field _hideButton, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__hideButton, put=__cordl_internal_set__hideButton)) ::UnityW<::UnityEngine::UI::Button>  _hideButton;

 __declspec(property(get=get__isColapsed)) bool  _isColapsed;

/// @brief Field _statsCanvasActiveCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__statsCanvasActiveCount, put=setStaticF__statsCanvasActiveCount)) int32_t  _statsCanvasActiveCount;

/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IEndDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Method AdaptContentHeightToGraphs, addr 0x60fb308, size 0x108, virtual false, abstract: false, final false
inline void AdaptContentHeightToGraphs() ;

/// @brief Method CheckDraggableRectVisibility, addr 0x60fb074, size 0xa0, virtual false, abstract: false, final false
inline bool CheckDraggableRectVisibility(::UnityEngine::RectTransform*  rectTransform) ;

/// @brief Method GetDefinedAnchorPosition, addr 0x60fabb8, size 0x140, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 GetDefinedAnchorPosition() ;

static inline ::Fusion::Statistics::FusionStatsCanvas* New_ctor() ;

/// @brief Method OnBeginDrag, addr 0x60facf8, size 0xbc, virtual true, abstract: false, final true
inline void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnDisable, addr 0x60fb560, size 0xb4, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrag, addr 0x60fae14, size 0xec, virtual true, abstract: false, final true
inline void OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnEnable, addr 0x60fb410, size 0xb4, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnEndDrag, addr 0x60faf38, size 0x13c, virtual true, abstract: false, final true
inline void OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method SetCanvasAnchor, addr 0x60f9a0c, size 0x8, virtual false, abstract: false, final false
inline void SetCanvasAnchor(::Fusion::Statistics::CanvasAnchor  anchor) ;

/// @brief Method SetContentPanelHeight, addr 0x60fb138, size 0xcc, virtual false, abstract: false, final false
inline void SetContentPanelHeight(float_t  value) ;

/// @brief Method SetupStatsCanvas, addr 0x60f9f80, size 0x1dc, virtual false, abstract: false, final false
inline void SetupStatsCanvas(::Fusion::Statistics::FusionStatistics*  fusionStatistics, ::Fusion::Statistics::CanvasAnchor  canvasAnchor, ::UnityEngine::Events::UnityAction*  closeButtonAction) ;

/// @brief Method SnapPanelBackToOriginPos, addr 0x60fb114, size 0x24, virtual false, abstract: false, final false
inline void SnapPanelBackToOriginPos() ;

/// @brief Method ToggleHide, addr 0x60fb204, size 0x104, virtual false, abstract: false, final false
inline void ToggleHide() ;

/// @brief Method UpdateContentContainerHeight, addr 0x60faf00, size 0x38, virtual false, abstract: false, final false
inline void UpdateContentContainerHeight(float_t  yDelta) ;

constexpr ::Fusion::Statistics::CanvasAnchor const& __cordl_internal_get__anchor() const;

constexpr ::Fusion::Statistics::CanvasAnchor& __cordl_internal_get__anchor() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__bottomPanel() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__bottomPanel() ;

constexpr ::UnityW<::UnityEngine::Canvas> const& __cordl_internal_get__canvas() const;

constexpr ::UnityW<::UnityEngine::Canvas>& __cordl_internal_get__canvas() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__canvasPanel() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__canvasPanel() ;

constexpr ::UnityW<::UnityEngine::UI::CanvasScaler> const& __cordl_internal_get__canvasScaler() const;

constexpr ::UnityW<::UnityEngine::UI::CanvasScaler>& __cordl_internal_get__canvasScaler() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__closeButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__closeButton() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig> const& __cordl_internal_get__config() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig>& __cordl_internal_get__config() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentContainer() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentContainer() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentPanel() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentPanel() ;

constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode const& __cordl_internal_get__dragMode() const;

constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode& __cordl_internal_get__dragMode() ;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader> const& __cordl_internal_get__header() const;

constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>& __cordl_internal_get__header() ;

constexpr ::UnityW<::UnityEngine::UI::Button> const& __cordl_internal_get__hideButton() const;

constexpr ::UnityW<::UnityEngine::UI::Button>& __cordl_internal_get__hideButton() ;

constexpr void __cordl_internal_set__anchor(::Fusion::Statistics::CanvasAnchor  value) ;

constexpr void __cordl_internal_set__bottomPanel(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value) ;

constexpr void __cordl_internal_set__canvasPanel(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__canvasScaler(::UnityW<::UnityEngine::UI::CanvasScaler>  value) ;

constexpr void __cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button>  value) ;

constexpr void __cordl_internal_set__config(::UnityW<::Fusion::Statistics::FusionStatsConfig>  value) ;

constexpr void __cordl_internal_set__contentContainer(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__contentPanel(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__dragMode(::GlobalNamespace::FusionStatsCanvas_DragMode  value) ;

constexpr void __cordl_internal_set__header(::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  value) ;

constexpr void __cordl_internal_set__hideButton(::UnityW<::UnityEngine::UI::Button>  value) ;

/// @brief Method .ctor, addr 0x60fb6b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__statsCanvasActiveCount() ;

/// @brief Method get__isColapsed, addr 0x60fab84, size 0x34, virtual false, abstract: false, final false
inline bool get__isColapsed() ;

/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* i___UnityEngine__EventSystems__IBeginDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* i___UnityEngine__EventSystems__IEndDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

static inline void setStaticF__statsCanvasActiveCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionStatsCanvas() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsCanvas", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionStatsCanvas(FusionStatsCanvas && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionStatsCanvas", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionStatsCanvas(FusionStatsCanvas const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23500};

/// [Header("General References")]
/// [SerializeField]
/// @brief Field _canvas, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Canvas>  ____canvas;

/// [SerializeField]
/// @brief Field _canvasScaler, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::CanvasScaler>  ____canvasScaler;

/// [SerializeField]
/// @brief Field _canvasPanel, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____canvasPanel;

/// [Space]
/// [Header("Panel References")]
/// [SerializeField]
/// @brief Field _contentPanel, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____contentPanel;

/// [SerializeField]
/// @brief Field _contentContainer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____contentContainer;

/// [SerializeField]
/// @brief Field _bottomPanel, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____bottomPanel;

/// [SerializeField]
/// @brief Field _header, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  ____header;

/// [Space]
/// [Header("Misc")]
/// [SerializeField]
/// @brief Field _hideButton, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____hideButton;

/// [SerializeField]
/// @brief Field _closeButton, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Button>  ____closeButton;

/// [Space]
/// [Header("World Anchor Panel Settings")]
/// [SerializeField]
/// @brief Field _config, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Fusion::Statistics::FusionStatsConfig>  ____config;

/// @brief Field _anchor, offset: 0x70, size: 0x4, def value: None
 ::Fusion::Statistics::CanvasAnchor  ____anchor;

/// @brief Field _dragMode, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::FusionStatsCanvas_DragMode  ____dragMode;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____canvas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____canvasScaler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____canvasPanel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____contentPanel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____contentContainer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____bottomPanel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____header) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____hideButton) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____closeButton) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____config) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____anchor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Fusion::Statistics::FusionStatsCanvas, ____dragMode) == 0x74, "Offset mismatch!");

static_assert(sizeof(::Fusion::Statistics::FusionStatsCanvas) == 0x78, "Size mismatch!");

} // namespace end def Fusion::Statistics
