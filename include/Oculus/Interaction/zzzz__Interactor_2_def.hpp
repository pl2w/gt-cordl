#pragma once
// IWYU pragma private; include "Oculus/Interaction/Interactor_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractorState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Interactor_2)
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class IGameObjectFilter;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
class ISelector;
}
namespace Oculus::Interaction {
class IUpdateDriver;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
struct InteractorState;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class Interactor_2___c;
}
namespace Oculus::Interaction {
template<typename T>
class MAction_1;
}
namespace Oculus::Interaction {
template<typename T>
class MultiAction_1;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class Interactor_2;
}
namespace Oculus::Interaction {
template<typename TInteractor,typename TInteractable>
class Interactor_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Interactor_2);
MARK_GEN_REF_T_PTR(::Oculus::Interaction::Interactor_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Interactor_2, "Oculus.Interaction", "Interactor`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Oculus::Interaction::Interactor_2___c, "Oculus.Interaction", "Interactor`2/<>c");
// Dependencies Oculus.Interaction.InteractorState, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.Interactor`2<TInteractor,TInteractable>
class CORDL_TYPE Interactor_2 : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::Interactor_2___c<TInteractor, TInteractable>;

/// @brief Field ActiveState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

 __declspec(property(get=get_Candidate)) TInteractable  Candidate;

 __declspec(property(get=get_CandidateProperties)) ::System::Object*  CandidateProperties;

/// @brief Field CandidateTiebreaker, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_CandidateTiebreaker, put=__cordl_internal_set_CandidateTiebreaker)) ::System::Collections::Generic::IComparer_1<TInteractable>*  CandidateTiebreaker;

 __declspec(property(get=get_Data, put=set_Data)) ::System::Object*  Data;

 __declspec(property(get=get_HasCandidate)) bool  HasCandidate;

 __declspec(property(get=get_HasInteractable)) bool  HasInteractable;

 __declspec(property(get=get_HasSelectedInteractable)) bool  HasSelectedInteractable;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

 __declspec(property(get=get_Interactable)) TInteractable  Interactable;

/// @brief Field InteractableFilters, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_InteractableFilters, put=__cordl_internal_set_InteractableFilters)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  InteractableFilters;

 __declspec(property(get=get_IsRootDriver, put=set_IsRootDriver)) bool  IsRootDriver;

 __declspec(property(get=get_MaxIterationsPerFrame, put=set_MaxIterationsPerFrame)) int32_t  MaxIterationsPerFrame;

 __declspec(property(get=get_QueuedSelect)) bool  QueuedSelect;

 __declspec(property(get=get_QueuedUnselect)) bool  QueuedUnselect;

 __declspec(property(get=get_SelectedInteractable)) TInteractable  SelectedInteractable;

 __declspec(property(get=get_Selector, put=set_Selector)) ::Oculus::Interaction::ISelector*  Selector;

 __declspec(property(get=get_ShouldHover)) bool  ShouldHover;

 __declspec(property(get=get_ShouldSelect)) bool  ShouldSelect;

 __declspec(property(get=get_ShouldUnhover)) bool  ShouldUnhover;

 __declspec(property(get=get_ShouldUnselect)) bool  ShouldUnselect;

 __declspec(property(get=get_State, put=set_State)) ::Oculus::Interaction::InteractorState  State;

 __declspec(property(get=get_WhenInteractableSelected)) ::Oculus::Interaction::MAction_1<TInteractable>*  WhenInteractableSelected;

 __declspec(property(get=get_WhenInteractableSet)) ::Oculus::Interaction::MAction_1<TInteractable>*  WhenInteractableSet;

 __declspec(property(get=get_WhenInteractableUnselected)) ::Oculus::Interaction::MAction_1<TInteractable>*  WhenInteractableUnselected;

 __declspec(property(get=get_WhenInteractableUnset)) ::Oculus::Interaction::MAction_1<TInteractable>*  WhenInteractableUnset;

/// @brief Field WhenPostprocessed, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPostprocessed, put=__cordl_internal_set_WhenPostprocessed)) ::System::Action*  WhenPostprocessed;

/// @brief Field WhenPreprocessed, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPreprocessed, put=__cordl_internal_set_WhenPreprocessed)) ::System::Action*  WhenPreprocessed;

/// @brief Field WhenProcessed, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenProcessed, put=__cordl_internal_set_WhenProcessed)) ::System::Action*  WhenProcessed;

/// @brief Field WhenStateChanged, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenStateChanged, put=__cordl_internal_set_WhenStateChanged)) ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  WhenStateChanged;

/// @brief Field <Data>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data_k__BackingField, put=__cordl_internal_set__Data_k__BackingField)) ::System::Object*  _Data_k__BackingField;

/// @brief Field <IsRootDriver>k__BackingField, offset 0x111, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRootDriver_k__BackingField, put=__cordl_internal_set__IsRootDriver_k__BackingField)) bool  _IsRootDriver_k__BackingField;

/// @brief Field _activeState, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _candidate, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__candidate, put=__cordl_internal_set__candidate)) TInteractable  _candidate;

/// @brief Field _candidateTiebreaker, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__candidateTiebreaker, put=__cordl_internal_set__candidateTiebreaker)) ::UnityW<::UnityEngine::Object>  _candidateTiebreaker;

/// @brief Field _clearComputeCandidateOverrideOnSelect, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__clearComputeCandidateOverrideOnSelect, put=__cordl_internal_set__clearComputeCandidateOverrideOnSelect)) bool  _clearComputeCandidateOverrideOnSelect;

/// @brief Field _clearComputeShouldSelectOverrideOnSelect, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get__clearComputeShouldSelectOverrideOnSelect, put=__cordl_internal_set__clearComputeShouldSelectOverrideOnSelect)) bool  _clearComputeShouldSelectOverrideOnSelect;

/// @brief Field _clearComputeShouldUnselectOverrideOnUnselect, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get__clearComputeShouldUnselectOverrideOnUnselect, put=__cordl_internal_set__clearComputeShouldUnselectOverrideOnUnselect)) bool  _clearComputeShouldUnselectOverrideOnUnselect;

/// @brief Field _computeCandidateOverride, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__computeCandidateOverride, put=__cordl_internal_set__computeCandidateOverride)) ::System::Func_1<TInteractable>*  _computeCandidateOverride;

/// @brief Field _computeShouldSelectOverride, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__computeShouldSelectOverride, put=__cordl_internal_set__computeShouldSelectOverride)) ::System::Func_1<bool>*  _computeShouldSelectOverride;

/// @brief Field _computeShouldUnselectOverride, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__computeShouldUnselectOverride, put=__cordl_internal_set__computeShouldUnselectOverride)) ::System::Func_1<bool>*  _computeShouldUnselectOverride;

/// @brief Field _data, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::UnityW<::UnityEngine::Object>  _data;

/// @brief Field _identifier, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Field _interactable, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactable, put=__cordl_internal_set__interactable)) TInteractable  _interactable;

/// @brief Field _interactableFilters, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableFilters, put=__cordl_internal_set__interactableFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _interactableFilters;

/// @brief Field _maxIterationsPerFrame, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxIterationsPerFrame, put=__cordl_internal_set__maxIterationsPerFrame)) int32_t  _maxIterationsPerFrame;

/// @brief Field _nativeId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeId, put=__cordl_internal_set__nativeId)) uint64_t  _nativeId;

/// @brief Field _selectedInteractable, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectedInteractable, put=__cordl_internal_set__selectedInteractable)) TInteractable  _selectedInteractable;

/// @brief Field _selector, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selector, put=__cordl_internal_set__selector)) ::Oculus::Interaction::ISelector*  _selector;

/// @brief Field _selectorQueue, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selectorQueue, put=__cordl_internal_set__selectorQueue)) ::System::Collections::Generic::Queue_1<bool>*  _selectorQueue;

/// @brief Field _started, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _state, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Oculus::Interaction::InteractorState  _state;

/// @brief Field _whenInteractableSelected, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractableSelected, put=__cordl_internal_set__whenInteractableSelected)) ::Oculus::Interaction::MultiAction_1<TInteractable>*  _whenInteractableSelected;

/// @brief Field _whenInteractableSet, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractableSet, put=__cordl_internal_set__whenInteractableSet)) ::Oculus::Interaction::MultiAction_1<TInteractable>*  _whenInteractableSet;

/// @brief Field _whenInteractableUnselected, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractableUnselected, put=__cordl_internal_set__whenInteractableUnselected)) ::Oculus::Interaction::MultiAction_1<TInteractable>*  _whenInteractableUnselected;

/// @brief Field _whenInteractableUnset, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__whenInteractableUnset, put=__cordl_internal_set__whenInteractableUnset)) ::Oculus::Interaction::MultiAction_1<TInteractable>*  _whenInteractableUnset;

/// @brief Convert operator to "::Oculus::Interaction::IInteractor"
constexpr operator  ::Oculus::Interaction::IInteractor*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr operator  ::Oculus::Interaction::IInteractorView*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr operator  ::Oculus::Interaction::IUpdateDriver*() noexcept;

/// @brief Method Awake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool CanSelect(TInteractable  interactable) ;

/// @brief Method ClearComputeCandidateOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearComputeCandidateOverride() ;

/// @brief Method ClearComputeShouldSelectOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearComputeShouldSelectOverride() ;

/// @brief Method ClearComputeShouldUnselectOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ClearComputeShouldUnselectOverride() ;

/// @brief Method ComputeCandidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline TInteractable ComputeCandidate() ;

/// @brief Method ComputeCandidateTiebreaker, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t ComputeCandidateTiebreaker(TInteractable  a, TInteractable  b) ;

/// @brief Method ComputeShouldSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ComputeShouldSelect() ;

/// @brief Method ComputeShouldUnselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool ComputeShouldUnselect() ;

/// @brief Method Disable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Disable() ;

/// @brief Method DoHoverUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DoHoverUpdate() ;

/// @brief Method DoNormalUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DoNormalUpdate() ;

/// @brief Method DoPostprocess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DoPostprocess() ;

/// @brief Method DoPreprocess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DoPreprocess() ;

/// @brief Method DoSelectUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void DoSelectUpdate() ;

/// @brief Method Drive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Drive() ;

/// @brief Method Enable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Enable() ;

/// @brief Method HandleDisabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleDisabled() ;

/// @brief Method HandleEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleEnabled() ;

/// @brief Method HandleSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleSelected() ;

/// @brief Method HandleUnselected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void HandleUnselected() ;

/// @brief Method Hover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Hover() ;

/// @brief Method InjectOptionalActiveState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectOptionalActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectOptionalCandidateTiebreaker, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectOptionalCandidateTiebreaker(::System::Collections::Generic::IComparer_1<TInteractable>*  candidateTiebreaker) ;

/// @brief Method InjectOptionalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectOptionalData(::System::Object*  data) ;

/// @brief Method InjectOptionalInteractableFilters, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InjectOptionalInteractableFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  interactableFilters) ;

/// @brief Method InteractableChangesUpdate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InteractableChangesUpdate() ;

/// @brief Method InteractableSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableSelected(TInteractable  interactable) ;

/// @brief Method InteractableSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableSet(TInteractable  interactable) ;

/// @brief Method InteractableUnselected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableUnselected(TInteractable  interactable) ;

/// @brief Method InteractableUnset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void InteractableUnset(TInteractable  interactable) ;

static inline ::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method OnDestroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Postprocess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Postprocess() ;

/// @brief Method Preprocess, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Preprocess() ;

/// @brief Method Process, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Process() ;

/// @brief Method ProcessCandidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ProcessCandidate() ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Select() ;

/// @brief Method SelectInteractable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SelectInteractable(TInteractable  interactable) ;

/// @brief Method SetComputeCandidateOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetComputeCandidateOverride(::System::Func_1<TInteractable>*  computeCandidate, bool  shouldClearOverrideOnSelect) ;

/// @brief Method SetComputeShouldSelectOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetComputeShouldSelectOverride(::System::Func_1<bool>*  computeShouldSelect, bool  clearOverrideOnSelect) ;

/// @brief Method SetComputeShouldUnselectOverride, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void SetComputeShouldUnselectOverride(::System::Func_1<bool>*  computeShouldUnselect, bool  clearOverrideOnUnselect) ;

/// @brief Method SetInteractable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetInteractable(TInteractable  interactable) ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Unhover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Unhover() ;

/// @brief Method Unselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Unselect() ;

/// @brief Method UnselectInteractable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UnselectInteractable() ;

/// @brief Method UnsetInteractable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UnsetInteractable() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActiveState, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool UpdateActiveState() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr ::System::Collections::Generic::IComparer_1<TInteractable>* const& __cordl_internal_get_CandidateTiebreaker() const;

constexpr ::System::Collections::Generic::IComparer_1<TInteractable>*& __cordl_internal_get_CandidateTiebreaker() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>* const& __cordl_internal_get_InteractableFilters() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*& __cordl_internal_get_InteractableFilters() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenPostprocessed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenPostprocessed() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenPreprocessed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenPreprocessed() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenProcessed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenProcessed() ;

constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* const& __cordl_internal_get_WhenStateChanged() const;

constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*& __cordl_internal_get_WhenStateChanged() ;

constexpr ::System::Object* const& __cordl_internal_get__Data_k__BackingField() const;

constexpr ::System::Object*& __cordl_internal_get__Data_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsRootDriver_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRootDriver_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr TInteractable const& __cordl_internal_get__candidate() const;

constexpr TInteractable& __cordl_internal_get__candidate() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__candidateTiebreaker() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__candidateTiebreaker() ;

constexpr bool const& __cordl_internal_get__clearComputeCandidateOverrideOnSelect() const;

constexpr bool& __cordl_internal_get__clearComputeCandidateOverrideOnSelect() ;

constexpr bool const& __cordl_internal_get__clearComputeShouldSelectOverrideOnSelect() const;

constexpr bool& __cordl_internal_get__clearComputeShouldSelectOverrideOnSelect() ;

constexpr bool const& __cordl_internal_get__clearComputeShouldUnselectOverrideOnUnselect() const;

constexpr bool& __cordl_internal_get__clearComputeShouldUnselectOverrideOnUnselect() ;

constexpr ::System::Func_1<TInteractable>* const& __cordl_internal_get__computeCandidateOverride() const;

constexpr ::System::Func_1<TInteractable>*& __cordl_internal_get__computeCandidateOverride() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get__computeShouldSelectOverride() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get__computeShouldSelectOverride() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get__computeShouldUnselectOverride() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get__computeShouldUnselectOverride() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__data() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__data() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr TInteractable const& __cordl_internal_get__interactable() const;

constexpr TInteractable& __cordl_internal_get__interactable() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__interactableFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__interactableFilters() ;

constexpr int32_t const& __cordl_internal_get__maxIterationsPerFrame() const;

constexpr int32_t& __cordl_internal_get__maxIterationsPerFrame() ;

constexpr uint64_t const& __cordl_internal_get__nativeId() const;

constexpr uint64_t& __cordl_internal_get__nativeId() ;

constexpr TInteractable const& __cordl_internal_get__selectedInteractable() const;

constexpr TInteractable& __cordl_internal_get__selectedInteractable() ;

constexpr ::Oculus::Interaction::ISelector* const& __cordl_internal_get__selector() const;

constexpr ::Oculus::Interaction::ISelector*& __cordl_internal_get__selector() ;

constexpr ::System::Collections::Generic::Queue_1<bool>* const& __cordl_internal_get__selectorQueue() const;

constexpr ::System::Collections::Generic::Queue_1<bool>*& __cordl_internal_get__selectorQueue() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::InteractorState const& __cordl_internal_get__state() const;

constexpr ::Oculus::Interaction::InteractorState& __cordl_internal_get__state() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& __cordl_internal_get__whenInteractableSelected() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& __cordl_internal_get__whenInteractableSelected() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& __cordl_internal_get__whenInteractableSet() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& __cordl_internal_get__whenInteractableSet() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& __cordl_internal_get__whenInteractableUnselected() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& __cordl_internal_get__whenInteractableUnselected() ;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& __cordl_internal_get__whenInteractableUnset() const;

constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& __cordl_internal_get__whenInteractableUnset() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set_CandidateTiebreaker(::System::Collections::Generic::IComparer_1<TInteractable>*  value) ;

constexpr void __cordl_internal_set_InteractableFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  value) ;

constexpr void __cordl_internal_set_WhenPostprocessed(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenPreprocessed(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenProcessed(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

constexpr void __cordl_internal_set__Data_k__BackingField(::System::Object*  value) ;

constexpr void __cordl_internal_set__IsRootDriver_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__candidate(TInteractable  value) ;

constexpr void __cordl_internal_set__candidateTiebreaker(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__clearComputeCandidateOverrideOnSelect(bool  value) ;

constexpr void __cordl_internal_set__clearComputeShouldSelectOverrideOnSelect(bool  value) ;

constexpr void __cordl_internal_set__clearComputeShouldUnselectOverrideOnUnselect(bool  value) ;

constexpr void __cordl_internal_set__computeCandidateOverride(::System::Func_1<TInteractable>*  value) ;

constexpr void __cordl_internal_set__computeShouldSelectOverride(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set__computeShouldUnselectOverride(::System::Func_1<bool>*  value) ;

constexpr void __cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__interactable(TInteractable  value) ;

constexpr void __cordl_internal_set__interactableFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__maxIterationsPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set__nativeId(uint64_t  value) ;

constexpr void __cordl_internal_set__selectedInteractable(TInteractable  value) ;

constexpr void __cordl_internal_set__selector(::Oculus::Interaction::ISelector*  value) ;

constexpr void __cordl_internal_set__selectorQueue(::System::Collections::Generic::Queue_1<bool>*  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__state(::Oculus::Interaction::InteractorState  value) ;

constexpr void __cordl_internal_set__whenInteractableSelected(::Oculus::Interaction::MultiAction_1<TInteractable>*  value) ;

constexpr void __cordl_internal_set__whenInteractableSet(::Oculus::Interaction::MultiAction_1<TInteractable>*  value) ;

constexpr void __cordl_internal_set__whenInteractableUnselected(::Oculus::Interaction::MultiAction_1<TInteractable>*  value) ;

constexpr void __cordl_internal_set__whenInteractableUnset(::Oculus::Interaction::MultiAction_1<TInteractable>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenPostprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenPostprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenPreprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenPreprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenProcessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenProcessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

/// @brief Method get_Candidate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TInteractable get_Candidate() ;

/// @brief Method get_CandidateProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* get_CandidateProperties() ;

/// [CompilerGenerated]
/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Data() ;

/// @brief Method get_HasCandidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_HasCandidate() ;

/// @brief Method get_HasInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_HasInteractable() ;

/// @brief Method get_HasSelectedInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_HasSelectedInteractable() ;

/// @brief Method get_Identifier, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Identifier() ;

/// @brief Method get_Interactable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TInteractable get_Interactable() ;

/// [CompilerGenerated]
/// @brief Method get_IsRootDriver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_IsRootDriver() ;

/// @brief Method get_MaxIterationsPerFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_MaxIterationsPerFrame() ;

/// @brief Method get_QueuedSelect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_QueuedSelect() ;

/// @brief Method get_QueuedUnselect, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_QueuedUnselect() ;

/// @brief Method get_SelectedInteractable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TInteractable get_SelectedInteractable() ;

/// @brief Method get_Selector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::ISelector* get_Selector() ;

/// @brief Method get_ShouldHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_ShouldSelect() ;

/// @brief Method get_ShouldUnhover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_ShouldUnhover() ;

/// @brief Method get_ShouldUnselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool get_ShouldUnselect() ;

/// @brief Method get_State, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Oculus::Interaction::InteractorState get_State() ;

/// @brief Method get_WhenInteractableSelected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractable>* get_WhenInteractableSelected() ;

/// @brief Method get_WhenInteractableSet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractable>* get_WhenInteractableSet() ;

/// @brief Method get_WhenInteractableUnselected, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractable>* get_WhenInteractableUnselected() ;

/// @brief Method get_WhenInteractableUnset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::MAction_1<TInteractable>* get_WhenInteractableUnset() ;

/// @brief Convert to "::Oculus::Interaction::IInteractor"
constexpr ::Oculus::Interaction::IInteractor* i___Oculus__Interaction__IInteractor() noexcept;

/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* i___Oculus__Interaction__IInteractorView() noexcept;

/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* i___Oculus__Interaction__IUpdateDriver() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenPostprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenPostprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenPreprocessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenPreprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenProcessed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenProcessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Data(::System::Object*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsRootDriver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void set_IsRootDriver(bool  value) ;

/// @brief Method set_MaxIterationsPerFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_MaxIterationsPerFrame(int32_t  value) ;

/// @brief Method set_Selector, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Selector(::Oculus::Interaction::ISelector*  value) ;

/// @brief Method set_State, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_State(::Oculus::Interaction::InteractorState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interactor_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interactor_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Interactor_2(Interactor_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interactor_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interactor_2(Interactor_2 const& ) = delete;

/// @brief Field DefaultNativeId offset 0xffffffff size 0x8
static constexpr uint64_t  DefaultNativeId{static_cast<uint64_t>(0x494e56414c494420u)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15786};

/// @brief Field _nativeId, offset: 0x20, size: 0x8, def value: None
 uint64_t  ____nativeId;

/// [Tooltip("An ActiveState whose value determines if the interactor is enabled or disabled.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// [Optional]
/// @brief Field _activeState, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x30, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

/// [Tooltip("The interactables this interactor can or can\'t use. Is determined by comparing this interactor\'s TagSetFilter component(s) to the TagSet component on the interactables.")]
/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IGameObjectFilter), new[] {  })]
/// [Optional]
/// @brief Field _interactableFilters, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____interactableFilters;

/// @brief Field InteractableFilters, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  ___InteractableFilters;

/// [Tooltip("Custom logic used to determine the best interactable candidate.")]
/// [SerializeField]
/// [Interface("CandidateTiebreaker")]
/// [Optional]
/// @brief Field _candidateTiebreaker, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____candidateTiebreaker;

/// @brief Field CandidateTiebreaker, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::IComparer_1<TInteractable>*  ___CandidateTiebreaker;

/// @brief Field _computeCandidateOverride, offset: 0x58, size: 0x8, def value: None
 ::System::Func_1<TInteractable>*  ____computeCandidateOverride;

/// @brief Field _clearComputeCandidateOverrideOnSelect, offset: 0x60, size: 0x1, def value: None
 bool  ____clearComputeCandidateOverrideOnSelect;

/// @brief Field _computeShouldSelectOverride, offset: 0x68, size: 0x8, def value: None
 ::System::Func_1<bool>*  ____computeShouldSelectOverride;

/// @brief Field _clearComputeShouldSelectOverrideOnSelect, offset: 0x70, size: 0x1, def value: None
 bool  ____clearComputeShouldSelectOverrideOnSelect;

/// @brief Field _computeShouldUnselectOverride, offset: 0x78, size: 0x8, def value: None
 ::System::Func_1<bool>*  ____computeShouldUnselectOverride;

/// @brief Field _clearComputeShouldUnselectOverrideOnUnselect, offset: 0x80, size: 0x1, def value: None
 bool  ____clearComputeShouldUnselectOverrideOnUnselect;

/// @brief Field _state, offset: 0x84, size: 0x4, def value: None
 ::Oculus::Interaction::InteractorState  ____state;

/// [CompilerGenerated]
/// @brief Field WhenStateChanged, offset: 0x88, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  ___WhenStateChanged;

/// [CompilerGenerated]
/// @brief Field WhenPreprocessed, offset: 0x90, size: 0x8, def value: None
 ::System::Action*  ___WhenPreprocessed;

/// [CompilerGenerated]
/// @brief Field WhenProcessed, offset: 0x98, size: 0x8, def value: None
 ::System::Action*  ___WhenProcessed;

/// [CompilerGenerated]
/// @brief Field WhenPostprocessed, offset: 0xa0, size: 0x8, def value: None
 ::System::Action*  ___WhenPostprocessed;

/// @brief Field _selector, offset: 0xa8, size: 0x8, def value: None
 ::Oculus::Interaction::ISelector*  ____selector;

/// [Tooltip("The maximum number of state changes that can occur per frame. For example, the interactor switching from normal to hover or vice-versa counts as one state change.")]
/// [SerializeField]
/// @brief Field _maxIterationsPerFrame, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____maxIterationsPerFrame;

/// @brief Field _selectorQueue, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<bool>*  ____selectorQueue;

/// @brief Field _candidate, offset: 0xc0, size: 0x8, def value: None
 TInteractable  ____candidate;

/// @brief Field _interactable, offset: 0xc8, size: 0x8, def value: None
 TInteractable  ____interactable;

/// @brief Field _selectedInteractable, offset: 0xd0, size: 0x8, def value: None
 TInteractable  ____selectedInteractable;

/// @brief Field _whenInteractableSet, offset: 0xd8, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractable>*  ____whenInteractableSet;

/// @brief Field _whenInteractableUnset, offset: 0xe0, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractable>*  ____whenInteractableUnset;

/// @brief Field _whenInteractableSelected, offset: 0xe8, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractable>*  ____whenInteractableSelected;

/// @brief Field _whenInteractableUnselected, offset: 0xf0, size: 0x8, def value: None
 ::Oculus::Interaction::MultiAction_1<TInteractable>*  ____whenInteractableUnselected;

/// @brief Field _identifier, offset: 0xf8, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// [Tooltip("Can supply additional data (ex. data from an Interactable about a given Interactor, or vice-versa), or pass data along with events like PointerEvent (ex. the associated Interactor generating the event).")]
/// [SerializeField]
/// [Optional]
/// @brief Field _data, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____data;

/// [CompilerGenerated]
/// @brief Field <Data>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::System::Object*  ____Data_k__BackingField;

/// @brief Field _started, offset: 0x110, size: 0x1, def value: None
 bool  ____started;

/// [CompilerGenerated]
/// @brief Field <IsRootDriver>k__BackingField, offset: 0x111, size: 0x1, def value: None
 bool  ____IsRootDriver_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// cpp template
template<typename TInteractor,typename TInteractable>
// Is value type: false
// CS Name: Oculus.Interaction.Interactor`2/<>c<TInteractor,TInteractable>
class CORDL_TYPE Interactor_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*  __9;

/// @brief Field <>9__100_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__100_0, put=setStaticF___9__100_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*  __9__100_0;

/// @brief Field <>9__141_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__141_0, put=setStaticF___9__141_0)) ::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*  __9__141_0;

/// @brief Field <>9__144_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__144_0, put=setStaticF___9__144_0)) ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  __9__144_0;

/// @brief Field <>9__144_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__144_1, put=setStaticF___9__144_1)) ::System::Action*  __9__144_1;

/// @brief Field <>9__144_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__144_2, put=setStaticF___9__144_2)) ::System::Action*  __9__144_2;

/// @brief Field <>9__144_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__144_3, put=setStaticF___9__144_3)) ::System::Action*  __9__144_3;

static inline ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>* New_ctor() ;

/// @brief Method <Awake>b__100_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IGameObjectFilter* _Awake_b__100_0(::UnityEngine::Object*  mono) ;

/// @brief Method <InjectOptionalInteractableFilters>b__141_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectOptionalInteractableFilters_b__141_0(::Oculus::Interaction::IGameObjectFilter*  interactableFilter) ;

/// @brief Method <.ctor>b__144_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__144_0(::Oculus::Interaction::InteractorStateChangeArgs  _p0_) ;

/// @brief Method <.ctor>b__144_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__144_1() ;

/// @brief Method <.ctor>b__144_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__144_2() ;

/// @brief Method <.ctor>b__144_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__144_3() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>* getStaticF___9() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>* getStaticF___9__100_0() ;

static inline ::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>* getStaticF___9__141_0() ;

static inline ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* getStaticF___9__144_0() ;

static inline ::System::Action* getStaticF___9__144_1() ;

static inline ::System::Action* getStaticF___9__144_2() ;

static inline ::System::Action* getStaticF___9__144_3() ;

static inline void setStaticF___9(::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*  value) ;

static inline void setStaticF___9__100_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*  value) ;

static inline void setStaticF___9__141_0(::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__144_0(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

static inline void setStaticF___9__144_1(::System::Action*  value) ;

static inline void setStaticF___9__144_2(::System::Action*  value) ;

static inline void setStaticF___9__144_3(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Interactor_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Interactor_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Interactor_2___c(Interactor_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Interactor_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Interactor_2___c(Interactor_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15785};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Interaction
