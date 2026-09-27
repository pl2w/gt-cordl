#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>*& Unity::XR::CoreUtils::ObjectPool_1<T>::__cordl_internal_get_PooledQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PooledQueue;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>* const& Unity::XR::CoreUtils::ObjectPool_1<T>::__cordl_internal_get_PooledQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PooledQueue;
}
template<typename T>
constexpr void Unity::XR::CoreUtils::ObjectPool_1<T>::__cordl_internal_set_PooledQueue(::System::Collections::Generic::Queue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PooledQueue = value;
}
template<typename T>
inline T Unity::XR::CoreUtils::ObjectPool_1<T>::Get()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::ObjectPool_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Unity::XR::CoreUtils::ObjectPool_1<T>::Recycle(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ObjectPool_1<T>*>(),
                        {"Recycle", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename T>
inline void Unity::XR::CoreUtils::ObjectPool_1<T>::ClearInstance(T  instance)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Unity::XR::CoreUtils::ObjectPool_1<T>*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename T>
inline void Unity::XR::CoreUtils::ObjectPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::ObjectPool_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Unity::XR::CoreUtils::ObjectPool_1<T>* Unity::XR::CoreUtils::ObjectPool_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Unity::XR::CoreUtils::ObjectPool_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Unity::XR::CoreUtils::ObjectPool_1<T>::ObjectPool_1()   {
}
