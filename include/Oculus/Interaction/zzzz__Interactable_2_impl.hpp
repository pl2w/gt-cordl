#pragma once
// IWYU pragma private; include "Oculus/Interaction/Interactable_2.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
#include "Oculus/Interaction/Collections/zzzz__EnumerableHashSet_1_def.hpp"
#include "Oculus/Interaction/Collections/zzzz__IEnumerableHashSet_1_def.hpp"
#include "Oculus/Interaction/zzzz__IGameObjectFilter_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractableView_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry_2_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableStateChangeArgs_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableState_def.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_def.hpp"
#include "Oculus/Interaction/zzzz__MAction_1_def.hpp"
#include "Oculus/Interaction/zzzz__MultiAction_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Converter_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__interactorFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__interactorFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactorFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__interactorFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactorFilters = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_InteractorFilters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractorFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_InteractorFilters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InteractorFilters;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set_InteractorFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InteractorFilters = value;
}
template<typename TInteractor,typename TInteractable>
constexpr int32_t& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__maxInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInteractors;
}
template<typename TInteractor,typename TInteractable>
constexpr int32_t const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__maxInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxInteractors;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__maxInteractors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxInteractors = value;
}
template<typename TInteractor,typename TInteractable>
constexpr int32_t& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__maxSelectingInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSelectingInteractors;
}
template<typename TInteractor,typename TInteractable>
constexpr int32_t const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__maxSelectingInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____maxSelectingInteractors;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__maxSelectingInteractors(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____maxSelectingInteractors = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__data(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Object*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__Data_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Object* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__Data_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Data_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__Data_k__BackingField(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Data_k__BackingField = value;
}
template<typename TInteractor,typename TInteractable>
constexpr bool& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TInteractor,typename TInteractable>
constexpr bool const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__interactors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__interactors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____interactors;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__interactors(::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____interactors = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__selectingInteractors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectingInteractors;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__selectingInteractors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectingInteractors;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__selectingInteractors(::Oculus::Interaction::Collections::EnumerableHashSet_1<TInteractor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectingInteractors = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::InteractableState& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::InteractableState const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____state;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__state(::Oculus::Interaction::InteractableState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____state = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenStateChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenStateChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenStateChanged;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenStateChanged = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenInteractorViewAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenInteractorViewAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenInteractorViewAdded = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenInteractorViewRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenInteractorViewRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenInteractorViewRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenInteractorViewRemoved = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenSelectingInteractorViewAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenSelectingInteractorViewAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelectingInteractorViewAdded = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenSelectingInteractorViewRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::IInteractorView*>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenSelectingInteractorViewRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenSelectingInteractorViewRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenSelectingInteractorViewRemoved = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractorAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractorAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractorAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractorAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__whenInteractorAdded(::Oculus::Interaction::MultiAction_1<TInteractor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenInteractorAdded = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractorRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractorRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenInteractorRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenInteractorRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__whenInteractorRemoved(::Oculus::Interaction::MultiAction_1<TInteractor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenInteractorRemoved = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenSelectingInteractorAdded()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenSelectingInteractorAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenSelectingInteractorAdded() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenSelectingInteractorAdded;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__whenSelectingInteractorAdded(::Oculus::Interaction::MultiAction_1<TInteractor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenSelectingInteractorAdded = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>*& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenSelectingInteractorRemoved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenSelectingInteractorRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::MultiAction_1<TInteractor>* const& Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_get__whenSelectingInteractorRemoved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____whenSelectingInteractorRemoved;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::__cordl_internal_set__whenSelectingInteractorRemoved(::Oculus::Interaction::MultiAction_1<TInteractor>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____whenSelectingInteractorRemoved = value;
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::setStaticF__registry(::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*, "_registry", ::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(std::forward<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::getStaticF__registry()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*, "_registry", ::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline ::System::Object* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::set_Data(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"set_Data", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline int32_t Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_MaxInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_MaxInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::set_MaxInteractors(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"set_MaxInteractors", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline int32_t Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_MaxSelectingInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_MaxSelectingInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::set_MaxSelectingInteractors(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"set_MaxSelectingInteractors", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_InteractorViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_InteractorViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_SelectingInteractorViews()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_SelectingInteractorViews", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IInteractorView*>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::add_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"add_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::remove_WhenStateChanged(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenStateChanged", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::add_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"add_WhenInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::remove_WhenInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::add_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"add_WhenInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::remove_WhenInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::add_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"add_WhenSelectingInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::remove_WhenSelectingInteractorViewAdded(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenSelectingInteractorViewAdded", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::add_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"add_WhenSelectingInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::remove_WhenSelectingInteractorViewRemoved(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenSelectingInteractorViewRemoved", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractor>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_WhenInteractorAdded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_WhenInteractorAdded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractor>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractor>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_WhenInteractorRemoved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_WhenInteractorRemoved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractor>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractor>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_WhenSelectingInteractorAdded()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_WhenSelectingInteractorAdded", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractor>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::MAction_1<TInteractor>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_WhenSelectingInteractorRemoved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_WhenSelectingInteractorRemoved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::MAction_1<TInteractor>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::InteractableState Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_State()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_State", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractableState>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::set_State(::Oculus::Interaction::InteractableState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"set_State", {}, {::i2c::type_of<::Oculus::Interaction::InteractableState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_Registry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_Registry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(nullptr, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::InteractorAdded(TInteractor  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::InteractorRemoved(TInteractor  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::SelectingInteractorAdded(TInteractor  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::SelectingInteractorRemoved(TInteractor  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_Interactors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_Interactors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::get_SelectingInteractors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"get_SelectingInteractors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Collections::IEnumerableHashSet_1<TInteractor>*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::AddInteractor(TInteractor  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"AddInteractor", {}, {::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::RemoveInteractor(TInteractor  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"RemoveInteractor", {}, {::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::AddSelectingInteractor(TInteractor  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"AddSelectingInteractor", {}, {::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::RemoveSelectingInteractor(TInteractor  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"RemoveSelectingInteractor", {}, {::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::UpdateInteractableState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"UpdateInteractableState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::CanBeSelectedBy(TInteractor  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"CanBeSelectedBy", {}, {::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::HasInteractor(TInteractor  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"HasInteractor", {}, {::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline bool Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::HasSelectingInteractor(TInteractor  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"HasSelectingInteractor", {}, {::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::Enable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"Enable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::Disable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"Disable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::RemoveInteractorByIdentifier(int32_t  id)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"RemoveInteractorByIdentifier", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::SetRegistry(::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*  registry)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, registry);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::InjectOptionalInteractorFilters(::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*  interactorFilters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"InjectOptionalInteractorFilters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::IGameObjectFilter*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactorFilters);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::InjectOptionalData(::System::Object*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {"InjectOptionalData", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractable"
template<typename TInteractor,typename TInteractable>
constexpr  Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::operator ::Oculus::Interaction::IInteractable*() noexcept {
return static_cast<::Oculus::Interaction::IInteractable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractable"
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IInteractable* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::i___Oculus__Interaction__IInteractable() noexcept {
return static_cast<::Oculus::Interaction::IInteractable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::IInteractableView"
template<typename TInteractor,typename TInteractable>
constexpr  Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::operator ::Oculus::Interaction::IInteractableView*() noexcept {
return static_cast<::Oculus::Interaction::IInteractableView*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IInteractableView"
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IInteractableView* Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::i___Oculus__Interaction__IInteractableView() noexcept {
return static_cast<::Oculus::Interaction::IInteractableView*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Interactable_2<TInteractor,TInteractable>::Interactable_2()   {
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9(::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*, "<>9", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*, "<>9", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9__75_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*, "<>9__75_0", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9__75_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IGameObjectFilter*>*, "<>9__75_0", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9__80_0(::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*  value)  {
::cordl_internals::setStaticField<::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*, "<>9__80_0", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9__80_0()  {
return ::cordl_internals::getStaticField<::System::Converter_2<::Oculus::Interaction::IGameObjectFilter*,::UnityW<::UnityEngine::Object>>*, "<>9__80_0", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9__82_0(::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*, "<>9__82_0", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9__82_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::InteractableStateChangeArgs>*, "<>9__82_0", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9__82_1(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_1", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9__82_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_1", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9__82_2(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_2", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9__82_2()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_2", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9__82_3(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_3", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9__82_3()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_3", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::setStaticF___9__82_4(::System::Action_1<::Oculus::Interaction::IInteractorView*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_4", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action_1<::Oculus::Interaction::IInteractorView*>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action_1<::Oculus::Interaction::IInteractorView*>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::getStaticF___9__82_4()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::IInteractorView*>*, "<>9__82_4", ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::IGameObjectFilter* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::_Awake_b__75_0(::UnityEngine::Object*  mono)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {"<Awake>b__75_0", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IGameObjectFilter*>(this, ___internal_method, mono);
}
template<typename TInteractor,typename TInteractable>
inline ::UnityW<::UnityEngine::Object> Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::_InjectOptionalInteractorFilters_b__80_0(::Oculus::Interaction::IGameObjectFilter*  interactorFilter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {"<InjectOptionalInteractorFilters>b__80_0", {}, {::i2c::type_of<::Oculus::Interaction::IGameObjectFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, interactorFilter);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::__ctor_b__82_0(::Oculus::Interaction::InteractableStateChangeArgs  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__82_0", {}, {::i2c::type_of<::Oculus::Interaction::InteractableStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::__ctor_b__82_1(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__82_1", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::__ctor_b__82_2(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__82_2", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::__ctor_b__82_3(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__82_3", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::__ctor_b__82_4(::Oculus::Interaction::IInteractorView*  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__82_4", {}, {::i2c::type_of<::Oculus::Interaction::IInteractorView*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>* Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>*>());
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::Interactable_2___c<TInteractor,TInteractable>::Interactable_2___c()   {
}
