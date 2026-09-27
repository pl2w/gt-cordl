#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/SingletonMonoBehaviour_1.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__SingletonMonoBehaviour_1_def.hpp"
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::setStaticF__instance(T  value)  {
::cordl_internals::setStaticField<T, "_instance", ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>(std::forward<T>(value));
}
template<typename T>
inline T Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::getStaticF__instance()  {
return ::cordl_internals::getStaticField<T, "_instance", ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>();
}
template<typename T>
inline T Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::get_Instance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>(),
                        {"get_Instance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::InitializeSingleton()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>(),
                        {"InitializeSingleton", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::OnDestroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>* Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::SingletonMonoBehaviour_1<T>::SingletonMonoBehaviour_1()   {
}
