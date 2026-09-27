#pragma once
// IWYU pragma private; include "GlobalNamespace/ParticleEffectsPoolStatic_1.hpp"
#include "GlobalNamespace/zzzz__ParticleEffectsPool_impl.hpp"
#include "GlobalNamespace/zzzz__ParticleEffectsPoolStatic_1_def.hpp"
template<typename T>
inline void GlobalNamespace::ParticleEffectsPoolStatic_1<T>::setStaticF_gInstance(T  value)  {
::cordl_internals::setStaticField<T, "gInstance", ::GlobalNamespace::ParticleEffectsPoolStatic_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T GlobalNamespace::ParticleEffectsPoolStatic_1<T>::getStaticF_gInstance()  {
return ::cordl_internals::getStaticField<T, "gInstance", ::GlobalNamespace::ParticleEffectsPoolStatic_1<T>*>();
}
template<typename T>
inline T GlobalNamespace::ParticleEffectsPoolStatic_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPoolStatic_1<T>*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ParticleEffectsPoolStatic_1<T>::OnPoolAwake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::ParticleEffectsPoolStatic_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::ParticleEffectsPoolStatic_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ParticleEffectsPoolStatic_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::ParticleEffectsPoolStatic_1<T>* GlobalNamespace::ParticleEffectsPoolStatic_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ParticleEffectsPoolStatic_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::ParticleEffectsPoolStatic_1<T>::ParticleEffectsPoolStatic_1()   {
}
