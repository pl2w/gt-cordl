#pragma once
// IWYU pragma private; include "UnityEngine/UI/Slider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_Direction_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Slider)
namespace GlobalNamespace {
struct Slider_Axis;
}
namespace GlobalNamespace {
struct Slider_Direction;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class IDragHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IInitializePotentialDragHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class ICanvasElement;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Selectable;
}
namespace UnityEngine::UI {
class Slider_SliderEvent;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class Slider_SliderEvent;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::Slider*);
MARK_REF_T(::UnityEngine::UI::Slider_SliderEvent*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::Slider*, "UnityEngine.UI", "Slider");
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::Slider_SliderEvent*, "UnityEngine.UI", "Slider/SliderEvent");
// [AddComponentMenu("UI/Slider", 34)]
// [ExecuteAlways]
// [RequireComponent(typeof(UnityEngine.RectTransform))]
// Dependencies UnityEngine.DrivenRectTransformTracker, UnityEngine.UI.Selectable, UnityEngine.UI.Slider::Direction, UnityEngine.Vector2
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Slider
class CORDL_TYPE Slider : public ::UnityEngine::UI::Selectable {
public:
// Declarations
using Axis = ::GlobalNamespace::Slider_Axis;

using Direction = ::GlobalNamespace::Slider_Direction;

using SliderEvent = ::UnityEngine::UI::Slider_SliderEvent;

 __declspec(property(get=get_axis)) ::GlobalNamespace::Slider_Axis  axis;

 __declspec(property(get=get_direction, put=set_direction)) ::GlobalNamespace::Slider_Direction  direction;

 __declspec(property(get=get_fillRect, put=set_fillRect)) ::UnityW<::UnityEngine::RectTransform>  fillRect;

 __declspec(property(get=get_handleRect, put=set_handleRect)) ::UnityW<::UnityEngine::RectTransform>  handleRect;

/// @brief Field m_DelayedUpdateVisuals, offset 0x161, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DelayedUpdateVisuals, put=__cordl_internal_set_m_DelayedUpdateVisuals)) bool  m_DelayedUpdateVisuals;

/// @brief Field m_Direction, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Direction, put=__cordl_internal_set_m_Direction)) ::GlobalNamespace::Slider_Direction  m_Direction;

/// @brief Field m_FillContainerRect, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FillContainerRect, put=__cordl_internal_set_m_FillContainerRect)) ::UnityW<::UnityEngine::RectTransform>  m_FillContainerRect;

/// @brief Field m_FillImage, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FillImage, put=__cordl_internal_set_m_FillImage)) ::UnityW<::UnityEngine::UI::Image>  m_FillImage;

/// @brief Field m_FillRect, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FillRect, put=__cordl_internal_set_m_FillRect)) ::UnityW<::UnityEngine::RectTransform>  m_FillRect;

/// @brief Field m_FillTransform, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FillTransform, put=__cordl_internal_set_m_FillTransform)) ::UnityW<::UnityEngine::Transform>  m_FillTransform;

/// @brief Field m_HandleContainerRect, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandleContainerRect, put=__cordl_internal_set_m_HandleContainerRect)) ::UnityW<::UnityEngine::RectTransform>  m_HandleContainerRect;

/// @brief Field m_HandleRect, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandleRect, put=__cordl_internal_set_m_HandleRect)) ::UnityW<::UnityEngine::RectTransform>  m_HandleRect;

/// @brief Field m_HandleTransform, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandleTransform, put=__cordl_internal_set_m_HandleTransform)) ::UnityW<::UnityEngine::Transform>  m_HandleTransform;

/// @brief Field m_MaxValue, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MaxValue, put=__cordl_internal_set_m_MaxValue)) float_t  m_MaxValue;

/// @brief Field m_MinValue, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MinValue, put=__cordl_internal_set_m_MinValue)) float_t  m_MinValue;

/// @brief Field m_Offset, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Offset, put=__cordl_internal_set_m_Offset)) ::UnityEngine::Vector2  m_Offset;

/// @brief Field m_OnValueChanged, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnValueChanged, put=__cordl_internal_set_m_OnValueChanged)) ::UnityEngine::UI::Slider_SliderEvent*  m_OnValueChanged;

/// @brief Field m_Tracker, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Tracker, put=__cordl_internal_set_m_Tracker)) ::UnityEngine::DrivenRectTransformTracker  m_Tracker;

/// @brief Field m_Value, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Value, put=__cordl_internal_set_m_Value)) float_t  m_Value;

/// @brief Field m_WholeNumbers, offset 0x11c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WholeNumbers, put=__cordl_internal_set_m_WholeNumbers)) bool  m_WholeNumbers;

 __declspec(property(get=get_maxValue, put=set_maxValue)) float_t  maxValue;

 __declspec(property(get=get_minValue, put=set_minValue)) float_t  minValue;

 __declspec(property(get=get_normalizedValue, put=set_normalizedValue)) float_t  normalizedValue;

 __declspec(property(get=get_onValueChanged, put=set_onValueChanged)) ::UnityEngine::UI::Slider_SliderEvent*  onValueChanged;

 __declspec(property(get=get_reverseValue)) bool  reverseValue;

 __declspec(property(get=get_stepSize)) float_t  stepSize;

 __declspec(property(get=get_value, put=set_value)) float_t  value;

 __declspec(property(get=get_wholeNumbers, put=set_wholeNumbers)) bool  wholeNumbers;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr operator  ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr operator  ::UnityEngine::UI::ICanvasElement*() noexcept;

/// @brief Method ClampValue, addr 0xb90814c, size 0xb4, virtual false, abstract: false, final false
inline float_t ClampValue(float_t  input) ;

/// @brief Method FindSelectableOnDown, addr 0xb908a64, size 0x24, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnDown() ;

/// @brief Method FindSelectableOnLeft, addr 0xb9089f8, size 0x24, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnLeft() ;

/// @brief Method FindSelectableOnRight, addr 0xb908a1c, size 0x24, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnRight() ;

/// @brief Method FindSelectableOnUp, addr 0xb908a40, size 0x24, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnUp() ;

/// @brief Method GraphicUpdateComplete, addr 0xb907edc, size 0x4, virtual true, abstract: false, final false
inline void GraphicUpdateComplete() ;

/// @brief Method LayoutComplete, addr 0xb907ed8, size 0x4, virtual true, abstract: false, final false
inline void LayoutComplete() ;

/// @brief Method MayDrag, addr 0xb90852c, size 0x64, virtual false, abstract: false, final false
inline bool MayDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

static inline ::UnityEngine::UI::Slider* New_ctor() ;

/// @brief Method OnDidApplyAnimationProperties, addr 0xb907f78, size 0x1d4, virtual true, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnDisable, addr 0xb907f1c, size 0x20, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnDrag, addr 0xb908760, size 0x50, virtual true, abstract: false, final false
inline void OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnEnable, addr 0xb907ee0, size 0x3c, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInitializePotentialDrag, addr 0xb908a88, size 0x14, virtual true, abstract: false, final false
inline void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnMove, addr 0xb9087b0, size 0x248, virtual true, abstract: false, final false
inline void OnMove(::UnityEngine::EventSystems::AxisEventData*  eventData) ;

/// @brief Method OnPointerDown, addr 0xb908590, size 0x1d0, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnRectTransformDimensionsChange, addr 0xb9082f4, size 0x38, virtual true, abstract: false, final false
inline void OnRectTransformDimensionsChange() ;

/// @brief Method Rebuild, addr 0xb907ed4, size 0x4, virtual true, abstract: false, final false
inline void Rebuild(::UnityEngine::UI::CanvasUpdate  executing) ;

/// @brief Method Set, addr 0xb908224, size 0xd0, virtual true, abstract: false, final false
inline void Set(float_t  input, bool  sendCallback) ;

/// @brief Method SetDirection, addr 0xb908a9c, size 0x188, virtual false, abstract: false, final false
inline void SetDirection(::GlobalNamespace::Slider_Direction  direction, bool  includeRectLayouts) ;

/// @brief Method SetValueWithoutNotify, addr 0xb907c44, size 0x14, virtual true, abstract: false, final false
inline void SetValueWithoutNotify(float_t  input) ;

/// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0xb908c24, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform() ;

/// @brief Method Update, addr 0xb907f3c, size 0x3c, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCachedReferences, addr 0xb9072cc, size 0x31c, virtual false, abstract: false, final false
inline void UpdateCachedReferences() ;

/// @brief Method UpdateDrag, addr 0xb90832c, size 0x200, virtual false, abstract: false, final false
inline void UpdateDrag(::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::Camera*  cam) ;

/// @brief Method UpdateVisuals, addr 0xb9075e8, size 0x2e0, virtual false, abstract: false, final false
inline void UpdateVisuals() ;

constexpr bool const& __cordl_internal_get_m_DelayedUpdateVisuals() const;

constexpr bool& __cordl_internal_get_m_DelayedUpdateVisuals() ;

constexpr ::GlobalNamespace::Slider_Direction const& __cordl_internal_get_m_Direction() const;

constexpr ::GlobalNamespace::Slider_Direction& __cordl_internal_get_m_Direction() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_FillContainerRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_FillContainerRect() ;

constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_m_FillImage() const;

constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_m_FillImage() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_FillRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_FillRect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_FillTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_FillTransform() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_HandleContainerRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_HandleContainerRect() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get_m_HandleRect() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get_m_HandleRect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_HandleTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_HandleTransform() ;

constexpr float_t const& __cordl_internal_get_m_MaxValue() const;

constexpr float_t& __cordl_internal_get_m_MaxValue() ;

constexpr float_t const& __cordl_internal_get_m_MinValue() const;

constexpr float_t& __cordl_internal_get_m_MinValue() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Offset() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Offset() ;

constexpr ::UnityEngine::UI::Slider_SliderEvent* const& __cordl_internal_get_m_OnValueChanged() const;

constexpr ::UnityEngine::UI::Slider_SliderEvent*& __cordl_internal_get_m_OnValueChanged() ;

constexpr ::UnityEngine::DrivenRectTransformTracker const& __cordl_internal_get_m_Tracker() const;

constexpr ::UnityEngine::DrivenRectTransformTracker& __cordl_internal_get_m_Tracker() ;

constexpr float_t const& __cordl_internal_get_m_Value() const;

constexpr float_t& __cordl_internal_get_m_Value() ;

constexpr bool const& __cordl_internal_get_m_WholeNumbers() const;

constexpr bool& __cordl_internal_get_m_WholeNumbers() ;

constexpr void __cordl_internal_set_m_DelayedUpdateVisuals(bool  value) ;

constexpr void __cordl_internal_set_m_Direction(::GlobalNamespace::Slider_Direction  value) ;

constexpr void __cordl_internal_set_m_FillContainerRect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_FillImage(::UnityW<::UnityEngine::UI::Image>  value) ;

constexpr void __cordl_internal_set_m_FillRect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_FillTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_HandleContainerRect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_HandleRect(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set_m_HandleTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_MaxValue(float_t  value) ;

constexpr void __cordl_internal_set_m_MinValue(float_t  value) ;

constexpr void __cordl_internal_set_m_Offset(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_OnValueChanged(::UnityEngine::UI::Slider_SliderEvent*  value) ;

constexpr void __cordl_internal_set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value) ;

constexpr void __cordl_internal_set_m_Value(float_t  value) ;

constexpr void __cordl_internal_set_m_WholeNumbers(bool  value) ;

/// @brief Method .ctor, addr 0xb907dc4, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_axis, addr 0xb908214, size 0x10, virtual false, abstract: false, final false
inline ::GlobalNamespace::Slider_Axis get_axis() ;

/// @brief Method get_direction, addr 0xb90794c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Slider_Direction get_direction() ;

/// @brief Method get_fillRect, addr 0xb907248, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_fillRect() ;

/// @brief Method get_handleRect, addr 0xb9078c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::RectTransform> get_handleRect() ;

/// @brief Method get_maxValue, addr 0xb907a60, size 0x8, virtual false, abstract: false, final false
inline float_t get_maxValue() ;

/// @brief Method get_minValue, addr 0xb9079c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_minValue() ;

/// @brief Method get_normalizedValue, addr 0xb907c58, size 0xec, virtual false, abstract: false, final false
inline float_t get_normalizedValue() ;

/// @brief Method get_onValueChanged, addr 0xb907d80, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UI::Slider_SliderEvent* get_onValueChanged() ;

/// @brief Method get_reverseValue, addr 0xb908200, size 0x14, virtual false, abstract: false, final false
inline bool get_reverseValue() ;

/// @brief Method get_stepSize, addr 0xb907d98, size 0x2c, virtual false, abstract: false, final false
inline float_t get_stepSize() ;

/// @brief Method get_value, addr 0xb907b90, size 0xa0, virtual true, abstract: false, final false
inline float_t get_value() ;

/// @brief Method get_wholeNumbers, addr 0xb907af8, size 0x8, virtual false, abstract: false, final false
inline bool get_wholeNumbers() ;

/// @brief Convert to "::UnityEngine::EventSystems::IDragHandler"
constexpr ::UnityEngine::EventSystems::IDragHandler* i___UnityEngine__EventSystems__IDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr ::UnityEngine::EventSystems::IInitializePotentialDragHandler* i___UnityEngine__EventSystems__IInitializePotentialDragHandler() noexcept;

/// @brief Convert to "::UnityEngine::UI::ICanvasElement"
constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

/// @brief Method set_direction, addr 0xb907954, size 0x74, virtual false, abstract: false, final false
inline void set_direction(::GlobalNamespace::Slider_Direction  value) ;

/// @brief Method set_fillRect, addr 0xb907250, size 0x7c, virtual false, abstract: false, final false
inline void set_fillRect(::UnityEngine::RectTransform*  value) ;

/// @brief Method set_handleRect, addr 0xb9078d0, size 0x7c, virtual false, abstract: false, final false
inline void set_handleRect(::UnityEngine::RectTransform*  value) ;

/// @brief Method set_maxValue, addr 0xb907a68, size 0x90, virtual false, abstract: false, final false
inline void set_maxValue(float_t  value) ;

/// @brief Method set_minValue, addr 0xb9079d0, size 0x90, virtual false, abstract: false, final false
inline void set_minValue(float_t  value) ;

/// @brief Method set_normalizedValue, addr 0xb907d44, size 0x3c, virtual false, abstract: false, final false
inline void set_normalizedValue(float_t  value) ;

/// @brief Method set_onValueChanged, addr 0xb907d88, size 0x10, virtual false, abstract: false, final false
inline void set_onValueChanged(::UnityEngine::UI::Slider_SliderEvent*  value) ;

/// @brief Method set_value, addr 0xb907c30, size 0x14, virtual true, abstract: false, final false
inline void set_value(float_t  value) ;

/// @brief Method set_wholeNumbers, addr 0xb907b00, size 0x90, virtual false, abstract: false, final false
inline void set_wholeNumbers(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Slider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Slider(Slider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Slider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Slider(Slider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26102};

/// [SerializeField]
/// @brief Field m_FillRect, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_FillRect;

/// [SerializeField]
/// @brief Field m_HandleRect, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_HandleRect;

/// [Space]
/// [SerializeField]
/// @brief Field m_Direction, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::Slider_Direction  ___m_Direction;

/// [SerializeField]
/// @brief Field m_MinValue, offset: 0x114, size: 0x4, def value: None
 float_t  ___m_MinValue;

/// [SerializeField]
/// @brief Field m_MaxValue, offset: 0x118, size: 0x4, def value: None
 float_t  ___m_MaxValue;

/// [SerializeField]
/// @brief Field m_WholeNumbers, offset: 0x11c, size: 0x1, def value: None
 bool  ___m_WholeNumbers;

/// [SerializeField]
/// @brief Field m_Value, offset: 0x120, size: 0x4, def value: None
 float_t  ___m_Value;

/// [Space]
/// [SerializeField]
/// @brief Field m_OnValueChanged, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::UI::Slider_SliderEvent*  ___m_OnValueChanged;

/// @brief Field m_FillImage, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Image>  ___m_FillImage;

/// @brief Field m_FillTransform, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_FillTransform;

/// @brief Field m_FillContainerRect, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_FillContainerRect;

/// @brief Field m_HandleTransform, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_HandleTransform;

/// @brief Field m_HandleContainerRect, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ___m_HandleContainerRect;

/// @brief Field m_Offset, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Offset;

/// @brief Field m_Tracker, offset: 0x160, size: 0x1, def value: None
 ::UnityEngine::DrivenRectTransformTracker  ___m_Tracker;

/// @brief Field m_DelayedUpdateVisuals, offset: 0x161, size: 0x1, def value: None
 bool  ___m_DelayedUpdateVisuals;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Slider, ___m_FillRect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_HandleRect) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_Direction) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_MinValue) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_MaxValue) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_WholeNumbers) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_Value) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_OnValueChanged) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_FillImage) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_FillTransform) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_FillContainerRect) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_HandleTransform) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_HandleContainerRect) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_Offset) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_Tracker) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Slider, ___m_DelayedUpdateVisuals) == 0x161, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::Slider) == 0x168, "Size mismatch!");

} // namespace end def UnityEngine::UI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Slider/SliderEvent
class CORDL_TYPE Slider_SliderEvent : public ::UnityEngine::Events::UnityEvent_1<float_t> {
public:
// Declarations
static inline ::UnityEngine::UI::Slider_SliderEvent* New_ctor() ;

/// @brief Method .ctor, addr 0xb907e8c, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Slider_SliderEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Slider_SliderEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Slider_SliderEvent(Slider_SliderEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Slider_SliderEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Slider_SliderEvent(Slider_SliderEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26100};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UI::Slider_SliderEvent) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UI
