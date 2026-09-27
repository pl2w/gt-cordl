#pragma once
// IWYU pragma private; include "Oculus/Interaction/PointerInteractable_2.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
#include "Oculus/Interaction/zzzz__IPointableElement_def.hpp"
#include "Oculus/Interaction/zzzz__IPointable_def.hpp"
#include "Oculus/Interaction/zzzz__PointerEvent_def.hpp"
#include "Oculus/Interaction/zzzz__PointerInteractable_2_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_get__pointableElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
template<typename TInteractor,typename TInteractable>
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_get__pointableElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pointableElement;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_set__pointableElement(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pointableElement = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IPointableElement*& Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_get__PointableElement_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointableElement_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IPointableElement* const& Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_get__PointableElement_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____PointableElement_k__BackingField;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_set__PointableElement_k__BackingField(::Oculus::Interaction::IPointableElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____PointableElement_k__BackingField = value;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>*& Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenPointerEventRaised()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPointerEventRaised;
}
template<typename TInteractor,typename TInteractable>
constexpr ::System::Action_1<::Oculus::Interaction::PointerEvent>* const& Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_get_WhenPointerEventRaised() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WhenPointerEventRaised;
}
template<typename TInteractor,typename TInteractable>
constexpr void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::__cordl_internal_set_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WhenPointerEventRaised = value;
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::IPointableElement* Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::get_PointableElement()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {"get_PointableElement", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IPointableElement*>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::set_PointableElement(::Oculus::Interaction::IPointableElement*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {"set_PointableElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::add_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {"add_WhenPointerEventRaised", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointerEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::remove_WhenPointerEventRaised(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {"remove_WhenPointerEventRaised", {}, {::i2c::type_of<::System::Action_1<::Oculus::Interaction::PointerEvent>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::PublishPointerEvent(::Oculus::Interaction::PointerEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {"PublishPointerEvent", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::InjectOptionalPointableElement(::Oculus::Interaction::IPointableElement*  pointableElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {"InjectOptionalPointableElement", {}, {::i2c::type_of<::Oculus::Interaction::IPointableElement*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointableElement);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::_Start_b__10_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>(),
                        {"<Start>b__10_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>* Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::IPointable"
template<typename TInteractor,typename TInteractable>
constexpr  Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::operator ::Oculus::Interaction::IPointable*() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::IPointable"
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::IPointable* Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::i___Oculus__Interaction__IPointable() noexcept {
return static_cast<::Oculus::Interaction::IPointable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::PointerInteractable_2<TInteractor,TInteractable>::PointerInteractable_2()   {
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::setStaticF___9(::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*  value)  {
::cordl_internals::setStaticField<::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*, "<>9", ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>(std::forward<::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>* Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*, "<>9", ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::setStaticF___9__12_0(::System::Action_1<::Oculus::Interaction::PointerEvent>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Oculus::Interaction::PointerEvent>*, "<>9__12_0", ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>(std::forward<::System::Action_1<::Oculus::Interaction::PointerEvent>*>(value));
}
template<typename TInteractor,typename TInteractable>
inline ::System::Action_1<::Oculus::Interaction::PointerEvent>* Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::getStaticF___9__12_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Oculus::Interaction::PointerEvent>*, "<>9__12_0", ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>();
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TInteractor,typename TInteractable>
inline void Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::__ctor_b__12_0(::Oculus::Interaction::PointerEvent  _p0_)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>(),
                        {"<.ctor>b__12_0", {}, {::i2c::type_of<::Oculus::Interaction::PointerEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _p0_);
}
template<typename TInteractor,typename TInteractable>
inline ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>* Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>*>());
}
// Ctor Parameters []
template<typename TInteractor,typename TInteractable>
constexpr ::Oculus::Interaction::PointerInteractable_2___c<TInteractor,TInteractable>::PointerInteractable_2___c()   {
}
