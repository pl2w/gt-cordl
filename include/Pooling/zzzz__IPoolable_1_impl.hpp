#pragma once
// IWYU pragma private; include "Pooling/IPoolable_1.hpp"
#include "Pooling/zzzz__IPoolable_1_def.hpp"
#include "UnityEngine/Pool/zzzz__IObjectPool_1_def.hpp"
template<typename T>
inline ::UnityEngine::Pool::IObjectPool_1<T>* Pooling::IPoolable_1<T>::get_Pool()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pooling::IPoolable_1<T>*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pool::IObjectPool_1<T>*>(this, ___internal_method);
}
template<typename T>
inline void Pooling::IPoolable_1<T>::set_Pool(::UnityEngine::Pool::IObjectPool_1<T>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pooling::IPoolable_1<T>*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline void Pooling::IPoolable_1<T>::OnCreate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pooling::IPoolable_1<T>*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Pooling::IPoolable_1<T>::OnPreGet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pooling::IPoolable_1<T>*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Pooling::IPoolable_1<T>::OnPostGet()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pooling::IPoolable_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Pooling::IPoolable_1<T>::OnRelease()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pooling::IPoolable_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
