#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_AssetBundleCreateRequestAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ICriticalNotifyCompletion_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__INotifyCompletion_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)(::UnityEngine::AssetBundleCreateRequest*)>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xae2b040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.get_IsCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)()>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::get_IsCompleted)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xae30630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)()>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::GetResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae30648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)(::System::Action*)>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::OnCompleted)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae306bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter.UnsafeOnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::*)(::System::Action*)>(&::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnsafeOnCompleted)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xae306c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::_ctor(::UnityEngine::AssetBundleCreateRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, asyncOperation);
}
inline bool GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::get_IsCompleted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"get_IsCompleted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AssetBundle> GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::GetResult()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"GetResult", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(*this, ___internal_method);
}
inline void GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::OnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
inline void GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnsafeOnCompleted(::System::Action*  continuation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(),
                        {"UnsafeOnCompleted", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, continuation);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr  GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::ICriticalNotifyCompletion"
constexpr ::System::Runtime::CompilerServices::ICriticalNotifyCompletion* GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::i___System__Runtime__CompilerServices__ICriticalNotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr  GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::operator ::System::Runtime::CompilerServices::INotifyCompletion*()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::INotifyCompletion"
constexpr ::System::Runtime::CompilerServices::INotifyCompletion* GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::i___System__Runtime__CompilerServices__INotifyCompletion()  {
return static_cast<::System::Runtime::CompilerServices::INotifyCompletion*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "asyncOperation", ty: "::UnityEngine::AssetBundleCreateRequest*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "continuationAction", ty: "::System::Action_1<::UnityEngine::AsyncOperation*>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Action_1<::UnityEngine::AsyncOperation*>*  continuationAction) noexcept  {
this->asyncOperation = asyncOperation;
this->continuationAction = continuationAction;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter()   {
}
