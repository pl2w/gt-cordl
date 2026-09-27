#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractorGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__InteractorState_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InteractorGroup)
namespace Oculus::Interaction {
class IActiveState;
}
namespace Oculus::Interaction {
class ICandidateComparer;
}
namespace Oculus::Interaction {
class IInteractorView;
}
namespace Oculus::Interaction {
class IInteractor;
}
namespace Oculus::Interaction {
class IUpdateDriver;
}
namespace Oculus::Interaction {
class InteractorGroup_InteractorPredicate;
}
namespace Oculus::Interaction {
class InteractorGroup___c;
}
namespace Oculus::Interaction {
struct InteractorStateChangeArgs;
}
namespace Oculus::Interaction {
struct InteractorState;
}
namespace Oculus::Interaction {
class UniqueIdentifier;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
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
class AsyncCallback;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class InteractorGroup;
}
namespace Oculus::Interaction {
class InteractorGroup_InteractorPredicate;
}
namespace Oculus::Interaction {
class InteractorGroup___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::InteractorGroup*);
MARK_REF_T(::Oculus::Interaction::InteractorGroup_InteractorPredicate*);
MARK_REF_T(::Oculus::Interaction::InteractorGroup___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorGroup*, "Oculus.Interaction", "InteractorGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorGroup_InteractorPredicate*, "Oculus.Interaction", "InteractorGroup/InteractorPredicate");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::InteractorGroup___c*, "Oculus.Interaction", "InteractorGroup/<>c");
// Dependencies Oculus.Interaction.InteractorState, UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorGroup
class CORDL_TYPE InteractorGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InteractorPredicate = ::Oculus::Interaction::InteractorGroup_InteractorPredicate;

using __c = ::Oculus::Interaction::InteractorGroup___c;

/// @brief Field ActiveState, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_ActiveState, put=__cordl_internal_set_ActiveState)) ::Oculus::Interaction::IActiveState*  ActiveState;

/// @brief Field CandidateComparer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_CandidateComparer, put=__cordl_internal_set_CandidateComparer)) ::Oculus::Interaction::ICandidateComparer*  CandidateComparer;

 __declspec(property(get=get_CandidateProperties)) ::System::Object*  CandidateProperties;

 __declspec(property(get=get_Data)) ::System::Object*  Data;

 __declspec(property(get=get_HasCandidate)) bool  HasCandidate;

/// @brief Field HasCandidatePredicate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HasCandidatePredicate, put=setStaticF_HasCandidatePredicate)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  HasCandidatePredicate;

 __declspec(property(get=get_HasInteractable)) bool  HasInteractable;

/// @brief Field HasInteractablePredicate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HasInteractablePredicate, put=setStaticF_HasInteractablePredicate)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  HasInteractablePredicate;

 __declspec(property(get=get_HasSelectedInteractable)) bool  HasSelectedInteractable;

 __declspec(property(get=get_Identifier)) int32_t  Identifier;

/// @brief Field Interactors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Interactors, put=__cordl_internal_set_Interactors)) ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>*  Interactors;

 __declspec(property(get=get_IsRootDriver, put=set_IsRootDriver)) bool  IsRootDriver;

 __declspec(property(get=get_MaxIterationsPerFrame, put=set_MaxIterationsPerFrame)) int32_t  MaxIterationsPerFrame;

 __declspec(property(get=get_ShouldHover)) bool  ShouldHover;

 __declspec(property(get=get_ShouldSelect)) bool  ShouldSelect;

 __declspec(property(get=get_ShouldUnhover)) bool  ShouldUnhover;

 __declspec(property(get=get_ShouldUnselect)) bool  ShouldUnselect;

 __declspec(property(get=get_State, put=set_State)) ::Oculus::Interaction::InteractorState  State;

/// @brief Field TruePredicate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TruePredicate, put=setStaticF_TruePredicate)) ::Oculus::Interaction::InteractorGroup_InteractorPredicate*  TruePredicate;

/// @brief Field WhenPostprocessed, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPostprocessed, put=__cordl_internal_set_WhenPostprocessed)) ::System::Action*  WhenPostprocessed;

/// @brief Field WhenPreprocessed, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenPreprocessed, put=__cordl_internal_set_WhenPreprocessed)) ::System::Action*  WhenPreprocessed;

/// @brief Field WhenProcessed, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenProcessed, put=__cordl_internal_set_WhenProcessed)) ::System::Action*  WhenProcessed;

/// @brief Field WhenStateChanged, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_WhenStateChanged, put=__cordl_internal_set_WhenStateChanged)) ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  WhenStateChanged;

/// @brief Field <IsRootDriver>k__BackingField, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRootDriver_k__BackingField, put=__cordl_internal_set__IsRootDriver_k__BackingField)) bool  _IsRootDriver_k__BackingField;

/// @brief Field _activeState, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeState, put=__cordl_internal_set__activeState)) ::UnityW<::UnityEngine::Object>  _activeState;

/// @brief Field _candidateComparer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__candidateComparer, put=__cordl_internal_set__candidateComparer)) ::UnityW<::UnityEngine::Object>  _candidateComparer;

/// @brief Field _identifier, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__identifier, put=__cordl_internal_set__identifier)) ::Oculus::Interaction::UniqueIdentifier*  _identifier;

/// @brief Field _interactors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactors, put=__cordl_internal_set__interactors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _interactors;

/// @brief Field _maxIterationsPerFrame, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxIterationsPerFrame, put=__cordl_internal_set__maxIterationsPerFrame)) int32_t  _maxIterationsPerFrame;

/// @brief Field _started, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__started, put=__cordl_internal_set__started)) bool  _started;

/// @brief Field _state, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__state, put=__cordl_internal_set__state)) ::Oculus::Interaction::InteractorState  _state;

/// @brief Convert operator to "::Oculus::Interaction::IInteractor"
constexpr operator  ::Oculus::Interaction::IInteractor*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
constexpr operator  ::Oculus::Interaction::IInteractorView*() noexcept;

/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr operator  ::Oculus::Interaction::IUpdateDriver*() noexcept;

/// @brief Method AnyInteractor, addr 0xa40c3d0, size 0x174, virtual false, abstract: false, final false
inline bool AnyInteractor(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  predicate) ;

/// @brief Method Awake, addr 0xa40b7a4, size 0x31c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CompareCandidates, addr 0xa40bf18, size 0x4b8, virtual false, abstract: false, final false
inline int32_t CompareCandidates(int32_t  indexA, int32_t  indexB) ;

/// @brief Method CompareStates, addr 0xa40bd14, size 0x54, virtual false, abstract: false, final false
static inline int32_t CompareStates(::Oculus::Interaction::InteractorState  a, ::Oculus::Interaction::InteractorState  b) ;

/// @brief Method Disable, addr 0xa40d030, size 0x1c4, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method DisableAllExcept, addr 0xa40d1f4, size 0x1c8, virtual false, abstract: false, final false
inline void DisableAllExcept(::Oculus::Interaction::IInteractor*  mainInteractor) ;

/// @brief Method Drive, addr 0xa40d5a0, size 0x194, virtual true, abstract: false, final false
inline void Drive() ;

/// @brief Method Enable, addr 0xa40ce40, size 0x1f0, virtual true, abstract: false, final false
inline void Enable() ;

/// @brief Method EnableAllExcept, addr 0xa40d3bc, size 0x1c8, virtual false, abstract: false, final false
inline void EnableAllExcept(::Oculus::Interaction::IInteractor*  mainInteractor) ;

/// @brief Method Hover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Hover() ;

/// @brief Method InjectAllInteractorGroupBase, addr 0xa40d734, size 0x4, virtual false, abstract: false, final false
inline void InjectAllInteractorGroupBase(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors) ;

/// @brief Method InjectInteractors, addr 0xa40d738, size 0x124, virtual false, abstract: false, final false
inline void InjectInteractors(::System::Collections::Generic::List_1<::Oculus::Interaction::IInteractor*>*  interactors) ;

/// @brief Method InjectOptionalActiveState, addr 0xa40d85c, size 0xcc, virtual false, abstract: false, final false
inline void InjectOptionalActiveState(::Oculus::Interaction::IActiveState*  activeState) ;

/// @brief Method InjectOptionalCandidateComparer, addr 0xa40d928, size 0xcc, virtual false, abstract: false, final false
inline void InjectOptionalCandidateComparer(::Oculus::Interaction::ICandidateComparer*  candidateComparer) ;

static inline ::Oculus::Interaction::InteractorGroup* New_ctor() ;

/// @brief Method OnDestroy, addr 0xa40bcb8, size 0x5c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xa40bc9c, size 0x1c, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xa40bc98, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Postprocess, addr 0xa40c9d0, size 0x1d0, virtual true, abstract: false, final false
inline void Postprocess() ;

/// @brief Method Preprocess, addr 0xa40c544, size 0x1ec, virtual true, abstract: false, final false
inline void Preprocess() ;

/// @brief Method Process, addr 0xa40c800, size 0x1d0, virtual true, abstract: false, final false
inline void Process() ;

/// @brief Method ProcessCandidate, addr 0xa40cba0, size 0x2a0, virtual true, abstract: false, final false
inline void ProcessCandidate() ;

/// @brief Method Select, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Select() ;

/// @brief Method Start, addr 0xa40bac0, size 0x1d8, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TryGetBestCandidateIndex, addr 0xa40bd68, size 0x1b0, virtual false, abstract: false, final false
inline bool TryGetBestCandidateIndex(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  predicate, ::by_ref<int32_t>  bestCandidateIndex, int32_t  betterThan, int32_t  skipIndex) ;

/// @brief Method Unhover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unhover() ;

/// @brief Method Unselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Unselect() ;

/// @brief Method Update, addr 0xa40d584, size 0x1c, virtual true, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateActiveState, addr 0xa40c730, size 0xd0, virtual false, abstract: false, final false
inline bool UpdateActiveState() ;

constexpr ::Oculus::Interaction::IActiveState* const& __cordl_internal_get_ActiveState() const;

constexpr ::Oculus::Interaction::IActiveState*& __cordl_internal_get_ActiveState() ;

constexpr ::Oculus::Interaction::ICandidateComparer* const& __cordl_internal_get_CandidateComparer() const;

constexpr ::Oculus::Interaction::ICandidateComparer*& __cordl_internal_get_CandidateComparer() ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>* const& __cordl_internal_get_Interactors() const;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>*& __cordl_internal_get_Interactors() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenPostprocessed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenPostprocessed() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenPreprocessed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenPreprocessed() ;

constexpr ::System::Action* const& __cordl_internal_get_WhenProcessed() const;

constexpr ::System::Action*& __cordl_internal_get_WhenProcessed() ;

constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* const& __cordl_internal_get_WhenStateChanged() const;

constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*& __cordl_internal_get_WhenStateChanged() ;

constexpr bool const& __cordl_internal_get__IsRootDriver_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRootDriver_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__activeState() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__activeState() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__candidateComparer() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__candidateComparer() ;

constexpr ::Oculus::Interaction::UniqueIdentifier* const& __cordl_internal_get__identifier() const;

constexpr ::Oculus::Interaction::UniqueIdentifier*& __cordl_internal_get__identifier() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__interactors() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__interactors() ;

constexpr int32_t const& __cordl_internal_get__maxIterationsPerFrame() const;

constexpr int32_t& __cordl_internal_get__maxIterationsPerFrame() ;

constexpr bool const& __cordl_internal_get__started() const;

constexpr bool& __cordl_internal_get__started() ;

constexpr ::Oculus::Interaction::InteractorState const& __cordl_internal_get__state() const;

constexpr ::Oculus::Interaction::InteractorState& __cordl_internal_get__state() ;

constexpr void __cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value) ;

constexpr void __cordl_internal_set_CandidateComparer(::Oculus::Interaction::ICandidateComparer*  value) ;

constexpr void __cordl_internal_set_Interactors(::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>*  value) ;

constexpr void __cordl_internal_set_WhenPostprocessed(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenPreprocessed(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenProcessed(::System::Action*  value) ;

constexpr void __cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

constexpr void __cordl_internal_set__IsRootDriver_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__candidateComparer(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value) ;

constexpr void __cordl_internal_set__interactors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set__maxIterationsPerFrame(int32_t  value) ;

constexpr void __cordl_internal_set__started(bool  value) ;

constexpr void __cordl_internal_set__state(::Oculus::Interaction::InteractorState  value) ;

/// @brief Method .ctor, addr 0xa40d9f4, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_WhenPostprocessed, addr 0xa40b60c, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenPostprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenPreprocessed, addr 0xa40b39c, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenPreprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenProcessed, addr 0xa40b4d4, size 0x9c, virtual true, abstract: false, final true
inline void add_WhenProcessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_WhenStateChanged, addr 0xa40b23c, size 0xb0, virtual true, abstract: false, final true
inline void add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_HasCandidatePredicate() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_HasInteractablePredicate() ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* getStaticF_TruePredicate() ;

/// @brief Method get_CandidateProperties, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* get_CandidateProperties() ;

/// @brief Method get_Data, addr 0xa40b224, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* get_Data() ;

/// @brief Method get_HasCandidate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasCandidate() ;

/// @brief Method get_HasInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasInteractable() ;

/// @brief Method get_HasSelectedInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasSelectedInteractable() ;

/// @brief Method get_Identifier, addr 0xa40b78c, size 0x18, virtual true, abstract: false, final true
inline int32_t get_Identifier() ;

/// [CompilerGenerated]
/// @brief Method get_IsRootDriver, addr 0xa40b22c, size 0x8, virtual true, abstract: false, final true
inline bool get_IsRootDriver() ;

/// @brief Method get_MaxIterationsPerFrame, addr 0xa40b214, size 0x8, virtual false, abstract: false, final false
inline int32_t get_MaxIterationsPerFrame() ;

/// @brief Method get_ShouldHover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldHover() ;

/// @brief Method get_ShouldSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldSelect() ;

/// @brief Method get_ShouldUnhover, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldUnhover() ;

/// @brief Method get_ShouldUnselect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_ShouldUnselect() ;

/// @brief Method get_State, addr 0xa40b744, size 0x8, virtual true, abstract: false, final true
inline ::Oculus::Interaction::InteractorState get_State() ;

/// @brief Convert to "::Oculus::Interaction::IInteractor"
constexpr ::Oculus::Interaction::IInteractor* i___Oculus__Interaction__IInteractor() noexcept;

/// @brief Convert to "::Oculus::Interaction::IInteractorView"
constexpr ::Oculus::Interaction::IInteractorView* i___Oculus__Interaction__IInteractorView() noexcept;

/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* i___Oculus__Interaction__IUpdateDriver() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_WhenPostprocessed, addr 0xa40b6a8, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenPostprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenPreprocessed, addr 0xa40b438, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenPreprocessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenProcessed, addr 0xa40b570, size 0x9c, virtual true, abstract: false, final true
inline void remove_WhenProcessed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_WhenStateChanged, addr 0xa40b2ec, size 0xb0, virtual true, abstract: false, final true
inline void remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

static inline void setStaticF_HasCandidatePredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

static inline void setStaticF_HasInteractablePredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

static inline void setStaticF_TruePredicate(::Oculus::Interaction::InteractorGroup_InteractorPredicate*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsRootDriver, addr 0xa40b234, size 0x8, virtual true, abstract: false, final true
inline void set_IsRootDriver(bool  value) ;

/// @brief Method set_MaxIterationsPerFrame, addr 0xa40b21c, size 0x8, virtual false, abstract: false, final false
inline void set_MaxIterationsPerFrame(int32_t  value) ;

/// @brief Method set_State, addr 0xa40b74c, size 0x38, virtual false, abstract: false, final false
inline void set_State(::Oculus::Interaction::InteractorState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorGroup(InteractorGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorGroup(InteractorGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15742};

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IInteractor), new[] {  })]
/// @brief Field _interactors, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____interactors;

/// @brief Field Interactors, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::Oculus::Interaction::IInteractor*>*  ___Interactors;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IActiveState), new[] {  })]
/// [Optional]
/// @brief Field _activeState, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____activeState;

/// @brief Field ActiveState, offset: 0x38, size: 0x8, def value: None
 ::Oculus::Interaction::IActiveState*  ___ActiveState;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.ICandidateComparer), new[] {  })]
/// [Optional]
/// @brief Field _candidateComparer, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____candidateComparer;

/// @brief Field CandidateComparer, offset: 0x48, size: 0x8, def value: None
 ::Oculus::Interaction::ICandidateComparer*  ___CandidateComparer;

/// [SerializeField]
/// @brief Field _maxIterationsPerFrame, offset: 0x50, size: 0x4, def value: None
 int32_t  ____maxIterationsPerFrame;

/// [CompilerGenerated]
/// @brief Field <IsRootDriver>k__BackingField, offset: 0x54, size: 0x1, def value: None
 bool  ____IsRootDriver_k__BackingField;

/// [CompilerGenerated]
/// @brief Field WhenStateChanged, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  ___WhenStateChanged;

/// [CompilerGenerated]
/// @brief Field WhenPreprocessed, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___WhenPreprocessed;

/// [CompilerGenerated]
/// @brief Field WhenProcessed, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___WhenProcessed;

/// [CompilerGenerated]
/// @brief Field WhenPostprocessed, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___WhenPostprocessed;

/// @brief Field _state, offset: 0x78, size: 0x4, def value: None
 ::Oculus::Interaction::InteractorState  ____state;

/// @brief Field _identifier, offset: 0x80, size: 0x8, def value: None
 ::Oculus::Interaction::UniqueIdentifier*  ____identifier;

/// @brief Field _started, offset: 0x88, size: 0x1, def value: None
 bool  ____started;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____interactors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ___Interactors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____activeState) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ___ActiveState) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____candidateComparer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ___CandidateComparer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____maxIterationsPerFrame) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____IsRootDriver_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ___WhenStateChanged) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ___WhenPreprocessed) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ___WhenProcessed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ___WhenPostprocessed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____state) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____identifier) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::InteractorGroup, ____started) == 0x88, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::InteractorGroup) == 0x90, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorGroup/<>c
class CORDL_TYPE InteractorGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::InteractorGroup___c*  __9;

/// @brief Field <>9__60_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_0, put=setStaticF___9__60_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  __9__60_0;

/// @brief Field <>9__60_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__60_1, put=setStaticF___9__60_1)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  __9__60_1;

/// @brief Field <>9__81_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__81_0, put=setStaticF___9__81_0)) ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  __9__81_0;

/// @brief Field <>9__84_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_0, put=setStaticF___9__84_0)) ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  __9__84_0;

/// @brief Field <>9__84_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_1, put=setStaticF___9__84_1)) ::System::Action*  __9__84_1;

/// @brief Field <>9__84_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_2, put=setStaticF___9__84_2)) ::System::Action*  __9__84_2;

/// @brief Field <>9__84_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__84_3, put=setStaticF___9__84_3)) ::System::Action*  __9__84_3;

static inline ::Oculus::Interaction::InteractorGroup___c* New_ctor() ;

/// @brief Method <Awake>b__60_0, addr 0xa40e048, size 0x5c, virtual false, abstract: false, final false
inline bool _Awake_b__60_0(::UnityEngine::Object*  mono) ;

/// @brief Method <Awake>b__60_1, addr 0xa40e0a4, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IInteractor* _Awake_b__60_1(::UnityEngine::Object*  mono) ;

/// @brief Method <InjectInteractors>b__81_0, addr 0xa40e0ec, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectInteractors_b__81_0(::Oculus::Interaction::IInteractor*  i) ;

/// @brief Method <.cctor>b__85_0, addr 0xa40e174, size 0x8, virtual false, abstract: false, final false
inline bool __cctor_b__85_0(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method <.cctor>b__85_1, addr 0xa40e17c, size 0xa0, virtual false, abstract: false, final false
inline bool __cctor_b__85_1(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method <.cctor>b__85_2, addr 0xa40e21c, size 0xa0, virtual false, abstract: false, final false
inline bool __cctor_b__85_2(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

/// @brief Method <.ctor>b__84_0, addr 0xa40e164, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__84_0(::Oculus::Interaction::InteractorStateChangeArgs  _p0_) ;

/// @brief Method <.ctor>b__84_1, addr 0xa40e168, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__84_1() ;

/// @brief Method <.ctor>b__84_2, addr 0xa40e16c, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__84_2() ;

/// @brief Method <.ctor>b__84_3, addr 0xa40e170, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__84_3() ;

/// @brief Method .ctor, addr 0xa40e040, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::InteractorGroup___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Object>>* getStaticF___9__60_0() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>* getStaticF___9__60_1() ;

static inline ::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>* getStaticF___9__81_0() ;

static inline ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* getStaticF___9__84_0() ;

static inline ::System::Action* getStaticF___9__84_1() ;

static inline ::System::Action* getStaticF___9__84_2() ;

static inline ::System::Action* getStaticF___9__84_3() ;

static inline void setStaticF___9(::Oculus::Interaction::InteractorGroup___c*  value) ;

static inline void setStaticF___9__60_0(::System::Predicate_1<::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__60_1(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IInteractor*>*  value) ;

static inline void setStaticF___9__81_0(::System::Converter_2<::Oculus::Interaction::IInteractor*,::UnityW<::UnityEngine::Object>>*  value) ;

static inline void setStaticF___9__84_0(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value) ;

static inline void setStaticF___9__84_1(::System::Action*  value) ;

static inline void setStaticF___9__84_2(::System::Action*  value) ;

static inline void setStaticF___9__84_3(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorGroup___c(InteractorGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorGroup___c(InteractorGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::InteractorGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
// Dependencies System.MulticastDelegate
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.InteractorGroup/InteractorPredicate
class CORDL_TYPE InteractorGroup_InteractorPredicate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xa40df50, size 0x60, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Oculus::Interaction::IInteractor*  interactor, int32_t  index, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xa40dfb0, size 0x28, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xa40df3c, size 0x14, virtual true, abstract: false, final false
inline bool Invoke(::Oculus::Interaction::IInteractor*  interactor, int32_t  index) ;

static inline ::Oculus::Interaction::InteractorGroup_InteractorPredicate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xa40de30, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorGroup_InteractorPredicate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroup_InteractorPredicate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorGroup_InteractorPredicate(InteractorGroup_InteractorPredicate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorGroup_InteractorPredicate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorGroup_InteractorPredicate(InteractorGroup_InteractorPredicate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15740};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::InteractorGroup_InteractorPredicate) == 0x80, "Size mismatch!");

} // namespace end def Oculus::Interaction
