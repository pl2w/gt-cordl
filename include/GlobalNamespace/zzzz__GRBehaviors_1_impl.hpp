#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBehaviors_1.hpp"
#include "GlobalNamespace/zzzz__GRBehaviorsBase_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GRBehaviors_1_def.hpp"
#include "GlobalNamespace/zzzz__GRAbilityBase_def.hpp"
#include "GlobalNamespace/zzzz__GRBehaviors_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>*& GlobalNamespace::GRBehaviors_1<T>::__cordl_internal_get_behaviorData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorData;
}
template<typename T>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>* const& GlobalNamespace::GRBehaviors_1<T>::__cordl_internal_get_behaviorData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behaviorData;
}
template<typename T>
constexpr void GlobalNamespace::GRBehaviors_1<T>::__cordl_internal_set_behaviorData(::System::Collections::Generic::List_1<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behaviorData = value;
}
template<typename T>
inline void GlobalNamespace::GRBehaviors_1<T>::AddBehavior(T  behavior, ::GlobalNamespace::GRAbilityBase*  ability)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBehaviors_1<T>*>(),
                        {"AddBehavior", {}, {::i2c::type_of<T>(), ::i2c::type_of<::GlobalNamespace::GRAbilityBase*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, behavior, ability);
}
template<typename T>
inline void GlobalNamespace::GRBehaviors_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBehaviors_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GRBehaviors_1<T>* GlobalNamespace::GRBehaviors_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBehaviors_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GRBehaviors_1<T>::GRBehaviors_1()   {
}
template<typename T>
constexpr T& GlobalNamespace::GRBehaviors_1_BehaviorData<T>::__cordl_internal_get_behavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavior;
}
template<typename T>
constexpr T const& GlobalNamespace::GRBehaviors_1_BehaviorData<T>::__cordl_internal_get_behavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___behavior;
}
template<typename T>
constexpr void GlobalNamespace::GRBehaviors_1_BehaviorData<T>::__cordl_internal_set_behavior(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___behavior = value;
}
template<typename T>
constexpr ::GlobalNamespace::GRAbilityBase*& GlobalNamespace::GRBehaviors_1_BehaviorData<T>::__cordl_internal_get_ability()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ability;
}
template<typename T>
constexpr ::GlobalNamespace::GRAbilityBase* const& GlobalNamespace::GRBehaviors_1_BehaviorData<T>::__cordl_internal_get_ability() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ability;
}
template<typename T>
constexpr void GlobalNamespace::GRBehaviors_1_BehaviorData<T>::__cordl_internal_set_ability(::GlobalNamespace::GRAbilityBase*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ability = value;
}
template<typename T>
inline void GlobalNamespace::GRBehaviors_1_BehaviorData<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::GRBehaviors_1_BehaviorData<T>* GlobalNamespace::GRBehaviors_1_BehaviorData<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRBehaviors_1_BehaviorData<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::GRBehaviors_1_BehaviorData<T>::GRBehaviors_1_BehaviorData()   {
}
