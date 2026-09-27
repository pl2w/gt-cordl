#pragma once
// IWYU pragma private; include "Oculus/Interaction/Input/ICopyFrom_1.hpp"
#include "Oculus/Interaction/Input/zzzz__ICopyFrom_1_def.hpp"
template<typename TSelfType>
inline void Oculus::Interaction::Input::ICopyFrom_1<TSelfType>::CopyFrom(TSelfType  source)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Input::ICopyFrom_1<TSelfType>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source);
}
