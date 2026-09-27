#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableRegistry`2_InteractableSet_Enumerator.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_Enumerator_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename TInteractor,typename TInteractable>
inline ::System::Collections::Generic::IReadOnlyList_1<TInteractable>* GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<TInteractable>*>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::_ctor(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>  set)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, set);
}
template<typename TInteractor,typename TInteractable>
inline TInteractable GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<TInteractable>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::System::Object* GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline bool GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TInteractable>"
template<typename TInteractor,typename TInteractable>
constexpr  GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::operator ::System::Collections::Generic::IEnumerator_1<TInteractable>*()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TInteractable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<TInteractable>"
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::IEnumerator_1<TInteractable>* GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::i___System__Collections__Generic__IEnumerator_1_TInteractable_()  {
return static_cast<::System::Collections::Generic::IEnumerator_1<TInteractable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename TInteractor,typename TInteractable>
constexpr  GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::operator ::System::Collections::IEnumerator*()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::IEnumerator* GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::i___System__Collections__IEnumerator()  {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename TInteractor,typename TInteractable>
constexpr  GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
template<typename TInteractor,typename TInteractable>
constexpr ::System::IDisposable* GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_set", ty: "::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_position", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
template<typename TInteractor,typename TInteractable>
constexpr ::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::InteractableSet_InteractableRegistry_2_Enumerator(::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>  _set, int32_t  _position) noexcept  {
this->_set = _set;
this->_position = _position;
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::GlobalNamespace::InteractableSet_InteractableRegistry_2_Enumerator<TInteractor,TInteractable>::InteractableSet_InteractableRegistry_2_Enumerator()   {
}
