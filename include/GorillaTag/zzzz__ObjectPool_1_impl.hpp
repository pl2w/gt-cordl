#pragma once
// IWYU pragma private; include "GorillaTag/ObjectPool_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaTag/zzzz__ObjectPool_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>*& GorillaTag::ObjectPool_1<T>::__cordl_internal_get_pool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr ::System::Collections::Generic::Stack_1<T>* const& GorillaTag::ObjectPool_1<T>::__cordl_internal_get_pool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pool;
}
template<typename T>
constexpr void GorillaTag::ObjectPool_1<T>::__cordl_internal_set_pool(::System::Collections::Generic::Stack_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pool = value;
}
template<typename T>
constexpr int32_t& GorillaTag::ObjectPool_1<T>::__cordl_internal_get_maxInstances()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxInstances;
}
template<typename T>
constexpr int32_t const& GorillaTag::ObjectPool_1<T>::__cordl_internal_get_maxInstances() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxInstances;
}
template<typename T>
constexpr void GorillaTag::ObjectPool_1<T>::__cordl_internal_set_maxInstances(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxInstances = value;
}
template<typename T>
inline void GorillaTag::ObjectPool_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ObjectPool_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::ObjectPool_1<T>::_ctor(int32_t  amount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ObjectPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, amount);
}
template<typename T>
inline void GorillaTag::ObjectPool_1<T>::_ctor(int32_t  initialAmount, int32_t  maxAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ObjectPool_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialAmount, maxAmount);
}
template<typename T>
inline void GorillaTag::ObjectPool_1<T>::InitializePool(int32_t  initialAmount, int32_t  maxAmount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ObjectPool_1<T>*>(),
                        {"InitializePool", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialAmount, maxAmount);
}
template<typename T>
inline T GorillaTag::ObjectPool_1<T>::Take()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ObjectPool_1<T>*>(),
                        {"Take", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void GorillaTag::ObjectPool_1<T>::Return(T  instance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::ObjectPool_1<T>*>(),
                        {"Return", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, instance);
}
template<typename T>
inline T GorillaTag::ObjectPool_1<T>::CreateInstance()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::ObjectPool_1<T>*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline ::GorillaTag::ObjectPool_1<T>* GorillaTag::ObjectPool_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ObjectPool_1<T>*>());
}
template<typename T>
inline ::GorillaTag::ObjectPool_1<T>* GorillaTag::ObjectPool_1<T>::New_ctor(int32_t  amount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ObjectPool_1<T>*>(amount));
}
template<typename T>
inline ::GorillaTag::ObjectPool_1<T>* GorillaTag::ObjectPool_1<T>::New_ctor(int32_t  initialAmount, int32_t  maxAmount)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::ObjectPool_1<T>*>(initialAmount, maxAmount));
}
// Ctor Parameters []
template<typename T>
constexpr ::GorillaTag::ObjectPool_1<T>::ObjectPool_1()   {
}
