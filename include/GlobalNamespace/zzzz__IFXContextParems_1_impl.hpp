#pragma once
// IWYU pragma private; include "GlobalNamespace/IFXContextParems_1.hpp"
#include "GlobalNamespace/zzzz__IFXContextParems_1_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
template<typename T>
inline ::UnityW<::GlobalNamespace::FXSystemSettings> GlobalNamespace::IFXContextParems_1<T>::get_settings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IFXContextParems_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FXSystemSettings>>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::IFXContextParems_1<T>::OnPlayFX(T  parems)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IFXContextParems_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parems);
}
