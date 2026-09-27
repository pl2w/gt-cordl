#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableRegistry`2_InteractableSet.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_Enumerator_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename TInteractor,typename TInteractable>
inline void GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::_ctor(::System::Collections::Generic::ISet_1<TInteractable>*  onlyInclude, TInteractor  testAgainst)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::ISet_1<TInteractable>*>(), ::i2c::type_of<TInteractor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, onlyInclude, testAgainst);
}
template<typename TInteractor,typename TInteractable>
inline ::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable> GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::System::Collections::Generic::IEnumerator_1<TInteractable>* GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::System_Collections_Generic_IEnumerable_TInteractable__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(),
                        {"System.Collections.Generic.IEnumerable<TInteractable>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TInteractable>*>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::System::Collections::IEnumerator* GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::Include(TInteractable  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(),
                        {"Include", {}, {::i2c::type_of<TInteractable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, interactable);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TInteractable>"
template<typename TInteractor,typename TInteractable>
constexpr  GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::operator ::System::Collections::Generic::IEnumerable_1<TInteractable>*()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<TInteractable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<TInteractable>"
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::IEnumerable_1<TInteractable>* GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::i___System__Collections__Generic__IEnumerable_1_TInteractable_()  {
return static_cast<::System::Collections::Generic::IEnumerable_1<TInteractable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename TInteractor,typename TInteractable>
constexpr  GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::operator ::System::Collections::IEnumerable*()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::i___System__Collections__IEnumerable()  {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_data", ty: "::System::Collections::Generic::IReadOnlyList_1<TInteractable>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_onlyInclude", ty: "::System::Collections::Generic::ISet_1<TInteractable>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_testAgainst", ty: "TInteractor", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TInteractor,typename TInteractable>
constexpr ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::InteractableRegistry_2_InteractableSet(::System::Collections::Generic::IReadOnlyList_1<TInteractable>*  _data, ::System::Collections::Generic::ISet_1<TInteractable>*  _onlyInclude, TInteractor  _testAgainst) noexcept  {
this->_data = _data;
this->_onlyInclude = _onlyInclude;
this->_testAgainst = _testAgainst;
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>::InteractableRegistry_2_InteractableSet()   {
}
