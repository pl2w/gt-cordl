#pragma once
// IWYU pragma private; include "Meta/XR/MRUtilityKit/SceneDecorator/FixedPool_1.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool_1_impl.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__FixedPool_1_def.hpp"
#include "Meta/XR/MRUtilityKit/SceneDecorator/zzzz__Pool`1_Callbacks_def.hpp"
template<typename T>
inline int32_t Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>::get_CountAll()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>::get_CountActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>::_ctor(T  primitive, int32_t  size, ::GlobalNamespace::Pool_1_Callbacks<T>  callbacks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<T>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::Pool_1_Callbacks<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, primitive, size, callbacks);
}
template<typename T>
inline T Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>::Release(T  t)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
template<typename T>
inline ::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>* Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>::New_ctor(T  primitive, int32_t  size, ::GlobalNamespace::Pool_1_Callbacks<T>  callbacks)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>*>(primitive, size, callbacks));
}
// Ctor Parameters []
template<typename T>
constexpr ::Meta::XR::MRUtilityKit::SceneDecorator::FixedPool_1<T>::FixedPool_1()   {
}
