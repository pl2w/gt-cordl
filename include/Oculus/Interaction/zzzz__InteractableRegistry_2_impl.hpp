#pragma once
// IWYU pragma private; include "Oculus/Interaction/InteractableRegistry_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry_2_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::setStaticF__interactables(::System::Collections::Generic::List_1<TInteractable>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<TInteractable>*, "_interactables", ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(std::forward<::System::Collections::Generic::List_1<TInteractable>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Collections::Generic::List_1<TInteractable>* Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::getStaticF__interactables()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<TInteractable>*, "_interactables", ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::Register(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::Unregister(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::List(TInteractor  interactor, ::System::Collections::Generic::HashSet_1<TInteractable>*  onlyInclude)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(),
                        {"List", {}, {::i2c::type_of<TInteractor>(), ::i2c::type_of<::System::Collections::Generic::HashSet_1<TInteractable>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(this, ___internal_method, interactor, onlyInclude);
}
template<typename TInteractor,typename TInteractable>
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::List(TInteractor  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::List()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>* Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>*>());
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::InteractableRegistry_2<TInteractor,TInteractable>::InteractableRegistry_2()   {
}
