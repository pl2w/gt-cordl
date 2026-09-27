#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Filtering/XRTargetFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRBaseTargetFilter_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/zzzz__XRTargetEvaluator_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRTargetFilter)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
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
class Type;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetEvaluator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetFilter___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRTargetFilter___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetFilter");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRTargetFilter/<>c");
// [AddComponentMenu("XR/XR Target Filter", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Filtering.XRBaseTargetFilter, UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetEvaluator
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter
class CORDL_TYPE XRTargetFilter : public ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter {
public:
// Declarations
using __c = ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c;

/// @brief Field <isProcessing>k__BackingField, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__isProcessing_k__BackingField, put=__cordl_internal_set__isProcessing_k__BackingField)) bool  _isProcessing_k__BackingField;

 __declspec(property(get=get_canProcess)) bool  canProcess;

 __declspec(property(get=get_evaluatorCount)) int32_t  evaluatorCount;

 __declspec(property(get=get_evaluators)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  evaluators;

/// @brief Field interactorLinked, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactorLinked, put=__cordl_internal_set_interactorLinked)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  interactorLinked;

/// @brief Field interactorUnlinked, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactorUnlinked, put=__cordl_internal_set_interactorUnlinked)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  interactorUnlinked;

 __declspec(property(get=get_isProcessing, put=set_isProcessing)) bool  isProcessing;

 __declspec(property(get=get_linkedInteractors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  linkedInteractors;

/// @brief Field m_Evaluators, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Evaluators, put=__cordl_internal_set_m_Evaluators)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  m_Evaluators;

/// @brief Field m_IsAwake, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsAwake, put=__cordl_internal_set_m_IsAwake)) bool  m_IsAwake;

/// @brief Field m_LinkedInteractors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LinkedInteractors, put=__cordl_internal_set_m_LinkedInteractors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  m_LinkedInteractors;

/// @brief Field s_EvaluatorListPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EvaluatorListPool, put=setStaticF_s_EvaluatorListPool)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*  s_EvaluatorListPool;

/// @brief Field s_InteractableFinalScoreMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractableFinalScoreMap, put=setStaticF_s_InteractableFinalScoreMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  s_InteractableFinalScoreMap;

/// @brief Field s_InteractableScoreComparison, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractableScoreComparison, put=setStaticF_s_InteractableScoreComparison)) ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  s_InteractableScoreComparison;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method AddEvaluator, addr 0xb4ac278, size 0x168, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* AddEvaluator(::System::Type*  evaluatorType) ;

/// @brief Method AddEvaluator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>)
inline T AddEvaluator() ;

/// @brief Method Awake, addr 0xb4ab3a4, size 0x1a0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetEnabledEvaluators, addr 0xb4ab998, size 0x228, virtual false, abstract: false, final false
inline void GetEnabledEvaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  results) ;

/// @brief Method GetEnumerator, addr 0xb4abfbc, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* GetEnumerator() ;

/// @brief Method GetEvaluator, addr 0xb4ac0a4, size 0x1d4, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* GetEvaluator(::System::Type*  type) ;

/// @brief Method GetEvaluator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T GetEvaluator() ;

/// @brief Method GetEvaluatorAt, addr 0xb4ac04c, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator* GetEvaluatorAt(int32_t  index) ;

/// @brief Method GetEvaluators, addr 0xb4ab544, size 0xcc, virtual false, abstract: false, final false
inline void GetEvaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  results) ;

/// @brief Method GetLinkedInteractors, addr 0xb4abe50, size 0xcc, virtual false, abstract: false, final false
inline void GetLinkedInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  results) ;

/// @brief Method InteractableScoreDescendingComparison, addr 0xb4aafa0, size 0xc4, virtual false, abstract: false, final false
static inline int32_t InteractableScoreDescendingComparison(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  x, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  y) ;

/// @brief Method Link, addr 0xb4ac604, size 0x148, virtual true, abstract: false, final false
inline void Link(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method MoveEvaluatorTo, addr 0xb4ac530, size 0xd4, virtual false, abstract: false, final false
inline void MoveEvaluatorTo(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator, int32_t  newIndex) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4abbc0, size 0x234, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb4ab7d0, size 0x1c8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4ab610, size 0x1c0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Process, addr 0xb4ac88c, size 0x650, virtual true, abstract: false, final false
inline void Process(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results) ;

/// @brief Method RegisterEvaluatorHandlers, addr 0xb4aa7ac, size 0x2b4, virtual false, abstract: false, final false
inline void RegisterEvaluatorHandlers(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator) ;

/// @brief Method RemoveEvaluator, addr 0xb4aae90, size 0xf8, virtual false, abstract: false, final false
inline void RemoveEvaluator(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator) ;

/// @brief Method RemoveEvaluatorAt, addr 0xb4ac3e0, size 0x150, virtual false, abstract: false, final false
inline void RemoveEvaluatorAt(int32_t  index) ;

/// @brief Method Reset, addr 0xb4abdf4, size 0x5c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb4abf1c, size 0xa0, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Unlink, addr 0xb4ac74c, size 0x140, virtual true, abstract: false, final false
inline void Unlink(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method UnregisterEvaluatorHandlers, addr 0xb4aaa9c, size 0x2b8, virtual false, abstract: false, final false
inline void UnregisterEvaluatorHandlers(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*  evaluator) ;

constexpr bool const& __cordl_internal_get__isProcessing_k__BackingField() const;

constexpr bool& __cordl_internal_get__isProcessing_k__BackingField() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& __cordl_internal_get_interactorLinked() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& __cordl_internal_get_interactorLinked() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& __cordl_internal_get_interactorUnlinked() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& __cordl_internal_get_interactorUnlinked() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* const& __cordl_internal_get_m_Evaluators() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*& __cordl_internal_get_m_Evaluators() ;

constexpr bool const& __cordl_internal_get_m_IsAwake() const;

constexpr bool& __cordl_internal_get_m_IsAwake() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& __cordl_internal_get_m_LinkedInteractors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& __cordl_internal_get_m_LinkedInteractors() ;

constexpr void __cordl_internal_set__isProcessing_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

constexpr void __cordl_internal_set_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_Evaluators(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  value) ;

constexpr void __cordl_internal_set_m_IsAwake(bool  value) ;

constexpr void __cordl_internal_set_m_LinkedInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

/// @brief Method .ctor, addr 0xb4acedc, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_interactorLinked, addr 0xb4ab0cc, size 0xb0, virtual false, abstract: false, final false
inline void add_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_interactorUnlinked, addr 0xb4ab22c, size 0xb0, virtual false, abstract: false, final false
inline void add_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>* getStaticF_s_EvaluatorListPool() ;

static inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* getStaticF_s_InteractableFinalScoreMap() ;

static inline ::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* getStaticF_s_InteractableScoreComparison() ;

/// @brief Method get_canProcess, addr 0xb4ab38c, size 0x18, virtual true, abstract: false, final false
inline bool get_canProcess() ;

/// @brief Method get_evaluatorCount, addr 0xb4ab074, size 0x48, virtual false, abstract: false, final false
inline int32_t get_evaluatorCount() ;

/// @brief Method get_evaluators, addr 0xb4ab06c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* get_evaluators() ;

/// [CompilerGenerated]
/// @brief Method get_isProcessing, addr 0xb4ab0bc, size 0x8, virtual false, abstract: false, final false
inline bool get_isProcessing() ;

/// @brief Method get_linkedInteractors, addr 0xb4ab064, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* get_linkedInteractors() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__XR__Interaction__Toolkit__Filtering__XRTargetEvaluator__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_interactorLinked, addr 0xb4ab17c, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactorLinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_interactorUnlinked, addr 0xb4ab2dc, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactorUnlinked(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

static inline void setStaticF_s_EvaluatorListPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*>*  value) ;

static inline void setStaticF_s_InteractableFinalScoreMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value) ;

static inline void setStaticF_s_InteractableScoreComparison(::System::Comparison_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isProcessing, addr 0xb4ab0c4, size 0x8, virtual false, abstract: false, final false
inline void set_isProcessing(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTargetFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTargetFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTargetFilter(XRTargetFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTargetFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTargetFilter(XRTargetFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11573};

/// @brief Field m_LinkedInteractors, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  ___m_LinkedInteractors;

/// [SerializeReference]
/// @brief Field m_Evaluators, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  ___m_Evaluators;

/// @brief Field m_IsAwake, offset: 0x30, size: 0x1, def value: None
 bool  ___m_IsAwake;

/// [CompilerGenerated]
/// @brief Field <isProcessing>k__BackingField, offset: 0x31, size: 0x1, def value: None
 bool  ____isProcessing_k__BackingField;

/// [CompilerGenerated]
/// @brief Field interactorLinked, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  ___interactorLinked;

/// [CompilerGenerated]
/// @brief Field interactorUnlinked, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  ___interactorUnlinked;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___m_LinkedInteractors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___m_Evaluators) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___m_IsAwake) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ____isProcessing_k__BackingField) == 0x31, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___interactorLinked) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter, ___interactorUnlinked) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter/<>c
class CORDL_TYPE XRTargetFilter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*  __9;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c* New_ctor() ;

/// @brief Method <.cctor>b__49_0, addr 0xb4ad25c, size 0x68, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>* __cctor_b__49_0() ;

/// @brief Method <.cctor>b__49_1, addr 0xb4ad2c4, size 0x6c, virtual false, abstract: false, final false
inline void __cctor_b__49_1(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetEvaluator*>*  list) ;

/// @brief Method .ctor, addr 0xb4ad254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRTargetFilter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRTargetFilter___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRTargetFilter___c(XRTargetFilter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRTargetFilter___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRTargetFilter___c(XRTargetFilter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11572};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRTargetFilter___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Filtering
