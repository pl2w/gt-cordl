#pragma once
// IWYU pragma private; include "UnityEngine/UI/Selectable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_Transition_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Selectable)
namespace GlobalNamespace {
struct Selectable_SelectionState;
}
namespace GlobalNamespace {
struct Selectable_Transition;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class AnimationTriggers;
}
namespace UnityEngine::UI {
struct ColorBlock;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
struct Navigation;
}
namespace UnityEngine::UI {
struct SpriteState;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
class Selectable;
}
// Write type traits
MARK_REF_T(::UnityEngine::UI::Selectable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UI::Selectable*, "UnityEngine.UI", "Selectable");
// [AddComponentMenu("UI/Selectable", 35)]
// [ExecuteAlways]
// [SelectionBase]
// [DisallowMultipleComponent]
// Dependencies UnityEngine.EventSystems.UIBehaviour, UnityEngine.UI.ColorBlock, UnityEngine.UI.Navigation, UnityEngine.UI.Selectable::Transition, UnityEngine.UI.SpriteState
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Selectable
class CORDL_TYPE Selectable : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
using SelectionState = ::GlobalNamespace::Selectable_SelectionState;

using Transition = ::GlobalNamespace::Selectable_Transition;

/// @brief Field <hasSelection>k__BackingField, offset 0xf2, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasSelection_k__BackingField, put=__cordl_internal_set__hasSelection_k__BackingField)) bool  _hasSelection_k__BackingField;

/// @brief Field <isPointerDown>k__BackingField, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPointerDown_k__BackingField, put=__cordl_internal_set__isPointerDown_k__BackingField)) bool  _isPointerDown_k__BackingField;

/// @brief Field <isPointerInside>k__BackingField, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPointerInside_k__BackingField, put=__cordl_internal_set__isPointerInside_k__BackingField)) bool  _isPointerInside_k__BackingField;

 __declspec(property(get=get_animationTriggers, put=set_animationTriggers)) ::UnityEngine::UI::AnimationTriggers*  animationTriggers;

 __declspec(property(get=get_animator)) ::UnityW<::UnityEngine::Animator>  animator;

 __declspec(property(get=get_colors, put=set_colors)) ::UnityEngine::UI::ColorBlock  colors;

 __declspec(property(get=get_currentSelectionState)) ::GlobalNamespace::Selectable_SelectionState  currentSelectionState;

 __declspec(property(get=get_hasSelection, put=set_hasSelection)) bool  hasSelection;

 __declspec(property(get=get_image, put=set_image)) ::UnityW<::UnityEngine::UI::Image>  image;

 __declspec(property(get=get_interactable, put=set_interactable)) bool  interactable;

 __declspec(property(get=get_isPointerDown, put=set_isPointerDown)) bool  isPointerDown;

 __declspec(property(get=get_isPointerInside, put=set_isPointerInside)) bool  isPointerInside;

/// @brief Field m_AnimationTriggers, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AnimationTriggers, put=__cordl_internal_set_m_AnimationTriggers)) ::UnityEngine::UI::AnimationTriggers*  m_AnimationTriggers;

/// @brief Field m_CanvasGroupCache, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CanvasGroupCache, put=__cordl_internal_set_m_CanvasGroupCache)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  m_CanvasGroupCache;

/// @brief Field m_Colors, offset 0x54, size 0x58 
 __declspec(property(get=__cordl_internal_get_m_Colors, put=__cordl_internal_set_m_Colors)) ::UnityEngine::UI::ColorBlock  m_Colors;

/// @brief Field m_CurrentIndex, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentIndex, put=__cordl_internal_set_m_CurrentIndex)) int32_t  m_CurrentIndex;

/// @brief Field m_EnableCalled, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_EnableCalled, put=__cordl_internal_set_m_EnableCalled)) bool  m_EnableCalled;

/// @brief Field m_GroupsAllowInteraction, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_GroupsAllowInteraction, put=__cordl_internal_set_m_GroupsAllowInteraction)) bool  m_GroupsAllowInteraction;

/// @brief Field m_Interactable, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Interactable, put=__cordl_internal_set_m_Interactable)) bool  m_Interactable;

/// @brief Field m_Navigation, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_Navigation, put=__cordl_internal_set_m_Navigation)) ::UnityEngine::UI::Navigation  m_Navigation;

/// @brief Field m_SpriteState, offset 0xb0, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_SpriteState, put=__cordl_internal_set_m_SpriteState)) ::UnityEngine::UI::SpriteState  m_SpriteState;

/// @brief Field m_TargetGraphic, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetGraphic, put=__cordl_internal_set_m_TargetGraphic)) ::UnityW<::UnityEngine::UI::Graphic>  m_TargetGraphic;

/// @brief Field m_Transition, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Transition, put=__cordl_internal_set_m_Transition)) ::GlobalNamespace::Selectable_Transition  m_Transition;

 __declspec(property(get=get_navigation, put=set_navigation)) ::UnityEngine::UI::Navigation  navigation;

/// @brief Field s_SelectableCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SelectableCount, put=setStaticF_s_SelectableCount)) int32_t  s_SelectableCount;

/// @brief Field s_Selectables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Selectables, put=setStaticF_s_Selectables)) ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  s_Selectables;

 __declspec(property(get=get_spriteState, put=set_spriteState)) ::UnityEngine::UI::SpriteState  spriteState;

 __declspec(property(get=get_targetGraphic, put=set_targetGraphic)) ::UnityW<::UnityEngine::UI::Graphic>  targetGraphic;

 __declspec(property(get=get_transition, put=set_transition)) ::GlobalNamespace::Selectable_Transition  transition;

/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr operator  ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr operator  ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
constexpr operator  ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr operator  ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr operator  ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

/// @brief Method AllSelectablesNoAlloc, addr 0xb905830, size 0xbc, virtual false, abstract: false, final false
static inline int32_t AllSelectablesNoAlloc(::ArrayW<::UnityEngine::UI::Selectable*>  selectables) ;

/// @brief Method Awake, addr 0xb905ee0, size 0xa4, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method DoSpriteSwap, addr 0xb9063e4, size 0xa8, virtual false, abstract: false, final false
inline void DoSpriteSwap(::UnityEngine::Sprite*  newSprite) ;

/// @brief Method DoStateTransition, addr 0xb906614, size 0x270, virtual true, abstract: false, final false
inline void DoStateTransition(::GlobalNamespace::Selectable_SelectionState  state, bool  instant) ;

/// @brief Method EvaluateAndTransitionToSelectionState, addr 0xb906fb4, size 0x98, virtual false, abstract: false, final false
inline void EvaluateAndTransitionToSelectionState() ;

/// @brief Method FindSelectable, addr 0xb906884, size 0x49c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectable(::UnityEngine::Vector3  dir) ;

/// @brief Method FindSelectableOnDown, addr 0xb901b38, size 0xd8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnDown() ;

/// @brief Method FindSelectableOnLeft, addr 0xb901844, size 0xd8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnLeft() ;

/// @brief Method FindSelectableOnRight, addr 0xb901940, size 0xd8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnRight() ;

/// @brief Method FindSelectableOnUp, addr 0xb901a3c, size 0xd8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnUp() ;

/// @brief Method GetPointOnRectEdge, addr 0xb906d20, size 0x180, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::RectTransform*  rect, ::UnityEngine::Vector2  dir) ;

/// @brief Method InstantClearState, addr 0xb906274, size 0x60, virtual true, abstract: false, final false
inline void InstantClearState() ;

/// @brief Method IsHighlighted, addr 0xb906f58, size 0x5c, virtual false, abstract: false, final false
inline bool IsHighlighted() ;

/// @brief Method IsInteractable, addr 0xb906130, size 0x20, virtual true, abstract: false, final false
inline bool IsInteractable() ;

/// @brief Method IsPressed, addr 0xb906228, size 0x4c, virtual false, abstract: false, final false
inline bool IsPressed() ;

/// @brief Method Navigate, addr 0xb906ea0, size 0xb8, virtual false, abstract: false, final false
inline void Navigate(::UnityEngine::EventSystems::AxisEventData*  eventData, ::UnityEngine::UI::Selectable*  sel) ;

static inline ::UnityEngine::UI::Selectable* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0xb9061cc, size 0x5c, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  hasFocus) ;

/// @brief Method OnCanvasGroupChanged, addr 0xb905f84, size 0x34, virtual true, abstract: false, final false
inline void OnCanvasGroupChanged() ;

/// @brief Method OnDeselect, addr 0xb90706c, size 0x8, virtual true, abstract: false, final false
inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnDidApplyAnimationProperties, addr 0xb906150, size 0x4, virtual true, abstract: false, final false
inline void OnDidApplyAnimationProperties() ;

/// @brief Method OnDisable, addr 0xb900ad8, size 0x134, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb9007e8, size 0x2d0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMove, addr 0xb901788, size 0x98, virtual true, abstract: false, final false
inline void OnMove(::UnityEngine::EventSystems::AxisEventData*  eventData) ;

/// @brief Method OnPointerDown, addr 0xb9012d4, size 0x130, virtual true, abstract: false, final false
inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerEnter, addr 0xb90704c, size 0xc, virtual true, abstract: false, final false
inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerExit, addr 0xb907058, size 0x8, virtual true, abstract: false, final false
inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnPointerUp, addr 0xb901524, size 0x20, virtual true, abstract: false, final false
inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method OnSelect, addr 0xb907060, size 0xc, virtual true, abstract: false, final false
inline void OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData) ;

/// @brief Method OnSetProperty, addr 0xb905984, size 0x64, virtual false, abstract: false, final false
inline void OnSetProperty() ;

/// @brief Method OnTransformParentChanged, addr 0xb9061a4, size 0x28, virtual true, abstract: false, final false
inline void OnTransformParentChanged() ;

/// @brief Method ParentGroupAllowsInteraction, addr 0xb905fb8, size 0x178, virtual false, abstract: false, final false
inline bool ParentGroupAllowsInteraction() ;

/// @brief Method Select, addr 0xb907074, size 0x104, virtual true, abstract: false, final false
inline void Select() ;

/// @brief Method StartColorTween, addr 0xb9062d4, size 0x110, virtual false, abstract: false, final false
inline void StartColorTween(::UnityEngine::Color  targetColor, bool  instant) ;

/// @brief Method TriggerAnimation, addr 0xb90648c, size 0x188, virtual false, abstract: false, final false
inline void TriggerAnimation(::StringW  triggername) ;

constexpr bool const& __cordl_internal_get__hasSelection_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasSelection_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isPointerDown_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPointerDown_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isPointerInside_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPointerInside_k__BackingField() ;

constexpr ::UnityEngine::UI::AnimationTriggers* const& __cordl_internal_get_m_AnimationTriggers() const;

constexpr ::UnityEngine::UI::AnimationTriggers*& __cordl_internal_get_m_AnimationTriggers() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* const& __cordl_internal_get_m_CanvasGroupCache() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& __cordl_internal_get_m_CanvasGroupCache() ;

constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get_m_Colors() const;

constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get_m_Colors() ;

constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

constexpr int32_t& __cordl_internal_get_m_CurrentIndex() ;

constexpr bool const& __cordl_internal_get_m_EnableCalled() const;

constexpr bool& __cordl_internal_get_m_EnableCalled() ;

constexpr bool const& __cordl_internal_get_m_GroupsAllowInteraction() const;

constexpr bool& __cordl_internal_get_m_GroupsAllowInteraction() ;

constexpr bool const& __cordl_internal_get_m_Interactable() const;

constexpr bool& __cordl_internal_get_m_Interactable() ;

constexpr ::UnityEngine::UI::Navigation const& __cordl_internal_get_m_Navigation() const;

constexpr ::UnityEngine::UI::Navigation& __cordl_internal_get_m_Navigation() ;

constexpr ::UnityEngine::UI::SpriteState const& __cordl_internal_get_m_SpriteState() const;

constexpr ::UnityEngine::UI::SpriteState& __cordl_internal_get_m_SpriteState() ;

constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_TargetGraphic() const;

constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_TargetGraphic() ;

constexpr ::GlobalNamespace::Selectable_Transition const& __cordl_internal_get_m_Transition() const;

constexpr ::GlobalNamespace::Selectable_Transition& __cordl_internal_get_m_Transition() ;

constexpr void __cordl_internal_set__hasSelection_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isPointerDown_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isPointerInside_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AnimationTriggers(::UnityEngine::UI::AnimationTriggers*  value) ;

constexpr void __cordl_internal_set_m_CanvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  value) ;

constexpr void __cordl_internal_set_m_Colors(::UnityEngine::UI::ColorBlock  value) ;

constexpr void __cordl_internal_set_m_CurrentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_EnableCalled(bool  value) ;

constexpr void __cordl_internal_set_m_GroupsAllowInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_Interactable(bool  value) ;

constexpr void __cordl_internal_set_m_Navigation(::UnityEngine::UI::Navigation  value) ;

constexpr void __cordl_internal_set_m_SpriteState(::UnityEngine::UI::SpriteState  value) ;

constexpr void __cordl_internal_set_m_TargetGraphic(::UnityW<::UnityEngine::UI::Graphic>  value) ;

constexpr void __cordl_internal_set_m_Transition(::GlobalNamespace::Selectable_Transition  value) ;

/// @brief Method .ctor, addr 0xb900394, size 0x13c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_s_SelectableCount() ;

static inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>> getStaticF_s_Selectables() ;

/// @brief Method get_allSelectableCount, addr 0xb90573c, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_allSelectableCount() ;

/// @brief Method get_allSelectables, addr 0xb905794, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>* get_allSelectables() ;

/// @brief Method get_allSelectablesArray, addr 0xb9056a0, size 0x9c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>> get_allSelectablesArray() ;

/// @brief Method get_animationTriggers, addr 0xb905b78, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UI::AnimationTriggers* get_animationTriggers() ;

/// @brief Method get_animator, addr 0xb905e98, size 0x48, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Animator> get_animator() ;

/// @brief Method get_colors, addr 0xb905a64, size 0x10, virtual false, abstract: false, final false
inline ::UnityEngine::UI::ColorBlock get_colors() ;

/// @brief Method get_currentSelectionState, addr 0xb906154, size 0x50, virtual false, abstract: false, final false
inline ::GlobalNamespace::Selectable_SelectionState get_currentSelectionState() ;

/// [CompilerGenerated]
/// @brief Method get_hasSelection, addr 0xb905e04, size 0x8, virtual false, abstract: false, final false
inline bool get_hasSelection() ;

/// @brief Method get_image, addr 0xb905e14, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Image> get_image() ;

/// @brief Method get_interactable, addr 0xb905c70, size 0x8, virtual false, abstract: false, final false
inline bool get_interactable() ;

/// [CompilerGenerated]
/// @brief Method get_isPointerDown, addr 0xb905df4, size 0x8, virtual false, abstract: false, final false
inline bool get_isPointerDown() ;

/// [CompilerGenerated]
/// @brief Method get_isPointerInside, addr 0xb905de4, size 0x8, virtual false, abstract: false, final false
inline bool get_isPointerInside() ;

/// @brief Method get_navigation, addr 0xb9058ec, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::UI::Navigation get_navigation() ;

/// @brief Method get_spriteState, addr 0xb905af4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::UI::SpriteState get_spriteState() ;

/// @brief Method get_targetGraphic, addr 0xb905bf4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::UI::Graphic> get_targetGraphic() ;

/// @brief Method get_transition, addr 0xb9059e8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::Selectable_Transition get_transition() ;

/// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
constexpr ::UnityEngine::EventSystems::IMoveHandler* i___UnityEngine__EventSystems__IMoveHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

/// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

static inline void setStaticF_s_SelectableCount(int32_t  value) ;

static inline void setStaticF_s_Selectables(::ArrayW<::UnityW<::UnityEngine::UI::Selectable>>  value) ;

/// @brief Method set_animationTriggers, addr 0xb905b80, size 0x74, virtual false, abstract: false, final false
inline void set_animationTriggers(::UnityEngine::UI::AnimationTriggers*  value) ;

/// @brief Method set_colors, addr 0xb905a74, size 0x80, virtual false, abstract: false, final false
inline void set_colors(::UnityEngine::UI::ColorBlock  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasSelection, addr 0xb905e0c, size 0x8, virtual false, abstract: false, final false
inline void set_hasSelection(bool  value) ;

/// @brief Method set_image, addr 0xb905e90, size 0x8, virtual false, abstract: false, final false
inline void set_image(::UnityEngine::UI::Image*  value) ;

/// @brief Method set_interactable, addr 0xb905c78, size 0x16c, virtual false, abstract: false, final false
inline void set_interactable(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isPointerDown, addr 0xb905dfc, size 0x8, virtual false, abstract: false, final false
inline void set_isPointerDown(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isPointerInside, addr 0xb905dec, size 0x8, virtual false, abstract: false, final false
inline void set_isPointerInside(bool  value) ;

/// @brief Method set_navigation, addr 0xb905904, size 0x80, virtual false, abstract: false, final false
inline void set_navigation(::UnityEngine::UI::Navigation  value) ;

/// @brief Method set_spriteState, addr 0xb905b00, size 0x78, virtual false, abstract: false, final false
inline void set_spriteState(::UnityEngine::UI::SpriteState  value) ;

/// @brief Method set_targetGraphic, addr 0xb905bfc, size 0x74, virtual false, abstract: false, final false
inline void set_targetGraphic(::UnityEngine::UI::Graphic*  value) ;

/// @brief Method set_transition, addr 0xb9059f0, size 0x74, virtual false, abstract: false, final false
inline void set_transition(::GlobalNamespace::Selectable_Transition  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Selectable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Selectable(Selectable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Selectable(Selectable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26097};

/// @brief Field m_EnableCalled, offset: 0x20, size: 0x1, def value: None
 bool  ___m_EnableCalled;

/// [FormerlySerializedAs("navigation")]
/// [SerializeField]
/// @brief Field m_Navigation, offset: 0x28, size: 0x28, def value: None
 ::UnityEngine::UI::Navigation  ___m_Navigation;

/// [FormerlySerializedAs("transition")]
/// [SerializeField]
/// @brief Field m_Transition, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::Selectable_Transition  ___m_Transition;

/// [FormerlySerializedAs("colors")]
/// [SerializeField]
/// @brief Field m_Colors, offset: 0x54, size: 0x58, def value: None
 ::UnityEngine::UI::ColorBlock  ___m_Colors;

/// [FormerlySerializedAs("spriteState")]
/// [SerializeField]
/// @brief Field m_SpriteState, offset: 0xb0, size: 0x20, def value: None
 ::UnityEngine::UI::SpriteState  ___m_SpriteState;

/// [FormerlySerializedAs("animationTriggers")]
/// [SerializeField]
/// @brief Field m_AnimationTriggers, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::UI::AnimationTriggers*  ___m_AnimationTriggers;

/// [Tooltip("Can the Selectable be interacted with?")]
/// [SerializeField]
/// @brief Field m_Interactable, offset: 0xd8, size: 0x1, def value: None
 bool  ___m_Interactable;

/// [FormerlySerializedAs("highlightGraphic")]
/// [FormerlySerializedAs("m_HighlightGraphic")]
/// [SerializeField]
/// @brief Field m_TargetGraphic, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UI::Graphic>  ___m_TargetGraphic;

/// @brief Field m_GroupsAllowInteraction, offset: 0xe8, size: 0x1, def value: None
 bool  ___m_GroupsAllowInteraction;

/// @brief Field m_CurrentIndex, offset: 0xec, size: 0x4, def value: None
 int32_t  ___m_CurrentIndex;

/// [CompilerGenerated]
/// @brief Field <isPointerInside>k__BackingField, offset: 0xf0, size: 0x1, def value: None
 bool  ____isPointerInside_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isPointerDown>k__BackingField, offset: 0xf1, size: 0x1, def value: None
 bool  ____isPointerDown_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <hasSelection>k__BackingField, offset: 0xf2, size: 0x1, def value: None
 bool  ____hasSelection_k__BackingField;

/// @brief Field m_CanvasGroupCache, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*  ___m_CanvasGroupCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_EnableCalled) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Navigation) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Transition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Colors) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_SpriteState) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_AnimationTriggers) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Interactable) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_TargetGraphic) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_GroupsAllowInteraction) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_CurrentIndex) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ____isPointerInside_k__BackingField) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ____isPointerDown_k__BackingField) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ____hasSelection_k__BackingField) == 0xf2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_CanvasGroupCache) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UI::Selectable) == 0x100, "Size mismatch!");

} // namespace end def UnityEngine::UI
