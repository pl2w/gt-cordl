#pragma once
// IWYU pragma private; include "Oculus/Interaction/Interactor_2.hpp"
#include "Oculus/Interaction/zzzz__InteractorState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
#include "Oculus/Interaction/zzzz__IActiveState_def.hpp"
#include "Oculus/Interaction/zzzz__IGameObjectFilter_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractor_def.hpp"
#include "Oculus/Interaction/zzzz__ISelector_def.hpp"
#include "Oculus/Interaction/zzzz__IUpdateDriver_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorState_def.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_def.hpp"
#include "Oculus/Interaction/zzzz__MAction_1_def.hpp"
#include "Oculus/Interaction/zzzz__MultiAction_1_def.hpp"
#include "Oculus/Interaction/zzzz__UniqueIdentifier_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TInteractor,typename TInteractable>
constexpr uint64_t& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__nativeId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeId;
}
template<typename TInteractor,typename TInteractable>
constexpr uint64_t const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__nativeId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeId;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__nativeId(uint64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeId = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__activeState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__activeState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeState;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__activeState(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeState = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IActiveState*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_ActiveState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IActiveState* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_ActiveState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ActiveState;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set_ActiveState(::Oculus::Interaction::IActiveState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ActiveState = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__interactableFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__interactableFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactableFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__interactableFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactableFilters = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_InteractableFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractableFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_InteractableFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractableFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set_InteractableFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteractableFilters = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__candidateTiebreaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidateTiebreaker;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__candidateTiebreaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidateTiebreaker;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__candidateTiebreaker(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____candidateTiebreaker = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::IComparer_1<TInteractable>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_CandidateTiebreaker()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CandidateTiebreaker;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::IComparer_1<TInteractable>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_CandidateTiebreaker() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CandidateTiebreaker;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set_CandidateTiebreaker(::System::Collections::Generic::IComparer_1<TInteractable>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CandidateTiebreaker = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Func_1<TInteractable>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__computeCandidateOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeCandidateOverride;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Func_1<TInteractable>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__computeCandidateOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeCandidateOverride;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__computeCandidateOverride(::System::Func_1<TInteractable>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____computeCandidateOverride = value;
}
template<typename TInteractor,typename TInteractable>
constexpr bool& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__clearComputeCandidateOverrideOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearComputeCandidateOverrideOnSelect;
}
template<typename TInteractor,typename TInteractable>
constexpr bool const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__clearComputeCandidateOverrideOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearComputeCandidateOverrideOnSelect;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__clearComputeCandidateOverrideOnSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clearComputeCandidateOverrideOnSelect = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Func_1<bool>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__computeShouldSelectOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeShouldSelectOverride;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Func_1<bool>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__computeShouldSelectOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeShouldSelectOverride;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__computeShouldSelectOverride(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____computeShouldSelectOverride = value;
}
template<typename TInteractor,typename TInteractable>
constexpr bool& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__clearComputeShouldSelectOverrideOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearComputeShouldSelectOverrideOnSelect;
}
template<typename TInteractor,typename TInteractable>
constexpr bool const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__clearComputeShouldSelectOverrideOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearComputeShouldSelectOverrideOnSelect;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__clearComputeShouldSelectOverrideOnSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clearComputeShouldSelectOverrideOnSelect = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Func_1<bool>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__computeShouldUnselectOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeShouldUnselectOverride;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Func_1<bool>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__computeShouldUnselectOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____computeShouldUnselectOverride;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__computeShouldUnselectOverride(::System::Func_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____computeShouldUnselectOverride = value;
}
template<typename TInteractor,typename TInteractable>
constexpr bool& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__clearComputeShouldUnselectOverrideOnUnselect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearComputeShouldUnselectOverrideOnUnselect;
}
template<typename TInteractor,typename TInteractable>
constexpr bool const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__clearComputeShouldUnselectOverrideOnUnselect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____clearComputeShouldUnselectOverrideOnUnselect;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__clearComputeShouldUnselectOverrideOnUnselect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____clearComputeShouldUnselectOverrideOnUnselect = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::InteractorState& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::InteractorState const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__state(::Oculus::Interaction::InteractorState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenStateChanged = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenPreprocessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPreprocessed;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenPreprocessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPreprocessed;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set_WhenPreprocessed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenPreprocessed = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenProcessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenProcessed;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenProcessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenProcessed;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set_WhenProcessed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenProcessed = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenPostprocessed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPostprocessed;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get_WhenPostprocessed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPostprocessed;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set_WhenPostprocessed(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenPostprocessed = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::ISelector*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__selector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::ISelector* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__selector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selector;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__selector(::Oculus::Interaction::ISelector*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selector = value;
}
template<typename TInteractor,typename TInteractable>
constexpr int32_t& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__maxIterationsPerFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxIterationsPerFrame;
}
template<typename TInteractor,typename TInteractable>
constexpr int32_t const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__maxIterationsPerFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxIterationsPerFrame;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__maxIterationsPerFrame(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxIterationsPerFrame = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::Queue_1<bool>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__selectorQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorQueue;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::Queue_1<bool>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__selectorQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectorQueue;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__selectorQueue(::System::Collections::Generic::Queue_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectorQueue = value;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__candidate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidate;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__candidate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____candidate;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__candidate(TInteractable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____candidate = value;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactable;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__interactable(TInteractable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactable = value;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__selectedInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedInteractable;
}
template<typename TInteractor,typename TInteractable>
constexpr TInteractable const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__selectedInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedInteractable;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__selectedInteractable(TInteractable  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedInteractable = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableSet;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableSet;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__whenInteractableSet(::Oculus::Interaction::MultiAction_1<TInteractable>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenInteractableSet = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableUnset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableUnset;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableUnset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableUnset;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__whenInteractableUnset(::Oculus::Interaction::MultiAction_1<TInteractable>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenInteractableUnset = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableSelected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableSelected;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableSelected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableSelected;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__whenInteractableSelected(::Oculus::Interaction::MultiAction_1<TInteractable>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenInteractableSelected = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableUnselected()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableUnselected;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractable>* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractableUnselected() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractableUnselected;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__whenInteractableUnselected(::Oculus::Interaction::MultiAction_1<TInteractable>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenInteractableUnselected = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::UniqueIdentifier*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__identifier()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::UniqueIdentifier* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__identifier() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____identifier;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__identifier(::Oculus::Interaction::UniqueIdentifier*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____identifier = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Object*& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Object* const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__Data_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
template<typename TInteractor,typename TInteractable>
constexpr bool& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TInteractor,typename TInteractable>
constexpr bool const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
template<typename TInteractor,typename TInteractable>
constexpr bool& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__IsRootDriver_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr bool const& Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_get__IsRootDriver_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IsRootDriver_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::__cordl_internal_set__IsRootDriver_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IsRootDriver_k__BackingField = value;
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::DoPreprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::DoNormalUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::DoHoverUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::DoSelectUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::DoPostprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_ShouldHover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_ShouldUnhover()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_ShouldSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_ShouldSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_ShouldUnselect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_ShouldUnselect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ComputeShouldSelect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ComputeShouldUnselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::add_WhenPreprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"add_WhenPreprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::remove_WhenPreprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenPreprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::add_WhenProcessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"add_WhenProcessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::remove_WhenProcessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenProcessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::add_WhenPostprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"add_WhenPostprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::remove_WhenPostprocessed(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenPostprocessed", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline int32_t Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_MaxIterationsPerFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_MaxIterationsPerFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::set_MaxIterationsPerFrame(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"set_MaxIterationsPerFrame", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::ISelector* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_Selector()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_Selector", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::ISelector*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::set_Selector(::Oculus::Interaction::ISelector*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"set_Selector", {}, {::i2c::type_of<::Oculus::Interaction::ISelector*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_QueuedSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_QueuedSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_QueuedUnselect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_QueuedUnselect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::InteractorState Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractorState>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::set_State(::Oculus::Interaction::InteractorState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"set_State", {}, {::i2c::type_of<::Oculus::Interaction::InteractorState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline ::System::Object* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_CandidateProperties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline TInteractable Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_Candidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_Candidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TInteractable>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline TInteractable Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_Interactable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_Interactable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TInteractable>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline TInteractable Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_SelectedInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_SelectedInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TInteractable>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_HasCandidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_HasCandidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_HasInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_HasInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_HasSelectedInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_HasSelectedInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractable>* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_WhenInteractableSet()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_WhenInteractableSet", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractable>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractable>* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_WhenInteractableUnset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_WhenInteractableUnset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractable>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractable>* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_WhenInteractableSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_WhenInteractableSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractable>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractable>* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_WhenInteractableUnselected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_WhenInteractableUnselected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractable>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InteractableSet(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InteractableUnset(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InteractableSelected(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InteractableUnselected(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline int32_t Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_Identifier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_Identifier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::System::Object* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::set_Data(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::SetComputeCandidateOverride(::System::Func_1<TInteractable>*  computeCandidate, bool  shouldClearOverrideOnSelect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeCandidate, shouldClearOverrideOnSelect);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ClearComputeCandidateOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::SetComputeShouldSelectOverride(::System::Func_1<bool>*  computeShouldSelect, bool  clearOverrideOnSelect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShouldSelect, clearOverrideOnSelect);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ClearComputeShouldSelectOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::SetComputeShouldUnselectOverride(::System::Func_1<bool>*  computeShouldUnselect, bool  clearOverrideOnUnselect)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, computeShouldUnselect, clearOverrideOnUnselect);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ClearComputeShouldUnselectOverride()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Preprocess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"Preprocess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Process()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"Process", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Postprocess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"Postprocess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ProcessCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InteractableChangesUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"InteractableChangesUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Hover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"Hover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Unhover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"Unhover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Select()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Unselect()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline TInteractable Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ComputeCandidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<TInteractable>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline int32_t Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::ComputeCandidateTiebreaker(TInteractable  a, TInteractable  b)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::CanSelect(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::SetInteractable(TInteractable  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"SetInteractable", {}, {::i2c::type_of<TInteractable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::UnsetInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"UnsetInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::SelectInteractable(TInteractable  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"SelectInteractable", {}, {::i2c::type_of<TInteractable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::UnselectInteractable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"UnselectInteractable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::HandleEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::HandleDisabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::HandleSelected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::HandleUnselected()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 70}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::UpdateActiveState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"UpdateActiveState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::get_IsRootDriver()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"get_IsRootDriver", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::set_IsRootDriver(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"set_IsRootDriver", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Update()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 71}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Drive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InjectOptionalActiveState(::Oculus::Interaction::IActiveState*  activeState)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"InjectOptionalActiveState", {}, {::i2c::type_of<::Oculus::Interaction::IActiveState*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, activeState);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InjectOptionalInteractableFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  interactableFilters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"InjectOptionalInteractableFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactableFilters);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InjectOptionalCandidateTiebreaker(::System::Collections::Generic::IComparer_1<TInteractable>*  candidateTiebreaker)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"InjectOptionalCandidateTiebreaker", {}, {::i2c::type_of<::System::Collections::Generic::IComparer_1<TInteractable>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, candidateTiebreaker);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::InjectOptionalData(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {"InjectOptionalData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractor"
template<typename TInteractor,typename TInteractable>
constexpr  Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::operator ::Oculus::Interaction::IInteractor*() noexcept {
return static_cast<::Oculus::Interaction::IInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractor"
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IInteractor* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::i___Oculus__Interaction__IInteractor() noexcept {
return static_cast<::Oculus::Interaction::IInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractorView"
template<typename TInteractor,typename TInteractable>
constexpr  Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::operator ::Oculus::Interaction::IInteractorView*() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractorView"
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IInteractorView* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::i___Oculus__Interaction__IInteractorView() noexcept {
return static_cast<::Oculus::Interaction::IInteractorView*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
template<typename TInteractor,typename TInteractable>
constexpr  Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::operator ::Oculus::Interaction::IUpdateDriver*() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IUpdateDriver* Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::i___Oculus__Interaction__IUpdateDriver() noexcept {
return static_cast<::Oculus::Interaction::IUpdateDriver*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Interactor_2<TInteractor,TInteractable>::Interactor_2()   {
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::setStaticF___9(::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*, "<>9", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(std::forward<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*, "<>9", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::setStaticF___9__100_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*, "<>9__100_0", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::getStaticF___9__100_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*, "<>9__100_0", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::setStaticF___9__141_0(::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*, "<>9__141_0", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(std::forward<::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::getStaticF___9__141_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*, "<>9__141_0", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::setStaticF___9__144_0(::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*, "<>9__144_0", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::getStaticF___9__144_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::InteractorStateChangeArgs>*, "<>9__144_0", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::setStaticF___9__144_1(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__144_1", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::getStaticF___9__144_1()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__144_1", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::setStaticF___9__144_2(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__144_2", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::getStaticF___9__144_2()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__144_2", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::setStaticF___9__144_3(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "<>9__144_3", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::getStaticF___9__144_3()  {
return ::cordl_internals::getStaticField<::System::Action*, "<>9__144_3", ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::IGameObjectFilter* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::_Awake_b__100_0(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(),
                        {"<Awake>b__100_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IGameObjectFilter*>(this, ___internal_method, mono);
}
template<typename TInteractor,typename TInteractable>
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::_InjectOptionalInteractableFilters_b__141_0(::Oculus::Interaction::IGameObjectFilter*  interactableFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(),
                        {"<InjectOptionalInteractableFilters>b__141_0", {}, {::i2c::type_of<::Oculus::Interaction::IGameObjectFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, interactableFilter);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::__ctor_b__144_0(::Oculus::Interaction::InteractorStateChangeArgs  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__144_0", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::__ctor_b__144_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__144_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::__ctor_b__144_2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__144_2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::__ctor_b__144_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__144_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>* Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>*>());
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Interactor_2___c<TInteractor,TInteractable>::Interactor_2___c()   {
}
