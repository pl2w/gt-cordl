#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ScrollView.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollViewMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_NestedInteractionKind_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollView_TouchScrollBehavior_def.hpp"
#include "UnityEngine/UIElements/zzzz__ScrollerVisibility_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ScrollView)
namespace GlobalNamespace {
struct ScrollView_NestedInteractionKind;
}
namespace GlobalNamespace {
struct ScrollView_TouchScrollBehavior;
}
namespace GlobalNamespace {
struct ScrollView_TouchScrollingResult;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
struct CreationContext;
}
namespace UnityEngine::UIElements {
class CustomStyleResolvedEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IUxmlAttributes;
}
namespace UnityEngine::UIElements {
class IVisualElementScheduledItem;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
struct ScrollViewMode;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class ScrollView___c;
}
namespace UnityEngine::UIElements {
struct ScrollerVisibility;
}
namespace UnityEngine::UIElements {
class Scroller;
}
namespace UnityEngine::UIElements {
class UxmlBoolAttributeDescription;
}
namespace UnityEngine::UIElements {
template<typename T>
class UxmlEnumAttributeDescription_1;
}
namespace UnityEngine::UIElements {
class UxmlFloatAttributeDescription;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class WheelEvent;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ScrollView;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlFactory;
}
namespace UnityEngine::UIElements {
class ScrollView_UxmlTraits;
}
namespace UnityEngine::UIElements {
class ScrollView___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::ScrollView*);
MARK_REF_T(::UnityEngine::UIElements::ScrollView_UxmlFactory*);
MARK_REF_T(::UnityEngine::UIElements::ScrollView_UxmlTraits*);
MARK_REF_T(::UnityEngine::UIElements::ScrollView___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ScrollView*, "UnityEngine.UIElements", "ScrollView");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ScrollView_UxmlFactory*, "UnityEngine.UIElements", "ScrollView/UxmlFactory");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ScrollView_UxmlTraits*, "UnityEngine.UIElements", "ScrollView/UxmlTraits");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::ScrollView___c*, "UnityEngine.UIElements", "ScrollView/<>c");
// Dependencies UnityEngine.UIElements.BindingId, UnityEngine.UIElements.ScrollView::NestedInteractionKind, UnityEngine.UIElements.ScrollView::TouchScrollBehavior, UnityEngine.UIElements.ScrollViewMode, UnityEngine.UIElements.ScrollerVisibility, UnityEngine.UIElements.VisualElement, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScrollView
class CORDL_TYPE ScrollView : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
using NestedInteractionKind = ::GlobalNamespace::ScrollView_NestedInteractionKind;

using TouchScrollBehavior = ::GlobalNamespace::ScrollView_TouchScrollBehavior;

using TouchScrollingResult = ::GlobalNamespace::ScrollView_TouchScrollingResult;

using UxmlFactory = ::UnityEngine::UIElements::ScrollView_UxmlFactory;

using UxmlTraits = ::UnityEngine::UIElements::ScrollView_UxmlTraits;

using __c = ::UnityEngine::UIElements::ScrollView___c;

/// @brief Field <contentViewport>k__BackingField, offset 0x320, size 0x8 
 __declspec(property(get=__cordl_internal_get__contentViewport_k__BackingField, put=__cordl_internal_set__contentViewport_k__BackingField)) ::UnityEngine::UIElements::VisualElement*  _contentViewport_k__BackingField;

/// @brief Field <horizontalScroller>k__BackingField, offset 0x328, size 0x8 
 __declspec(property(get=__cordl_internal_get__horizontalScroller_k__BackingField, put=__cordl_internal_set__horizontalScroller_k__BackingField)) ::UnityEngine::UIElements::Scroller*  _horizontalScroller_k__BackingField;

/// @brief Field <verticalScroller>k__BackingField, offset 0x330, size 0x8 
 __declspec(property(get=__cordl_internal_get__verticalScroller_k__BackingField, put=__cordl_internal_set__verticalScroller_k__BackingField)) ::UnityEngine::UIElements::Scroller*  _verticalScroller_k__BackingField;

/// @brief Field contentAndVerticalScrollUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_contentAndVerticalScrollUssClassName, put=setStaticF_contentAndVerticalScrollUssClassName)) ::StringW  contentAndVerticalScrollUssClassName;

 __declspec(property(get=get_contentContainer)) ::UnityEngine::UIElements::VisualElement*  contentContainer;

/// @brief Field contentUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_contentUssClassName, put=setStaticF_contentUssClassName)) ::StringW  contentUssClassName;

 __declspec(property(get=get_contentViewport)) ::UnityEngine::UIElements::VisualElement*  contentViewport;

/// @brief Field elapsedTimeSinceLastHorizontalTouchScroll, offset 0x354, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll, put=__cordl_internal_set_elapsedTimeSinceLastHorizontalTouchScroll)) float_t  elapsedTimeSinceLastHorizontalTouchScroll;

/// @brief Field elapsedTimeSinceLastVerticalTouchScroll, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll, put=__cordl_internal_set_elapsedTimeSinceLastVerticalTouchScroll)) float_t  elapsedTimeSinceLastVerticalTouchScroll;

/// @brief [CreateProperty]
 __declspec(property(get=get_elasticAnimationIntervalMs, put=set_elasticAnimationIntervalMs)) int64_t  elasticAnimationIntervalMs;

/// @brief Field elasticAnimationIntervalMsProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_elasticAnimationIntervalMsProperty, put=setStaticF_elasticAnimationIntervalMsProperty)) ::UnityEngine::UIElements::BindingId  elasticAnimationIntervalMsProperty;

/// @brief [CreateProperty]
 __declspec(property(get=get_elasticity, put=set_elasticity)) float_t  elasticity;

/// @brief Field elasticityProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_elasticityProperty, put=setStaticF_elasticityProperty)) ::UnityEngine::UIElements::BindingId  elasticityProperty;

/// @brief Field hScrollerUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hScrollerUssClassName, put=setStaticF_hScrollerUssClassName)) ::StringW  hScrollerUssClassName;

 __declspec(property(get=get_hasInertia)) bool  hasInertia;

/// @brief [CreateProperty]
 __declspec(property(get=get_horizontalPageSize, put=set_horizontalPageSize)) float_t  horizontalPageSize;

/// @brief Field horizontalPageSizeProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_horizontalPageSizeProperty, put=setStaticF_horizontalPageSizeProperty)) ::UnityEngine::UIElements::BindingId  horizontalPageSizeProperty;

 __declspec(property(get=get_horizontalScroller)) ::UnityEngine::UIElements::Scroller*  horizontalScroller;

/// @brief [CreateProperty]
 __declspec(property(get=get_horizontalScrollerVisibility, put=set_horizontalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility  horizontalScrollerVisibility;

/// @brief Field horizontalScrollerVisibilityProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_horizontalScrollerVisibilityProperty, put=setStaticF_horizontalScrollerVisibilityProperty)) ::UnityEngine::UIElements::BindingId  horizontalScrollerVisibilityProperty;

/// @brief Field horizontalVariantContentUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_horizontalVariantContentUssClassName, put=setStaticF_horizontalVariantContentUssClassName)) ::StringW  horizontalVariantContentUssClassName;

/// @brief Field horizontalVariantUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_horizontalVariantUssClassName, put=setStaticF_horizontalVariantUssClassName)) ::StringW  horizontalVariantUssClassName;

/// @brief Field horizontalVariantViewportUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_horizontalVariantViewportUssClassName, put=setStaticF_horizontalVariantViewportUssClassName)) ::StringW  horizontalVariantViewportUssClassName;

 __declspec(property(get=get_isHorizontalScrollDisplayed)) bool  isHorizontalScrollDisplayed;

 __declspec(property(get=get_isVerticalScrollDisplayed)) bool  isVerticalScrollDisplayed;

/// @brief Field k_DefaultElasticity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_DefaultElasticity, put=setStaticF_k_DefaultElasticity)) float_t  k_DefaultElasticity;

/// @brief Field k_DefaultScrollDecelerationRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_k_DefaultScrollDecelerationRate, put=setStaticF_k_DefaultScrollDecelerationRate)) float_t  k_DefaultScrollDecelerationRate;

/// @brief Field k_ScaledPixelsPerPointMultiplier, offset 0x308, size 0x4 
 __declspec(property(get=__cordl_internal_get_k_ScaledPixelsPerPointMultiplier, put=__cordl_internal_set_k_ScaledPixelsPerPointMultiplier)) float_t  k_ScaledPixelsPerPointMultiplier;

/// @brief Field k_TouchScrollInertiaBaseTimeInterval, offset 0x30c, size 0x4 
 __declspec(property(get=__cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval, put=__cordl_internal_set_k_TouchScrollInertiaBaseTimeInterval)) float_t  k_TouchScrollInertiaBaseTimeInterval;

/// @brief Field m_AttachedRootVisualContainer, offset 0x2e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AttachedRootVisualContainer, put=__cordl_internal_set_m_AttachedRootVisualContainer)) ::UnityEngine::UIElements::VisualElement*  m_AttachedRootVisualContainer;

/// @brief Field m_CapturedTarget, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CapturedTarget, put=__cordl_internal_set_m_CapturedTarget)) ::UnityEngine::UIElements::VisualElement*  m_CapturedTarget;

/// @brief Field m_CapturedTargetPointerMoveCallback, offset 0x3a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CapturedTargetPointerMoveCallback, put=__cordl_internal_set_m_CapturedTargetPointerMoveCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*  m_CapturedTargetPointerMoveCallback;

/// @brief Field m_CapturedTargetPointerUpCallback, offset 0x3b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CapturedTargetPointerUpCallback, put=__cordl_internal_set_m_CapturedTargetPointerUpCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*  m_CapturedTargetPointerUpCallback;

/// @brief Field m_ContentAndVerticalScrollContainer, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ContentAndVerticalScrollContainer, put=__cordl_internal_set_m_ContentAndVerticalScrollContainer)) ::UnityEngine::UIElements::VisualElement*  m_ContentAndVerticalScrollContainer;

/// @brief Field m_ContentContainer, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ContentContainer, put=__cordl_internal_set_m_ContentContainer)) ::UnityEngine::UIElements::VisualElement*  m_ContentContainer;

/// @brief Field m_ElasticAnimationIntervalMs, offset 0x2d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ElasticAnimationIntervalMs, put=__cordl_internal_set_m_ElasticAnimationIntervalMs)) int64_t  m_ElasticAnimationIntervalMs;

/// @brief Field m_Elasticity, offset 0x310, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Elasticity, put=__cordl_internal_set_m_Elasticity)) float_t  m_Elasticity;

/// @brief Field m_FirstLayoutPass, offset 0x2c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FirstLayoutPass, put=__cordl_internal_set_m_FirstLayoutPass)) int32_t  m_FirstLayoutPass;

/// @brief Field m_HighBounds, offset 0x390, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HighBounds, put=__cordl_internal_set_m_HighBounds)) ::UnityEngine::Vector2  m_HighBounds;

/// @brief Field m_HorizontalPageSize, offset 0x2f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HorizontalPageSize, put=__cordl_internal_set_m_HorizontalPageSize)) float_t  m_HorizontalPageSize;

/// @brief Field m_HorizontalScrollerVisibility, offset 0x2cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HorizontalScrollerVisibility, put=__cordl_internal_set_m_HorizontalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility  m_HorizontalScrollerVisibility;

/// @brief Field m_LastVelocityLerpTime, offset 0x398, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastVelocityLerpTime, put=__cordl_internal_set_m_LastVelocityLerpTime)) float_t  m_LastVelocityLerpTime;

/// @brief Field m_LowBounds, offset 0x388, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LowBounds, put=__cordl_internal_set_m_LowBounds)) ::UnityEngine::Vector2  m_LowBounds;

/// @brief Field m_Mode, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Mode, put=__cordl_internal_set_m_Mode)) ::UnityEngine::UIElements::ScrollViewMode  m_Mode;

/// @brief Field m_MouseWheelScrollSize, offset 0x300, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseWheelScrollSize, put=__cordl_internal_set_m_MouseWheelScrollSize)) float_t  m_MouseWheelScrollSize;

/// @brief Field m_MouseWheelScrollSizeIsInline, offset 0x2ed, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MouseWheelScrollSizeIsInline, put=__cordl_internal_set_m_MouseWheelScrollSizeIsInline)) bool  m_MouseWheelScrollSizeIsInline;

/// @brief Field m_NestedInteractionKind, offset 0x318, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_NestedInteractionKind, put=__cordl_internal_set_m_NestedInteractionKind)) ::GlobalNamespace::ScrollView_NestedInteractionKind  m_NestedInteractionKind;

/// @brief Field m_PointerStartPosition, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointerStartPosition, put=__cordl_internal_set_m_PointerStartPosition)) ::UnityEngine::Vector2  m_PointerStartPosition;

/// @brief Field m_PostPointerUpAnimation, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PostPointerUpAnimation, put=__cordl_internal_set_m_PostPointerUpAnimation)) ::UnityEngine::UIElements::IVisualElementScheduledItem*  m_PostPointerUpAnimation;

/// @brief Field m_ScheduledLayoutPassResetItem, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScheduledLayoutPassResetItem, put=__cordl_internal_set_m_ScheduledLayoutPassResetItem)) ::UnityEngine::UIElements::IVisualElementScheduledItem*  m_ScheduledLayoutPassResetItem;

/// @brief Field m_ScrollDecelerationRate, offset 0x304, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ScrollDecelerationRate, put=__cordl_internal_set_m_ScrollDecelerationRate)) float_t  m_ScrollDecelerationRate;

/// @brief Field m_ScrollOffset, offset 0x2f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollOffset, put=__cordl_internal_set_m_ScrollOffset)) ::UnityEngine::Vector2  m_ScrollOffset;

/// @brief Field m_SingleLineHeight, offset 0x2e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SingleLineHeight, put=__cordl_internal_set_m_SingleLineHeight)) float_t  m_SingleLineHeight;

/// @brief Field m_SingleLineHeightDirtyFlag, offset 0x2ec, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SingleLineHeightDirtyFlag, put=__cordl_internal_set_m_SingleLineHeightDirtyFlag)) bool  m_SingleLineHeightDirtyFlag;

/// @brief Field m_SpringBackVelocity, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SpringBackVelocity, put=__cordl_internal_set_m_SpringBackVelocity)) ::UnityEngine::Vector2  m_SpringBackVelocity;

/// @brief Field m_StartPosition, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartPosition, put=__cordl_internal_set_m_StartPosition)) ::UnityEngine::Vector2  m_StartPosition;

/// @brief Field m_StartedMoving, offset 0x39c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StartedMoving, put=__cordl_internal_set_m_StartedMoving)) bool  m_StartedMoving;

/// @brief Field m_TouchPointerMoveAllowed, offset 0x39d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TouchPointerMoveAllowed, put=__cordl_internal_set_m_TouchPointerMoveAllowed)) bool  m_TouchPointerMoveAllowed;

/// @brief Field m_TouchScrollBehavior, offset 0x314, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TouchScrollBehavior, put=__cordl_internal_set_m_TouchScrollBehavior)) ::GlobalNamespace::ScrollView_TouchScrollBehavior  m_TouchScrollBehavior;

/// @brief Field m_TouchStoppedVelocity, offset 0x39e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TouchStoppedVelocity, put=__cordl_internal_set_m_TouchStoppedVelocity)) bool  m_TouchStoppedVelocity;

/// @brief Field m_Velocity, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Velocity, put=__cordl_internal_set_m_Velocity)) ::UnityEngine::Vector2  m_Velocity;

/// @brief Field m_VerticalPageSize, offset 0x2fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VerticalPageSize, put=__cordl_internal_set_m_VerticalPageSize)) float_t  m_VerticalPageSize;

/// @brief Field m_VerticalScrollerVisibility, offset 0x2d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_VerticalScrollerVisibility, put=__cordl_internal_set_m_VerticalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility  m_VerticalScrollerVisibility;

/// @brief [CreateProperty]
 __declspec(property(get=get_mode, put=set_mode)) ::UnityEngine::UIElements::ScrollViewMode  mode;

/// @brief Field modeProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_modeProperty, put=setStaticF_modeProperty)) ::UnityEngine::UIElements::BindingId  modeProperty;

/// @brief [CreateProperty]
 __declspec(property(get=get_mouseWheelScrollSize, put=set_mouseWheelScrollSize)) float_t  mouseWheelScrollSize;

/// @brief Field mouseWheelScrollSizeProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_mouseWheelScrollSizeProperty, put=setStaticF_mouseWheelScrollSizeProperty)) ::UnityEngine::UIElements::BindingId  mouseWheelScrollSizeProperty;

 __declspec(property(get=get_needsHorizontal)) bool  needsHorizontal;

 __declspec(property(get=get_needsVertical)) bool  needsVertical;

/// @brief [CreateProperty]
 __declspec(property(get=get_nestedInteractionKind, put=set_nestedInteractionKind)) ::GlobalNamespace::ScrollView_NestedInteractionKind  nestedInteractionKind;

/// @brief Field nestedInteractionKindProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_nestedInteractionKindProperty, put=setStaticF_nestedInteractionKindProperty)) ::UnityEngine::UIElements::BindingId  nestedInteractionKindProperty;

/// @brief Field previousHorizontalTouchScrollTimeStamp, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousHorizontalTouchScrollTimeStamp, put=__cordl_internal_set_previousHorizontalTouchScrollTimeStamp)) float_t  previousHorizontalTouchScrollTimeStamp;

/// @brief Field previousVerticalTouchScrollTimeStamp, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_previousVerticalTouchScrollTimeStamp, put=__cordl_internal_set_previousVerticalTouchScrollTimeStamp)) float_t  previousVerticalTouchScrollTimeStamp;

/// @brief [CreateProperty]
 __declspec(property(get=get_scrollDecelerationRate, put=set_scrollDecelerationRate)) float_t  scrollDecelerationRate;

/// @brief Field scrollDecelerationRateProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_scrollDecelerationRateProperty, put=setStaticF_scrollDecelerationRateProperty)) ::UnityEngine::UIElements::BindingId  scrollDecelerationRateProperty;

/// @brief [CreateProperty]
 __declspec(property(get=get_scrollOffset, put=set_scrollOffset)) ::UnityEngine::Vector2  scrollOffset;

/// @brief Field scrollOffsetProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_scrollOffsetProperty, put=setStaticF_scrollOffsetProperty)) ::UnityEngine::UIElements::BindingId  scrollOffsetProperty;

/// @brief Field scrollVariantUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_scrollVariantUssClassName, put=setStaticF_scrollVariantUssClassName)) ::StringW  scrollVariantUssClassName;

 __declspec(property(get=get_scrollableHeight)) float_t  scrollableHeight;

 __declspec(property(get=get_scrollableWidth)) float_t  scrollableWidth;

/// @brief [Obsolete("showHorizontal is obsolete. Use horizontalScrollerVisibility instead")]
 __declspec(property(put=set_showHorizontal)) bool  showHorizontal;

/// @brief [Obsolete("showVertical is obsolete. Use verticalScrollerVisibility instead")]
 __declspec(property(put=set_showVertical)) bool  showVertical;

/// @brief [CreateProperty]
 __declspec(property(get=get_touchScrollBehavior, put=set_touchScrollBehavior)) ::GlobalNamespace::ScrollView_TouchScrollBehavior  touchScrollBehavior;

/// @brief Field touchScrollBehaviorProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_touchScrollBehaviorProperty, put=setStaticF_touchScrollBehaviorProperty)) ::UnityEngine::UIElements::BindingId  touchScrollBehaviorProperty;

/// @brief Field ussClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ussClassName, put=setStaticF_ussClassName)) ::StringW  ussClassName;

/// @brief Field vScrollerUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_vScrollerUssClassName, put=setStaticF_vScrollerUssClassName)) ::StringW  vScrollerUssClassName;

/// @brief Field verticalHorizontalVariantContentUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_verticalHorizontalVariantContentUssClassName, put=setStaticF_verticalHorizontalVariantContentUssClassName)) ::StringW  verticalHorizontalVariantContentUssClassName;

/// @brief Field verticalHorizontalVariantUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_verticalHorizontalVariantUssClassName, put=setStaticF_verticalHorizontalVariantUssClassName)) ::StringW  verticalHorizontalVariantUssClassName;

/// @brief Field verticalHorizontalVariantViewportUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_verticalHorizontalVariantViewportUssClassName, put=setStaticF_verticalHorizontalVariantViewportUssClassName)) ::StringW  verticalHorizontalVariantViewportUssClassName;

/// @brief [CreateProperty]
 __declspec(property(get=get_verticalPageSize, put=set_verticalPageSize)) float_t  verticalPageSize;

/// @brief Field verticalPageSizeProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_verticalPageSizeProperty, put=setStaticF_verticalPageSizeProperty)) ::UnityEngine::UIElements::BindingId  verticalPageSizeProperty;

 __declspec(property(get=get_verticalScroller)) ::UnityEngine::UIElements::Scroller*  verticalScroller;

/// @brief [CreateProperty]
 __declspec(property(get=get_verticalScrollerVisibility, put=set_verticalScrollerVisibility)) ::UnityEngine::UIElements::ScrollerVisibility  verticalScrollerVisibility;

/// @brief Field verticalScrollerVisibilityProperty, offset 0xffffffff, size 0x98 
 __declspec(property(get=getStaticF_verticalScrollerVisibilityProperty, put=setStaticF_verticalScrollerVisibilityProperty)) ::UnityEngine::UIElements::BindingId  verticalScrollerVisibilityProperty;

/// @brief Field verticalVariantContentUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_verticalVariantContentUssClassName, put=setStaticF_verticalVariantContentUssClassName)) ::StringW  verticalVariantContentUssClassName;

/// @brief Field verticalVariantUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_verticalVariantUssClassName, put=setStaticF_verticalVariantUssClassName)) ::StringW  verticalVariantUssClassName;

/// @brief Field verticalVariantViewportUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_verticalVariantViewportUssClassName, put=setStaticF_verticalVariantViewportUssClassName)) ::StringW  verticalVariantViewportUssClassName;

/// @brief Field viewportUssClassName, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_viewportUssClassName, put=setStaticF_viewportUssClassName)) ::StringW  viewportUssClassName;

/// @brief Method AdjustScrollers, addr 0xb869840, size 0x104, virtual false, abstract: false, final false
inline void AdjustScrollers() ;

/// @brief Method ApplyScrollInertia, addr 0xb86863c, size 0x1ec, virtual false, abstract: false, final false
inline void ApplyScrollInertia() ;

/// @brief Method ApplyTouchScrolling, addr 0xb869428, size 0x208, virtual false, abstract: false, final false
inline bool ApplyTouchScrolling(::UnityEngine::Vector2  newScrollOffset) ;

/// @brief Method ComputeElasticOffset, addr 0xb868318, size 0xf4, virtual false, abstract: false, final false
static inline float_t ComputeElasticOffset(float_t  deltaPointer, float_t  initialScrollOffset, float_t  lowLimit, float_t  hardLowLimit, float_t  highLimit, float_t  hardHighLimit) ;

/// @brief Method ComputeInitialSpringBackVelocity, addr 0xb86840c, size 0xbc, virtual false, abstract: false, final false
inline void ComputeInitialSpringBackVelocity() ;

/// @brief Method ComputeTouchScrolling, addr 0xb868ee0, size 0x3f0, virtual false, abstract: false, final false
inline ::GlobalNamespace::ScrollView_TouchScrollingResult ComputeTouchScrolling(::UnityEngine::Vector2  position) ;

/// @brief Method ExecuteElasticSpringAnimation, addr 0xb869630, size 0x210, virtual false, abstract: false, final false
inline void ExecuteElasticSpringAnimation() ;

/// @brief Method GetDeltaDistance, addr 0xb865900, size 0x54, virtual false, abstract: false, final false
inline float_t GetDeltaDistance(float_t  viewMin, float_t  viewMax, float_t  childBoundaryMin, float_t  childBoundaryMax) ;

/// @brief Method GetXDeltaOffset, addr 0xb865748, size 0x1b8, virtual false, abstract: false, final false
inline float_t GetXDeltaOffset(::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method GetYDeltaOffset, addr 0xb865594, size 0x1b4, virtual false, abstract: false, final false
inline float_t GetYDeltaOffset(::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method InitTouchScrolling, addr 0xb868bd0, size 0x124, virtual false, abstract: false, final false
inline void InitTouchScrolling(::UnityEngine::Vector2  position) ;

/// @brief Method MarkSingleLineHeightDirty, addr 0xb867534, size 0xc, virtual false, abstract: false, final false
inline void MarkSingleLineHeightDirty() ;

static inline ::UnityEngine::UIElements::ScrollView* New_ctor() ;

static inline ::UnityEngine::UIElements::ScrollView* New_ctor(::UnityEngine::UIElements::ScrollViewMode  scrollViewMode) ;

/// @brief Method OnAttachToPanel, addr 0xb866f18, size 0x61c, virtual false, abstract: false, final false
inline void OnAttachToPanel(::UnityEngine::UIElements::AttachToPanelEvent*  evt) ;

/// @brief Method OnDetachFromPanel, addr 0xb867540, size 0x5fc, virtual false, abstract: false, final false
inline void OnDetachFromPanel(::UnityEngine::UIElements::DetachFromPanelEvent*  evt) ;

/// @brief Method OnGeometryChanged, addr 0xb867d98, size 0x154, virtual false, abstract: false, final false
inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnHorizontalScrollDragElementChanged, addr 0xb865378, size 0x38, virtual false, abstract: false, final false
inline void OnHorizontalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnHorizontalScrollerSetValueWithoutNotify, addr 0xb86830c, size 0xc, virtual false, abstract: false, final false
inline void OnHorizontalScrollerSetValueWithoutNotify(float_t  value) ;

/// @brief Method OnHorizontalSliderViewDataRestored, addr 0xb8682a0, size 0x60, virtual false, abstract: false, final false
inline void OnHorizontalSliderViewDataRestored() ;

/// @brief Method OnPointerCancel, addr 0xb8692d0, size 0x60, virtual false, abstract: false, final false
inline void OnPointerCancel(::UnityEngine::UIElements::PointerCancelEvent*  evt) ;

/// @brief Method OnPointerCapture, addr 0xb867b48, size 0xb0, virtual false, abstract: false, final false
inline void OnPointerCapture(::UnityEngine::UIElements::PointerCaptureEvent*  evt) ;

/// @brief Method OnPointerCaptureOut, addr 0xb867bf8, size 0xd4, virtual false, abstract: false, final false
inline void OnPointerCaptureOut(::UnityEngine::UIElements::PointerCaptureOutEvent*  evt) ;

/// @brief Method OnPointerDown, addr 0xb86899c, size 0x234, virtual false, abstract: false, final false
inline void OnPointerDown(::UnityEngine::UIElements::PointerDownEvent*  evt) ;

/// @brief Method OnPointerMove, addr 0xb868cf4, size 0x1ec, virtual false, abstract: false, final false
inline void OnPointerMove(::UnityEngine::UIElements::PointerMoveEvent*  evt) ;

/// @brief Method OnPointerUp, addr 0xb869330, size 0xa8, virtual false, abstract: false, final false
inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt) ;

/// @brief Method OnRootCustomStyleResolved, addr 0xb86a42c, size 0xc, virtual false, abstract: false, final false
inline void OnRootCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent*  evt) ;

/// @brief Method OnRootPointerUp, addr 0xb86a438, size 0x8, virtual false, abstract: false, final false
inline void OnRootPointerUp(::UnityEngine::UIElements::PointerUpEvent*  evt) ;

/// @brief Method OnScrollWheel, addr 0xb869c80, size 0x3a8, virtual false, abstract: false, final false
inline void OnScrollWheel(::UnityEngine::UIElements::WheelEvent*  evt) ;

/// @brief Method OnScrollersGeometryChanged, addr 0xb869b10, size 0x170, virtual false, abstract: false, final false
inline void OnScrollersGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnVerticalScrollDragElementChanged, addr 0xb8653b0, size 0x38, virtual false, abstract: false, final false
inline void OnVerticalScrollDragElementChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnVerticalScrollerSetValueWithoutNotify, addr 0xb868300, size 0xc, virtual false, abstract: false, final false
inline void OnVerticalScrollerSetValueWithoutNotify(float_t  value) ;

/// @brief Method OnVerticalSliderViewDataRestored, addr 0xb8680ec, size 0x60, virtual false, abstract: false, final false
inline void OnVerticalSliderViewDataRestored() ;

/// @brief Method OnViewDataReady, addr 0xb86a4f8, size 0xb8, virtual true, abstract: false, final false
inline void OnViewDataReady() ;

/// @brief Method PostPointerUpAnimation, addr 0xb868828, size 0x174, virtual false, abstract: false, final false
inline void PostPointerUpAnimation() ;

/// @brief Method ReadSingleLineHeight, addr 0xb86a028, size 0x32c, virtual false, abstract: false, final false
inline void ReadSingleLineHeight() ;

/// @brief Method ReleaseScrolling, addr 0xb867ccc, size 0xcc, virtual false, abstract: false, final false
inline bool ReleaseScrolling(int32_t  pointerId, ::UnityEngine::UIElements::IEventHandler*  target) ;

/// @brief Method ResetLayoutPass, addr 0xb867b3c, size 0xc, virtual false, abstract: false, final false
inline void ResetLayoutPass() ;

/// @brief Method ScheduleResetLayoutPass, addr 0xb867eec, size 0x200, virtual false, abstract: false, final false
inline void ScheduleResetLayoutPass() ;

/// @brief Method ScrollTo, addr 0xb8653e8, size 0x1ac, virtual false, abstract: false, final false
inline void ScrollTo(::UnityEngine::UIElements::VisualElement*  child) ;

/// @brief Method SetScrollOffsetWithoutNotify, addr 0xb86a440, size 0xb8, virtual false, abstract: false, final false
inline void SetScrollOffsetWithoutNotify(::UnityEngine::Vector2  value) ;

/// @brief Method SetScrollViewMode, addr 0xb866784, size 0x350, virtual false, abstract: false, final false
inline void SetScrollViewMode(::UnityEngine::UIElements::ScrollViewMode  mode) ;

/// @brief Method SpringBack, addr 0xb8684c8, size 0x174, virtual false, abstract: false, final false
inline void SpringBack() ;

/// @brief Method UpdateContentViewTransform, addr 0xb86461c, size 0x2c0, virtual false, abstract: false, final false
inline void UpdateContentViewTransform() ;

/// @brief Method UpdateElasticBehaviour, addr 0xb86a354, size 0xd8, virtual false, abstract: false, final false
inline void UpdateElasticBehaviour() ;

/// @brief Method UpdateHorizontalSliderPageSize, addr 0xb8649e4, size 0x20c, virtual false, abstract: false, final false
inline void UpdateHorizontalSliderPageSize() ;

/// @brief Method UpdateScrollers, addr 0xb863818, size 0x54c, virtual false, abstract: false, final false
inline void UpdateScrollers(bool  displayHorizontal, bool  displayVertical) ;

/// @brief Method UpdateVerticalSliderPageSize, addr 0xb864cf8, size 0x20c, virtual false, abstract: false, final false
inline void UpdateVerticalSliderPageSize() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__contentViewport_k__BackingField() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__contentViewport_k__BackingField() ;

constexpr ::UnityEngine::UIElements::Scroller* const& __cordl_internal_get__horizontalScroller_k__BackingField() const;

constexpr ::UnityEngine::UIElements::Scroller*& __cordl_internal_get__horizontalScroller_k__BackingField() ;

constexpr ::UnityEngine::UIElements::Scroller* const& __cordl_internal_get__verticalScroller_k__BackingField() const;

constexpr ::UnityEngine::UIElements::Scroller*& __cordl_internal_get__verticalScroller_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll() const;

constexpr float_t& __cordl_internal_get_elapsedTimeSinceLastHorizontalTouchScroll() ;

constexpr float_t const& __cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll() const;

constexpr float_t& __cordl_internal_get_elapsedTimeSinceLastVerticalTouchScroll() ;

constexpr float_t const& __cordl_internal_get_k_ScaledPixelsPerPointMultiplier() const;

constexpr float_t& __cordl_internal_get_k_ScaledPixelsPerPointMultiplier() ;

constexpr float_t const& __cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval() const;

constexpr float_t& __cordl_internal_get_k_TouchScrollInertiaBaseTimeInterval() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_AttachedRootVisualContainer() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_AttachedRootVisualContainer() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CapturedTarget() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CapturedTarget() ;

constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>* const& __cordl_internal_get_m_CapturedTargetPointerMoveCallback() const;

constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*& __cordl_internal_get_m_CapturedTargetPointerMoveCallback() ;

constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& __cordl_internal_get_m_CapturedTargetPointerUpCallback() const;

constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& __cordl_internal_get_m_CapturedTargetPointerUpCallback() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentAndVerticalScrollContainer() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentAndVerticalScrollContainer() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_ContentContainer() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_ContentContainer() ;

constexpr int64_t const& __cordl_internal_get_m_ElasticAnimationIntervalMs() const;

constexpr int64_t& __cordl_internal_get_m_ElasticAnimationIntervalMs() ;

constexpr float_t const& __cordl_internal_get_m_Elasticity() const;

constexpr float_t& __cordl_internal_get_m_Elasticity() ;

constexpr int32_t const& __cordl_internal_get_m_FirstLayoutPass() const;

constexpr int32_t& __cordl_internal_get_m_FirstLayoutPass() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_HighBounds() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_HighBounds() ;

constexpr float_t const& __cordl_internal_get_m_HorizontalPageSize() const;

constexpr float_t& __cordl_internal_get_m_HorizontalPageSize() ;

constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __cordl_internal_get_m_HorizontalScrollerVisibility() const;

constexpr ::UnityEngine::UIElements::ScrollerVisibility& __cordl_internal_get_m_HorizontalScrollerVisibility() ;

constexpr float_t const& __cordl_internal_get_m_LastVelocityLerpTime() const;

constexpr float_t& __cordl_internal_get_m_LastVelocityLerpTime() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_LowBounds() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_LowBounds() ;

constexpr ::UnityEngine::UIElements::ScrollViewMode const& __cordl_internal_get_m_Mode() const;

constexpr ::UnityEngine::UIElements::ScrollViewMode& __cordl_internal_get_m_Mode() ;

constexpr float_t const& __cordl_internal_get_m_MouseWheelScrollSize() const;

constexpr float_t& __cordl_internal_get_m_MouseWheelScrollSize() ;

constexpr bool const& __cordl_internal_get_m_MouseWheelScrollSizeIsInline() const;

constexpr bool& __cordl_internal_get_m_MouseWheelScrollSizeIsInline() ;

constexpr ::GlobalNamespace::ScrollView_NestedInteractionKind const& __cordl_internal_get_m_NestedInteractionKind() const;

constexpr ::GlobalNamespace::ScrollView_NestedInteractionKind& __cordl_internal_get_m_NestedInteractionKind() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_PointerStartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_PointerStartPosition() ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_PostPointerUpAnimation() const;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_PostPointerUpAnimation() ;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem* const& __cordl_internal_get_m_ScheduledLayoutPassResetItem() const;

constexpr ::UnityEngine::UIElements::IVisualElementScheduledItem*& __cordl_internal_get_m_ScheduledLayoutPassResetItem() ;

constexpr float_t const& __cordl_internal_get_m_ScrollDecelerationRate() const;

constexpr float_t& __cordl_internal_get_m_ScrollDecelerationRate() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_ScrollOffset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_ScrollOffset() ;

constexpr float_t const& __cordl_internal_get_m_SingleLineHeight() const;

constexpr float_t& __cordl_internal_get_m_SingleLineHeight() ;

constexpr bool const& __cordl_internal_get_m_SingleLineHeightDirtyFlag() const;

constexpr bool& __cordl_internal_get_m_SingleLineHeightDirtyFlag() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_SpringBackVelocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_SpringBackVelocity() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_StartPosition() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_StartPosition() ;

constexpr bool const& __cordl_internal_get_m_StartedMoving() const;

constexpr bool& __cordl_internal_get_m_StartedMoving() ;

constexpr bool const& __cordl_internal_get_m_TouchPointerMoveAllowed() const;

constexpr bool& __cordl_internal_get_m_TouchPointerMoveAllowed() ;

constexpr ::GlobalNamespace::ScrollView_TouchScrollBehavior const& __cordl_internal_get_m_TouchScrollBehavior() const;

constexpr ::GlobalNamespace::ScrollView_TouchScrollBehavior& __cordl_internal_get_m_TouchScrollBehavior() ;

constexpr bool const& __cordl_internal_get_m_TouchStoppedVelocity() const;

constexpr bool& __cordl_internal_get_m_TouchStoppedVelocity() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Velocity() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Velocity() ;

constexpr float_t const& __cordl_internal_get_m_VerticalPageSize() const;

constexpr float_t& __cordl_internal_get_m_VerticalPageSize() ;

constexpr ::UnityEngine::UIElements::ScrollerVisibility const& __cordl_internal_get_m_VerticalScrollerVisibility() const;

constexpr ::UnityEngine::UIElements::ScrollerVisibility& __cordl_internal_get_m_VerticalScrollerVisibility() ;

constexpr float_t const& __cordl_internal_get_previousHorizontalTouchScrollTimeStamp() const;

constexpr float_t& __cordl_internal_get_previousHorizontalTouchScrollTimeStamp() ;

constexpr float_t const& __cordl_internal_get_previousVerticalTouchScrollTimeStamp() const;

constexpr float_t& __cordl_internal_get_previousVerticalTouchScrollTimeStamp() ;

constexpr void __cordl_internal_set__contentViewport_k__BackingField(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set__horizontalScroller_k__BackingField(::UnityEngine::UIElements::Scroller*  value) ;

constexpr void __cordl_internal_set__verticalScroller_k__BackingField(::UnityEngine::UIElements::Scroller*  value) ;

constexpr void __cordl_internal_set_elapsedTimeSinceLastHorizontalTouchScroll(float_t  value) ;

constexpr void __cordl_internal_set_elapsedTimeSinceLastVerticalTouchScroll(float_t  value) ;

constexpr void __cordl_internal_set_k_ScaledPixelsPerPointMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_k_TouchScrollInertiaBaseTimeInterval(float_t  value) ;

constexpr void __cordl_internal_set_m_AttachedRootVisualContainer(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_CapturedTarget(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_CapturedTargetPointerMoveCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*  value) ;

constexpr void __cordl_internal_set_m_CapturedTargetPointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*  value) ;

constexpr void __cordl_internal_set_m_ContentAndVerticalScrollContainer(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_ContentContainer(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set_m_ElasticAnimationIntervalMs(int64_t  value) ;

constexpr void __cordl_internal_set_m_Elasticity(float_t  value) ;

constexpr void __cordl_internal_set_m_FirstLayoutPass(int32_t  value) ;

constexpr void __cordl_internal_set_m_HighBounds(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_HorizontalPageSize(float_t  value) ;

constexpr void __cordl_internal_set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility  value) ;

constexpr void __cordl_internal_set_m_LastVelocityLerpTime(float_t  value) ;

constexpr void __cordl_internal_set_m_LowBounds(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_Mode(::UnityEngine::UIElements::ScrollViewMode  value) ;

constexpr void __cordl_internal_set_m_MouseWheelScrollSize(float_t  value) ;

constexpr void __cordl_internal_set_m_MouseWheelScrollSizeIsInline(bool  value) ;

constexpr void __cordl_internal_set_m_NestedInteractionKind(::GlobalNamespace::ScrollView_NestedInteractionKind  value) ;

constexpr void __cordl_internal_set_m_PointerStartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_PostPointerUpAnimation(::UnityEngine::UIElements::IVisualElementScheduledItem*  value) ;

constexpr void __cordl_internal_set_m_ScheduledLayoutPassResetItem(::UnityEngine::UIElements::IVisualElementScheduledItem*  value) ;

constexpr void __cordl_internal_set_m_ScrollDecelerationRate(float_t  value) ;

constexpr void __cordl_internal_set_m_ScrollOffset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_SingleLineHeight(float_t  value) ;

constexpr void __cordl_internal_set_m_SingleLineHeightDirtyFlag(bool  value) ;

constexpr void __cordl_internal_set_m_SpringBackVelocity(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_StartPosition(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_StartedMoving(bool  value) ;

constexpr void __cordl_internal_set_m_TouchPointerMoveAllowed(bool  value) ;

constexpr void __cordl_internal_set_m_TouchScrollBehavior(::GlobalNamespace::ScrollView_TouchScrollBehavior  value) ;

constexpr void __cordl_internal_set_m_TouchStoppedVelocity(bool  value) ;

constexpr void __cordl_internal_set_m_Velocity(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_VerticalPageSize(float_t  value) ;

constexpr void __cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility  value) ;

constexpr void __cordl_internal_set_previousHorizontalTouchScrollTimeStamp(float_t  value) ;

constexpr void __cordl_internal_set_previousVerticalTouchScrollTimeStamp(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__140_0, addr 0xb86ad84, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__140_0(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__140_1, addr 0xb86ada0, size 0x28, virtual false, abstract: false, final false
inline void __ctor_b__140_1(float_t  value) ;

/// @brief Method .ctor, addr 0xb8659c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb8659cc, size 0xdb8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::ScrollViewMode  scrollViewMode) ;

static inline ::StringW getStaticF_contentAndVerticalScrollUssClassName() ;

static inline ::StringW getStaticF_contentUssClassName() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_elasticAnimationIntervalMsProperty() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_elasticityProperty() ;

static inline ::StringW getStaticF_hScrollerUssClassName() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_horizontalPageSizeProperty() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_horizontalScrollerVisibilityProperty() ;

static inline ::StringW getStaticF_horizontalVariantContentUssClassName() ;

static inline ::StringW getStaticF_horizontalVariantUssClassName() ;

static inline ::StringW getStaticF_horizontalVariantViewportUssClassName() ;

static inline float_t getStaticF_k_DefaultElasticity() ;

static inline float_t getStaticF_k_DefaultScrollDecelerationRate() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_modeProperty() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_mouseWheelScrollSizeProperty() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_nestedInteractionKindProperty() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_scrollDecelerationRateProperty() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_scrollOffsetProperty() ;

static inline ::StringW getStaticF_scrollVariantUssClassName() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_touchScrollBehaviorProperty() ;

static inline ::StringW getStaticF_ussClassName() ;

static inline ::StringW getStaticF_vScrollerUssClassName() ;

static inline ::StringW getStaticF_verticalHorizontalVariantContentUssClassName() ;

static inline ::StringW getStaticF_verticalHorizontalVariantUssClassName() ;

static inline ::StringW getStaticF_verticalHorizontalVariantViewportUssClassName() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_verticalPageSizeProperty() ;

static inline ::UnityEngine::UIElements::BindingId getStaticF_verticalScrollerVisibilityProperty() ;

static inline ::StringW getStaticF_verticalVariantContentUssClassName() ;

static inline ::StringW getStaticF_verticalVariantUssClassName() ;

static inline ::StringW getStaticF_verticalVariantViewportUssClassName() ;

static inline ::StringW getStaticF_viewportUssClassName() ;

/// @brief Method get_contentContainer, addr 0xb8659bc, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_contentContainer() ;

/// [CompilerGenerated]
/// @brief Method get_contentViewport, addr 0xb8659a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_contentViewport() ;

/// @brief Method get_elasticAnimationIntervalMs, addr 0xb863e90, size 0x8, virtual false, abstract: false, final false
inline int64_t get_elasticAnimationIntervalMs() ;

/// @brief Method get_elasticity, addr 0xb8650e8, size 0x8, virtual false, abstract: false, final false
inline float_t get_elasticity() ;

/// @brief Method get_hasInertia, addr 0xb864fd0, size 0x10, virtual false, abstract: false, final false
inline bool get_hasInertia() ;

/// @brief Method get_horizontalPageSize, addr 0xb8648dc, size 0x8, virtual false, abstract: false, final false
inline float_t get_horizontalPageSize() ;

/// [CompilerGenerated]
/// @brief Method get_horizontalScroller, addr 0xb8659ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Scroller* get_horizontalScroller() ;

/// @brief Method get_horizontalScrollerVisibility, addr 0xb86366c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ScrollerVisibility get_horizontalScrollerVisibility() ;

/// @brief Method get_isHorizontalScrollDisplayed, addr 0xb86421c, size 0xc0, virtual false, abstract: false, final false
inline bool get_isHorizontalScrollDisplayed() ;

/// @brief Method get_isVerticalScrollDisplayed, addr 0xb86415c, size 0xc0, virtual false, abstract: false, final false
inline bool get_isVerticalScrollDisplayed() ;

/// @brief Method get_mode, addr 0xb866e80, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ScrollViewMode get_mode() ;

/// @brief Method get_mouseWheelScrollSize, addr 0xb864f04, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseWheelScrollSize() ;

/// @brief Method get_needsHorizontal, addr 0xb863784, size 0x48, virtual false, abstract: false, final false
inline bool get_needsHorizontal() ;

/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// @brief Method get_needsVertical, addr 0xb8637cc, size 0x4c, virtual false, abstract: false, final false
inline bool get_needsVertical() ;

/// @brief Method get_nestedInteractionKind, addr 0xb8652ec, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ScrollView_NestedInteractionKind get_nestedInteractionKind() ;

/// @brief Method get_scrollDecelerationRate, addr 0xb864fe0, size 0x8, virtual false, abstract: false, final false
inline float_t get_scrollDecelerationRate() ;

/// @brief Method get_scrollOffset, addr 0xb8642dc, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_scrollOffset() ;

/// @brief Method get_scrollableHeight, addr 0xb86410c, size 0x50, virtual false, abstract: false, final false
inline float_t get_scrollableHeight() ;

/// @brief Method get_scrollableWidth, addr 0xb8640bc, size 0x50, virtual false, abstract: false, final false
inline float_t get_scrollableWidth() ;

/// @brief Method get_touchScrollBehavior, addr 0xb8651f0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::ScrollView_TouchScrollBehavior get_touchScrollBehavior() ;

/// @brief Method get_verticalPageSize, addr 0xb864bf0, size 0x8, virtual false, abstract: false, final false
inline float_t get_verticalPageSize() ;

/// [CompilerGenerated]
/// @brief Method get_verticalScroller, addr 0xb8659b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::Scroller* get_verticalScroller() ;

/// @brief Method get_verticalScrollerVisibility, addr 0xb863d64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::ScrollerVisibility get_verticalScrollerVisibility() ;

static inline void setStaticF_contentAndVerticalScrollUssClassName(::StringW  value) ;

static inline void setStaticF_contentUssClassName(::StringW  value) ;

static inline void setStaticF_elasticAnimationIntervalMsProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_elasticityProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_hScrollerUssClassName(::StringW  value) ;

static inline void setStaticF_horizontalPageSizeProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_horizontalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_horizontalVariantContentUssClassName(::StringW  value) ;

static inline void setStaticF_horizontalVariantUssClassName(::StringW  value) ;

static inline void setStaticF_horizontalVariantViewportUssClassName(::StringW  value) ;

static inline void setStaticF_k_DefaultElasticity(float_t  value) ;

static inline void setStaticF_k_DefaultScrollDecelerationRate(float_t  value) ;

static inline void setStaticF_modeProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_mouseWheelScrollSizeProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_nestedInteractionKindProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_scrollDecelerationRateProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_scrollOffsetProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_scrollVariantUssClassName(::StringW  value) ;

static inline void setStaticF_touchScrollBehaviorProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline void setStaticF_vScrollerUssClassName(::StringW  value) ;

static inline void setStaticF_verticalHorizontalVariantContentUssClassName(::StringW  value) ;

static inline void setStaticF_verticalHorizontalVariantUssClassName(::StringW  value) ;

static inline void setStaticF_verticalHorizontalVariantViewportUssClassName(::StringW  value) ;

static inline void setStaticF_verticalPageSizeProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_verticalScrollerVisibilityProperty(::UnityEngine::UIElements::BindingId  value) ;

static inline void setStaticF_verticalVariantContentUssClassName(::StringW  value) ;

static inline void setStaticF_verticalVariantUssClassName(::StringW  value) ;

static inline void setStaticF_verticalVariantViewportUssClassName(::StringW  value) ;

static inline void setStaticF_viewportUssClassName(::StringW  value) ;

/// @brief Method set_elasticAnimationIntervalMs, addr 0xb863e98, size 0x1f4, virtual false, abstract: false, final false
inline void set_elasticAnimationIntervalMs(int64_t  value) ;

/// @brief Method set_elasticity, addr 0xb8650f0, size 0x100, virtual false, abstract: false, final false
inline void set_elasticity(float_t  value) ;

/// @brief Method set_horizontalPageSize, addr 0xb8648e4, size 0x100, virtual false, abstract: false, final false
inline void set_horizontalPageSize(float_t  value) ;

/// @brief Method set_horizontalScrollerVisibility, addr 0xb863674, size 0x110, virtual false, abstract: false, final false
inline void set_horizontalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility  value) ;

/// @brief Method set_mode, addr 0xb866e88, size 0x90, virtual false, abstract: false, final false
inline void set_mode(::UnityEngine::UIElements::ScrollViewMode  value) ;

/// @brief Method set_mouseWheelScrollSize, addr 0xb864f0c, size 0xc4, virtual false, abstract: false, final false
inline void set_mouseWheelScrollSize(float_t  value) ;

/// @brief Method set_nestedInteractionKind, addr 0xb8652f4, size 0x84, virtual false, abstract: false, final false
inline void set_nestedInteractionKind(::GlobalNamespace::ScrollView_NestedInteractionKind  value) ;

/// @brief Method set_scrollDecelerationRate, addr 0xb864fe8, size 0x100, virtual false, abstract: false, final false
inline void set_scrollDecelerationRate(float_t  value) ;

/// @brief Method set_scrollOffset, addr 0xb8642e8, size 0x1d4, virtual false, abstract: false, final false
inline void set_scrollOffset(::UnityEngine::Vector2  value) ;

/// @brief Method set_showHorizontal, addr 0xb86408c, size 0x18, virtual false, abstract: false, final false
inline void set_showHorizontal(bool  value) ;

/// @brief Method set_showVertical, addr 0xb8640a4, size 0x18, virtual false, abstract: false, final false
inline void set_showVertical(bool  value) ;

/// @brief Method set_touchScrollBehavior, addr 0xb8651f8, size 0xf4, virtual false, abstract: false, final false
inline void set_touchScrollBehavior(::GlobalNamespace::ScrollView_TouchScrollBehavior  value) ;

/// @brief Method set_verticalPageSize, addr 0xb864bf8, size 0x100, virtual false, abstract: false, final false
inline void set_verticalPageSize(float_t  value) ;

/// @brief Method set_verticalScrollerVisibility, addr 0xb863d6c, size 0x124, virtual false, abstract: false, final false
inline void set_verticalScrollerVisibility(::UnityEngine::UIElements::ScrollerVisibility  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrollView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollView(ScrollView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollView(ScrollView const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7471};

/// @brief Field m_FirstLayoutPass, offset: 0x2c8, size: 0x4, def value: None
 int32_t  ___m_FirstLayoutPass;

/// @brief Field m_HorizontalScrollerVisibility, offset: 0x2cc, size: 0x4, def value: None
 ::UnityEngine::UIElements::ScrollerVisibility  ___m_HorizontalScrollerVisibility;

/// @brief Field m_VerticalScrollerVisibility, offset: 0x2d0, size: 0x4, def value: None
 ::UnityEngine::UIElements::ScrollerVisibility  ___m_VerticalScrollerVisibility;

/// @brief Field m_ElasticAnimationIntervalMs, offset: 0x2d8, size: 0x8, def value: None
 int64_t  ___m_ElasticAnimationIntervalMs;

/// @brief Field m_AttachedRootVisualContainer, offset: 0x2e0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_AttachedRootVisualContainer;

/// @brief Field m_SingleLineHeight, offset: 0x2e8, size: 0x4, def value: None
 float_t  ___m_SingleLineHeight;

/// @brief Field m_SingleLineHeightDirtyFlag, offset: 0x2ec, size: 0x1, def value: None
 bool  ___m_SingleLineHeightDirtyFlag;

/// @brief Field m_MouseWheelScrollSizeIsInline, offset: 0x2ed, size: 0x1, def value: None
 bool  ___m_MouseWheelScrollSizeIsInline;

/// [SerializeField]
/// [DontCreateProperty]
/// @brief Field m_ScrollOffset, offset: 0x2f0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_ScrollOffset;

/// @brief Field m_HorizontalPageSize, offset: 0x2f8, size: 0x4, def value: None
 float_t  ___m_HorizontalPageSize;

/// @brief Field m_VerticalPageSize, offset: 0x2fc, size: 0x4, def value: None
 float_t  ___m_VerticalPageSize;

/// @brief Field m_MouseWheelScrollSize, offset: 0x300, size: 0x4, def value: None
 float_t  ___m_MouseWheelScrollSize;

/// @brief Field m_ScrollDecelerationRate, offset: 0x304, size: 0x4, def value: None
 float_t  ___m_ScrollDecelerationRate;

/// @brief Field k_ScaledPixelsPerPointMultiplier, offset: 0x308, size: 0x4, def value: None
 float_t  ___k_ScaledPixelsPerPointMultiplier;

/// @brief Field k_TouchScrollInertiaBaseTimeInterval, offset: 0x30c, size: 0x4, def value: None
 float_t  ___k_TouchScrollInertiaBaseTimeInterval;

/// @brief Field m_Elasticity, offset: 0x310, size: 0x4, def value: None
 float_t  ___m_Elasticity;

/// @brief Field m_TouchScrollBehavior, offset: 0x314, size: 0x4, def value: None
 ::GlobalNamespace::ScrollView_TouchScrollBehavior  ___m_TouchScrollBehavior;

/// @brief Field m_NestedInteractionKind, offset: 0x318, size: 0x4, def value: None
 ::GlobalNamespace::ScrollView_NestedInteractionKind  ___m_NestedInteractionKind;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <contentViewport>k__BackingField, offset: 0x320, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ____contentViewport_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <horizontalScroller>k__BackingField, offset: 0x328, size: 0x8, def value: None
 ::UnityEngine::UIElements::Scroller*  ____horizontalScroller_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <verticalScroller>k__BackingField, offset: 0x330, size: 0x8, def value: None
 ::UnityEngine::UIElements::Scroller*  ____verticalScroller_k__BackingField;

/// @brief Field m_ContentContainer, offset: 0x338, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_ContentContainer;

/// @brief Field m_ContentAndVerticalScrollContainer, offset: 0x340, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_ContentAndVerticalScrollContainer;

/// @brief Field previousVerticalTouchScrollTimeStamp, offset: 0x348, size: 0x4, def value: None
 float_t  ___previousVerticalTouchScrollTimeStamp;

/// @brief Field previousHorizontalTouchScrollTimeStamp, offset: 0x34c, size: 0x4, def value: None
 float_t  ___previousHorizontalTouchScrollTimeStamp;

/// @brief Field elapsedTimeSinceLastVerticalTouchScroll, offset: 0x350, size: 0x4, def value: None
 float_t  ___elapsedTimeSinceLastVerticalTouchScroll;

/// @brief Field elapsedTimeSinceLastHorizontalTouchScroll, offset: 0x354, size: 0x4, def value: None
 float_t  ___elapsedTimeSinceLastHorizontalTouchScroll;

/// @brief Field m_Mode, offset: 0x358, size: 0x4, def value: None
 ::UnityEngine::UIElements::ScrollViewMode  ___m_Mode;

/// @brief Field m_ScheduledLayoutPassResetItem, offset: 0x360, size: 0x8, def value: None
 ::UnityEngine::UIElements::IVisualElementScheduledItem*  ___m_ScheduledLayoutPassResetItem;

/// @brief Field m_StartPosition, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_StartPosition;

/// @brief Field m_PointerStartPosition, offset: 0x370, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_PointerStartPosition;

/// @brief Field m_Velocity, offset: 0x378, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Velocity;

/// @brief Field m_SpringBackVelocity, offset: 0x380, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_SpringBackVelocity;

/// @brief Field m_LowBounds, offset: 0x388, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_LowBounds;

/// @brief Field m_HighBounds, offset: 0x390, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_HighBounds;

/// @brief Field m_LastVelocityLerpTime, offset: 0x398, size: 0x4, def value: None
 float_t  ___m_LastVelocityLerpTime;

/// @brief Field m_StartedMoving, offset: 0x39c, size: 0x1, def value: None
 bool  ___m_StartedMoving;

/// @brief Field m_TouchPointerMoveAllowed, offset: 0x39d, size: 0x1, def value: None
 bool  ___m_TouchPointerMoveAllowed;

/// @brief Field m_TouchStoppedVelocity, offset: 0x39e, size: 0x1, def value: None
 bool  ___m_TouchStoppedVelocity;

/// @brief Field m_CapturedTarget, offset: 0x3a0, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_CapturedTarget;

/// @brief Field m_CapturedTargetPointerMoveCallback, offset: 0x3a8, size: 0x8, def value: None
 ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerMoveEvent*>*  ___m_CapturedTargetPointerMoveCallback;

/// @brief Field m_CapturedTargetPointerUpCallback, offset: 0x3b0, size: 0x8, def value: None
 ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*  ___m_CapturedTargetPointerUpCallback;

/// @brief Field m_PostPointerUpAnimation, offset: 0x3b8, size: 0x8, def value: None
 ::UnityEngine::UIElements::IVisualElementScheduledItem*  ___m_PostPointerUpAnimation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_FirstLayoutPass) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_HorizontalScrollerVisibility) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_VerticalScrollerVisibility) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ElasticAnimationIntervalMs) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_AttachedRootVisualContainer) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_SingleLineHeight) == 0x2e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_SingleLineHeightDirtyFlag) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_MouseWheelScrollSizeIsInline) == 0x2ed, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ScrollOffset) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_HorizontalPageSize) == 0x2f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_VerticalPageSize) == 0x2fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_MouseWheelScrollSize) == 0x300, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ScrollDecelerationRate) == 0x304, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___k_ScaledPixelsPerPointMultiplier) == 0x308, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___k_TouchScrollInertiaBaseTimeInterval) == 0x30c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_Elasticity) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_TouchScrollBehavior) == 0x314, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_NestedInteractionKind) == 0x318, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ____contentViewport_k__BackingField) == 0x320, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ____horizontalScroller_k__BackingField) == 0x328, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ____verticalScroller_k__BackingField) == 0x330, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ContentContainer) == 0x338, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ContentAndVerticalScrollContainer) == 0x340, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___previousVerticalTouchScrollTimeStamp) == 0x348, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___previousHorizontalTouchScrollTimeStamp) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___elapsedTimeSinceLastVerticalTouchScroll) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___elapsedTimeSinceLastHorizontalTouchScroll) == 0x354, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_Mode) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_ScheduledLayoutPassResetItem) == 0x360, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_StartPosition) == 0x368, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_PointerStartPosition) == 0x370, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_Velocity) == 0x378, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_SpringBackVelocity) == 0x380, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_LowBounds) == 0x388, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_HighBounds) == 0x390, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_LastVelocityLerpTime) == 0x398, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_StartedMoving) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_TouchPointerMoveAllowed) == 0x39d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_TouchStoppedVelocity) == 0x39e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_CapturedTarget) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_CapturedTargetPointerMoveCallback) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_CapturedTargetPointerUpCallback) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView, ___m_PostPointerUpAnimation) == 0x3b8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ScrollView) == 0x3c0, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScrollView/<>c
class CORDL_TYPE ScrollView___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::UIElements::ScrollView___c*  __9;

/// @brief Field <>9__196_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__196_0, put=setStaticF___9__196_0)) ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*  __9__196_0;

static inline ::UnityEngine::UIElements::ScrollView___c* New_ctor() ;

/// @brief Method <ReadSingleLineHeight>b__196_0, addr 0xb86b7b4, size 0x14, virtual false, abstract: false, final false
inline bool _ReadSingleLineHeight_b__196_0(::UnityEngine::UIElements::VisualElement*  x) ;

/// @brief Method .ctor, addr 0xb86b7ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::UIElements::ScrollView___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>* getStaticF___9__196_0() ;

static inline void setStaticF___9(::UnityEngine::UIElements::ScrollView___c*  value) ;

static inline void setStaticF___9__196_0(::System::Predicate_1<::UnityEngine::UIElements::VisualElement*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrollView___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollView___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollView___c(ScrollView___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollView___c(ScrollView___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7470};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ScrollView___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.VisualElement::UxmlTraits
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScrollView/UxmlTraits
class CORDL_TYPE ScrollView_UxmlTraits : public ::UnityEngine::UIElements::VisualElement_UxmlTraits {
public:
// Declarations
/// @brief Field m_Elasticity, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Elasticity, put=__cordl_internal_set_m_Elasticity)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  m_Elasticity;

/// @brief Field m_HorizontalPageSize, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HorizontalPageSize, put=__cordl_internal_set_m_HorizontalPageSize)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  m_HorizontalPageSize;

/// @brief Field m_HorizontalScrollerVisibility, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HorizontalScrollerVisibility, put=__cordl_internal_set_m_HorizontalScrollerVisibility)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*  m_HorizontalScrollerVisibility;

/// @brief Field m_MouseWheelScrollSize, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseWheelScrollSize, put=__cordl_internal_set_m_MouseWheelScrollSize)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  m_MouseWheelScrollSize;

/// @brief Field m_NestedInteractionKind, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NestedInteractionKind, put=__cordl_internal_set_m_NestedInteractionKind)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_NestedInteractionKind>*  m_NestedInteractionKind;

/// @brief Field m_ScrollDecelerationRate, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollDecelerationRate, put=__cordl_internal_set_m_ScrollDecelerationRate)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  m_ScrollDecelerationRate;

/// @brief Field m_ScrollViewMode, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollViewMode, put=__cordl_internal_set_m_ScrollViewMode)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*  m_ScrollViewMode;

/// @brief Field m_ShowHorizontal, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShowHorizontal, put=__cordl_internal_set_m_ShowHorizontal)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowHorizontal;

/// @brief Field m_ShowVertical, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ShowVertical, put=__cordl_internal_set_m_ShowVertical)) ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  m_ShowVertical;

/// @brief Field m_TouchScrollBehavior, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TouchScrollBehavior, put=__cordl_internal_set_m_TouchScrollBehavior)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_TouchScrollBehavior>*  m_TouchScrollBehavior;

/// @brief Field m_VerticalPageSize, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VerticalPageSize, put=__cordl_internal_set_m_VerticalPageSize)) ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  m_VerticalPageSize;

/// @brief Field m_VerticalScrollerVisibility, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VerticalScrollerVisibility, put=__cordl_internal_set_m_VerticalScrollerVisibility)) ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*  m_VerticalScrollerVisibility;

/// @brief Method Init, addr 0xb86ae10, size 0x404, virtual true, abstract: false, final false
inline void Init(::UnityEngine::UIElements::VisualElement*  ve, ::UnityEngine::UIElements::IUxmlAttributes*  bag, ::UnityEngine::UIElements::CreationContext  cc) ;

static inline ::UnityEngine::UIElements::ScrollView_UxmlTraits* New_ctor() ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_Elasticity() const;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_Elasticity() ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_HorizontalPageSize() const;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_HorizontalPageSize() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const& __cordl_internal_get_m_HorizontalScrollerVisibility() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*& __cordl_internal_get_m_HorizontalScrollerVisibility() ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_MouseWheelScrollSize() const;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_MouseWheelScrollSize() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_NestedInteractionKind>* const& __cordl_internal_get_m_NestedInteractionKind() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_NestedInteractionKind>*& __cordl_internal_get_m_NestedInteractionKind() ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_ScrollDecelerationRate() const;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_ScrollDecelerationRate() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>* const& __cordl_internal_get_m_ScrollViewMode() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*& __cordl_internal_get_m_ScrollViewMode() ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowHorizontal() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowHorizontal() ;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription* const& __cordl_internal_get_m_ShowVertical() const;

constexpr ::UnityEngine::UIElements::UxmlBoolAttributeDescription*& __cordl_internal_get_m_ShowVertical() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_TouchScrollBehavior>* const& __cordl_internal_get_m_TouchScrollBehavior() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_TouchScrollBehavior>*& __cordl_internal_get_m_TouchScrollBehavior() ;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription* const& __cordl_internal_get_m_VerticalPageSize() const;

constexpr ::UnityEngine::UIElements::UxmlFloatAttributeDescription*& __cordl_internal_get_m_VerticalPageSize() ;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>* const& __cordl_internal_get_m_VerticalScrollerVisibility() const;

constexpr ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*& __cordl_internal_get_m_VerticalScrollerVisibility() ;

constexpr void __cordl_internal_set_m_Elasticity(::UnityEngine::UIElements::UxmlFloatAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_HorizontalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_HorizontalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*  value) ;

constexpr void __cordl_internal_set_m_MouseWheelScrollSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_NestedInteractionKind(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_NestedInteractionKind>*  value) ;

constexpr void __cordl_internal_set_m_ScrollDecelerationRate(::UnityEngine::UIElements::UxmlFloatAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_ScrollViewMode(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*  value) ;

constexpr void __cordl_internal_set_m_ShowHorizontal(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_ShowVertical(::UnityEngine::UIElements::UxmlBoolAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_TouchScrollBehavior(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_TouchScrollBehavior>*  value) ;

constexpr void __cordl_internal_set_m_VerticalPageSize(::UnityEngine::UIElements::UxmlFloatAttributeDescription*  value) ;

constexpr void __cordl_internal_set_m_VerticalScrollerVisibility(::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*  value) ;

/// @brief Method .ctor, addr 0xb86b214, size 0x530, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrollView_UxmlTraits() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlTraits", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollView_UxmlTraits(ScrollView_UxmlTraits && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlTraits", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollView_UxmlTraits(ScrollView_UxmlTraits const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7466};

/// @brief Field m_ScrollViewMode, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollViewMode>*  ___m_ScrollViewMode;

/// @brief Field m_NestedInteractionKind, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_NestedInteractionKind>*  ___m_NestedInteractionKind;

/// @brief Field m_ShowHorizontal, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_ShowHorizontal;

/// @brief Field m_ShowVertical, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlBoolAttributeDescription*  ___m_ShowVertical;

/// @brief Field m_HorizontalScrollerVisibility, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*  ___m_HorizontalScrollerVisibility;

/// @brief Field m_VerticalScrollerVisibility, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::UnityEngine::UIElements::ScrollerVisibility>*  ___m_VerticalScrollerVisibility;

/// @brief Field m_HorizontalPageSize, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  ___m_HorizontalPageSize;

/// @brief Field m_VerticalPageSize, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  ___m_VerticalPageSize;

/// @brief Field m_MouseWheelScrollSize, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  ___m_MouseWheelScrollSize;

/// @brief Field m_TouchScrollBehavior, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlEnumAttributeDescription_1<::GlobalNamespace::ScrollView_TouchScrollBehavior>*  ___m_TouchScrollBehavior;

/// @brief Field m_ScrollDecelerationRate, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  ___m_ScrollDecelerationRate;

/// @brief Field m_Elasticity, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::UIElements::UxmlFloatAttributeDescription*  ___m_Elasticity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ScrollViewMode) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_NestedInteractionKind) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ShowHorizontal) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ShowVertical) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_HorizontalScrollerVisibility) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_VerticalScrollerVisibility) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_HorizontalPageSize) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_VerticalPageSize) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_MouseWheelScrollSize) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_TouchScrollBehavior) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_ScrollDecelerationRate) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ScrollView_UxmlTraits, ___m_Elasticity) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::ScrollView_UxmlTraits) == 0xe8, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
// [Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
// Dependencies UnityEngine.UIElements.UxmlFactory`2<TCreatedType, TTraits>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ScrollView/UxmlFactory
class CORDL_TYPE ScrollView_UxmlFactory : public ::UnityEngine::UIElements::UxmlFactory_2<::UnityEngine::UIElements::ScrollView*,::UnityEngine::UIElements::ScrollView_UxmlTraits*> {
public:
// Declarations
static inline ::UnityEngine::UIElements::ScrollView_UxmlFactory* New_ctor() ;

/// @brief Method .ctor, addr 0xb86adc8, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScrollView_UxmlFactory() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlFactory", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ScrollView_UxmlFactory(ScrollView_UxmlFactory && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScrollView_UxmlFactory", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScrollView_UxmlFactory(ScrollView_UxmlFactory const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7465};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::ScrollView_UxmlFactory) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
