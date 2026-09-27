#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_impl.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnityEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnityEventHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncClickEventHandler_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncEndEditEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IAsyncValueChangedEventHandler_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IPlayerLoopItem_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__ITaskPoolNode_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskAsyncEnumerable_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__IUniTaskSource_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__PlayerLoopTiming_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_AssetBundleCreateRequestAwaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_AssetBundleRequestAwaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_AsyncOperationAwaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_ResourceRequestAwaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions__WaitAsync_d__33_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UnityAsyncExtensions_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IProgress_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Dropdown_def.hpp"
#include "UnityEngine/UI/zzzz__InputField_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/UI/zzzz__Slider_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include "UnityEngine/zzzz__AssetBundleCreateRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundleRequest_def.hpp"
#include "UnityEngine/zzzz__AssetBundle_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.AwaitForAllAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter (*)(::UnityEngine::AssetBundleRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae29a90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.AwaitForAllAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> (*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae29b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.AwaitForAllAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> (*)(::UnityEngine::AssetBundleRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xae29b78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest> (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae29f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xae2a114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xae29fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::AsyncOperation*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xae2a304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::AsyncOperation*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xae2a314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityAsyncExtensions_ResourceRequestAwaiter (*)(::UnityEngine::ResourceRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2a660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::ResourceRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae2a70c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::ResourceRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xae2a748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter (*)(::UnityEngine::AssetBundleRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2ab0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::AssetBundleRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae2abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> (*)(::UnityEngine::AssetBundleRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xae2abf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter (*)(::UnityEngine::AssetBundleCreateRequest*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2afb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> (*)(::UnityEngine::AssetBundleCreateRequest*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae2b064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> (*)(::UnityEngine::AssetBundleCreateRequest*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xae2b0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2b464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WithCancellation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xae2b510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::System::IProgress_1<float_t>*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0xae2b54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.WaitAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::Unity::Jobs::JobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::WaitAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae2bad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WaitAsync", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAwaiter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::UniTask_Awaiter (*)(::Unity::Jobs::JobHandle)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xae2bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.ToUniTask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::Unity::Jobs::JobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xae2bd54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.StartAsyncCoroutine
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::MonoBehaviour*, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::StartAsyncCoroutine)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xae2be04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"StartAsyncCoroutine", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::AsyncUnityEventHandler* (*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEventHandler)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae2be34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEventHandler", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnInvokeAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae2c08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsync", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnInvokeAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::UnityEngine::Events::UnityEvent*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xae2c1a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncClickEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncClickEventHandler* (*)(::UnityEngine::UI::Button*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xae2c254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncClickEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncClickEventHandler* (*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae2c2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::UI::Button*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2c344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask (*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xae2c3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::UnityEngine::UI::Button*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xae2c43c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnClickAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* (*)(::UnityEngine::UI::Button*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xae2c4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* (*)(::UnityEngine::UI::Toggle*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae2c524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* (*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2c5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (*)(::UnityEngine::UI::Toggle*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae2c64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<bool> (*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xae2c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* (*)(::UnityEngine::UI::Toggle*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae2c7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* (*)(::UnityEngine::UI::Toggle*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae2c8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2c974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Scrollbar*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae2c9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xae2cab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae2cb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Scrollbar*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae2cc84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2cd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> (*)(::UnityEngine::UI::ScrollRect*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae2cdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> (*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae2ce8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae2cf5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* (*)(::UnityEngine::UI::ScrollRect*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2cff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Slider*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae2d07c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* (*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2d11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Slider*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae2d1a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<float_t> (*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xae2d260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Slider*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae2d30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* (*)(::UnityEngine::UI::Slider*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2d3a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae2d42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncEndEditEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2d4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae2d554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae2d634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae2d704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnEndEditAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae2d824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2d8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae2d94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<::StringW> (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae2da2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae2dafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* (*)(::UnityEngine::UI::InputField*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2db98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xae2dc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.GetAsyncValueChangedEventHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2dcbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int32_t> (*)(::UnityEngine::UI::Dropdown*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xae2dd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTask_1<int32_t> (*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xae2de00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xae2deac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions.OnValueChangedAsAsyncEnumerable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* (*)(::UnityEngine::UI::Dropdown*, ::System::Threading::CancellationToken)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xae2df48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> Cysharp::Threading::Tasks::UnityAsyncExtensions::AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"AwaitForAllAssets", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken);
}
inline ::GlobalNamespace::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest> Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>>(nullptr, ___internal_method, asyncOperation, timing, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::AsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken);
}
inline ::GlobalNamespace::UnityAsyncExtensions_ResourceRequestAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::ResourceRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityAsyncExtensions_ResourceRequestAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::ResourceRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken);
}
inline ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken);
}
inline ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken);
}
inline ::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter>(nullptr, ___internal_method, asyncOperation);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> Cysharp::Threading::Tasks::UnityAsyncExtensions::WithCancellation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WithCancellation", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>>(nullptr, ___internal_method, asyncOperation, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*>>(nullptr, ___internal_method, asyncOperation, progress, timing, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::WaitAsync(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"WaitAsync", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, jobHandle, waitTiming, cancellationToken);
}
inline ::GlobalNamespace::UniTask_Awaiter Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAwaiter(::Unity::Jobs::JobHandle  jobHandle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAwaiter", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::UniTask_Awaiter>(nullptr, ___internal_method, jobHandle);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::ToUniTask(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"ToUniTask", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, jobHandle, waitTiming);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::StartAsyncCoroutine(::UnityEngine::MonoBehaviour*  monoBehaviour, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  asyncCoroutine)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"StartAsyncCoroutine", {}, {::i2c::type_of<::UnityEngine::MonoBehaviour*>(), ::i2c::type_of<::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, monoBehaviour, asyncCoroutine);
}
inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEventHandler(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEventHandler", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnityEventHandler*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsync(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsync", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnInvokeAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::Events::UnityEvent*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEventHandler(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                    {"GetAsyncEventHandler", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::UniTask_1<T> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsync(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                    {"OnInvokeAsync", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<T>>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
template<typename T>
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                    {"OnInvokeAsAsyncEnumerable", {::i2c::class_of<T>()}, {::i2c::type_of<::UnityEngine::Events::UnityEvent_1<T>*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>*>(nullptr, ___internal_method, unityEvent, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(nullptr, ___internal_method, button);
}
inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncClickEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncClickEventHandler*>(nullptr, ___internal_method, button, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync(::UnityEngine::UI::Button*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, button);
}
inline ::Cysharp::Threading::Tasks::UniTask Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsync(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsync", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask>(nullptr, ___internal_method, button, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, button);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnClickAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Button*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>*>(nullptr, ___internal_method, button, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>*>(nullptr, ___internal_method, toggle);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>*>(nullptr, ___internal_method, toggle, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, toggle);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<bool>>(nullptr, ___internal_method, toggle, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(nullptr, ___internal_method, toggle);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Toggle*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>*>(nullptr, ___internal_method, toggle, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, scrollbar);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, scrollbar, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, scrollbar);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, scrollbar, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, scrollbar);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Scrollbar*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, scrollbar, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2>>(nullptr, ___internal_method, scrollRect);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2>>(nullptr, ___internal_method, scrollRect, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::ScrollRect*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>*>(nullptr, ___internal_method, scrollRect, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, slider);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>*>(nullptr, ___internal_method, slider, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Slider*  slider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, slider);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<float_t>>(nullptr, ___internal_method, slider, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, slider);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Slider*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>*>(nullptr, ___internal_method, slider, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncEndEditEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnEndEditAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<::StringW>>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::InputField*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>*>(nullptr, ___internal_method, inputField, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>*>(nullptr, ___internal_method, dropdown);
}
inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"GetAsyncValueChangedEventHandler", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>*>(nullptr, ___internal_method, dropdown, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, dropdown);
}
inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsync", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTask_1<int32_t>>(nullptr, ___internal_method, dropdown, cancellationToken);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(nullptr, ___internal_method, dropdown);
}
inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* Cysharp::Threading::Tasks::UnityAsyncExtensions::OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions*>(),
                        {"OnValueChangedAsAsyncEnumerable", {}, {::i2c::type_of<::UnityEngine::UI::Dropdown*>(), ::i2c::type_of<::System::Threading::CancellationToken>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>*>(nullptr, ___internal_method, dropdown, cancellationToken);
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions::UnityAsyncExtensions()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* (*)(::Unity::Jobs::JobHandle, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::Create)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xae2bccc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"Create", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetResult)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae316f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae3174c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae317a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae3185c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::MoveNext)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xae318cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae316ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Unity::Jobs::JobHandle& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_jobHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr ::Unity::Jobs::JobHandle const& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_jobHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jobHandle;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jobHandle = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::Create(::Unity::Jobs::JobHandle  jobHandle, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"Create", {}, {::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(nullptr, ___internal_method, jobHandle, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise::UnityAsyncExtensions_JobHandlePromise()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae30fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae31108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* (*)(::UnityEngine::Networking::UnityWebRequestAsyncOperation*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xae2b8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Networking::UnityWebRequest* (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae31110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae311e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae311e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae3123c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae312f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0xae31364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae31554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Create(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, token);
}
inline ::UnityEngine::Networking::UnityWebRequest* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Networking::UnityWebRequest*>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Networking__UnityWebRequest__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae31680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae31688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae307a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae308c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* (*)(::UnityEngine::AssetBundleCreateRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xae2b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AssetBundle> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae308d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae309a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae309a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae309fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae30ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xae30b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae30c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AssetBundleCreateRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AssetBundleCreateRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleCreateRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Create(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleCreateRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, token);
}
inline ::UnityW<::UnityEngine::AssetBundle> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AssetBundle>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__AssetBundle__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae30dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae30dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2ffa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae300c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* (*)(::UnityEngine::AssetBundleRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xae2add4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae300d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae301a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae301a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae301fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae302b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xae30324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae30498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AssetBundleRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AssetBundleRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, token);
}
inline ::UnityW<::UnityEngine::Object> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource::UnityAsyncExtensions_AssetBundleRequestConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae305c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae305cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2f7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2f8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* (*)(::UnityEngine::ResourceRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xae2a928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae2f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae2f9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae2f9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae2f9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae2fab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xae2fb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae2fc98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::ResourceRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::ResourceRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::ResourceRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Create(::UnityEngine::ResourceRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::ResourceRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, token);
}
inline ::UnityW<::UnityEngine::Object> Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_ResourceRequestConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource::UnityAsyncExtensions_ResourceRequestConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2fdc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae2fdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c::ResourceRequestConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2ef98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2f0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource* (*)(::UnityEngine::AsyncOperation*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xae2a490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xae2f0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae2f188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae2f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae2f298;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xae2f308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae2f498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AsyncOperation*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AsyncOperation* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AsyncOperation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::Create(::UnityEngine::AsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AsyncOperation*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncOperationConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource::UnityAsyncExtensions_AsyncOperationConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2f5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae2f5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c::AsyncOperationConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2e7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2e8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* (*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xae2a144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::AsyncGPUReadbackRequest (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xae2e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae2e9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae2e9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae2ea3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae2eaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xae2eb64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xae2eca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Create(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(nullptr, ___internal_method, asyncOperation, timing, cancellationToken, token);
}
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::AsyncGPUReadbackRequest>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Rendering__AsyncGPUReadbackRequest_() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2edb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae2edb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.get_NextNode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::get_NextNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2e150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2e270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* (*)(::UnityEngine::AssetBundleRequest*, ::Cysharp::Threading::Tasks::PlayerLoopTiming, ::System::IProgress_1<float_t>*, ::System::Threading::CancellationToken, ::by_ref<int16_t>)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Create)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xae29d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetResult)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xae2e278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.Cysharp_Threading_Tasks_IUniTaskSource_GetResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xae2e348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.GetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetStatus)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xae2e34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.UnsafeGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Cysharp::Threading::Tasks::UniTaskStatus (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::UnsafeGetStatus)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xae2e3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.OnCompleted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)(::System::Action_1<::System::Object*>*, ::System::Object*, int16_t)>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::OnCompleted)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xae2e45c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::MoveNext)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xae2e4cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource.TryReturn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::*)()>(&::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::TryReturn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xae2e640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_nextNode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_nextNode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextNode;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextNode = value;
}
constexpr ::UnityEngine::AssetBundleRequest*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_asyncOperation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr ::UnityEngine::AssetBundleRequest* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_asyncOperation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___asyncOperation;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___asyncOperation = value;
}
constexpr ::System::IProgress_1<float_t>*& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_progress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr ::System::IProgress_1<float_t>* const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_progress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___progress;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_progress(::System::IProgress_1<float_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___progress = value;
}
constexpr ::System::Threading::CancellationToken& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancellationToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr ::System::Threading::CancellationToken const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_cancellationToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cancellationToken;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cancellationToken = value;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_core()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>> const& Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_get_core() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___core;
}
constexpr void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::__cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___core = value;
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(std::forward<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>>(value));
}
inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::getStaticF_pool()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>, "pool", ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>();
}
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::get_NextNode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"get_NextNode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Create", {}, {::i2c::type_of<::UnityEngine::AssetBundleRequest*>(), ::i2c::type_of<::Cysharp::Threading::Tasks::PlayerLoopTiming>(), ::i2c::type_of<::System::IProgress_1<float_t>*>(), ::i2c::type_of<::System::Threading::CancellationToken>(), ::i2c::type_of<::by_ref<int16_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(nullptr, ___internal_method, asyncOperation, timing, progress, cancellationToken, token);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method, token);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"Cysharp.Threading.Tasks.IUniTaskSource.GetResult", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::GetStatus(int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"GetStatus", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method, token);
}
inline ::Cysharp::Threading::Tasks::UniTaskStatus Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::UnsafeGetStatus()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"UnsafeGetStatus", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Cysharp::Threading::Tasks::UniTaskStatus>(this, ___internal_method);
}
inline void Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"OnCompleted", {}, {::i2c::type_of<::System::Action_1<::System::Object*>*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, continuation, state, token);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::TryReturn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>(),
                        {"TryReturn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>());
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource_1___ArrayW___UnityW___UnityEngine__Object___() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IUniTaskSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept {
return static_cast<::Cysharp::Threading::Tasks::IPlayerLoopItem*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr  Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::operator ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>* Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource__() noexcept {
return static_cast<::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource()   {
}
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xae2e76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c.__cctor_b__4_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::*)()>(&::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xae2e774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*  value)  {
::cordl_internals::setStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(std::forward<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(value));
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*, "<>9", ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>();
}
inline void Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::__cctor_b__4_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>(),
                        {"<.cctor>b__4_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*>());
}
// Ctor Parameters []
constexpr ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c()   {
}
