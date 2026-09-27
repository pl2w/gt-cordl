#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/Linq/Create_1.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__MoveNextSource_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Create_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Create_1_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__Create`1__Create__RunWriterTask_d__12_def.hpp"
#include "Cysharp/Threading/Tasks/Linq/zzzz__IAsyncWriter_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncDisposable_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerator_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskVoid_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__Object_def.hpp"
template<typename T>
constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*& Cysharp::Threading::Tasks::Linq::Create_1<T>::__cordl_internal_get_create()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___create;
}
template<typename T>
constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>* const& Cysharp::Threading::Tasks::Linq::Create_1<T>::__cordl_internal_get_create() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___create;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1<T>::__cordl_internal_set_create(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___create = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1<T>::_ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, create);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::Create_1<T>::GetAsyncEnumerator(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1<T>*>(),
                        {"GetAsyncEnumerator", {}, {::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(this, ___internal_method, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::Create_1<T>* Cysharp::Threading::Tasks::Linq::Create_1<T>::New_ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Create_1<T>*>(create));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Create_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::Linq::Create_1<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerable_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Create_1<T>::Create_1()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*& Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::__cordl_internal_get_enumerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>* const& Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::__cordl_internal_get_enumerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___enumerator;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::__cordl_internal_set_enumerator(::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___enumerator = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::_ctor(::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  enumerator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enumerator);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::YieldAsync(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(),
                        {"YieldAsync", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method, value);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::SignalWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(),
                        {"SignalWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>* Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::New_ctor(::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*  enumerator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*>(enumerator));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::operator ::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>* Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::i___Cysharp__Threading__Tasks__Linq__IAsyncWriter_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>::Create_1_AsyncWriter()   {
}
template<typename T>
constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_create()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___create;
}
template<typename T>
constexpr ::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>* const& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_create() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___create;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_set_create(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___create = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr int32_t& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
template<typename T>
constexpr int32_t const& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___state;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_set_state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___state = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_writer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>* const& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get_writer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___writer;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_set_writer(::Cysharp::Threading::Tasks::Linq::Create_1_AsyncWriter<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___writer = value;
}
template<typename T>
constexpr T& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get__Current_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename T>
constexpr T const& Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_get__Current_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Current_k__BackingField;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::__cordl_internal_set__Current_k__BackingField(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Current_k__BackingField = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::_ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, create, cancellationToken);
}
template<typename T>
inline T Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {"get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::set_Current(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {"set_Current", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::DisposeAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {"DisposeAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::MoveNextAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {"MoveNextAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskVoid Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::RunWriterTask(::Cysharp::Threading::Tasks::UniTask  task)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {"RunWriterTask", {}, {::i2c::type_of<::Cysharp::Threading::Tasks::UniTask>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskVoid>(this, ___internal_method, task);
}
template<typename T>
inline void Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::SetResult(T  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(),
                        {"SetResult", {}, {::i2c::type_of<T>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>* Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::New_ctor(::System::Func_3<::Cysharp::Threading::Tasks::Linq::IAsyncWriter_1<T>*,::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  create, ::System::Threading::CancellationToken  cancellationToken)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>*>(create, cancellationToken));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>* Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncEnumerator_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr  Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::operator ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable* Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::i___Cysharp__Threading__Tasks__IUniTaskAsyncDisposable() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::Linq::Create_1__Create<T>::Create_1__Create()   {
}
