#pragma once
// IWYU pragma private; include "Fusion/Statistics/FusionStatsCanvas.hpp"
#include "Fusion/Statistics/zzzz__CanvasAnchor_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsCanvas_DragMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsCanvas_def.hpp"
#include "Fusion/Statistics/zzzz__CanvasAnchor_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatistics_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsCanvas_DragMode_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsConfig_def.hpp"
#include "Fusion/Statistics/zzzz__FusionStatsPanelHeader_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasScaler_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.get__isColapsed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::get__isColapsed)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60fab84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"get__isColapsed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.SetupStatsCanvas
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)(::Fusion::Statistics::FusionStatistics*, ::Fusion::Statistics::CanvasAnchor, ::UnityEngine::Events::UnityAction*)>(&::Fusion::Statistics::FusionStatsCanvas::SetupStatsCanvas)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x60f9f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SetupStatsCanvas", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatistics*>(), ::i2c::type_of<::Fusion::Statistics::CanvasAnchor>(), ::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.OnBeginDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Fusion::Statistics::FusionStatsCanvas::OnBeginDrag)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x60facf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.OnDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Fusion::Statistics::FusionStatsCanvas::OnDrag)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x60fae14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.OnEndDrag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::Fusion::Statistics::FusionStatsCanvas::OnEndDrag)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x60faf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnEndDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.SnapPanelBackToOriginPos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::SnapPanelBackToOriginPos)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x60fb114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SnapPanelBackToOriginPos", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.UpdateContentContainerHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)(float_t)>(&::Fusion::Statistics::FusionStatsCanvas::UpdateContentContainerHeight)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60faf00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"UpdateContentContainerHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.ToggleHide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::ToggleHide)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x60fb204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"ToggleHide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.CheckDraggableRectVisibility
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::Statistics::FusionStatsCanvas::*)(::UnityEngine::RectTransform*)>(&::Fusion::Statistics::FusionStatsCanvas::CheckDraggableRectVisibility)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x60fb074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"CheckDraggableRectVisibility", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.SetContentPanelHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)(float_t)>(&::Fusion::Statistics::FusionStatsCanvas::SetContentPanelHeight)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x60fb138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SetContentPanelHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.AdaptContentHeightToGraphs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::AdaptContentHeightToGraphs)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x60fb308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"AdaptContentHeightToGraphs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::OnEnable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60fb410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::OnDisable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x60fb560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.SetCanvasAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)(::Fusion::Statistics::CanvasAnchor)>(&::Fusion::Statistics::FusionStatsCanvas::SetCanvasAnchor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60f9a0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SetCanvasAnchor", {}, {::i2c::type_of<::Fusion::Statistics::CanvasAnchor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas.GetDefinedAnchorPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::GetDefinedAnchorPosition)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x60fabb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"GetDefinedAnchorPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::Statistics::FusionStatsCanvas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::Statistics::FusionStatsCanvas::*)()>(&::Fusion::Statistics::FusionStatsCanvas::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x60fb6b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Canvas>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__canvas()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__canvas() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvas;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__canvas(::UnityW<::UnityEngine::Canvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvas = value;
}
constexpr ::UnityW<::UnityEngine::UI::CanvasScaler>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__canvasScaler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasScaler;
}
constexpr ::UnityW<::UnityEngine::UI::CanvasScaler> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__canvasScaler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasScaler;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__canvasScaler(::UnityW<::UnityEngine::UI::CanvasScaler>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasScaler = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__canvasPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasPanel;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__canvasPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____canvasPanel;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__canvasPanel(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____canvasPanel = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__contentPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentPanel;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__contentPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentPanel;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__contentPanel(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contentPanel = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__contentContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentContainer;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__contentContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____contentContainer;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__contentContainer(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____contentContainer = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__bottomPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomPanel;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__bottomPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bottomPanel;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__bottomPanel(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bottomPanel = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__header()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsPanelHeader> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__header() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____header;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__header(::UnityW<::Fusion::Statistics::FusionStatsPanelHeader>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____header = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__hideButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__hideButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hideButton;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__hideButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hideButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__closeButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__closeButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____closeButton;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__closeButton(::UnityW<::UnityEngine::UI::Button>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____closeButton = value;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig>& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__config()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr ::UnityW<::Fusion::Statistics::FusionStatsConfig> const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__config() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____config;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__config(::UnityW<::Fusion::Statistics::FusionStatsConfig>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____config = value;
}
constexpr ::Fusion::Statistics::CanvasAnchor& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__anchor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchor;
}
constexpr ::Fusion::Statistics::CanvasAnchor const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__anchor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____anchor;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__anchor(::Fusion::Statistics::CanvasAnchor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____anchor = value;
}
constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__dragMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragMode;
}
constexpr ::GlobalNamespace::FusionStatsCanvas_DragMode const& Fusion::Statistics::FusionStatsCanvas::__cordl_internal_get__dragMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dragMode;
}
constexpr void Fusion::Statistics::FusionStatsCanvas::__cordl_internal_set__dragMode(::GlobalNamespace::FusionStatsCanvas_DragMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dragMode = value;
}
inline void Fusion::Statistics::FusionStatsCanvas::setStaticF__statsCanvasActiveCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_statsCanvasActiveCount", ::Fusion::Statistics::FusionStatsCanvas*>(std::forward<int32_t>(value));
}
inline int32_t Fusion::Statistics::FusionStatsCanvas::getStaticF__statsCanvasActiveCount()  {
return ::cordl_internals::getStaticField<int32_t, "_statsCanvasActiveCount", ::Fusion::Statistics::FusionStatsCanvas*>();
}
inline bool Fusion::Statistics::FusionStatsCanvas::get__isColapsed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"get__isColapsed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsCanvas::SetupStatsCanvas(::Fusion::Statistics::FusionStatistics*  fusionStatistics, ::Fusion::Statistics::CanvasAnchor  canvasAnchor, ::UnityEngine::Events::UnityAction*  closeButtonAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SetupStatsCanvas", {}, {::i2c::type_of<::Fusion::Statistics::FusionStatistics*>(), ::i2c::type_of<::Fusion::Statistics::CanvasAnchor>(), ::i2c::type_of<::UnityEngine::Events::UnityAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fusionStatistics, canvasAnchor, closeButtonAction);
}
inline void Fusion::Statistics::FusionStatsCanvas::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnBeginDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Fusion::Statistics::FusionStatsCanvas::OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Fusion::Statistics::FusionStatsCanvas::OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnEndDrag", {}, {::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void Fusion::Statistics::FusionStatsCanvas::SnapPanelBackToOriginPos()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SnapPanelBackToOriginPos", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsCanvas::UpdateContentContainerHeight(float_t  yDelta)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"UpdateContentContainerHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, yDelta);
}
inline void Fusion::Statistics::FusionStatsCanvas::ToggleHide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"ToggleHide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Fusion::Statistics::FusionStatsCanvas::CheckDraggableRectVisibility(::UnityEngine::RectTransform*  rectTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"CheckDraggableRectVisibility", {}, {::i2c::type_of<::UnityEngine::RectTransform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, rectTransform);
}
inline void Fusion::Statistics::FusionStatsCanvas::SetContentPanelHeight(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SetContentPanelHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Fusion::Statistics::FusionStatsCanvas::AdaptContentHeightToGraphs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"AdaptContentHeightToGraphs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsCanvas::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsCanvas::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsCanvas::SetCanvasAnchor(::Fusion::Statistics::CanvasAnchor  anchor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"SetCanvasAnchor", {}, {::i2c::type_of<::Fusion::Statistics::CanvasAnchor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, anchor);
}
inline ::UnityEngine::Vector2 Fusion::Statistics::FusionStatsCanvas::GetDefinedAnchorPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {"GetDefinedAnchorPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Fusion::Statistics::FusionStatsCanvas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::Statistics::FusionStatsCanvas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::Statistics::FusionStatsCanvas* Fusion::Statistics::FusionStatsCanvas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::Statistics::FusionStatsCanvas*>());
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr  Fusion::Statistics::FusionStatsCanvas::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* Fusion::Statistics::FusionStatsCanvas::i___UnityEngine__EventSystems__IDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  Fusion::Statistics::FusionStatsCanvas::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* Fusion::Statistics::FusionStatsCanvas::i___UnityEngine__EventSystems__IEventSystemHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr  Fusion::Statistics::FusionStatsCanvas::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr ::UnityEngine::EventSystems::IEndDragHandler* Fusion::Statistics::FusionStatsCanvas::i___UnityEngine__EventSystems__IEndDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr  Fusion::Statistics::FusionStatsCanvas::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr ::UnityEngine::EventSystems::IBeginDragHandler* Fusion::Statistics::FusionStatsCanvas::i___UnityEngine__EventSystems__IBeginDragHandler() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::Statistics::FusionStatsCanvas::FusionStatsCanvas()   {
}
