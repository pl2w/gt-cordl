#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerInteractor_2.hpp"
#include "Oculus/Interaction/zzzz__Interactor_2_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractor_2_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEventType_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::GeneratePointerEvent(::Oculus::Interaction::PointerEventType  pointerEventType, TInteractable  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(),
                        {"GeneratePointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEventType>(), ::i2c::type_of<TInteractable>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEventType, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::HandlePointerEventRaised(::Oculus::Interaction::PointerEvent  evt)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::InteractableSet(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::InteractableUnset(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::InteractableSelected(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::InteractableUnselected(TInteractable  interactable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::DoPostprocess()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::UnityEngine::Pose Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::ComputePointerPose()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>* Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>*>());
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::PointerInteractor_2<TInteractor,TInteractable>::PointerInteractor_2()   {
}
