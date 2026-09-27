#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DragEventsProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__DragEventsProcessor_DragState_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DragEventsProcessor)
namespace GlobalNamespace {
struct DragEventsProcessor_DragState;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class IDragAndDrop;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerLeaveEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerOutEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
struct StartDragArgs;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DragEventsProcessor;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::DragEventsProcessor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::DragEventsProcessor*, "UnityEngine.UIElements", "DragEventsProcessor");
// Dependencies System.Object, UnityEngine.UIElements.DragEventsProcessor::DragState, UnityEngine.Vector3
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DragEventsProcessor
class CORDL_TYPE DragEventsProcessor : public ::System::Object {
public:
// Declarations
using DragState = ::GlobalNamespace::DragEventsProcessor_DragState;

 __declspec(property(get=get_dragAndDrop)) ::UnityEngine::UIElements::IDragAndDrop*  dragAndDrop;

 __declspec(property(get=get_isEditorContext)) bool  isEditorContext;

/// @brief Field m_DragState, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DragState, put=__cordl_internal_set_m_DragState)) ::GlobalNamespace::DragEventsProcessor_DragState  m_DragState;

/// @brief Field m_IsRegistered, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsRegistered, put=__cordl_internal_set_m_IsRegistered)) bool  m_IsRegistered;

/// @brief Field m_PendingPerformDrag, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PendingPerformDrag, put=__cordl_internal_set_m_PendingPerformDrag)) bool  m_PendingPerformDrag;

/// @brief Field m_Start, offset 0x18, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_Start, put=__cordl_internal_set_m_Start)) ::UnityEngine::Vector3  m_Start;

/// @brief Field m_Target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityEngine::UIElements::VisualElement*  m_Target;

 __declspec(property(get=get_supportsDragEvents)) bool  supportsDragEvents;

 __declspec(property(get=get_useDragEvents)) bool  useDragEvents;

/// @brief Method CanStartDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanStartDrag(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method CancelDragAndDrop, addr 0xb882a9c, size 0x13c, virtual false, abstract: false, final false
inline void CancelDragAndDrop(int32_t  releaseCapturePointerId) ;

/// @brief Method ClearDragAndDropUI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearDragAndDropUI(bool  dragCancelled) ;

/// @brief Method GetDropTarget, addr 0xb882960, size 0xe0, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::DragEventsProcessor* GetDropTarget(::UnityEngine::Vector2  position) ;

static inline ::UnityEngine::UIElements::DragEventsProcessor* New_ctor(::UnityEngine::UIElements::VisualElement*  target) ;

/// @brief Method OnDrop, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnDrop(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method OnGeometryChanged, addr 0xb882be0, size 0xd4, virtual false, abstract: false, final false
inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent*  evt) ;

/// @brief Method OnPointerCancelEvent, addr 0xb882a50, size 0x4c, virtual false, abstract: false, final false
inline void OnPointerCancelEvent(::UnityEngine::UIElements::PointerCancelEvent*  evt) ;

/// @brief Method OnPointerCapturedOut, addr 0xb882bd8, size 0x8, virtual false, abstract: false, final false
inline void OnPointerCapturedOut(::UnityEngine::UIElements::PointerCaptureOutEvent*  evt) ;

/// @brief Method OnPointerDownEvent, addr 0xb88268c, size 0x94, virtual false, abstract: false, final false
inline void OnPointerDownEvent(::UnityEngine::UIElements::PointerDownEvent*  evt) ;

/// @brief Method OnPointerLeaveEvent, addr 0xb882a40, size 0x10, virtual false, abstract: false, final false
inline void OnPointerLeaveEvent(::UnityEngine::UIElements::PointerLeaveEvent*  evt) ;

/// @brief Method OnPointerMoveEvent, addr 0xb882cb4, size 0x2ec, virtual false, abstract: false, final false
inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent*  evt) ;

/// @brief Method OnPointerOutEvent, addr 0xb882720, size 0x9c, virtual false, abstract: false, final false
inline void OnPointerOutEvent(::UnityEngine::UIElements::PointerOutEvent*  evt) ;

/// @brief Method OnPointerUpEvent, addr 0xb8827bc, size 0x1a4, virtual false, abstract: false, final false
inline void OnPointerUpEvent(::UnityEngine::UIElements::PointerUpEvent*  evt) ;

/// @brief Method RegisterCallbacksFromTarget, addr 0xb881db4, size 0x3e8, virtual false, abstract: false, final false
inline void RegisterCallbacksFromTarget() ;

/// @brief Method RegisterCallbacksFromTarget, addr 0xb88219c, size 0x4, virtual false, abstract: false, final false
inline void RegisterCallbacksFromTarget(::UnityEngine::UIElements::AttachToPanelEvent*  evt) ;

/// @brief Method StartDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::UIElements::StartDragArgs StartDrag(::UnityEngine::Vector3  pointerPosition) ;

/// @brief Method UnregisterCallbacksFromTarget, addr 0xb8821a0, size 0x8, virtual false, abstract: false, final false
inline void UnregisterCallbacksFromTarget(::UnityEngine::UIElements::DetachFromPanelEvent*  evt) ;

/// @brief Method UnregisterCallbacksFromTarget, addr 0xb8821a8, size 0x4e4, virtual false, abstract: false, final false
inline void UnregisterCallbacksFromTarget(bool  unregisterPanelEvents) ;

/// @brief Method UpdateDrag, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateDrag(::UnityEngine::Vector3  pointerPosition) ;

constexpr ::GlobalNamespace::DragEventsProcessor_DragState const& __cordl_internal_get_m_DragState() const;

constexpr ::GlobalNamespace::DragEventsProcessor_DragState& __cordl_internal_get_m_DragState() ;

constexpr bool const& __cordl_internal_get_m_IsRegistered() const;

constexpr bool& __cordl_internal_get_m_IsRegistered() ;

constexpr bool const& __cordl_internal_get_m_PendingPerformDrag() const;

constexpr bool& __cordl_internal_get_m_PendingPerformDrag() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Start() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Start() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Target() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Target() ;

constexpr void __cordl_internal_set_m_DragState(::GlobalNamespace::DragEventsProcessor_DragState  value) ;

constexpr void __cordl_internal_set_m_IsRegistered(bool  value) ;

constexpr void __cordl_internal_set_m_PendingPerformDrag(bool  value) ;

constexpr void __cordl_internal_set_m_Start(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityEngine::UIElements::VisualElement*  value) ;

/// @brief Method .ctor, addr 0xb881c6c, size 0x148, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::VisualElement*  target) ;

/// @brief Method get_dragAndDrop, addr 0xb881b2c, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::IDragAndDrop* get_dragAndDrop() ;

/// @brief Method get_isEditorContext, addr 0xb881b4c, size 0x120, virtual true, abstract: false, final false
inline bool get_isEditorContext() ;

/// @brief Method get_supportsDragEvents, addr 0xb881aec, size 0x8, virtual true, abstract: false, final false
inline bool get_supportsDragEvents() ;

/// @brief Method get_useDragEvents, addr 0xb881af4, size 0x38, virtual false, abstract: false, final false
inline bool get_useDragEvents() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DragEventsProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DragEventsProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DragEventsProcessor(DragEventsProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DragEventsProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DragEventsProcessor(DragEventsProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7541};

/// @brief Field m_IsRegistered, offset: 0x10, size: 0x1, def value: None
 bool  ___m_IsRegistered;

/// @brief Field m_DragState, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::DragEventsProcessor_DragState  ___m_DragState;

/// @brief Field m_Start, offset: 0x18, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_Start;

/// @brief Field m_PendingPerformDrag, offset: 0x24, size: 0x1, def value: None
 bool  ___m_PendingPerformDrag;

/// @brief Field m_Target, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ___m_Target;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_IsRegistered) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_DragState) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_Start) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_PendingPerformDrag) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::DragEventsProcessor, ___m_Target) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::DragEventsProcessor) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
