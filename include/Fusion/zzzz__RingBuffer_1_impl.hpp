#pragma once
// IWYU pragma private; include "Fusion/RingBuffer_1.hpp"
#include "System/zzzz__ArraySegment_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__RingBuffer_1_def.hpp"
#include "Fusion/zzzz__RingBuffer_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__ArraySegment_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::ArrayW<T>& Fusion::RingBuffer_1<T>::__cordl_internal_get__buffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr ::ArrayW<T> const& Fusion::RingBuffer_1<T>::__cordl_internal_get__buffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buffer;
}
template<typename T>
constexpr void Fusion::RingBuffer_1<T>::__cordl_internal_set__buffer(::ArrayW<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buffer = value;
}
template<typename T>
constexpr int32_t& Fusion::RingBuffer_1<T>::__cordl_internal_get__front()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____front;
}
template<typename T>
constexpr int32_t const& Fusion::RingBuffer_1<T>::__cordl_internal_get__front() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____front;
}
template<typename T>
constexpr void Fusion::RingBuffer_1<T>::__cordl_internal_set__front(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____front = value;
}
template<typename T>
constexpr int32_t& Fusion::RingBuffer_1<T>::__cordl_internal_get__count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename T>
constexpr int32_t const& Fusion::RingBuffer_1<T>::__cordl_internal_get__count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____count;
}
template<typename T>
constexpr void Fusion::RingBuffer_1<T>::__cordl_internal_set__count(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____count = value;
}
template<typename T>
inline void Fusion::RingBuffer_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void Fusion::RingBuffer_1<T>::_ctor(int32_t  capacity, ::ArrayW<T>  items)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity, items);
}
template<typename T>
inline int32_t Fusion::RingBuffer_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Fusion::RingBuffer_1<T>::get_Capacity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"get_Capacity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline bool Fusion::RingBuffer_1<T>::get_IsEmpty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"get_IsEmpty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Fusion::RingBuffer_1<T>::get_IsFull()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"get_IsFull", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline T Fusion::RingBuffer_1<T>::get_Item(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"get_Item", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, index);
}
template<typename T>
inline void Fusion::RingBuffer_1<T>::set_Item(int32_t  index, T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"set_Item", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, value);
}
template<typename T>
inline ::by_ref<T> Fusion::RingBuffer_1<T>::Front()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"Front", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> Fusion::RingBuffer_1<T>::FrontMut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"FrontMut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> Fusion::RingBuffer_1<T>::Get(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"Get", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method, index);
}
template<typename T>
inline ::by_ref<T> Fusion::RingBuffer_1<T>::GetMut(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"GetMut", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method, index);
}
template<typename T>
inline ::by_ref<T> Fusion::RingBuffer_1<T>::Back()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"Back", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline ::by_ref<T> Fusion::RingBuffer_1<T>::BackMut()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"BackMut", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(this, ___internal_method);
}
template<typename T>
inline void Fusion::RingBuffer_1<T>::PushBack(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"PushBack", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline void Fusion::RingBuffer_1<T>::PushFront(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"PushFront", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
template<typename T>
inline T Fusion::RingBuffer_1<T>::PopBack()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"PopBack", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline T Fusion::RingBuffer_1<T>::PopFront()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"PopFront", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Fusion::RingBuffer_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>* Fusion::RingBuffer_1<T>::ToArraySegments()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"ToArraySegments", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>*>(this, ___internal_method);
}
template<typename T>
inline ::ArrayW<T> Fusion::RingBuffer_1<T>::ToArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"ToArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* Fusion::RingBuffer_1<T>::GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Fusion::RingBuffer_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline int32_t Fusion::RingBuffer_1<T>::FrontIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"FrontIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Fusion::RingBuffer_1<T>::BackIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"BackIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline int32_t Fusion::RingBuffer_1<T>::InternalIndex(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"InternalIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
template<typename T>
inline int32_t Fusion::RingBuffer_1<T>::Increment(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"Increment", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
template<typename T>
inline int32_t Fusion::RingBuffer_1<T>::Decrement(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"Decrement", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, index);
}
template<typename T>
inline void Fusion::RingBuffer_1<T>::ThrowIfEmpty(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"ThrowIfEmpty", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
template<typename T>
inline ::System::ArraySegment_1<T> Fusion::RingBuffer_1<T>::SpanOne()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"SpanOne", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::System::ArraySegment_1<T> Fusion::RingBuffer_1<T>::SpanTwo()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1<T>*>(),
                        {"SpanTwo", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ArraySegment_1<T>>(this, ___internal_method);
}
template<typename T>
inline ::Fusion::RingBuffer_1<T>* Fusion::RingBuffer_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RingBuffer_1<T>*>(capacity));
}
template<typename T>
inline ::Fusion::RingBuffer_1<T>* Fusion::RingBuffer_1<T>::New_ctor(int32_t  capacity, ::ArrayW<T>  items)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RingBuffer_1<T>*>(capacity, items));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  Fusion::RingBuffer_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* Fusion::RingBuffer_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Fusion::RingBuffer_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Fusion::RingBuffer_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::RingBuffer_1<T>::RingBuffer_1()   {
}
template<typename T>
constexpr int32_t& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr T& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr T const& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_set___2__current(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr ::Fusion::RingBuffer_1<T>*& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::Fusion::RingBuffer_1<T>* const& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_set___4__this(::Fusion::RingBuffer_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>*& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get__segments_5__1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segments_5__1;
}
template<typename T>
constexpr ::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>* const& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get__segments_5__1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segments_5__1;
}
template<typename T>
constexpr void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_set__segments_5__1(::System::Collections::Generic::IList_1<::System::ArraySegment_1<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____segments_5__1 = value;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>*& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___s__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>* const& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get___s__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____s__2;
}
template<typename T>
constexpr void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_set___s__2(::System::Collections::Generic::IEnumerator_1<::System::ArraySegment_1<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____s__2 = value;
}
template<typename T>
constexpr ::System::ArraySegment_1<T>& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get__segment_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segment_5__3;
}
template<typename T>
constexpr ::System::ArraySegment_1<T> const& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get__segment_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____segment_5__3;
}
template<typename T>
constexpr void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_set__segment_5__3(::System::ArraySegment_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____segment_5__3 = value;
}
template<typename T>
constexpr int32_t& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get__i_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
template<typename T>
constexpr int32_t const& Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_get__i_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____i_5__4;
}
template<typename T>
constexpr void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__cordl_internal_set__i_5__4(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____i_5__4 = value;
}
template<typename T>
inline void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Fusion::RingBuffer_1__GetEnumerator_d__29<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline T Fusion::RingBuffer_1__GetEnumerator_d__29<T>::System_Collections_Generic_IEnumerator_T__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(),
                        {"System.Collections.Generic.IEnumerator<T>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Fusion::RingBuffer_1__GetEnumerator_d__29<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* Fusion::RingBuffer_1__GetEnumerator_d__29<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::Fusion::RingBuffer_1__GetEnumerator_d__29<T>* Fusion::RingBuffer_1__GetEnumerator_d__29<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::RingBuffer_1__GetEnumerator_d__29<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr  Fusion::RingBuffer_1__GetEnumerator_d__29<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Fusion::RingBuffer_1__GetEnumerator_d__29<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  Fusion::RingBuffer_1__GetEnumerator_d__29<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* Fusion::RingBuffer_1__GetEnumerator_d__29<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Fusion::RingBuffer_1__GetEnumerator_d__29<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Fusion::RingBuffer_1__GetEnumerator_d__29<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Fusion::RingBuffer_1__GetEnumerator_d__29<T>::RingBuffer_1__GetEnumerator_d__29()   {
}
