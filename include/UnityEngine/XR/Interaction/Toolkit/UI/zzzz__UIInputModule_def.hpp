#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/UIInputModule.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UIInputModule)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct ButtonDeltaState;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct NavigationModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct PointerModel;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class TrackedDeviceEventData;
}
namespace UnityEngine::XR::Interaction::Toolkit::UI {
struct TrackedDeviceModel;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::UI {
class UIInputModule;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule*, "UnityEngine.XR.Interaction.Toolkit.UI", "UIInputModule");
// [DefaultExecutionOrder(-200)]
// Dependencies UnityEngine.EventSystems.BaseInputModule
namespace UnityEngine::XR::Interaction::Toolkit::UI {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.UI.UIInputModule
class CORDL_TYPE UIInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
// Declarations
/// @brief Field beginDrag, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_beginDrag, put=__cordl_internal_set_beginDrag)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  beginDrag;

 __declspec(property(get=get_bypassUIToolkitEvents, put=set_bypassUIToolkitEvents)) bool  bypassUIToolkitEvents;

/// @brief Field cancel, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancel, put=__cordl_internal_set_cancel)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  cancel;

 __declspec(property(get=get_clickSpeed, put=set_clickSpeed)) float_t  clickSpeed;

/// @brief Field drag, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_drag, put=__cordl_internal_set_drag)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  drag;

/// @brief Field drop, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_drop, put=__cordl_internal_set_drop)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  drop;

/// @brief Field endDrag, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_endDrag, put=__cordl_internal_set_endDrag)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  endDrag;

/// @brief Field finalizeRaycastResults, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_finalizeRaycastResults, put=__cordl_internal_set_finalizeRaycastResults)) ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  finalizeRaycastResults;

/// @brief Field initializePotentialDrag, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_initializePotentialDrag, put=__cordl_internal_set_initializePotentialDrag)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  initializePotentialDrag;

/// @brief Field m_BypassUIToolkitEvents, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BypassUIToolkitEvents, put=__cordl_internal_set_m_BypassUIToolkitEvents)) bool  m_BypassUIToolkitEvents;

/// @brief Field m_CachedAxisEvent, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CachedAxisEvent, put=__cordl_internal_set_m_CachedAxisEvent)) ::UnityEngine::EventSystems::AxisEventData*  m_CachedAxisEvent;

/// @brief Field m_ClickSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ClickSpeed, put=__cordl_internal_set_m_ClickSpeed)) float_t  m_ClickSpeed;

/// @brief Field m_MainCameraCache, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MainCameraCache, put=__cordl_internal_set_m_MainCameraCache)) ::UnityW<::UnityEngine::Camera>  m_MainCameraCache;

/// @brief Field m_MoveDeadzone, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MoveDeadzone, put=__cordl_internal_set_m_MoveDeadzone)) float_t  m_MoveDeadzone;

/// @brief Field m_PointerEventByPointerId, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PointerEventByPointerId, put=__cordl_internal_set_m_PointerEventByPointerId)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  m_PointerEventByPointerId;

/// @brief Field m_RepeatDelay, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RepeatDelay, put=__cordl_internal_set_m_RepeatDelay)) float_t  m_RepeatDelay;

/// @brief Field m_RepeatRate, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RepeatRate, put=__cordl_internal_set_m_RepeatRate)) float_t  m_RepeatRate;

/// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier, put=__cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier)) float_t  m_TrackedDeviceDragThresholdMultiplier;

/// @brief Field m_TrackedDeviceEventByPointerId, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedDeviceEventByPointerId, put=__cordl_internal_set_m_TrackedDeviceEventByPointerId)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*  m_TrackedDeviceEventByPointerId;

/// @brief Field m_TrackedScrollDeltaMultiplier, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TrackedScrollDeltaMultiplier, put=__cordl_internal_set_m_TrackedScrollDeltaMultiplier)) float_t  m_TrackedScrollDeltaMultiplier;

/// @brief Field m_UICamera, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UICamera, put=__cordl_internal_set_m_UICamera)) ::UnityW<::UnityEngine::Camera>  m_UICamera;

/// @brief Field move, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_move, put=__cordl_internal_set_move)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  move;

 __declspec(property(get=get_moveDeadzone, put=set_moveDeadzone)) float_t  moveDeadzone;

/// @brief Field pointerClick, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerClick, put=__cordl_internal_set_pointerClick)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  pointerClick;

/// @brief Field pointerDown, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerDown, put=__cordl_internal_set_pointerDown)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  pointerDown;

/// @brief Field pointerEnter, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerEnter, put=__cordl_internal_set_pointerEnter)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  pointerEnter;

/// @brief Field pointerExit, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerExit, put=__cordl_internal_set_pointerExit)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  pointerExit;

/// @brief Field pointerMove, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerMove, put=__cordl_internal_set_pointerMove)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  pointerMove;

/// @brief Field pointerUp, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerUp, put=__cordl_internal_set_pointerUp)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  pointerUp;

 __declspec(property(get=get_repeatDelay, put=set_repeatDelay)) float_t  repeatDelay;

 __declspec(property(get=get_repeatRate, put=set_repeatRate)) float_t  repeatRate;

/// @brief Field scroll, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_scroll, put=__cordl_internal_set_scroll)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  scroll;

/// @brief Field submit, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_submit, put=__cordl_internal_set_submit)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  submit;

 __declspec(property(get=get_trackedDeviceDragThresholdMultiplier, put=set_trackedDeviceDragThresholdMultiplier)) float_t  trackedDeviceDragThresholdMultiplier;

 __declspec(property(get=get_trackedScrollDeltaMultiplier, put=set_trackedScrollDeltaMultiplier)) float_t  trackedScrollDeltaMultiplier;

 __declspec(property(get=get_uiCamera, put=set_uiCamera)) ::UnityW<::UnityEngine::Camera>  uiCamera;

/// @brief Field updateSelected, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateSelected, put=__cordl_internal_set_updateSelected)) ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  updateSelected;

/// @brief Method ActivateModule, addr 0xb43ad44, size 0xf8, virtual true, abstract: false, final false
inline void ActivateModule() ;

/// @brief Method CanTargetClickOnDown, addr 0xb43c7d0, size 0x358, virtual false, abstract: false, final false
static inline bool CanTargetClickOnDown(::UnityEngine::GameObject*  clickOnDownTarget) ;

/// @brief Method DoProcess, addr 0xb43abe0, size 0x4, virtual true, abstract: false, final false
inline void DoProcess() ;

/// @brief Method GetCurrentGameObject, addr 0xb433a90, size 0x3a0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetCurrentGameObject(int32_t  pointerId) ;

/// @brief Method GetOrCreateCachedAxisEvent, addr 0xb43d688, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::AxisEventData* GetOrCreateCachedAxisEvent() ;

/// @brief Method GetOrCreateCachedPointerEvent, addr 0xb43b260, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::PointerEventData* GetOrCreateCachedPointerEvent(int32_t  pointerId) ;

/// @brief Method GetOrCreateCachedTrackedDeviceEvent, addr 0xb43d02c, size 0xd4, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData* GetOrCreateCachedTrackedDeviceEvent(int32_t  pointerId) ;

/// @brief Method IsPointerOverGameObject, addr 0xb43ae3c, size 0x7c, virtual true, abstract: false, final false
inline bool IsPointerOverGameObject(int32_t  pointerId) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule* New_ctor() ;

/// @brief Method PerformRaycast, addr 0xb43aeb8, size 0x124, virtual false, abstract: false, final false
inline ::UnityEngine::EventSystems::RaycastResult PerformRaycast(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method Process, addr 0xb43ad40, size 0x4, virtual true, abstract: false, final false
inline void Process() ;

/// @brief Method ProcessNavigationState, addr 0xb43d224, size 0x464, virtual false, abstract: false, final false
inline void ProcessNavigationState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::NavigationModel>  navigationState) ;

/// @brief Method ProcessPointerButton, addr 0xb43b334, size 0x784, virtual false, abstract: false, final false
inline void ProcessPointerButton(::UnityEngine::XR::Interaction::Toolkit::UI::ButtonDeltaState  mouseButtonChanges, ::UnityEngine::EventSystems::PointerEventData*  eventData, bool  clickOnDown) ;

/// @brief Method ProcessPointerButtonDrag, addr 0xb43c484, size 0x34c, virtual false, abstract: false, final false
inline void ProcessPointerButtonDrag(::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::InputSystem::UI::UIPointerType  pointerType, float_t  pixelDragThresholdMultiplier) ;

/// @brief Method ProcessPointerMovement, addr 0xb43bab8, size 0x81c, virtual false, abstract: false, final false
inline void ProcessPointerMovement(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method ProcessPointerState, addr 0xb43afdc, size 0x284, virtual false, abstract: false, final false
inline void ProcessPointerState(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::PointerModel>  pointerState) ;

/// @brief Method ProcessScrollWheel, addr 0xb43c2d4, size 0x1b0, virtual false, abstract: false, final false
inline void ProcessScrollWheel(::UnityEngine::EventSystems::PointerEventData*  eventData) ;

/// @brief Method ProcessTrackedDevice, addr 0xb43cb28, size 0x504, virtual false, abstract: false, final false
inline void ProcessTrackedDevice(::by_ref<::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceModel>  deviceState, bool  force) ;

/// @brief Method RemovePointerEventData, addr 0xb43d70c, size 0x90, virtual false, abstract: false, final false
inline void RemovePointerEventData(int32_t  pointerId) ;

/// @brief Method SendUpdateEventToSelectedObject, addr 0xb43abe4, size 0x15c, virtual false, abstract: false, final false
inline bool SendUpdateEventToSelectedObject() ;

/// @brief Method TryGetCamera, addr 0xb43d100, size 0x124, virtual false, abstract: false, final false
inline bool TryGetCamera(::UnityEngine::EventSystems::PointerEventData*  eventData, ::by_ref<::UnityEngine::Camera*>  screenPointCamera) ;

/// @brief Method Update, addr 0xb43aadc, size 0x104, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_beginDrag() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_beginDrag() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>* const& __cordl_internal_get_cancel() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*& __cordl_internal_get_cancel() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_drag() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_drag() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_drop() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_drop() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_endDrag() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_endDrag() ;

constexpr ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>* const& __cordl_internal_get_finalizeRaycastResults() const;

constexpr ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*& __cordl_internal_get_finalizeRaycastResults() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_initializePotentialDrag() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_initializePotentialDrag() ;

constexpr bool const& __cordl_internal_get_m_BypassUIToolkitEvents() const;

constexpr bool& __cordl_internal_get_m_BypassUIToolkitEvents() ;

constexpr ::UnityEngine::EventSystems::AxisEventData* const& __cordl_internal_get_m_CachedAxisEvent() const;

constexpr ::UnityEngine::EventSystems::AxisEventData*& __cordl_internal_get_m_CachedAxisEvent() ;

constexpr float_t const& __cordl_internal_get_m_ClickSpeed() const;

constexpr float_t& __cordl_internal_get_m_ClickSpeed() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_MainCameraCache() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_MainCameraCache() ;

constexpr float_t const& __cordl_internal_get_m_MoveDeadzone() const;

constexpr float_t& __cordl_internal_get_m_MoveDeadzone() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_m_PointerEventByPointerId() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_m_PointerEventByPointerId() ;

constexpr float_t const& __cordl_internal_get_m_RepeatDelay() const;

constexpr float_t& __cordl_internal_get_m_RepeatDelay() ;

constexpr float_t const& __cordl_internal_get_m_RepeatRate() const;

constexpr float_t& __cordl_internal_get_m_RepeatRate() ;

constexpr float_t const& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() const;

constexpr float_t& __cordl_internal_get_m_TrackedDeviceDragThresholdMultiplier() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>* const& __cordl_internal_get_m_TrackedDeviceEventByPointerId() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*& __cordl_internal_get_m_TrackedDeviceEventByPointerId() ;

constexpr float_t const& __cordl_internal_get_m_TrackedScrollDeltaMultiplier() const;

constexpr float_t& __cordl_internal_get_m_TrackedScrollDeltaMultiplier() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_UICamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_UICamera() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>* const& __cordl_internal_get_move() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*& __cordl_internal_get_move() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerClick() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerClick() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerDown() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerDown() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerEnter() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerEnter() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerExit() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerExit() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerMove() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerMove() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_pointerUp() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerUp() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>* const& __cordl_internal_get_scroll() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_scroll() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>* const& __cordl_internal_get_submit() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*& __cordl_internal_get_submit() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>* const& __cordl_internal_get_updateSelected() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*& __cordl_internal_get_updateSelected() ;

constexpr void __cordl_internal_set_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

constexpr void __cordl_internal_set_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  value) ;

constexpr void __cordl_internal_set_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_m_BypassUIToolkitEvents(bool  value) ;

constexpr void __cordl_internal_set_m_CachedAxisEvent(::UnityEngine::EventSystems::AxisEventData*  value) ;

constexpr void __cordl_internal_set_m_ClickSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_MainCameraCache(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_m_MoveDeadzone(float_t  value) ;

constexpr void __cordl_internal_set_m_PointerEventByPointerId(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_m_RepeatDelay(float_t  value) ;

constexpr void __cordl_internal_set_m_RepeatRate(float_t  value) ;

constexpr void __cordl_internal_set_m_TrackedDeviceDragThresholdMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_TrackedDeviceEventByPointerId(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*  value) ;

constexpr void __cordl_internal_set_m_TrackedScrollDeltaMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_UICamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  value) ;

constexpr void __cordl_internal_set_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

constexpr void __cordl_internal_set_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

constexpr void __cordl_internal_set_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

/// @brief Method .ctor, addr 0xb43eefc, size 0xf4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_beginDrag, addr 0xb43e29c, size 0xb0, virtual false, abstract: false, final false
inline void add_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_cancel, addr 0xb43ed9c, size 0xb0, virtual false, abstract: false, final false
inline void add_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_drag, addr 0xb43e3fc, size 0xb0, virtual false, abstract: false, final false
inline void add_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_drop, addr 0xb43e6bc, size 0xb0, virtual false, abstract: false, final false
inline void add_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_endDrag, addr 0xb43e55c, size 0xb0, virtual false, abstract: false, final false
inline void add_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_finalizeRaycastResults, addr 0xb43d79c, size 0xb0, virtual false, abstract: false, final false
inline void add_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_initializePotentialDrag, addr 0xb43e13c, size 0xb0, virtual false, abstract: false, final false
inline void add_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_move, addr 0xb43eadc, size 0xb0, virtual false, abstract: false, final false
inline void add_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_pointerClick, addr 0xb43de7c, size 0xb0, virtual false, abstract: false, final false
inline void add_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_pointerDown, addr 0xb43dbbc, size 0xb0, virtual false, abstract: false, final false
inline void add_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_pointerEnter, addr 0xb43d8fc, size 0xb0, virtual false, abstract: false, final false
inline void add_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_pointerExit, addr 0xb43da5c, size 0xb0, virtual false, abstract: false, final false
inline void add_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_pointerMove, addr 0xb43dfdc, size 0xb0, virtual false, abstract: false, final false
inline void add_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_pointerUp, addr 0xb43dd1c, size 0xb0, virtual false, abstract: false, final false
inline void add_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_scroll, addr 0xb43e81c, size 0xb0, virtual false, abstract: false, final false
inline void add_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_submit, addr 0xb43ec3c, size 0xb0, virtual false, abstract: false, final false
inline void add_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_updateSelected, addr 0xb43e97c, size 0xb0, virtual false, abstract: false, final false
inline void add_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

/// @brief Method get_bypassUIToolkitEvents, addr 0xb43a9f0, size 0x8, virtual false, abstract: false, final false
inline bool get_bypassUIToolkitEvents() ;

/// @brief Method get_clickSpeed, addr 0xb43a990, size 0x8, virtual false, abstract: false, final false
inline float_t get_clickSpeed() ;

/// @brief Method get_moveDeadzone, addr 0xb43a9a0, size 0x8, virtual false, abstract: false, final false
inline float_t get_moveDeadzone() ;

/// @brief Method get_repeatDelay, addr 0xb43a9b0, size 0x8, virtual false, abstract: false, final false
inline float_t get_repeatDelay() ;

/// @brief Method get_repeatRate, addr 0xb43a9c0, size 0x8, virtual false, abstract: false, final false
inline float_t get_repeatRate() ;

/// @brief Method get_trackedDeviceDragThresholdMultiplier, addr 0xb43a9d0, size 0x8, virtual false, abstract: false, final false
inline float_t get_trackedDeviceDragThresholdMultiplier() ;

/// @brief Method get_trackedScrollDeltaMultiplier, addr 0xb43a9e0, size 0x8, virtual false, abstract: false, final false
inline float_t get_trackedScrollDeltaMultiplier() ;

/// @brief Method get_uiCamera, addr 0xb43aa00, size 0xd4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> get_uiCamera() ;

/// [CompilerGenerated]
/// @brief Method remove_beginDrag, addr 0xb43e34c, size 0xb0, virtual false, abstract: false, final false
inline void remove_beginDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_cancel, addr 0xb43ee4c, size 0xb0, virtual false, abstract: false, final false
inline void remove_cancel(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_drag, addr 0xb43e4ac, size 0xb0, virtual false, abstract: false, final false
inline void remove_drag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_drop, addr 0xb43e76c, size 0xb0, virtual false, abstract: false, final false
inline void remove_drop(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_endDrag, addr 0xb43e60c, size 0xb0, virtual false, abstract: false, final false
inline void remove_endDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_finalizeRaycastResults, addr 0xb43d84c, size 0xb0, virtual false, abstract: false, final false
inline void remove_finalizeRaycastResults(::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_initializePotentialDrag, addr 0xb43e1ec, size 0xb0, virtual false, abstract: false, final false
inline void remove_initializePotentialDrag(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_move, addr 0xb43eb8c, size 0xb0, virtual false, abstract: false, final false
inline void remove_move(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_pointerClick, addr 0xb43df2c, size 0xb0, virtual false, abstract: false, final false
inline void remove_pointerClick(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_pointerDown, addr 0xb43dc6c, size 0xb0, virtual false, abstract: false, final false
inline void remove_pointerDown(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_pointerEnter, addr 0xb43d9ac, size 0xb0, virtual false, abstract: false, final false
inline void remove_pointerEnter(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_pointerExit, addr 0xb43db0c, size 0xb0, virtual false, abstract: false, final false
inline void remove_pointerExit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_pointerMove, addr 0xb43e08c, size 0xb0, virtual false, abstract: false, final false
inline void remove_pointerMove(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_pointerUp, addr 0xb43ddcc, size 0xb0, virtual false, abstract: false, final false
inline void remove_pointerUp(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_scroll, addr 0xb43e8cc, size 0xb0, virtual false, abstract: false, final false
inline void remove_scroll(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_submit, addr 0xb43ecec, size 0xb0, virtual false, abstract: false, final false
inline void remove_submit(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_updateSelected, addr 0xb43ea2c, size 0xb0, virtual false, abstract: false, final false
inline void remove_updateSelected(::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  value) ;

/// @brief Method set_bypassUIToolkitEvents, addr 0xb43a9f8, size 0x8, virtual false, abstract: false, final false
inline void set_bypassUIToolkitEvents(bool  value) ;

/// @brief Method set_clickSpeed, addr 0xb43a998, size 0x8, virtual false, abstract: false, final false
inline void set_clickSpeed(float_t  value) ;

/// @brief Method set_moveDeadzone, addr 0xb43a9a8, size 0x8, virtual false, abstract: false, final false
inline void set_moveDeadzone(float_t  value) ;

/// @brief Method set_repeatDelay, addr 0xb43a9b8, size 0x8, virtual false, abstract: false, final false
inline void set_repeatDelay(float_t  value) ;

/// @brief Method set_repeatRate, addr 0xb43a9c8, size 0x8, virtual false, abstract: false, final false
inline void set_repeatRate(float_t  value) ;

/// @brief Method set_trackedDeviceDragThresholdMultiplier, addr 0xb43a9d8, size 0x8, virtual false, abstract: false, final false
inline void set_trackedDeviceDragThresholdMultiplier(float_t  value) ;

/// @brief Method set_trackedScrollDeltaMultiplier, addr 0xb43a9e8, size 0x8, virtual false, abstract: false, final false
inline void set_trackedScrollDeltaMultiplier(float_t  value) ;

/// @brief Method set_uiCamera, addr 0xb43aad4, size 0x8, virtual false, abstract: false, final false
inline void set_uiCamera(::UnityEngine::Camera*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UIInputModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UIInputModule", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UIInputModule(UIInputModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UIInputModule", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UIInputModule(UIInputModule const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11303};

/// [Header("Configuration")]
/// [SerializeField]
/// [FormerlySerializedAs("clickSpeed")]
/// [Tooltip("The maximum time (in seconds) between two mouse presses for it to be consecutive click.")]
/// @brief Field m_ClickSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___m_ClickSpeed;

/// [SerializeField]
/// [FormerlySerializedAs("moveDeadzone")]
/// [Tooltip("The absolute value required by a move action on either axis required to trigger a move event.")]
/// @brief Field m_MoveDeadzone, offset: 0x5c, size: 0x4, def value: None
 float_t  ___m_MoveDeadzone;

/// [SerializeField]
/// [FormerlySerializedAs("repeatDelay")]
/// [Tooltip("The Initial delay (in seconds) between an initial move action and a repeated move action.")]
/// @brief Field m_RepeatDelay, offset: 0x60, size: 0x4, def value: None
 float_t  ___m_RepeatDelay;

/// [FormerlySerializedAs("repeatRate")]
/// [SerializeField]
/// [Tooltip("The speed (in seconds) that the move action repeats itself once repeating.")]
/// @brief Field m_RepeatRate, offset: 0x64, size: 0x4, def value: None
 float_t  ___m_RepeatRate;

/// [FormerlySerializedAs("trackedDeviceDragThresholdMultiplier")]
/// [SerializeField]
/// [Tooltip("Scales the EventSystem.pixelDragThreshold, for tracked devices, to make selection easier.")]
/// @brief Field m_TrackedDeviceDragThresholdMultiplier, offset: 0x68, size: 0x4, def value: None
 float_t  ___m_TrackedDeviceDragThresholdMultiplier;

/// [SerializeField]
/// [Tooltip("Scales the scrollDelta in event data, for tracked devices, to scroll at an expected speed.")]
/// @brief Field m_TrackedScrollDeltaMultiplier, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_TrackedScrollDeltaMultiplier;

/// [SerializeField]
/// [Tooltip("Disables sending events from Event System to UI Toolkit on behalf of this Input Module.")]
/// @brief Field m_BypassUIToolkitEvents, offset: 0x70, size: 0x1, def value: None
 bool  ___m_BypassUIToolkitEvents;

/// @brief Field m_UICamera, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_UICamera;

/// @brief Field m_MainCameraCache, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ___m_MainCameraCache;

/// @brief Field m_CachedAxisEvent, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::EventSystems::AxisEventData*  ___m_CachedAxisEvent;

/// @brief Field m_PointerEventByPointerId, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::EventSystems::PointerEventData*>*  ___m_PointerEventByPointerId;

/// @brief Field m_TrackedDeviceEventByPointerId, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::XR::Interaction::Toolkit::UI::TrackedDeviceEventData*>*  ___m_TrackedDeviceEventByPointerId;

/// [CompilerGenerated]
/// @brief Field finalizeRaycastResults, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::EventSystems::PointerEventData*,::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>*  ___finalizeRaycastResults;

/// [CompilerGenerated]
/// @brief Field pointerEnter, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___pointerEnter;

/// [CompilerGenerated]
/// @brief Field pointerExit, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___pointerExit;

/// [CompilerGenerated]
/// @brief Field pointerDown, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___pointerDown;

/// [CompilerGenerated]
/// @brief Field pointerUp, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___pointerUp;

/// [CompilerGenerated]
/// @brief Field pointerClick, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___pointerClick;

/// [CompilerGenerated]
/// @brief Field pointerMove, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___pointerMove;

/// [CompilerGenerated]
/// @brief Field initializePotentialDrag, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___initializePotentialDrag;

/// [CompilerGenerated]
/// @brief Field beginDrag, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___beginDrag;

/// [CompilerGenerated]
/// @brief Field drag, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___drag;

/// [CompilerGenerated]
/// @brief Field endDrag, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___endDrag;

/// [CompilerGenerated]
/// @brief Field drop, offset: 0xf8, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___drop;

/// [CompilerGenerated]
/// @brief Field scroll, offset: 0x100, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::PointerEventData*>*  ___scroll;

/// [CompilerGenerated]
/// @brief Field updateSelected, offset: 0x108, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  ___updateSelected;

/// [CompilerGenerated]
/// @brief Field move, offset: 0x110, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::AxisEventData*>*  ___move;

/// [CompilerGenerated]
/// @brief Field submit, offset: 0x118, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  ___submit;

/// [CompilerGenerated]
/// @brief Field cancel, offset: 0x120, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::GameObject>,::UnityEngine::EventSystems::BaseEventData*>*  ___cancel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_ClickSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_MoveDeadzone) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_RepeatDelay) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_RepeatRate) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_TrackedDeviceDragThresholdMultiplier) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_TrackedScrollDeltaMultiplier) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_BypassUIToolkitEvents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_UICamera) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_MainCameraCache) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_CachedAxisEvent) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_PointerEventByPointerId) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___m_TrackedDeviceEventByPointerId) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___finalizeRaycastResults) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerEnter) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerExit) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerDown) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerUp) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerClick) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___pointerMove) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___initializePotentialDrag) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___beginDrag) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___drag) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___endDrag) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___drop) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___scroll) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___updateSelected) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___move) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___submit) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule, ___cancel) == 0x120, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::UI::UIInputModule) == 0x128, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::UI
