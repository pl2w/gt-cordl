#pragma once
// IWYU pragma private; include "GlobalNamespace/UniqueQueue_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__UniqueQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>*& GlobalNamespace::UniqueQueue_1<T>::__cordl_internal_get_queuedItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedItems;
}
template<typename T>
constexpr ::System::Collections::Generic::HashSet_1<T>* const& GlobalNamespace::UniqueQueue_1<T>::__cordl_internal_get_queuedItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queuedItems;
}
template<typename T>
constexpr void GlobalNamespace::UniqueQueue_1<T>::__cordl_internal_set_queuedItems(::System::Collections::Generic::HashSet_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queuedItems = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>*& GlobalNamespace::UniqueQueue_1<T>::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>* const& GlobalNamespace::UniqueQueue_1<T>::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
template<typename T>
constexpr void GlobalNamespace::UniqueQueue_1<T>::__cordl_internal_set_queue(::System::Collections::Generic::Queue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
template<typename T>
inline int32_t GlobalNamespace::UniqueQueue_1<T>::get_Count()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"get_Count", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::UniqueQueue_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline void GlobalNamespace::UniqueQueue_1<T>::_ctor(int32_t  capacity)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capacity);
}
template<typename T>
inline void GlobalNamespace::UniqueQueue_1<T>::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::UniqueQueue_1<T>::Enqueue(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"Enqueue", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline T GlobalNamespace::UniqueQueue_1<T>::Dequeue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"Dequeue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::UniqueQueue_1<T>::TryDequeue(::by_ref<T>  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"TryDequeue", {}, {::i2c::type_of<::by_ref<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline T GlobalNamespace::UniqueQueue_1<T>::Peek()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"Peek", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline bool GlobalNamespace::UniqueQueue_1<T>::Contains(T  item)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"Contains", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, item);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::UniqueQueue_1<T>::System_Collections_Generic_IEnumerable_T__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"System.Collections.Generic.IEnumerable<T>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* GlobalNamespace::UniqueQueue_1<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UniqueQueue_1<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
template<typename T>
inline ::GlobalNamespace::UniqueQueue_1<T>* GlobalNamespace::UniqueQueue_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UniqueQueue_1<T>*>());
}
template<typename T>
inline ::GlobalNamespace::UniqueQueue_1<T>* GlobalNamespace::UniqueQueue_1<T>::New_ctor(int32_t  capacity)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UniqueQueue_1<T>*>(capacity));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr  GlobalNamespace::UniqueQueue_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::UniqueQueue_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  GlobalNamespace::UniqueQueue_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* GlobalNamespace::UniqueQueue_1<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::UniqueQueue_1<T>::UniqueQueue_1()   {
}
