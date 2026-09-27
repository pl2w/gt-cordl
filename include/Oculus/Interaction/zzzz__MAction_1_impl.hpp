#pragma once
// IWYU pragma private; include "Oculus/Interaction/MAction_1.hpp"
#include "Oculus/Interaction/zzzz__MAction_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template<typename T>
inline void Oculus::Interaction::MAction_1<T>::add_Action(::System::Action_1<T>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::MAction_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Oculus::Interaction::MAction_1<T>::remove_Action(::System::Action_1<T>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::MAction_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
