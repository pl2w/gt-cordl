#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AddressablesAsyncExtensions_AsyncOperationHandleAwaiter.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AddressablesAsyncExtensions_AsyncOperationHandleAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::*)(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle)>(&::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xade25dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::*)()>(&::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xade2610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::*)()>(&::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xade2618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::*)(::System::Action*)>(&::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xade26ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::*)(::System::Action*)>(&::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xade26b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::_ctor(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline bool GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  continuationAction) noexcept  {
this->handle = handle;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter()   {
}
