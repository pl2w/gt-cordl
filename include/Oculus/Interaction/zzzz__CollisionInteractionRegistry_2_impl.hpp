#pragma once
// IWYU pragma private; include "Oculus/Interaction/CollisionInteractionRegistry_2.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry_2_impl.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_impl.hpp"
#include "Oculus/Interaction/zzzz__CollisionInteractionRegistry_2_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractable_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableRegistry`2_InteractableSet_def.hpp"
#include "Oculus/Interaction/zzzz__InteractableTriggerBroadcaster_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/zzzz__Rigidbody_def.hpp"
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>*& Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::__cordl_internal_get__rigidbodyCollisionMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodyCollisionMap;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>* const& Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::__cordl_internal_get__rigidbodyCollisionMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rigidbodyCollisionMap;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::__cordl_internal_set__rigidbodyCollisionMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Rigidbody>,::System::Collections::Generic::HashSet_1<TInteractable>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rigidbodyCollisionMap = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*& Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::__cordl_internal_get__broadcasters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcasters;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>* const& Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::__cordl_internal_get__broadcasters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____broadcasters;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::__cordl_internal_set__broadcasters(::System::Collections::Generic::Dictionary_2<TInteractable,::UnityW<::Oculus::Interaction::InteractableTriggerBroadcaster>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____broadcasters = value;
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::setStaticF__empty(::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>, "_empty", ::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>(std::forward<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::getStaticF__empty()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>, "_empty", ::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::Register(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::Unregister(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::HandleTriggerEntered(::Oculus::Interaction::IInteractable*  interactable, ::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>(),
                        {"HandleTriggerEntered", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable, rigidbody);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::HandleTriggerExited(::Oculus::Interaction::IInteractable*  interactable, ::UnityEngine::Rigidbody*  rigidbody)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>(),
                        {"HandleTriggerExited", {}, {::i2c::type_of<::Oculus::Interaction::IInteractable*>(), ::i2c::type_of<::UnityEngine::Rigidbody*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable, rigidbody);
}
template<typename TInteractor,typename TInteractable>
inline ::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable> Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::List(TInteractor  interactor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InteractableRegistry_2_InteractableSet<TInteractor,TInteractable>>(this, ___internal_method, interactor);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>* Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>*>());
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::CollisionInteractionRegistry_2<TInteractor,TInteractable>::CollisionInteractionRegistry_2()   {
}
