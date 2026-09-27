#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Plugins/InputForUI/InputSystemProvider.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerState_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InputSystemProvider)
namespace GlobalNamespace {
struct InputAction_CallbackContext;
}
namespace GlobalNamespace {
struct NavigationEvent_Direction;
}
namespace GlobalNamespace {
struct PointerEvent_Button;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Unity::IntegerTime {
struct DiscreteTime;
}
namespace UnityEngine::InputForUI {
struct EventModifiers;
}
namespace UnityEngine::InputForUI {
struct EventSource;
}
namespace UnityEngine::InputForUI {
struct Event;
}
namespace UnityEngine::InputForUI {
class IEventProviderImpl;
}
namespace UnityEngine::InputForUI {
class InputEventPartialProvider;
}
namespace UnityEngine::InputForUI {
class NavigationEventRepeatHelper;
}
namespace UnityEngine::InputForUI {
struct PointerState;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider_Actions;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider___c;
}
namespace UnityEngine::InputSystem {
class DefaultInputActions;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class Touchscreen;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider_Actions;
}
namespace UnityEngine::InputSystem::Plugins::InputForUI {
class InputSystemProvider___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*);
MARK_REF_T(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*);
MARK_REF_T(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider*, "UnityEngine.InputSystem.Plugins.InputForUI", "InputSystemProvider");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions*, "UnityEngine.InputSystem.Plugins.InputForUI", "InputSystemProvider/Actions");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*, "UnityEngine.InputSystem.Plugins.InputForUI", "InputSystemProvider/<>c");
// Dependencies System.Object, UnityEngine.InputForUI.PointerState
namespace UnityEngine::InputSystem::Plugins::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Plugins.InputForUI.InputSystemProvider
class CORDL_TYPE InputSystemProvider : public ::System::Object {
public:
// Declarations
using Actions = ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions;

using __c = ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c;

/// @brief Field m_CancelAction, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CancelAction, put=__cordl_internal_set_m_CancelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_CancelAction;

 __declspec(property(get=get_m_CurrentTime)) ::Unity::IntegerTime::DiscreteTime  m_CurrentTime;

/// @brief Field m_DefaultInputActions, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DefaultInputActions, put=__cordl_internal_set_m_DefaultInputActions)) ::UnityEngine::InputSystem::DefaultInputActions*  m_DefaultInputActions;

 __declspec(property(get=get_m_EventModifiers)) ::UnityEngine::InputForUI::EventModifiers  m_EventModifiers;

/// @brief Field m_Events, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Events, put=__cordl_internal_set_m_Events)) ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>*  m_Events;

/// @brief Field m_InputActionAsset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputActionAsset, put=__cordl_internal_set_m_InputActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_InputActionAsset;

/// @brief Field m_InputEventPartialProvider, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputEventPartialProvider, put=__cordl_internal_set_m_InputEventPartialProvider)) ::UnityEngine::InputForUI::InputEventPartialProvider*  m_InputEventPartialProvider;

/// @brief Field m_LeftClickAction, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftClickAction, put=__cordl_internal_set_m_LeftClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_LeftClickAction;

/// @brief Field m_MiddleClickAction, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MiddleClickAction, put=__cordl_internal_set_m_MiddleClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MiddleClickAction;

/// @brief Field m_MouseState, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_MouseState, put=__cordl_internal_set_m_MouseState)) ::UnityEngine::InputForUI::PointerState  m_MouseState;

/// @brief Field m_MoveAction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MoveAction, put=__cordl_internal_set_m_MoveAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MoveAction;

/// @brief Field m_NextPreviousAction, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NextPreviousAction, put=__cordl_internal_set_m_NextPreviousAction)) ::UnityEngine::InputSystem::InputAction*  m_NextPreviousAction;

/// @brief Field m_PenState, offset 0xa0, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_PenState, put=__cordl_internal_set_m_PenState)) ::UnityEngine::InputForUI::PointerState  m_PenState;

/// @brief Field m_PointAction, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointAction, put=__cordl_internal_set_m_PointAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_PointAction;

/// @brief Field m_RepeatHelper, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RepeatHelper, put=__cordl_internal_set_m_RepeatHelper)) ::UnityEngine::InputForUI::NavigationEventRepeatHelper*  m_RepeatHelper;

/// @brief Field m_ResetSeenEventsOnUpdate, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ResetSeenEventsOnUpdate, put=__cordl_internal_set_m_ResetSeenEventsOnUpdate)) bool  m_ResetSeenEventsOnUpdate;

/// @brief Field m_RightClickAction, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightClickAction, put=__cordl_internal_set_m_RightClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_RightClickAction;

/// @brief Field m_ScrollWheelAction, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScrollWheelAction, put=__cordl_internal_set_m_ScrollWheelAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ScrollWheelAction;

/// @brief Field m_SeenPenEvents, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SeenPenEvents, put=__cordl_internal_set_m_SeenPenEvents)) bool  m_SeenPenEvents;

/// @brief Field m_SeenTouchEvents, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SeenTouchEvents, put=__cordl_internal_set_m_SeenTouchEvents)) bool  m_SeenTouchEvents;

/// @brief Field m_SubmitAction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubmitAction, put=__cordl_internal_set_m_SubmitAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_SubmitAction;

/// @brief Field m_TouchState, offset 0xd0, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_TouchState, put=__cordl_internal_set_m_TouchState)) ::UnityEngine::InputForUI::PointerState  m_TouchState;

/// @brief Field s_OnRegisterActions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_OnRegisterActions, put=setStaticF_s_OnRegisterActions)) ::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*  s_OnRegisterActions;

/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr operator  ::UnityEngine::InputForUI::IEventProviderImpl*() noexcept;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method Bootstrap, addr 0xaf1e758, size 0x4, virtual false, abstract: false, final false
static inline void Bootstrap() ;

/// @brief Method DirectionNavigation, addr 0xaf1fea4, size 0x1ec, virtual false, abstract: false, final false
inline void DirectionNavigation(::Unity::IntegerTime::DiscreteTime  currentTime) ;

/// @brief Method DispatchFromCallback, addr 0xaf20774, size 0x140, virtual false, abstract: false, final false
inline void DispatchFromCallback(/* [IsReadOnly] */ ::by_ref<::UnityEngine::InputForUI::Event>  ev) ;

/// @brief Method FindTouchFingerIndex, addr 0xaf208b4, size 0x2f8, virtual false, abstract: false, final false
static inline int32_t FindTouchFingerIndex(::UnityEngine::InputSystem::Touchscreen*  touchscreen, ::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method GetActiveDeviceFromDirection, addr 0xaf202d8, size 0xf0, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputDevice* GetActiveDeviceFromDirection(::GlobalNamespace::NavigationEvent_Direction  direction) ;

/// @brief Method GetEventSource, addr 0xaf20720, size 0x34, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::EventSource GetEventSource(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method GetEventSource, addr 0xaf203c8, size 0x17c, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::EventSource GetEventSource(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method GetPointerStateForSource, addr 0xaf20754, size 0x20, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::InputForUI::PointerState> GetPointerStateForSource(::UnityEngine::InputForUI::EventSource  eventSource) ;

/// @brief Method Initialize, addr 0xaf1e78c, size 0x19c, virtual true, abstract: false, final true
inline void Initialize() ;

static inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider* New_ctor() ;

/// @brief Method OnActionsChange, addr 0xaf1fa20, size 0x20, virtual false, abstract: false, final false
inline void OnActionsChange() ;

/// @brief Method OnCancelPerformed, addr 0xaf214e0, size 0x128, virtual false, abstract: false, final false
inline void OnCancelPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method OnClickPerformed, addr 0xaf21608, size 0x408, virtual false, abstract: false, final false
inline void OnClickPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx, ::UnityEngine::InputForUI::EventSource  eventSource, ::GlobalNamespace::PointerEvent_Button  button) ;

/// @brief Method OnFocusChanged, addr 0xaf20620, size 0x1c, virtual true, abstract: false, final true
inline void OnFocusChanged(bool  focus) ;

/// @brief Method OnLeftClickPerformed, addr 0xaf21a10, size 0x38, virtual false, abstract: false, final false
inline void OnLeftClickPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method OnMiddleClickPerformed, addr 0xaf21a48, size 0x38, virtual false, abstract: false, final false
inline void OnMiddleClickPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method OnPointerPerformed, addr 0xaf20bac, size 0x80c, virtual false, abstract: false, final false
inline void OnPointerPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method OnRightClickPerformed, addr 0xaf21a80, size 0x38, virtual false, abstract: false, final false
inline void OnRightClickPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method OnScrollWheelPerformed, addr 0xaf21ab8, size 0x3a8, virtual false, abstract: false, final false
inline void OnScrollWheelPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method OnSubmitPerformed, addr 0xaf213b8, size 0x128, virtual false, abstract: false, final false
inline void OnSubmitPerformed(::GlobalNamespace::InputAction_CallbackContext  ctx) ;

/// @brief Method ReadCurrentNavigationMoveVector, addr 0xaf2009c, size 0x130, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::UnityEngine::Vector2,bool> ReadCurrentNavigationMoveVector() ;

/// @brief Method ReadNextPreviousDirection, addr 0xaf201cc, size 0x10c, virtual false, abstract: false, final false
inline ::GlobalNamespace::NavigationEvent_Direction ReadNextPreviousDirection() ;

/// @brief Method RegisterActions, addr 0xaf1ea70, size 0x7d4, virtual false, abstract: false, final false
inline void RegisterActions() ;

/// @brief Method RegisterFixedActions, addr 0xaf1f244, size 0xe8, virtual false, abstract: false, final false
inline void RegisterFixedActions() ;

/// @brief Method ResetSeenEvents, addr 0xaf20090, size 0xc, virtual false, abstract: false, final false
inline void ResetSeenEvents() ;

/// @brief Method ScreenBottomLeftToPanelPosition, addr 0xaf2063c, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2  position, int32_t  targetDisplay) ;

/// @brief Method SelectInputActionAsset, addr 0xaf1e928, size 0x148, virtual false, abstract: false, final false
inline void SelectInputActionAsset() ;

/// @brief Method Shutdown, addr 0xaf1f32c, size 0x100, virtual true, abstract: false, final true
inline void Shutdown() ;

/// @brief Method SortEvents, addr 0xaf20544, size 0xdc, virtual false, abstract: false, final false
static inline int32_t SortEvents(::UnityEngine::InputForUI::Event  a, ::UnityEngine::InputForUI::Event  b) ;

/// @brief Method UnregisterActions, addr 0xaf1f42c, size 0x5c0, virtual false, abstract: false, final false
inline void UnregisterActions() ;

/// @brief Method UnregisterFixedActions, addr 0xaf1f9ec, size 0x34, virtual false, abstract: false, final false
inline void UnregisterFixedActions() ;

/// @brief Method Update, addr 0xaf1fa40, size 0x464, virtual true, abstract: false, final true
inline void Update() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CancelAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CancelAction() ;

constexpr ::UnityEngine::InputSystem::DefaultInputActions* const& __cordl_internal_get_m_DefaultInputActions() const;

constexpr ::UnityEngine::InputSystem::DefaultInputActions*& __cordl_internal_get_m_DefaultInputActions() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>* const& __cordl_internal_get_m_Events() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>*& __cordl_internal_get_m_Events() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_InputActionAsset() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_InputActionAsset() ;

constexpr ::UnityEngine::InputForUI::InputEventPartialProvider* const& __cordl_internal_get_m_InputEventPartialProvider() const;

constexpr ::UnityEngine::InputForUI::InputEventPartialProvider*& __cordl_internal_get_m_InputEventPartialProvider() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_LeftClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_LeftClickAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MiddleClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MiddleClickAction() ;

constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get_m_MouseState() const;

constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get_m_MouseState() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MoveAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MoveAction() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_NextPreviousAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_NextPreviousAction() ;

constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get_m_PenState() const;

constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get_m_PenState() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PointAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PointAction() ;

constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper* const& __cordl_internal_get_m_RepeatHelper() const;

constexpr ::UnityEngine::InputForUI::NavigationEventRepeatHelper*& __cordl_internal_get_m_RepeatHelper() ;

constexpr bool const& __cordl_internal_get_m_ResetSeenEventsOnUpdate() const;

constexpr bool& __cordl_internal_get_m_ResetSeenEventsOnUpdate() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RightClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RightClickAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ScrollWheelAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ScrollWheelAction() ;

constexpr bool const& __cordl_internal_get_m_SeenPenEvents() const;

constexpr bool& __cordl_internal_get_m_SeenPenEvents() ;

constexpr bool const& __cordl_internal_get_m_SeenTouchEvents() const;

constexpr bool& __cordl_internal_get_m_SeenTouchEvents() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SubmitAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SubmitAction() ;

constexpr ::UnityEngine::InputForUI::PointerState const& __cordl_internal_get_m_TouchState() const;

constexpr ::UnityEngine::InputForUI::PointerState& __cordl_internal_get_m_TouchState() ;

constexpr void __cordl_internal_set_m_CancelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_DefaultInputActions(::UnityEngine::InputSystem::DefaultInputActions*  value) ;

constexpr void __cordl_internal_set_m_Events(::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>*  value) ;

constexpr void __cordl_internal_set_m_InputActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_InputEventPartialProvider(::UnityEngine::InputForUI::InputEventPartialProvider*  value) ;

constexpr void __cordl_internal_set_m_LeftClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MiddleClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MouseState(::UnityEngine::InputForUI::PointerState  value) ;

constexpr void __cordl_internal_set_m_MoveAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_NextPreviousAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_PenState(::UnityEngine::InputForUI::PointerState  value) ;

constexpr void __cordl_internal_set_m_PointAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_RepeatHelper(::UnityEngine::InputForUI::NavigationEventRepeatHelper*  value) ;

constexpr void __cordl_internal_set_m_ResetSeenEventsOnUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_RightClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ScrollWheelAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_SeenPenEvents(bool  value) ;

constexpr void __cordl_internal_set_m_SeenTouchEvents(bool  value) ;

constexpr void __cordl_internal_set_m_SubmitAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_TouchState(::UnityEngine::InputForUI::PointerState  value) ;

/// @brief Method .ctor, addr 0xaf1e698, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>* getStaticF_s_OnRegisterActions() ;

/// @brief Method get_m_CurrentTime, addr 0xaf1e774, size 0x18, virtual false, abstract: false, final false
inline ::Unity::IntegerTime::DiscreteTime get_m_CurrentTime() ;

/// @brief Method get_m_EventModifiers, addr 0xaf1e75c, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::InputForUI::EventModifiers get_m_EventModifiers() ;

/// @brief Convert to "::UnityEngine::InputForUI::IEventProviderImpl"
constexpr ::UnityEngine::InputForUI::IEventProviderImpl* i___UnityEngine__InputForUI__IEventProviderImpl() noexcept;

static inline void setStaticF_s_OnRegisterActions(::System::Action_1<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystemProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystemProvider(InputSystemProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystemProvider(InputSystemProvider const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32855};

/// @brief Field m_InputEventPartialProvider, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::InputForUI::InputEventPartialProvider*  ___m_InputEventPartialProvider;

/// @brief Field m_DefaultInputActions, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::InputSystem::DefaultInputActions*  ___m_DefaultInputActions;

/// @brief Field m_InputActionAsset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_InputActionAsset;

/// @brief Field m_PointAction, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_PointAction;

/// @brief Field m_MoveAction, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MoveAction;

/// @brief Field m_SubmitAction, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_SubmitAction;

/// @brief Field m_CancelAction, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_CancelAction;

/// @brief Field m_LeftClickAction, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_LeftClickAction;

/// @brief Field m_MiddleClickAction, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MiddleClickAction;

/// @brief Field m_RightClickAction, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_RightClickAction;

/// @brief Field m_ScrollWheelAction, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ScrollWheelAction;

/// @brief Field m_NextPreviousAction, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_NextPreviousAction;

/// @brief Field m_Events, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::InputForUI::Event>*  ___m_Events;

/// @brief Field m_MouseState, offset: 0x78, size: 0x28, def value: None
 ::UnityEngine::InputForUI::PointerState  ___m_MouseState;

/// @brief Field m_PenState, offset: 0xa0, size: 0x28, def value: None
 ::UnityEngine::InputForUI::PointerState  ___m_PenState;

/// @brief Field m_SeenPenEvents, offset: 0xc8, size: 0x1, def value: None
 bool  ___m_SeenPenEvents;

/// @brief Field m_TouchState, offset: 0xd0, size: 0x28, def value: None
 ::UnityEngine::InputForUI::PointerState  ___m_TouchState;

/// @brief Field m_SeenTouchEvents, offset: 0xf8, size: 0x1, def value: None
 bool  ___m_SeenTouchEvents;

/// @brief Field m_RepeatHelper, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::InputForUI::NavigationEventRepeatHelper*  ___m_RepeatHelper;

/// @brief Field m_ResetSeenEventsOnUpdate, offset: 0x108, size: 0x1, def value: None
 bool  ___m_ResetSeenEventsOnUpdate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_InputEventPartialProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_DefaultInputActions) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_InputActionAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_PointAction) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_MoveAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_SubmitAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_CancelAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_LeftClickAction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_MiddleClickAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_RightClickAction) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_ScrollWheelAction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_NextPreviousAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_Events) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_MouseState) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_PenState) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_SeenPenEvents) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_TouchState) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_SeenTouchEvents) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_RepeatHelper) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider, ___m_ResetSeenEventsOnUpdate) == 0x108, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider) == 0x110, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Plugins::InputForUI
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem::Plugins::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Plugins.InputForUI.InputSystemProvider/<>c
class CORDL_TYPE InputSystemProvider___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*  __9;

/// @brief Field <>9__33_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_0, put=setStaticF___9__33_0)) ::System::Comparison_1<::UnityEngine::InputForUI::Event>*  __9__33_0;

static inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* New_ctor() ;

/// @brief Method <Update>b__33_0, addr 0xaf22070, size 0xb8, virtual false, abstract: false, final false
inline int32_t _Update_b__33_0(::UnityEngine::InputForUI::Event  a, ::UnityEngine::InputForUI::Event  b) ;

/// @brief Method .ctor, addr 0xaf22068, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c* getStaticF___9() ;

static inline ::System::Comparison_1<::UnityEngine::InputForUI::Event>* getStaticF___9__33_0() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c*  value) ;

static inline void setStaticF___9__33_0(::System::Comparison_1<::UnityEngine::InputForUI::Event>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystemProvider___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystemProvider___c(InputSystemProvider___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystemProvider___c(InputSystemProvider___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32854};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Plugins::InputForUI
// Dependencies System.Object
namespace UnityEngine::InputSystem::Plugins::InputForUI {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Plugins.InputForUI.InputSystemProvider/Actions
class CORDL_TYPE InputSystemProvider_Actions : public ::System::Object {
public:
// Declarations
/// @brief Field CancelAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CancelAction, put=setStaticF_CancelAction)) ::StringW  CancelAction;

/// @brief Field LeftClickAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LeftClickAction, put=setStaticF_LeftClickAction)) ::StringW  LeftClickAction;

/// @brief Field MiddleClickAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MiddleClickAction, put=setStaticF_MiddleClickAction)) ::StringW  MiddleClickAction;

/// @brief Field MoveAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MoveAction, put=setStaticF_MoveAction)) ::StringW  MoveAction;

/// @brief Field PointAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_PointAction, put=setStaticF_PointAction)) ::StringW  PointAction;

/// @brief Field RightClickAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RightClickAction, put=setStaticF_RightClickAction)) ::StringW  RightClickAction;

/// @brief Field ScrollWheelAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ScrollWheelAction, put=setStaticF_ScrollWheelAction)) ::StringW  ScrollWheelAction;

/// @brief Field SubmitAction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SubmitAction, put=setStaticF_SubmitAction)) ::StringW  SubmitAction;

static inline ::StringW getStaticF_CancelAction() ;

static inline ::StringW getStaticF_LeftClickAction() ;

static inline ::StringW getStaticF_MiddleClickAction() ;

static inline ::StringW getStaticF_MoveAction() ;

static inline ::StringW getStaticF_PointAction() ;

static inline ::StringW getStaticF_RightClickAction() ;

static inline ::StringW getStaticF_ScrollWheelAction() ;

static inline ::StringW getStaticF_SubmitAction() ;

static inline void setStaticF_CancelAction(::StringW  value) ;

static inline void setStaticF_LeftClickAction(::StringW  value) ;

static inline void setStaticF_MiddleClickAction(::StringW  value) ;

static inline void setStaticF_MoveAction(::StringW  value) ;

static inline void setStaticF_PointAction(::StringW  value) ;

static inline void setStaticF_RightClickAction(::StringW  value) ;

static inline void setStaticF_ScrollWheelAction(::StringW  value) ;

static inline void setStaticF_SubmitAction(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputSystemProvider_Actions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider_Actions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputSystemProvider_Actions(InputSystemProvider_Actions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputSystemProvider_Actions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputSystemProvider_Actions(InputSystemProvider_Actions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32853};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::Plugins::InputForUI::InputSystemProvider_Actions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Plugins::InputForUI
