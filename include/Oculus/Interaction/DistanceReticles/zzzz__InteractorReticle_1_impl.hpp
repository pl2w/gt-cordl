#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/InteractorReticle_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__InteractorReticle_1_def.hpp"
#include "Oculus/Interaction/zzzz__IInteractorView_def.hpp"
#include "Oculus/Interaction/zzzz__InteractorStateChangeArgs_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
template<typename TReticleData>
constexpr bool& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__visibleDuringSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibleDuringSelect;
}
template<typename TReticleData>
constexpr bool const& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__visibleDuringSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____visibleDuringSelect;
}
template<typename TReticleData>
constexpr void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_set__visibleDuringSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____visibleDuringSelect = value;
}
template<typename TReticleData>
constexpr bool& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TReticleData>
constexpr bool const& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
template<typename TReticleData>
constexpr void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
template<typename TReticleData>
constexpr TReticleData& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__targetData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetData;
}
template<typename TReticleData>
constexpr TReticleData const& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__targetData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetData;
}
template<typename TReticleData>
constexpr void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_set__targetData(TReticleData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetData = value;
}
template<typename TReticleData>
constexpr bool& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__drawn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawn;
}
template<typename TReticleData>
constexpr bool const& Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_get__drawn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____drawn;
}
template<typename TReticleData>
constexpr void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::__cordl_internal_set__drawn(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____drawn = value;
}
template<typename TReticleData>
inline bool Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::get_VisibleDuringSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(),
                        {"get_VisibleDuringSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::set_VisibleDuringSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(),
                        {"set_VisibleDuringSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TReticleData>
inline ::Oculus::Interaction::IInteractorView* Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::get_Interactor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::IInteractorView*>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::set_Interactor(::Oculus::Interaction::IInteractorView*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename TReticleData>
inline ::UnityW<::UnityEngine::Component> Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::get_InteractableComponent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Component>>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::HandleStateChanged(::Oculus::Interaction::InteractorStateChangeArgs  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(),
                        {"HandleStateChanged", {}, {::i2c::type_of<::Oculus::Interaction::InteractorStateChangeArgs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::HandlePostProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(),
                        {"HandlePostProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::InteractableSet(::UnityEngine::Component*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(),
                        {"InteractableSet", {}, {::i2c::type_of<::UnityEngine::Component*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactable);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::InteractableUnset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(),
                        {"InteractableUnset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::Draw(TReticleData  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::Align(TReticleData  data)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::Hide()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReticleData>
inline void Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename TReticleData>
inline ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>* Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>*>());
}
// Ctor Parameters []
template<typename TReticleData>
constexpr ::Oculus::Interaction::DistanceReticles::InteractorReticle_1<TReticleData>::InteractorReticle_1()   {
}
