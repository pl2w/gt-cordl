#pragma once
// IWYU pragma private; include "Oculus/Interaction/MultiAction_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__MultiAction_1_def.hpp"
#include "Oculus/Interaction/zzzz__MAction_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>*& Oculus::Interaction::MultiAction_1<T>::__cordl_internal_get_actions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>* const& Oculus::Interaction::MultiAction_1<T>::__cordl_internal_get_actions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___actions;
}
template<typename T>
constexpr void Oculus::Interaction::MultiAction_1<T>::__cordl_internal_set_actions(::System::Collections::Generic::HashSet_1<::System::Action_1<T>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___actions = value;
}
template<typename T>
inline void Oculus::Interaction::MultiAction_1<T>::add_Action(::System::Action_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MultiAction_1<T>*>(),
                        {"add_Action", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Oculus::Interaction::MultiAction_1<T>::remove_Action(::System::Action_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MultiAction_1<T>*>(),
                        {"remove_Action", {}, {::i2c::type_of<::System::Action_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Oculus::Interaction::MultiAction_1<T>::Invoke(T  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MultiAction_1<T>*>(),
                        {"Invoke", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
template<typename T>
inline void Oculus::Interaction::MultiAction_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::MultiAction_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Oculus::Interaction::MultiAction_1<T>* Oculus::Interaction::MultiAction_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::MultiAction_1<T>*>());
}
/// @brief Convert operator to "::Oculus::Interaction::MAction_1<T>"
template<typename T>
constexpr  Oculus::Interaction::MultiAction_1<T>::operator ::Oculus::Interaction::MAction_1<T>*() noexcept {
return static_cast<::Oculus::Interaction::MAction_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::MAction_1<T>"
template<typename T>
constexpr ::Oculus::Interaction::MAction_1<T>* Oculus::Interaction::MultiAction_1<T>::i___Oculus__Interaction__MAction_1_T_() noexcept {
return static_cast<::Oculus::Interaction::MAction_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Oculus::Interaction::MultiAction_1<T>::MultiAction_1()   {
}
