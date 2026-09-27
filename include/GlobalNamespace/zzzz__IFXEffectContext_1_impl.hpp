#pragma once
// IWYU pragma private; include "GlobalNamespace/IFXEffectContext_1.hpp"
#include "GlobalNamespace/zzzz__IFXEffectContext_1_def.hpp"
#include "GlobalNamespace/zzzz__FXSystemSettings_def.hpp"
template<typename T>
inline T GlobalNamespace::IFXEffectContext_1<T>::get_effectContext()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IFXEffectContext_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::UnityW<::GlobalNamespace::FXSystemSettings> GlobalNamespace::IFXEffectContext_1<T>::get_settings()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IFXEffectContext_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::FXSystemSettings>>(this, ___internal_method);
}
