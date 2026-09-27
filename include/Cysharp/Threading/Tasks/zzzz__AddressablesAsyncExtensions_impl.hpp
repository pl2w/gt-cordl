#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AddressablesAsyncExtensions.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AddressablesAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AddressablesAsyncExtensions_AsyncOperationHandleAwaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AddressablesAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UniTask_Awaiter (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xade2150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xade23ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xade21e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::UniTask_Awaiter Cysharp::Threading::Tasks::AddressablesAsyncExtensions::GetAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UniTask_Awaiter>(nullptr, ___internal_method, handle);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::AddressablesAsyncExtensions::WithCancellation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, handle, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::AddressablesAsyncExtensions::ToUniTask(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, handle, progress, timing, cancellationToken);
}
template<typename T>
inline ::GlobalNamespace::UniTask_1_Awaiter<T> Cysharp::Threading::Tasks::AddressablesAsyncExtensions::GetAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                    {"GetAwaiter", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UniTask_1_Awaiter<T>>(nullptr, ___internal_method, handle);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AddressablesAsyncExtensions::WithCancellation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                    {"WithCancellation", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(nullptr, ___internal_method, handle, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::AddressablesAsyncExtensions::ToUniTask(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*>(),
                    {"ToUniTask", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(nullptr, ___internal_method, handle, progress, timing, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions::AddressablesAsyncExtensions()   {
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>* const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
template<typename T>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>*& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
template<typename T>
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>* const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
template<typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
template<typename T>
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_set_handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
template<typename T>
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
template<typename T>
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
template<typename T>
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
template<typename T>
constexpr bool& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
template<typename T>
constexpr bool const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
template<typename T>
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
template<typename T>
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>, "pool", ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*> Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>, "pool", ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>();
}
template<typename T>
inline ::by_ref<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*> Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::Create(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(nullptr, ___internal_method, handle, timing, progress, cancellationToken, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::Continuation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  argHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, argHandle);
}
template<typename T>
inline T Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<T>(this, ___internal_method, token);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
template<typename T>
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline bool Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>"
template<typename T>
constexpr  Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>"
template<typename T>
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1_T___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1()   {
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>::setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*>(std::forward<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*>(value));
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>* Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*>();
}
template<typename T>
inline void Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline int32_t Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>* Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*> (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xade2794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xade28b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource* (*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xade23e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.Continuation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::Continuation)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xade2944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xade2b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xade2bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xade2c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xade2cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xade2d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xade2a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource* const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_continuationAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_continuationAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continuationAction;
}
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continuationAction = value;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_handle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_handle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___handle;
}
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_set_handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___handle = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr bool& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_completed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr bool const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_completed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___completed;
}
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_set_completed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___completed = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*> Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*> Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::Create(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource*>(nullptr, ___internal_method, handle, timing, progress, cancellationToken, token);
}
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::Continuation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"Continuation", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _);
}
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>* Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xade2eec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xade2ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c()   {
}
