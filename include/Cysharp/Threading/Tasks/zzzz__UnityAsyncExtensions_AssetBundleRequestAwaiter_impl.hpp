#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions_AssetBundleRequestAwaiter.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_AssetBundleRequestAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)(::UnityEngine::AssetBundleRequest*)>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xae2ab94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)()>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae2fe30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)()>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae2fe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)(::System::Action*)>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae2febc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::*)(::System::Action*)>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae2fec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::_ctor(::UnityEngine::AssetBundleRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline bool GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Object> GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnityAsyncExtensions_AssetBundleRequestAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter::UnityAsyncExtensions_AssetBundleRequestAwaiter()   {
}
