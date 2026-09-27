#pragma once
// IWYU pragma private; include "UnityEngine/Pool/IObjectPool_1.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
#include "UnityEngine/Pool/zzzz__PooledObject_1_def.hpp"
template<typename T>
inline T UnityEngine::Pool::IObjectPool_1<T>::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Pool::IObjectPool_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::UnityEngine::Pool::PooledObject_1<T> UnityEngine::Pool::IObjectPool_1<T>::Get(::by_ref<T>  v)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Pool::IObjectPool_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<T>>(this, ___internal_method, v);
}
template<typename T>
inline void UnityEngine::Pool::IObjectPool_1<T>::Release(T  element)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Pool::IObjectPool_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, element);
}
template<typename T>
inline void UnityEngine::Pool::IObjectPool_1<T>::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Pool::IObjectPool_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
