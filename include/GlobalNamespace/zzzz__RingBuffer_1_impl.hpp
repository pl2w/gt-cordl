#pragma once
// IWYU pragma private; include "GlobalNamespace/RingBuffer_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RingBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__items()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr ::ArrayW<T> const& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__items() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____items;
}
template<typename T>
constexpr void GlobalNamespace::RingBuffer_1<T>::__cordl_internal_set__items(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____items = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__head()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__head() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____head;
}
template<typename T>
constexpr void GlobalNamespace::RingBuffer_1<T>::__cordl_internal_set__head(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____head = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__tail()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tail;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__tail() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tail;
}
template<typename T>
constexpr void GlobalNamespace::RingBuffer_1<T>::__cordl_internal_set__tail(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tail = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__size()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__size() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____size;
}
template<typename T>
constexpr void GlobalNamespace::RingBuffer_1<T>::__cordl_internal_set__size(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____size = value;
}
template<typename T>
constexpr int32_t& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__capacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename T>
constexpr int32_t const& GlobalNamespace::RingBuffer_1<T>::__cordl_internal_get__capacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____capacity;
}
template<typename T>
constexpr void GlobalNamespace::RingBuffer_1<T>::__cordl_internal_set__capacity(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____capacity = value;
}
template<typename T>
inline int32_t GlobalNamespace::RingBuffer_1<T>::get_Size()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"get_Size", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t GlobalNamespace::RingBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::RingBuffer_1<T>::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::RingBuffer_1<T>::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::RingBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void GlobalNamespace::RingBuffer_1<T>::_ctor(::System::Collections::Generic::IList_1<T>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::IList_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, list);
}
template<typename T>
inline ::by_ref<T> GlobalNamespace::RingBuffer_1<T>::PeekFirst()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"PeekFirst", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> GlobalNamespace::RingBuffer_1<T>::PeekLast()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"PeekLast", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::RingBuffer_1<T>::Push(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"Push", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline T GlobalNamespace::RingBuffer_1<T>::Pop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"Pop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::RingBuffer_1<T>::TryPop(::by_ref<T>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"TryPop", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline void GlobalNamespace::RingBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::RingBuffer_1<T>::TryGet(int32_t  i, ::by_ref<T>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"TryGet", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, i, item);
}
template<typename T>
inline ::System::ArraySegment_1<T> GlobalNamespace::RingBuffer_1<T>::AsSegment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::RingBuffer_1<T>*>(),
                        {"AsSegment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::RingBuffer_1<T>* GlobalNamespace::RingBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RingBuffer_1<T>*>(capacity));
}
template<typename T>
inline ::GlobalNamespace::RingBuffer_1<T>* GlobalNamespace::RingBuffer_1<T>::New_ctor(::System::Collections::Generic::IList_1<T>*  list)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RingBuffer_1<T>*>(list));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::RingBuffer_1<T>::RingBuffer_1()   {
}
