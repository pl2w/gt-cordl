#pragma once
// IWYU pragma private; include "Oculus/Interaction/RingBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__RingBuffer_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr void Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_set__buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
template<typename T>
constexpr int32_t& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename T>
constexpr int32_t const& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename T>
constexpr void Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_set__capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capacity = value;
}
template<typename T>
constexpr int32_t& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
template<typename T>
constexpr int32_t const& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
template<typename T>
constexpr void Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_set__head(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____head = value;
}
template<typename T>
constexpr int32_t& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename T>
constexpr int32_t const& Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename T>
constexpr void Oculus::Interaction::RingBuffer_1<T>::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
template<typename T>
inline int32_t Oculus::Interaction::RingBuffer_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RingBuffer_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Oculus::Interaction::RingBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RingBuffer_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Oculus::Interaction::RingBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RingBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void Oculus::Interaction::RingBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RingBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void Oculus::Interaction::RingBuffer_1<T>::Add(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RingBuffer_1<T>*>(),
                        {"Add", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline T Oculus::Interaction::RingBuffer_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RingBuffer_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline T Oculus::Interaction::RingBuffer_1<T>::Peek(int32_t  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::RingBuffer_1<T>*>(),
                        {"Peek", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, offset);
}
template<typename T>
inline ::Oculus::Interaction::RingBuffer_1<T>* Oculus::Interaction::RingBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::RingBuffer_1<T>*>(capacity));
}
// Ctor Parameters []
template<typename T>
constexpr ::Oculus::Interaction::RingBuffer_1<T>::RingBuffer_1()   {
}
