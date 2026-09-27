#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputActionState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionMap_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_GlobalState_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionState_UnmanagedMemory_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InputActionState)
namespace GlobalNamespace {
struct InputActionState_ActionMapIndices;
}
namespace GlobalNamespace {
struct InputActionState_BindingState;
}
namespace GlobalNamespace {
struct InputActionState_GlobalState;
}
namespace GlobalNamespace {
struct InputActionState_InteractionState;
}
namespace GlobalNamespace {
struct InputActionState_TriggerState;
}
namespace GlobalNamespace {
struct InputActionState_UnmanagedMemory;
}
namespace GlobalNamespace {
struct InputAction_CallbackContext;
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
class Action;
}
namespace System {
class ICloneable;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEvent;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace UnityEngine::InputSystem::Utilities {
class ISavedState;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename T>
class SavedStructState_1_TypedRestore;
}
namespace UnityEngine::InputSystem {
struct InputActionChange;
}
namespace UnityEngine::InputSystem {
class InputActionMap;
}
namespace UnityEngine::InputSystem {
struct InputActionPhase;
}
namespace UnityEngine::InputSystem {
class InputActionState___c;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputBindingResolver;
}
namespace UnityEngine::InputSystem {
struct InputBinding;
}
namespace UnityEngine::InputSystem {
template<typename TControl>
struct InputControlList_1;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
class InputActionState___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::InputActionState*);
MARK_REF_T(::UnityEngine::InputSystem::InputActionState___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionState*, "UnityEngine.InputSystem", "InputActionState");
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::InputActionState___c*, "UnityEngine.InputSystem", "InputActionState/<>c");
// Dependencies System.Collections.Generic.IComparer`1<T>, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.InputSystem.InputActionMap, UnityEngine.InputSystem.InputActionState::GlobalState, UnityEngine.InputSystem.InputActionState::UnmanagedMemory, UnityEngine.InputSystem.InputBindingComposite, UnityEngine.InputSystem.InputControl, UnityEngine.InputSystem.InputProcessor, UnityEngine.InputSystem.LowLevel.InputEventPtr
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionState
class CORDL_TYPE InputActionState : public ::System::Object {
public:
// Declarations
using ActionMapIndices = ::GlobalNamespace::InputActionState_ActionMapIndices;

using BindingState = ::GlobalNamespace::InputActionState_BindingState;

using GlobalState = ::GlobalNamespace::InputActionState_GlobalState;

using InteractionState = ::GlobalNamespace::InputActionState_InteractionState;

using TriggerState = ::GlobalNamespace::InputActionState_TriggerState;

using UnmanagedMemory = ::GlobalNamespace::InputActionState_UnmanagedMemory;

using __c = ::UnityEngine::InputSystem::InputActionState___c;

 __declspec(property(get=get_actionStates)) ::GlobalNamespace::InputActionState_TriggerState*  actionStates;

 __declspec(property(get=get_bindingStates)) ::GlobalNamespace::InputActionState_BindingState*  bindingStates;

/// @brief Field composites, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_composites, put=__cordl_internal_set_composites)) ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>  composites;

 __declspec(property(get=get_controlGroupingAndComplexity)) uint16_t*  controlGroupingAndComplexity;

 __declspec(property(get=get_controlIndexToBindingIndex)) int32_t*  controlIndexToBindingIndex;

 __declspec(property(get=get_controlMagnitudes)) float_t*  controlMagnitudes;

/// @brief Field controls, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_controls, put=__cordl_internal_set_controls)) ::ArrayW<::UnityEngine::InputSystem::InputControl*>  controls;

 __declspec(property(get=get_enabledControls)) uint32_t*  enabledControls;

 __declspec(property(get=get_interactionStates)) ::GlobalNamespace::InputActionState_InteractionState*  interactionStates;

/// @brief Field interactions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactions, put=__cordl_internal_set_interactions)) ::ArrayW<Il2CppObject*>  interactions;

 __declspec(property(get=get_isProcessingControlStateChange)) bool  isProcessingControlStateChange;

/// @brief Field k_InputActionCallbackMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputActionCallbackMarker, put=setStaticF_k_InputActionCallbackMarker)) ::Unity::Profiling::ProfilerMarker  k_InputActionCallbackMarker;

/// @brief Field k_InputActionResolveConflictMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputActionResolveConflictMarker, put=setStaticF_k_InputActionResolveConflictMarker)) ::Unity::Profiling::ProfilerMarker  k_InputActionResolveConflictMarker;

/// @brief Field k_InputInitialActionStateCheckMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputInitialActionStateCheckMarker, put=setStaticF_k_InputInitialActionStateCheckMarker)) ::Unity::Profiling::ProfilerMarker  k_InputInitialActionStateCheckMarker;

/// @brief Field k_InputOnActionChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnActionChangeMarker, put=setStaticF_k_InputOnActionChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnActionChangeMarker;

/// @brief Field k_InputOnDeviceChangeMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_InputOnDeviceChangeMarker, put=setStaticF_k_InputOnDeviceChangeMarker)) ::Unity::Profiling::ProfilerMarker  k_InputOnDeviceChangeMarker;

/// @brief Field m_CurrentlyProcessingThisEvent, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentlyProcessingThisEvent, put=__cordl_internal_set_m_CurrentlyProcessingThisEvent)) ::UnityEngine::InputSystem::LowLevel::InputEventPtr  m_CurrentlyProcessingThisEvent;

/// @brief Field m_InProcessControlStateChange, offset 0xc2, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InProcessControlStateChange, put=__cordl_internal_set_m_InProcessControlStateChange)) bool  m_InProcessControlStateChange;

/// @brief Field m_OnAfterUpdateDelegate, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnAfterUpdateDelegate, put=__cordl_internal_set_m_OnAfterUpdateDelegate)) ::System::Action*  m_OnAfterUpdateDelegate;

/// @brief Field m_OnAfterUpdateHooked, offset 0xc1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OnAfterUpdateHooked, put=__cordl_internal_set_m_OnAfterUpdateHooked)) bool  m_OnAfterUpdateHooked;

/// @brief Field m_OnBeforeUpdateDelegate, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OnBeforeUpdateDelegate, put=__cordl_internal_set_m_OnBeforeUpdateDelegate)) ::System::Action*  m_OnBeforeUpdateDelegate;

/// @brief Field m_OnBeforeUpdateHooked, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OnBeforeUpdateHooked, put=__cordl_internal_set_m_OnBeforeUpdateHooked)) bool  m_OnBeforeUpdateHooked;

 __declspec(property(get=get_mapIndices)) ::GlobalNamespace::InputActionState_ActionMapIndices*  mapIndices;

/// @brief Field maps, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_maps, put=__cordl_internal_set_maps)) ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  maps;

/// @brief Field memory, offset 0x40, size 0x80 
 __declspec(property(get=__cordl_internal_get_memory, put=__cordl_internal_set_memory)) ::GlobalNamespace::InputActionState_UnmanagedMemory  memory;

/// @brief Field processors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_processors, put=__cordl_internal_set_processors)) ::ArrayW<::UnityEngine::InputSystem::InputProcessor*>  processors;

/// @brief Field s_GlobalState, offset 0xffffffff, size 0xb8 
 __declspec(property(get=getStaticF_s_GlobalState, put=setStaticF_s_GlobalState)) ::GlobalNamespace::InputActionState_GlobalState  s_GlobalState;

 __declspec(property(get=get_totalActionCount)) int32_t  totalActionCount;

 __declspec(property(get=get_totalBindingCount)) int32_t  totalBindingCount;

 __declspec(property(get=get_totalCompositeCount)) int32_t  totalCompositeCount;

 __declspec(property(get=get_totalControlCount)) int32_t  totalControlCount;

 __declspec(property(get=get_totalInteractionCount)) int32_t  totalInteractionCount;

 __declspec(property(get=get_totalMapCount)) int32_t  totalMapCount;

/// @brief Field totalProcessorCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalProcessorCount, put=__cordl_internal_set_totalProcessorCount)) int32_t  totalProcessorCount;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr operator  ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*() noexcept;

/// @brief Method AddToGlobalList, addr 0xaf28768, size 0x90, virtual false, abstract: false, final false
inline void AddToGlobalList() ;

/// @brief Method ApplyProcessors, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue ApplyProcessors(int32_t  bindingIndex, TValue  value, ::UnityEngine::InputSystem::InputControl_1<TValue>*  controlOfType) ;

/// @brief Method CallActionListeners, addr 0xaf2debc, size 0x220, virtual false, abstract: false, final false
inline void CallActionListeners(int32_t  actionIndex, ::UnityEngine::InputSystem::InputActionMap*  actionMap, ::UnityEngine::InputSystem::InputActionPhase  phase, ::by_ref<::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::GlobalNamespace::InputAction_CallbackContext>*>>  listeners, ::StringW  callbackName) ;

/// @brief Method CanUseDevice, addr 0xaf29360, size 0x1f4, virtual false, abstract: false, final false
inline bool CanUseDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ChangePhaseOfAction, addr 0xaf2b520, size 0x218, virtual false, abstract: false, final false
inline bool ChangePhaseOfAction(::UnityEngine::InputSystem::InputActionPhase  newPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterPerformedOrCanceled) ;

/// @brief Method ChangePhaseOfActionInternal, addr 0xaf2db68, size 0x340, virtual false, abstract: false, final false
inline void ChangePhaseOfActionInternal(int32_t  actionIndex, ::GlobalNamespace::InputActionState_TriggerState*  actionState, ::UnityEngine::InputSystem::InputActionPhase  newPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, bool  isDisablingAction) ;

/// @brief Method ChangePhaseOfInteraction, addr 0xaf2d67c, size 0x4dc, virtual false, abstract: false, final false
inline void ChangePhaseOfInteraction(::UnityEngine::InputSystem::InputActionPhase  newPhase, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterPerformed, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterCanceled, bool  processNextInteractionOnCancel) ;

/// @brief Method ClaimDataFrom, addr 0xaf286ac, size 0xbc, virtual false, abstract: false, final false
inline void ClaimDataFrom(::UnityEngine::InputSystem::InputBindingResolver  resolver) ;

/// @brief Method Clone, addr 0xaf28f60, size 0x18c, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionState* Clone() ;

/// @brief Method CompactGlobalList, addr 0xaf2ef38, size 0x1d8, virtual false, abstract: false, final false
static inline void CompactGlobalList() ;

/// @brief Method ComputeControlGroupingIfNecessary, addr 0xaf287f8, size 0x1c0, virtual false, abstract: false, final false
inline void ComputeControlGroupingIfNecessary() ;

/// @brief Method DeferredResolutionOfBindings, addr 0xaf2227c, size 0x310, virtual false, abstract: false, final false
static inline void DeferredResolutionOfBindings() ;

/// @brief Method Destroy, addr 0xaf28a60, size 0x198, virtual false, abstract: false, final false
inline void Destroy(bool  isFinalizing) ;

/// @brief Method DestroyAllActionMapStates, addr 0xaf2f278, size 0x1c0, virtual false, abstract: false, final false
static inline void DestroyAllActionMapStates() ;

/// @brief Method DisableAllActions, addr 0xaf2fa58, size 0x184, virtual false, abstract: false, final false
static inline void DisableAllActions() ;

/// @brief Method DisableAllActions, addr 0xaf29ba8, size 0x178, virtual false, abstract: false, final false
inline void DisableAllActions(::UnityEngine::InputSystem::InputActionMap*  map) ;

/// @brief Method DisableControls, addr 0xaf2bb1c, size 0xb0, virtual false, abstract: false, final false
inline void DisableControls(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method DisableControls, addr 0xaf29fb4, size 0x44, virtual false, abstract: false, final false
inline void DisableControls(::UnityEngine::InputSystem::InputActionMap*  map) ;

/// @brief Method DisableControls, addr 0xaf28c00, size 0x188, virtual false, abstract: false, final false
inline void DisableControls(int32_t  mapIndex, int32_t  controlStartIndex, int32_t  numControls) ;

/// @brief Method DisableSingleAction, addr 0xaf2ba84, size 0x98, virtual false, abstract: false, final false
inline void DisableSingleAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method Dispose, addr 0xaf28bf8, size 0x8, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnableAllActions, addr 0xaf2b7f0, size 0xfc, virtual false, abstract: false, final false
inline void EnableAllActions(::UnityEngine::InputSystem::InputActionMap*  map) ;

/// @brief Method EnableControls, addr 0xaf2b9d4, size 0xb0, virtual false, abstract: false, final false
inline void EnableControls(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method EnableControls, addr 0xaf2b8ec, size 0x44, virtual false, abstract: false, final false
inline void EnableControls(::UnityEngine::InputSystem::InputActionMap*  map) ;

/// @brief Method EnableControls, addr 0xaf2a9d0, size 0x194, virtual false, abstract: false, final false
inline void EnableControls(int32_t  mapIndex, int32_t  controlStartIndex, int32_t  numControls) ;

/// @brief Method EnableSingleAction, addr 0xaf2b930, size 0xa4, virtual false, abstract: false, final false
inline void EnableSingleAction(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method EvaluateCompositePartMagnitude, addr 0xaf2e6f4, size 0xd4, virtual false, abstract: false, final false
inline float_t EvaluateCompositePartMagnitude(int32_t  bindingIndex, int32_t  partNumber) ;

/// @brief Method FetchActionState, addr 0xaf2b798, size 0x24, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::InputActionState_TriggerState> FetchActionState(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method FetchMapIndices, addr 0xaf2b7bc, size 0x34, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionState_ActionMapIndices FetchMapIndices(::UnityEngine::InputSystem::InputActionMap*  map) ;

/// @brief Method Finalize, addr 0xaf289d8, size 0x88, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method FindAllEnabledActions, addr 0xaf2f438, size 0x2d0, virtual false, abstract: false, final false
static inline int32_t FindAllEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*  result) ;

/// @brief Method FindControlIndexOnBinding, addr 0xaf2ab64, size 0x68, virtual false, abstract: false, final false
inline int32_t FindControlIndexOnBinding(int32_t  bindingIndex, ::UnityEngine::InputSystem::InputControl*  control) ;

/// @brief Method FinishBindingCompositeSetups, addr 0xaf295e4, size 0xd0, virtual false, abstract: false, final false
inline void FinishBindingCompositeSetups() ;

/// @brief Method FinishBindingResolution, addr 0xaf2a140, size 0x88, virtual false, abstract: false, final false
inline void FinishBindingResolution(bool  hasEnabledActions, ::GlobalNamespace::InputActionState_UnmanagedMemory  oldMemory, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  activeControls, bool  isFullResolve) ;

/// @brief Method GetActionBindingStartIndexAndCount, addr 0xaf2b458, size 0x20, virtual false, abstract: false, final false
inline uint16_t GetActionBindingStartIndexAndCount(int32_t  actionIndex, ::by_ref<uint16_t>  bindingCount) ;

/// @brief Method GetActionMap, addr 0xaf2e3dc, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionMap* GetActionMap(int32_t  bindingIndex) ;

/// @brief Method GetActionOrNoneString, addr 0xaf2e0dc, size 0x64, virtual false, abstract: false, final false
inline ::System::Object* GetActionOrNoneString(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger) ;

/// @brief Method GetActionOrNull, addr 0xaf2e1d4, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* GetActionOrNull(int32_t  bindingIndex) ;

/// @brief Method GetActionOrNull, addr 0xaf2e140, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* GetActionOrNull(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger) ;

/// @brief Method GetBinding, addr 0xaf2e360, size 0x7c, virtual false, abstract: false, final false
inline ::by_ref<::UnityEngine::InputSystem::InputBinding> GetBinding(int32_t  bindingIndex) ;

/// @brief Method GetBindingIndexInMap, addr 0xaf2e2f0, size 0x38, virtual false, abstract: false, final false
inline int32_t GetBindingIndexInMap(int32_t  bindingIndex) ;

/// @brief Method GetBindingIndexInState, addr 0xaf2e328, size 0x28, virtual false, abstract: false, final false
inline int32_t GetBindingIndexInState(int32_t  mapIndex, int32_t  bindingIndexInMap) ;

/// @brief Method GetBindingState, addr 0xaf2e350, size 0x10, virtual false, abstract: false, final false
inline ::by_ref<::GlobalNamespace::InputActionState_BindingState> GetBindingState(int32_t  bindingIndex) ;

/// @brief Method GetComplexityFromMonitorIndex, addr 0xaf2c858, size 0x8, virtual false, abstract: false, final false
static inline int32_t GetComplexityFromMonitorIndex(int64_t  mapControlAndBindingIndex) ;

/// @brief Method GetCompositePartPressTime, addr 0xaf2e7c8, size 0x84, virtual false, abstract: false, final false
inline double_t GetCompositePartPressTime(int32_t  bindingIndex, int32_t  partNumber) ;

/// @brief Method GetControl, addr 0xaf2e268, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputControl* GetControl(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger) ;

/// @brief Method GetInteractionOrNull, addr 0xaf2e2a8, size 0x48, virtual false, abstract: false, final false
inline Il2CppObject* GetInteractionOrNull(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger) ;

/// @brief Method GetValueSizeInBytes, addr 0xaf2e41c, size 0x94, virtual false, abstract: false, final false
inline int32_t GetValueSizeInBytes(int32_t  bindingIndex, int32_t  controlIndex) ;

/// @brief Method GetValueType, addr 0xaf2e4b0, size 0x94, virtual false, abstract: false, final false
inline ::System::Type* GetValueType(int32_t  bindingIndex, int32_t  controlIndex) ;

/// @brief Method HasEnabledActions, addr 0xaf2956c, size 0x78, virtual false, abstract: false, final false
inline bool HasEnabledActions() ;

/// @brief Method HookOnBeforeUpdate, addr 0xaf2aefc, size 0xe0, virtual false, abstract: false, final false
inline void HookOnBeforeUpdate() ;

/// @brief Method Initialize, addr 0xaf28670, size 0x3c, virtual false, abstract: false, final false
inline void Initialize(::UnityEngine::InputSystem::InputBindingResolver  resolver) ;

/// @brief Method IsActionBoundToControlFromDevice, addr 0xaf2b39c, size 0xbc, virtual false, abstract: false, final false
inline bool IsActionBoundToControlFromDevice(::UnityEngine::InputSystem::InputDevice*  device, int32_t  actionIndex) ;

/// @brief Method IsActiveControl, addr 0xaf2b0f4, size 0xb0, virtual false, abstract: false, final false
inline bool IsActiveControl(int32_t  bindingIndex, int32_t  controlIndex) ;

/// @brief Method IsActuated, addr 0xaf2d4cc, size 0xa8, virtual false, abstract: false, final false
static inline bool IsActuated(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, float_t  threshold) ;

/// @brief Method IsConflictingInput, addr 0xaf2cacc, size 0x400, virtual false, abstract: false, final false
inline bool IsConflictingInput(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  actionIndex) ;

/// @brief Method IsControlEnabled, addr 0xaf2bbcc, size 0x24, virtual false, abstract: false, final false
inline bool IsControlEnabled(int32_t  controlIndex) ;

/// @brief Method IsUsingDevice, addr 0xaf2919c, size 0x1c4, virtual false, abstract: false, final false
inline bool IsUsingDevice(::UnityEngine::InputSystem::InputDevice*  device) ;

static inline ::UnityEngine::InputSystem::InputActionState* New_ctor() ;

/// @brief Method NotifyListenersOfActionChange, addr 0xaf29ff8, size 0x148, virtual false, abstract: false, final false
inline void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange  change) ;

/// @brief Method NotifyListenersOfActionChange, addr 0xaf2afdc, size 0x118, virtual false, abstract: false, final false
static inline void NotifyListenersOfActionChange(::UnityEngine::InputSystem::InputActionChange  change, ::System::Object*  actionOrMapOrAsset) ;

/// @brief Method OnBeforeInitialUpdate, addr 0xaf2bdb8, size 0x1f0, virtual false, abstract: false, final false
inline void OnBeforeInitialUpdate() ;

/// @brief Method OnDeviceChange, addr 0xaf2f708, size 0x350, virtual false, abstract: false, final false
static inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change) ;

/// @brief Method PrepareForBindingReResolution, addr 0xaf296cc, size 0x4dc, virtual false, abstract: false, final false
inline void PrepareForBindingReResolution(bool  needFullResolve, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>  activeControls, ::by_ref<bool>  hasEnabledActions) ;

/// @brief Method ProcessButtonState, addr 0xaf2cecc, size 0x1d8, virtual false, abstract: false, final false
inline void ProcessButtonState(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  actionIndex, ::GlobalNamespace::InputActionState_BindingState*  bindingStatePtr) ;

/// @brief Method ProcessControlStateChange, addr 0xaf2bfe8, size 0x624, virtual false, abstract: false, final false
inline void ProcessControlStateChange(int32_t  mapIndex, int32_t  controlIndex, int32_t  bindingIndex, double_t  time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr) ;

/// @brief Method ProcessDefaultInteraction, addr 0xaf2d0a4, size 0x404, virtual false, abstract: false, final false
inline void ProcessDefaultInteraction(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  actionIndex) ;

/// @brief Method ProcessInteractions, addr 0xaf2c8f8, size 0x1d4, virtual false, abstract: false, final false
inline void ProcessInteractions(::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger, int32_t  interactionStartIndex, int32_t  interactionCount) ;

/// @brief Method ProcessTimeout, addr 0xaf2c620, size 0x238, virtual false, abstract: false, final false
inline void ProcessTimeout(double_t  time, int32_t  mapIndex, int32_t  controlIndex, int32_t  bindingIndex, int32_t  interactionIndex) ;

/// @brief Method ReadCompositePartValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue,typename TComparer>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue> && ::cordl_internals::type_constraint<TComparer, ::System::Collections::Generic::IComparer_1<TValue>*>)
inline TValue ReadCompositePartValue(int32_t  bindingIndex, int32_t  partNumber, bool*  buttonValuePtr, ::by_ref<int32_t>  controlIndex, TComparer  comparer) ;

/// @brief Method ReadCompositePartValue, addr 0xaf2e84c, size 0x110, virtual false, abstract: false, final false
inline bool ReadCompositePartValue(int32_t  bindingIndex, int32_t  partNumber, void*  buffer, int32_t  bufferSize) ;

/// @brief Method ReadCompositePartValueAsObject, addr 0xaf2e95c, size 0xfc, virtual false, abstract: false, final false
inline ::System::Object* ReadCompositePartValueAsObject(int32_t  bindingIndex, int32_t  partNumber) ;

/// @brief Method ReadValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline TValue ReadValue(int32_t  bindingIndex, int32_t  controlIndex, bool  ignoreComposites) ;

/// @brief Method ReadValue, addr 0xaf2e544, size 0x19c, virtual false, abstract: false, final false
inline void ReadValue(int32_t  bindingIndex, int32_t  controlIndex, void*  buffer, int32_t  bufferSize, bool  ignoreComposites) ;

/// @brief Method ReadValueAsButton, addr 0xaf2ebf4, size 0x130, virtual false, abstract: false, final false
inline bool ReadValueAsButton(int32_t  bindingIndex, int32_t  controlIndex) ;

/// @brief Method ReadValueAsObject, addr 0xaf2ea58, size 0x19c, virtual false, abstract: false, final false
inline ::System::Object* ReadValueAsObject(int32_t  bindingIndex, int32_t  controlIndex, bool  ignoreComposites) ;

/// @brief Method RemoveMapFromGlobalList, addr 0xaf28d88, size 0x19c, virtual false, abstract: false, final false
inline void RemoveMapFromGlobalList() ;

/// @brief Method ResetActionState, addr 0xaf29e7c, size 0x138, virtual false, abstract: false, final false
inline void ResetActionState(int32_t  actionIndex, ::UnityEngine::InputSystem::InputActionPhase  toPhase, bool  hardReset) ;

/// @brief Method ResetActionStatesDrivenBy, addr 0xaf2b1a4, size 0x1ec, virtual false, abstract: false, final false
inline void ResetActionStatesDrivenBy(::UnityEngine::InputSystem::InputDevice*  device) ;

/// @brief Method ResetGlobals, addr 0xaf2f110, size 0x168, virtual false, abstract: false, final false
static inline void ResetGlobals() ;

/// @brief Method ResetInteractionState, addr 0xaf29d5c, size 0x120, virtual false, abstract: false, final false
inline void ResetInteractionState(int32_t  interactionIndex) ;

/// @brief Method ResetInteractionStateAndCancelIfNecessary, addr 0xaf2b478, size 0xa8, virtual false, abstract: false, final false
inline void ResetInteractionStateAndCancelIfNecessary(int32_t  mapIndex, int32_t  bindingIndex, int32_t  interactionIndex, ::UnityEngine::InputSystem::InputActionPhase  phaseAfterCanceled) ;

/// @brief Method RestoreActionStatesAfterReResolvingBindings, addr 0xaf2a1c8, size 0x754, virtual false, abstract: false, final false
inline void RestoreActionStatesAfterReResolvingBindings(::GlobalNamespace::InputActionState_UnmanagedMemory  oldState, ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>  activeControls, bool  isFullResolve) ;

/// @brief Method SaveAndResetState, addr 0xaf2ed24, size 0x214, virtual false, abstract: false, final false
static inline ::UnityEngine::InputSystem::Utilities::ISavedState* SaveAndResetState() ;

/// @brief Method SetControlEnabled, addr 0xaf2bc6c, size 0x38, virtual false, abstract: false, final false
inline void SetControlEnabled(int32_t  controlIndex, bool  state) ;

/// @brief Method SetInitialStateCheckPending, addr 0xaf2bca4, size 0x98, virtual false, abstract: false, final false
inline void SetInitialStateCheckPending(int32_t  actionIndex, bool  value) ;

/// @brief Method SetInitialStateCheckPending, addr 0xaf2bc18, size 0x54, virtual false, abstract: false, final false
inline void SetInitialStateCheckPending(::GlobalNamespace::InputActionState_BindingState*  bindingStatePtr, bool  value) ;

/// @brief Method SetTotalTimeoutCompletionTime, addr 0xaf2d588, size 0x30, virtual false, abstract: false, final false
inline void SetTotalTimeoutCompletionTime(float_t  seconds, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger) ;

/// @brief Method ShouldIgnoreInputOnCompositeBinding, addr 0xaf2c8ac, size 0x4c, virtual false, abstract: false, final false
static inline bool ShouldIgnoreInputOnCompositeBinding(::GlobalNamespace::InputActionState_BindingState*  binding, ::UnityEngine::InputSystem::LowLevel::InputEvent*  eventPtr) ;

/// @brief Method SplitUpMapAndControlAndBindingIndex, addr 0xaf2bfcc, size 0x1c, virtual false, abstract: false, final false
inline void SplitUpMapAndControlAndBindingIndex(int64_t  mapControlAndBindingIndex, ::by_ref<int32_t>  mapIndex, ::by_ref<int32_t>  controlIndex, ::by_ref<int32_t>  bindingIndex) ;

/// @brief Method StartTimeout, addr 0xaf2ada8, size 0x154, virtual false, abstract: false, final false
inline void StartTimeout(float_t  seconds, ::by_ref<::GlobalNamespace::InputActionState_TriggerState>  trigger) ;

/// @brief Method StopTimeout, addr 0xaf2d5b8, size 0xc4, virtual false, abstract: false, final false
inline void StopTimeout(int32_t  interactionIndex) ;

/// @brief Method System.ICloneable.Clone, addr 0xaf29198, size 0x4, virtual true, abstract: false, final true
inline ::System::Object* System_ICloneable_Clone() ;

/// @brief Method ToCombinedMapAndControlAndBindingIndex, addr 0xaf2bbf0, size 0x28, virtual false, abstract: false, final false
inline int64_t ToCombinedMapAndControlAndBindingIndex(int32_t  mapIndex, int32_t  controlIndex, int32_t  bindingIndex) ;

/// @brief Method UnhookOnBeforeUpdate, addr 0xaf2bd3c, size 0x7c, virtual false, abstract: false, final false
inline void UnhookOnBeforeUpdate() ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged, addr 0xaf2bfb4, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(::UnityEngine::InputSystem::InputControl*  control, double_t  time, ::UnityEngine::InputSystem::LowLevel::InputEventPtr  eventPtr, int64_t  mapControlAndBindingIndex) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired, addr 0xaf2c60c, size 0x14, virtual true, abstract: false, final true
inline void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(::UnityEngine::InputSystem::InputControl*  control, double_t  time, int64_t  mapControlAndBindingIndex, int32_t  interactionIndex) ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*> const& __cordl_internal_get_composites() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>& __cordl_internal_get_composites() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*> const& __cordl_internal_get_controls() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputControl*>& __cordl_internal_get_controls() ;

constexpr ::ArrayW<Il2CppObject*> const& __cordl_internal_get_interactions() const;

constexpr ::ArrayW<Il2CppObject*>& __cordl_internal_get_interactions() ;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr const& __cordl_internal_get_m_CurrentlyProcessingThisEvent() const;

constexpr ::UnityEngine::InputSystem::LowLevel::InputEventPtr& __cordl_internal_get_m_CurrentlyProcessingThisEvent() ;

constexpr bool const& __cordl_internal_get_m_InProcessControlStateChange() const;

constexpr bool& __cordl_internal_get_m_InProcessControlStateChange() ;

constexpr ::System::Action* const& __cordl_internal_get_m_OnAfterUpdateDelegate() const;

constexpr ::System::Action*& __cordl_internal_get_m_OnAfterUpdateDelegate() ;

constexpr bool const& __cordl_internal_get_m_OnAfterUpdateHooked() const;

constexpr bool& __cordl_internal_get_m_OnAfterUpdateHooked() ;

constexpr ::System::Action* const& __cordl_internal_get_m_OnBeforeUpdateDelegate() const;

constexpr ::System::Action*& __cordl_internal_get_m_OnBeforeUpdateDelegate() ;

constexpr bool const& __cordl_internal_get_m_OnBeforeUpdateHooked() const;

constexpr bool& __cordl_internal_get_m_OnBeforeUpdateHooked() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*> const& __cordl_internal_get_maps() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>& __cordl_internal_get_maps() ;

constexpr ::GlobalNamespace::InputActionState_UnmanagedMemory const& __cordl_internal_get_memory() const;

constexpr ::GlobalNamespace::InputActionState_UnmanagedMemory& __cordl_internal_get_memory() ;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*> const& __cordl_internal_get_processors() const;

constexpr ::ArrayW<::UnityEngine::InputSystem::InputProcessor*>& __cordl_internal_get_processors() ;

constexpr int32_t const& __cordl_internal_get_totalProcessorCount() const;

constexpr int32_t& __cordl_internal_get_totalProcessorCount() ;

constexpr void __cordl_internal_set_composites(::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>  value) ;

constexpr void __cordl_internal_set_controls(::ArrayW<::UnityEngine::InputSystem::InputControl*>  value) ;

constexpr void __cordl_internal_set_interactions(::ArrayW<Il2CppObject*>  value) ;

constexpr void __cordl_internal_set_m_CurrentlyProcessingThisEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr  value) ;

constexpr void __cordl_internal_set_m_InProcessControlStateChange(bool  value) ;

constexpr void __cordl_internal_set_m_OnAfterUpdateDelegate(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_OnAfterUpdateHooked(bool  value) ;

constexpr void __cordl_internal_set_m_OnBeforeUpdateDelegate(::System::Action*  value) ;

constexpr void __cordl_internal_set_m_OnBeforeUpdateHooked(bool  value) ;

constexpr void __cordl_internal_set_maps(::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  value) ;

constexpr void __cordl_internal_set_memory(::GlobalNamespace::InputActionState_UnmanagedMemory  value) ;

constexpr void __cordl_internal_set_processors(::ArrayW<::UnityEngine::InputSystem::InputProcessor*>  value) ;

constexpr void __cordl_internal_set_totalProcessorCount(int32_t  value) ;

/// @brief Method .ctor, addr 0xaf290ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputActionCallbackMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputActionResolveConflictMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputInitialActionStateCheckMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnActionChangeMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_InputOnDeviceChangeMarker() ;

static inline ::GlobalNamespace::InputActionState_GlobalState getStaticF_s_GlobalState() ;

/// @brief Method get_actionStates, addr 0xaf28630, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionState_TriggerState* get_actionStates() ;

/// @brief Method get_bindingStates, addr 0xaf28638, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionState_BindingState* get_bindingStates() ;

/// @brief Method get_controlGroupingAndComplexity, addr 0xaf28650, size 0x8, virtual false, abstract: false, final false
inline uint16_t* get_controlGroupingAndComplexity() ;

/// @brief Method get_controlIndexToBindingIndex, addr 0xaf28648, size 0x8, virtual false, abstract: false, final false
inline int32_t* get_controlIndexToBindingIndex() ;

/// @brief Method get_controlMagnitudes, addr 0xaf28658, size 0x8, virtual false, abstract: false, final false
inline float_t* get_controlMagnitudes() ;

/// @brief Method get_enabledControls, addr 0xaf28660, size 0x8, virtual false, abstract: false, final false
inline uint32_t* get_enabledControls() ;

/// @brief Method get_interactionStates, addr 0xaf28640, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionState_InteractionState* get_interactionStates() ;

/// @brief Method get_isProcessingControlStateChange, addr 0xaf28668, size 0x8, virtual false, abstract: false, final false
inline bool get_isProcessingControlStateChange() ;

/// @brief Method get_mapIndices, addr 0xaf28628, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::InputActionState_ActionMapIndices* get_mapIndices() ;

/// @brief Method get_totalActionCount, addr 0xaf28608, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totalActionCount() ;

/// @brief Method get_totalBindingCount, addr 0xaf28610, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totalBindingCount() ;

/// @brief Method get_totalCompositeCount, addr 0xaf285f8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totalCompositeCount() ;

/// @brief Method get_totalControlCount, addr 0xaf28620, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totalControlCount() ;

/// @brief Method get_totalInteractionCount, addr 0xaf28618, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totalInteractionCount() ;

/// @brief Method get_totalMapCount, addr 0xaf28600, size 0x8, virtual false, abstract: false, final false
inline int32_t get_totalMapCount() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* i___UnityEngine__InputSystem__LowLevel__IInputStateChangeMonitor() noexcept;

static inline void setStaticF_k_InputActionCallbackMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputActionResolveConflictMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputInitialActionStateCheckMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnActionChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_k_InputOnDeviceChangeMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_GlobalState(::GlobalNamespace::InputActionState_GlobalState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionState(InputActionState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionState(InputActionState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13391};

/// @brief Field kInvalidIndex offset 0xffffffff size 0x4
static constexpr int32_t  kInvalidIndex{static_cast<int32_t>(0xffffffff)};

/// @brief Field maps, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputActionMap*>  ___maps;

/// @brief Field controls, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputControl*>  ___controls;

/// @brief Field interactions, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<Il2CppObject*>  ___interactions;

/// @brief Field processors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputProcessor*>  ___processors;

/// @brief Field composites, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::InputSystem::InputBindingComposite*>  ___composites;

/// @brief Field totalProcessorCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___totalProcessorCount;

/// @brief Field memory, offset: 0x40, size: 0x80, def value: None
 ::GlobalNamespace::InputActionState_UnmanagedMemory  ___memory;

/// @brief Field m_OnBeforeUpdateHooked, offset: 0xc0, size: 0x1, def value: None
 bool  ___m_OnBeforeUpdateHooked;

/// @brief Field m_OnAfterUpdateHooked, offset: 0xc1, size: 0x1, def value: None
 bool  ___m_OnAfterUpdateHooked;

/// @brief Field m_InProcessControlStateChange, offset: 0xc2, size: 0x1, def value: None
 bool  ___m_InProcessControlStateChange;

/// @brief Field m_CurrentlyProcessingThisEvent, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::LowLevel::InputEventPtr  ___m_CurrentlyProcessingThisEvent;

/// @brief Field m_OnBeforeUpdateDelegate, offset: 0xd0, size: 0x8, def value: None
 ::System::Action*  ___m_OnBeforeUpdateDelegate;

/// @brief Field m_OnAfterUpdateDelegate, offset: 0xd8, size: 0x8, def value: None
 ::System::Action*  ___m_OnAfterUpdateDelegate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___maps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___controls) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___interactions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___processors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___composites) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___totalProcessorCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___memory) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnBeforeUpdateHooked) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnAfterUpdateHooked) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_InProcessControlStateChange) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_CurrentlyProcessingThisEvent) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnBeforeUpdateDelegate) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::InputActionState, ___m_OnAfterUpdateDelegate) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::InputActionState) == 0xe0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::InputSystem {
// Is value type: false
// CS Name: UnityEngine.InputSystem.InputActionState/<>c
class CORDL_TYPE InputActionState___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::InputSystem::InputActionState___c*  __9;

/// @brief Field <>9__140_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__140_0, put=setStaticF___9__140_0)) ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>*  __9__140_0;

/// @brief Field <>9__140_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__140_1, put=setStaticF___9__140_1)) ::System::Action*  __9__140_1;

static inline ::UnityEngine::InputSystem::InputActionState___c* New_ctor() ;

/// @brief Method <SaveAndResetState>b__140_0, addr 0xaf30948, size 0x90, virtual false, abstract: false, final false
inline void _SaveAndResetState_b__140_0(::by_ref<::GlobalNamespace::InputActionState_GlobalState>  state) ;

/// @brief Method <SaveAndResetState>b__140_1, addr 0xaf309d8, size 0x4c, virtual false, abstract: false, final false
inline void _SaveAndResetState_b__140_1() ;

/// @brief Method .ctor, addr 0xaf30940, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::InputSystem::InputActionState___c* getStaticF___9() ;

static inline ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>* getStaticF___9__140_0() ;

static inline ::System::Action* getStaticF___9__140_1() ;

static inline void setStaticF___9(::UnityEngine::InputSystem::InputActionState___c*  value) ;

static inline void setStaticF___9__140_0(::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::GlobalNamespace::InputActionState_GlobalState>*  value) ;

static inline void setStaticF___9__140_1(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InputActionState___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InputActionState___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InputActionState___c(InputActionState___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InputActionState___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InputActionState___c(InputActionState___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13390};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::InputSystem::InputActionState___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem
