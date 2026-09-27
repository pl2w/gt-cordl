#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_EventPropagation_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_LifeCycleStatus_def.hpp"
#include "UnityEngine/UIElements/zzzz__PropagationPhase_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventBase)
namespace GlobalNamespace {
struct EventBase_EventPropagation;
}
namespace GlobalNamespace {
struct EventBase_LifeCycleStatus;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct EventCategory;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
struct PropagationPhase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Event;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class EventBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::EventBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::EventBase*, "UnityEngine.UIElements", "EventBase");
// Dependencies System.Object, UnityEngine.UIElements.EventBase::EventPropagation, UnityEngine.UIElements.EventBase::LifeCycleStatus, UnityEngine.UIElements.PropagationPhase, UnityEngine.Vector2
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.EventBase
class CORDL_TYPE EventBase : public ::System::Object {
public:
// Declarations
using EventPropagation = ::GlobalNamespace::EventBase_EventPropagation;

using LifeCycleStatus = ::GlobalNamespace::EventBase_LifeCycleStatus;

/// @brief Field <elementTarget>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__elementTarget_k__BackingField, put=__cordl_internal_set__elementTarget_k__BackingField)) ::UnityEngine::UIElements::VisualElement*  _elementTarget_k__BackingField;

/// @brief Field <eventCategories>k__BackingField, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__eventCategories_k__BackingField, put=__cordl_internal_set__eventCategories_k__BackingField)) int32_t  _eventCategories_k__BackingField;

/// @brief Field <eventId>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventId_k__BackingField, put=__cordl_internal_set__eventId_k__BackingField)) uint64_t  _eventId_k__BackingField;

/// @brief Field <lifeCycleStatus>k__BackingField, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__lifeCycleStatus_k__BackingField, put=__cordl_internal_set__lifeCycleStatus_k__BackingField)) ::GlobalNamespace::EventBase_LifeCycleStatus  _lifeCycleStatus_k__BackingField;

/// @brief Field <originalMousePosition>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalMousePosition_k__BackingField, put=__cordl_internal_set__originalMousePosition_k__BackingField)) ::UnityEngine::Vector2  _originalMousePosition_k__BackingField;

/// @brief Field <propagationPhase>k__BackingField, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__propagationPhase_k__BackingField, put=__cordl_internal_set__propagationPhase_k__BackingField)) ::UnityEngine::UIElements::PropagationPhase  _propagationPhase_k__BackingField;

/// @brief Field <propagation>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__propagation_k__BackingField, put=__cordl_internal_set__propagation_k__BackingField)) ::GlobalNamespace::EventBase_EventPropagation  _propagation_k__BackingField;

/// @brief Field <timestamp>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__timestamp_k__BackingField, put=__cordl_internal_set__timestamp_k__BackingField)) int64_t  _timestamp_k__BackingField;

/// @brief Field <triggerEventId>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__triggerEventId_k__BackingField, put=__cordl_internal_set__triggerEventId_k__BackingField)) uint64_t  _triggerEventId_k__BackingField;

 __declspec(property(get=get_bubbles, put=set_bubbles)) bool  bubbles;

 __declspec(property(get=get_bubblesOrTricklesDown)) bool  bubblesOrTricklesDown;

 __declspec(property(get=get_currentTarget, put=set_currentTarget)) ::UnityEngine::UIElements::IEventHandler*  currentTarget;

 __declspec(property(get=get_dispatch, put=set_dispatch)) bool  dispatch;

 __declspec(property(get=get_dispatched, put=set_dispatched)) bool  dispatched;

/// @brief [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
 __declspec(property(get=get_elementTarget, put=set_elementTarget)) ::UnityEngine::UIElements::VisualElement*  elementTarget;

 __declspec(property(get=get_eventCategories)) int32_t  eventCategories;

 __declspec(property(get=get_eventId, put=set_eventId)) uint64_t  eventId;

 __declspec(property(get=get_eventTypeId)) int64_t  eventTypeId;

 __declspec(property(get=get_imguiEvent, put=set_imguiEvent)) ::UnityEngine::Event*  imguiEvent;

 __declspec(property(get=get_imguiEventIsValid, put=set_imguiEventIsValid)) bool  imguiEventIsValid;

 __declspec(property(get=get_isImmediatePropagationStopped, put=set_isImmediatePropagationStopped)) bool  isImmediatePropagationStopped;

 __declspec(property(get=get_isPropagationStopped, put=set_isPropagationStopped)) bool  isPropagationStopped;

 __declspec(property(get=get_lifeCycleStatus, put=set_lifeCycleStatus)) ::GlobalNamespace::EventBase_LifeCycleStatus  lifeCycleStatus;

/// @brief Field m_CurrentTarget, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentTarget, put=__cordl_internal_set_m_CurrentTarget)) ::UnityEngine::UIElements::IEventHandler*  m_CurrentTarget;

/// @brief Field m_ImguiEvent, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ImguiEvent, put=__cordl_internal_set_m_ImguiEvent)) ::UnityEngine::Event*  m_ImguiEvent;

 __declspec(property(get=get_originalMousePosition, put=set_originalMousePosition)) ::UnityEngine::Vector2  originalMousePosition;

 __declspec(property(get=get_pooled, put=set_pooled)) bool  pooled;

 __declspec(property(get=get_processed, put=set_processed)) bool  processed;

 __declspec(property(get=get_processedByFocusController, put=set_processedByFocusController)) bool  processedByFocusController;

 __declspec(property(get=get_propagateToIMGUI, put=set_propagateToIMGUI)) bool  propagateToIMGUI;

 __declspec(property(get=get_propagation, put=set_propagation)) ::GlobalNamespace::EventBase_EventPropagation  propagation;

 __declspec(property(put=set_propagationPhase)) ::UnityEngine::UIElements::PropagationPhase  propagationPhase;

/// @brief Field s_LastTypeId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_LastTypeId, put=setStaticF_s_LastTypeId)) int64_t  s_LastTypeId;

/// @brief Field s_NextEventId, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_NextEventId, put=setStaticF_s_NextEventId)) uint64_t  s_NextEventId;

 __declspec(property(get=get_skipDisabledElements, put=set_skipDisabledElements)) bool  skipDisabledElements;

 __declspec(property(get=get_target, put=set_target)) ::UnityEngine::UIElements::IEventHandler*  target;

 __declspec(property(get=get_timestamp, put=set_timestamp)) int64_t  timestamp;

 __declspec(property(get=get_tricklesDown, put=set_tricklesDown)) bool  tricklesDown;

 __declspec(property(put=set_triggerEventId)) uint64_t  triggerEventId;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Acquire, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Acquire() ;

/// @brief Method Dispatch, addr 0xb88f630, size 0x4, virtual true, abstract: false, final false
inline void Dispatch(/* [NotNull] */ ::UnityEngine::UIElements::BaseVisualElementPanel*  panel) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Dispose() ;

/// @brief Method Init, addr 0xb88fab0, size 0x4, virtual true, abstract: false, final false
inline void Init() ;

/// @brief Method LocalInit, addr 0xb88fab4, size 0x108, virtual false, abstract: false, final false
inline void LocalInit() ;

/// @brief Method MarkReceivedByDispatcher, addr 0xb88c6a8, size 0x88, virtual false, abstract: false, final false
inline void MarkReceivedByDispatcher() ;

static inline ::UnityEngine::UIElements::EventBase* New_ctor() ;

static inline ::UnityEngine::UIElements::EventBase* New_ctor(::UnityEngine::UIElements::EventCategory  category) ;

/// [Obsolete("Override PostDispatch(IPanel panel) instead.")]
/// @brief Method PostDispatch, addr 0xb88f5e4, size 0x4, virtual true, abstract: false, final false
inline void PostDispatch() ;

/// @brief Method PostDispatch, addr 0xb88f5e8, size 0x28, virtual true, abstract: false, final false
inline void PostDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// [Obsolete("Override PreDispatch(IPanel panel) instead.")]
/// @brief Method PreDispatch, addr 0xb88f5e0, size 0x4, virtual true, abstract: false, final false
inline void PreDispatch() ;

/// @brief Method PreDispatch, addr 0xb88d4fc, size 0xc, virtual true, abstract: false, final false
inline void PreDispatch(::UnityEngine::UIElements::IPanel*  panel) ;

/// @brief Method RegisterEventType, addr 0xb88f530, size 0x50, virtual false, abstract: false, final false
static inline int64_t RegisterEventType() ;

/// @brief Method SetTriggerEventId, addr 0xb88f5b8, size 0x8, virtual false, abstract: false, final false
inline void SetTriggerEventId(uint64_t  id) ;

/// @brief Method StopImmediatePropagation, addr 0xb88f7d4, size 0x10, virtual false, abstract: false, final false
inline void StopImmediatePropagation() ;

/// @brief Method StopPropagation, addr 0xb88f798, size 0x10, virtual false, abstract: false, final false
inline void StopPropagation() ;

constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__elementTarget_k__BackingField() const;

constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__elementTarget_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__eventCategories_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__eventCategories_k__BackingField() ;

constexpr uint64_t const& __cordl_internal_get__eventId_k__BackingField() const;

constexpr uint64_t& __cordl_internal_get__eventId_k__BackingField() ;

constexpr ::GlobalNamespace::EventBase_LifeCycleStatus const& __cordl_internal_get__lifeCycleStatus_k__BackingField() const;

constexpr ::GlobalNamespace::EventBase_LifeCycleStatus& __cordl_internal_get__lifeCycleStatus_k__BackingField() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__originalMousePosition_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__originalMousePosition_k__BackingField() ;

constexpr ::UnityEngine::UIElements::PropagationPhase const& __cordl_internal_get__propagationPhase_k__BackingField() const;

constexpr ::UnityEngine::UIElements::PropagationPhase& __cordl_internal_get__propagationPhase_k__BackingField() ;

constexpr ::GlobalNamespace::EventBase_EventPropagation const& __cordl_internal_get__propagation_k__BackingField() const;

constexpr ::GlobalNamespace::EventBase_EventPropagation& __cordl_internal_get__propagation_k__BackingField() ;

constexpr int64_t const& __cordl_internal_get__timestamp_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__timestamp_k__BackingField() ;

constexpr uint64_t const& __cordl_internal_get__triggerEventId_k__BackingField() const;

constexpr uint64_t& __cordl_internal_get__triggerEventId_k__BackingField() ;

constexpr ::UnityEngine::UIElements::IEventHandler* const& __cordl_internal_get_m_CurrentTarget() const;

constexpr ::UnityEngine::UIElements::IEventHandler*& __cordl_internal_get_m_CurrentTarget() ;

constexpr ::UnityEngine::Event* const& __cordl_internal_get_m_ImguiEvent() const;

constexpr ::UnityEngine::Event*& __cordl_internal_get_m_ImguiEvent() ;

constexpr void __cordl_internal_set__elementTarget_k__BackingField(::UnityEngine::UIElements::VisualElement*  value) ;

constexpr void __cordl_internal_set__eventCategories_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__eventId_k__BackingField(uint64_t  value) ;

constexpr void __cordl_internal_set__lifeCycleStatus_k__BackingField(::GlobalNamespace::EventBase_LifeCycleStatus  value) ;

constexpr void __cordl_internal_set__originalMousePosition_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__propagationPhase_k__BackingField(::UnityEngine::UIElements::PropagationPhase  value) ;

constexpr void __cordl_internal_set__propagation_k__BackingField(::GlobalNamespace::EventBase_EventPropagation  value) ;

constexpr void __cordl_internal_set__timestamp_k__BackingField(int64_t  value) ;

constexpr void __cordl_internal_set__triggerEventId_k__BackingField(uint64_t  value) ;

constexpr void __cordl_internal_set_m_CurrentTarget(::UnityEngine::UIElements::IEventHandler*  value) ;

constexpr void __cordl_internal_set_m_ImguiEvent(::UnityEngine::Event*  value) ;

/// @brief Method .ctor, addr 0xb88fbdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb88fbe4, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::UIElements::EventCategory  category) ;

static inline int64_t getStaticF_s_LastTypeId() ;

static inline uint64_t getStaticF_s_NextEventId() ;

/// @brief Method get_bubbles, addr 0xb88f668, size 0xc, virtual false, abstract: false, final false
inline bool get_bubbles() ;

/// @brief Method get_bubblesOrTricklesDown, addr 0xb88f6dc, size 0x10, virtual false, abstract: false, final false
inline bool get_bubblesOrTricklesDown() ;

/// @brief Method get_currentTarget, addr 0xb88f7ec, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::IEventHandler* get_currentTarget() ;

/// @brief Method get_dispatch, addr 0xb88f8f0, size 0xc, virtual false, abstract: false, final false
inline bool get_dispatch() ;

/// @brief Method get_dispatched, addr 0xb88f93c, size 0xc, virtual false, abstract: false, final false
inline bool get_dispatched() ;

/// [CompilerGenerated]
/// @brief Method get_elementTarget, addr 0xb88f6ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::VisualElement* get_elementTarget() ;

/// [CompilerGenerated]
/// @brief Method get_eventCategories, addr 0xb88f588, size 0x8, virtual false, abstract: false, final false
inline int32_t get_eventCategories() ;

/// [CompilerGenerated]
/// @brief Method get_eventId, addr 0xb88f5a0, size 0x8, virtual false, abstract: false, final false
inline uint64_t get_eventId() ;

/// @brief Method get_eventTypeId, addr 0xb88f580, size 0x8, virtual true, abstract: false, final false
inline int64_t get_eventTypeId() ;

/// @brief Method get_imguiEvent, addr 0xb88c730, size 0x18, virtual false, abstract: false, final false
inline ::UnityEngine::Event* get_imguiEvent() ;

/// @brief Method get_imguiEventIsValid, addr 0xb88f9ac, size 0xc, virtual false, abstract: false, final false
inline bool get_imguiEventIsValid() ;

/// @brief Method get_isImmediatePropagationStopped, addr 0xb88f7a8, size 0xc, virtual false, abstract: false, final false
inline bool get_isImmediatePropagationStopped() ;

/// @brief Method get_isPropagationStopped, addr 0xb88d1b4, size 0xc, virtual false, abstract: false, final false
inline bool get_isPropagationStopped() ;

/// [CompilerGenerated]
/// @brief Method get_lifeCycleStatus, addr 0xb88f5d0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EventBase_LifeCycleStatus get_lifeCycleStatus() ;

/// [CompilerGenerated]
/// @brief Method get_originalMousePosition, addr 0xb88faa0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_originalMousePosition() ;

/// @brief Method get_pooled, addr 0xb88fc28, size 0xc, virtual false, abstract: false, final false
inline bool get_pooled() ;

/// @brief Method get_processed, addr 0xb88f948, size 0xc, virtual false, abstract: false, final false
inline bool get_processed() ;

/// @brief Method get_processedByFocusController, addr 0xb88f954, size 0xc, virtual false, abstract: false, final false
inline bool get_processedByFocusController() ;

/// @brief Method get_propagateToIMGUI, addr 0xb88f980, size 0xc, virtual false, abstract: false, final false
inline bool get_propagateToIMGUI() ;

/// [CompilerGenerated]
/// @brief Method get_propagation, addr 0xb88f5c0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::EventBase_EventPropagation get_propagation() ;

/// @brief Method get_skipDisabledElements, addr 0xb88f6b0, size 0xc, virtual false, abstract: false, final false
inline bool get_skipDisabledElements() ;

/// @brief Method get_target, addr 0xb88f6fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::IEventHandler* get_target() ;

/// [CompilerGenerated]
/// @brief Method get_timestamp, addr 0xb88f590, size 0x8, virtual false, abstract: false, final false
inline int64_t get_timestamp() ;

/// @brief Method get_tricklesDown, addr 0xb88f684, size 0xc, virtual false, abstract: false, final false
inline bool get_tricklesDown() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_s_LastTypeId(int64_t  value) ;

static inline void setStaticF_s_NextEventId(uint64_t  value) ;

/// @brief Method set_bubbles, addr 0xb88f674, size 0x10, virtual false, abstract: false, final false
inline void set_bubbles(bool  value) ;

/// @brief Method set_currentTarget, addr 0xb88f7f4, size 0xfc, virtual true, abstract: false, final false
inline void set_currentTarget(::UnityEngine::UIElements::IEventHandler*  value) ;

/// @brief Method set_dispatch, addr 0xb88f8fc, size 0x20, virtual false, abstract: false, final false
inline void set_dispatch(bool  value) ;

/// @brief Method set_dispatched, addr 0xb88f91c, size 0x20, virtual false, abstract: false, final false
inline void set_dispatched(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_elementTarget, addr 0xb88f6f4, size 0x8, virtual false, abstract: false, final false
inline void set_elementTarget(::UnityEngine::UIElements::VisualElement*  value) ;

/// [CompilerGenerated]
/// @brief Method set_eventId, addr 0xb88f5a8, size 0x8, virtual false, abstract: false, final false
inline void set_eventId(uint64_t  value) ;

/// @brief Method set_imguiEvent, addr 0xb88f9d8, size 0xc8, virtual false, abstract: false, final false
inline void set_imguiEvent(::UnityEngine::Event*  value) ;

/// @brief Method set_imguiEventIsValid, addr 0xb88f9b8, size 0x20, virtual false, abstract: false, final false
inline void set_imguiEventIsValid(bool  value) ;

/// @brief Method set_isImmediatePropagationStopped, addr 0xb88f7b4, size 0x20, virtual false, abstract: false, final false
inline void set_isImmediatePropagationStopped(bool  value) ;

/// @brief Method set_isPropagationStopped, addr 0xb88f788, size 0x10, virtual false, abstract: false, final false
inline void set_isPropagationStopped(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_lifeCycleStatus, addr 0xb88f5d8, size 0x8, virtual false, abstract: false, final false
inline void set_lifeCycleStatus(::GlobalNamespace::EventBase_LifeCycleStatus  value) ;

/// [CompilerGenerated]
/// @brief Method set_originalMousePosition, addr 0xb88faa8, size 0x8, virtual false, abstract: false, final false
inline void set_originalMousePosition(::UnityEngine::Vector2  value) ;

/// @brief Method set_pooled, addr 0xb88fbbc, size 0x20, virtual false, abstract: false, final false
inline void set_pooled(bool  value) ;

/// @brief Method set_processed, addr 0xb88f610, size 0x20, virtual false, abstract: false, final false
inline void set_processed(bool  value) ;

/// @brief Method set_processedByFocusController, addr 0xb88f960, size 0x20, virtual false, abstract: false, final false
inline void set_processedByFocusController(bool  value) ;

/// @brief Method set_propagateToIMGUI, addr 0xb88f98c, size 0x20, virtual false, abstract: false, final false
inline void set_propagateToIMGUI(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_propagation, addr 0xb88f5c8, size 0x8, virtual false, abstract: false, final false
inline void set_propagation(::GlobalNamespace::EventBase_EventPropagation  value) ;

/// [CompilerGenerated]
/// @brief Method set_propagationPhase, addr 0xb88f7e4, size 0x8, virtual false, abstract: false, final false
inline void set_propagationPhase(::UnityEngine::UIElements::PropagationPhase  value) ;

/// @brief Method set_skipDisabledElements, addr 0xb88f6bc, size 0x20, virtual false, abstract: false, final false
inline void set_skipDisabledElements(bool  value) ;

/// @brief Method set_target, addr 0xb88f704, size 0x84, virtual false, abstract: false, final false
inline void set_target(::UnityEngine::UIElements::IEventHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_timestamp, addr 0xb88f598, size 0x8, virtual false, abstract: false, final false
inline void set_timestamp(int64_t  value) ;

/// @brief Method set_tricklesDown, addr 0xb88f690, size 0x20, virtual false, abstract: false, final false
inline void set_tricklesDown(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_triggerEventId, addr 0xb88f5b0, size 0x8, virtual false, abstract: false, final false
inline void set_triggerEventId(uint64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EventBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EventBase(EventBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EventBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EventBase(EventBase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{7596};

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <eventCategories>k__BackingField, offset: 0x10, size: 0x4, def value: None
 int32_t  ____eventCategories_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <timestamp>k__BackingField, offset: 0x18, size: 0x8, def value: None
 int64_t  ____timestamp_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <eventId>k__BackingField, offset: 0x20, size: 0x8, def value: None
 uint64_t  ____eventId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <triggerEventId>k__BackingField, offset: 0x28, size: 0x8, def value: None
 uint64_t  ____triggerEventId_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <propagation>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::EventBase_EventPropagation  ____propagation_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <lifeCycleStatus>k__BackingField, offset: 0x34, size: 0x4, def value: None
 ::GlobalNamespace::EventBase_LifeCycleStatus  ____lifeCycleStatus_k__BackingField;

/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// [CompilerGenerated]
/// @brief Field <elementTarget>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::UIElements::VisualElement*  ____elementTarget_k__BackingField;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <propagationPhase>k__BackingField, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::UIElements::PropagationPhase  ____propagationPhase_k__BackingField;

/// @brief Field m_CurrentTarget, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::UIElements::IEventHandler*  ___m_CurrentTarget;

/// @brief Field m_ImguiEvent, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Event*  ___m_ImguiEvent;

/// [CompilerGenerated]
/// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
/// @brief Field <originalMousePosition>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____originalMousePosition_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____eventCategories_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____timestamp_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____eventId_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____triggerEventId_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____propagation_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____lifeCycleStatus_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____elementTarget_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____propagationPhase_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_CurrentTarget) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ___m_ImguiEvent) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::EventBase, ____originalMousePosition_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::EventBase) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
