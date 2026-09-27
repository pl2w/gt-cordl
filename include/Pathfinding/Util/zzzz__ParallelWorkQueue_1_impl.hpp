#pragma once
// IWYU pragma private; include "Pathfinding/Util/ParallelWorkQueue_1.hpp"
#include "System/Threading/zzzz__ManualResetEvent_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/Util/zzzz__ParallelWorkQueue_1_def.hpp"
#include "Pathfinding/Util/zzzz__ParallelWorkQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Action_2<T,int32_t>*& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_action()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr ::System::Action_2<T,int32_t>* const& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_action() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___action;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_set_action(::System::Action_2<T,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___action = value;
}
template<typename T>
constexpr int32_t& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_threadCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadCount;
}
template<typename T>
constexpr int32_t const& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_threadCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___threadCount;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_set_threadCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___threadCount = value;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>*& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_queue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
template<typename T>
constexpr ::System::Collections::Generic::Queue_1<T>* const& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_queue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___queue;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_set_queue(::System::Collections::Generic::Queue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___queue = value;
}
template<typename T>
constexpr int32_t& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_initialCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialCount;
}
template<typename T>
constexpr int32_t const& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_initialCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___initialCount;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_set_initialCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___initialCount = value;
}
template<typename T>
constexpr ::ArrayW<::System::Threading::ManualResetEvent*>& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_waitEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitEvents;
}
template<typename T>
constexpr ::ArrayW<::System::Threading::ManualResetEvent*> const& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_waitEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___waitEvents;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_set_waitEvents(::ArrayW<::System::Threading::ManualResetEvent*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___waitEvents = value;
}
template<typename T>
constexpr ::System::Exception*& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_innerException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerException;
}
template<typename T>
constexpr ::System::Exception* const& Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_get_innerException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___innerException;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1<T>::__cordl_internal_set_innerException(::System::Exception*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___innerException = value;
}
template<typename T>
inline void Pathfinding::Util::ParallelWorkQueue_1<T>::_ctor(::System::Collections::Generic::Queue_1<T>*  queue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Collections::Generic::Queue_1<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, queue);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<int32_t>* Pathfinding::Util::ParallelWorkQueue_1<T>::Run(int32_t  progressTimeoutMillis)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1<T>*>(),
                        {"Run", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<int32_t>*>(this, ___internal_method, progressTimeoutMillis);
}
template<typename T>
inline void Pathfinding::Util::ParallelWorkQueue_1<T>::RunTask(int32_t  threadIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1<T>*>(),
                        {"RunTask", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threadIndex);
}
template<typename T>
inline void Pathfinding::Util::ParallelWorkQueue_1<T>::_Run_b__7_0(::System::Object*  threadIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1<T>*>(),
                        {"<Run>b__7_0", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, threadIndex);
}
template<typename T>
inline ::Pathfinding::Util::ParallelWorkQueue_1<T>* Pathfinding::Util::ParallelWorkQueue_1<T>::New_ctor(::System::Collections::Generic::Queue_1<T>*  queue)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::ParallelWorkQueue_1<T>*>(queue));
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::ParallelWorkQueue_1<T>::ParallelWorkQueue_1()   {
}
template<typename T>
constexpr int32_t& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr int32_t const& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
template<typename T>
constexpr int32_t& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr int32_t const& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_set___2__current(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
template<typename T>
constexpr int32_t& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr int32_t const& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
template<typename T>
constexpr ::Pathfinding::Util::ParallelWorkQueue_1<T>*& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr ::Pathfinding::Util::ParallelWorkQueue_1<T>* const& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_set___4__this(::Pathfinding::Util::ParallelWorkQueue_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
template<typename T>
constexpr int32_t& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get_progressTimeoutMillis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressTimeoutMillis;
}
template<typename T>
constexpr int32_t const& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get_progressTimeoutMillis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progressTimeoutMillis;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_set_progressTimeoutMillis(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progressTimeoutMillis = value;
}
template<typename T>
constexpr int32_t& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___3__progressTimeoutMillis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__progressTimeoutMillis;
}
template<typename T>
constexpr int32_t const& Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_get___3__progressTimeoutMillis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__progressTimeoutMillis;
}
template<typename T>
constexpr void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::__cordl_internal_set___3__progressTimeoutMillis(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____3__progressTimeoutMillis = value;
}
template<typename T>
inline void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
template<typename T>
inline void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline int32_t Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::System_Collections_Generic_IEnumerator_System_Int32__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {"System.Collections.Generic.IEnumerator<System.Int32>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline void Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::System::Object* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerator_1<int32_t>* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {"System.Collections.Generic.IEnumerable<System.Int32>.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<int32_t>*>(this, ___internal_method);
}
template<typename T>
inline ::System::Collections::IEnumerator* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(),
                        {"System.Collections.IEnumerable.GetEnumerator", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
template<typename T>
inline ::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
template<typename T>
constexpr  Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<int32_t>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerable_1<int32_t>* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::i___System__Collections__Generic__IEnumerable_1_int32_t_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template<typename T>
constexpr  Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template<typename T>
constexpr ::System::Collections::IEnumerable* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<int32_t>"
template<typename T>
constexpr  Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::operator ::System::Collections::Generic::IEnumerator_1<int32_t>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<int32_t>"
template<typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<int32_t>* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::i___System__Collections__Generic__IEnumerator_1_int32_t_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<int32_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template<typename T>
constexpr  Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template<typename T>
constexpr ::System::Collections::IEnumerator* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template<typename T>
constexpr  Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template<typename T>
constexpr ::System::IDisposable* Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Pathfinding::Util::ParallelWorkQueue_1__Run_d__7<T>::ParallelWorkQueue_1__Run_d__7()   {
}
