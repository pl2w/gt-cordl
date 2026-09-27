#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UnityAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnityAsyncExtensions)
namespace Cysharp::Threading::Tasks {
class AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncUnityEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
class AsyncUnityEventHandler;
}
namespace Cysharp::Threading::Tasks {
class IAsyncClickEventHandler;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncEndEditEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IAsyncValueChangedEventHandler_1;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskAsyncEnumerable_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
class ResourceRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_JobHandlePromise;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_ResourceRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask_1_Awaiter;
}
namespace GlobalNamespace {
struct UniTask_Awaiter;
}
namespace GlobalNamespace {
struct UnityAsyncExtensions_AssetBundleCreateRequestAwaiter;
}
namespace GlobalNamespace {
struct UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter;
}
namespace GlobalNamespace {
struct UnityAsyncExtensions_AssetBundleRequestAwaiter;
}
namespace GlobalNamespace {
struct UnityAsyncExtensions_AsyncOperationAwaiter;
}
namespace GlobalNamespace {
struct UnityAsyncExtensions_ResourceRequestAwaiter;
}
namespace GlobalNamespace {
struct UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter;
}
namespace GlobalNamespace {
struct UnityAsyncExtensions__WaitAsync_d__33;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class IProgress_1;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Dropdown;
}
namespace UnityEngine::UI {
class InputField;
}
namespace UnityEngine::UI {
class ScrollRect;
}
namespace UnityEngine::UI {
class Scrollbar;
}
namespace UnityEngine::UI {
class Slider;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundle;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class ResourceRequest;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class ResourceRequestConfiguredSource_UnityAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AssetBundleRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_AsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_JobHandlePromise;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_ResourceRequestConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
class UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AssetBundleRequestConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/AsyncOperationConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/JobHandlePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/ResourceRequestConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*, "Cysharp.Threading.Tasks", "UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c");
// [Extension]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions
class CORDL_TYPE UnityAsyncExtensions : public ::System::Object {
public:
// Declarations
using AssetBundleCreateRequestConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource;

using AssetBundleRequestAllAssetsConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource;

using AssetBundleRequestConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource;

using AsyncGPUReadbackRequestAwaiterConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource;

using AsyncOperationConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource;

using JobHandlePromise = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise;

using ResourceRequestConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource;

using UnityWebRequestAsyncOperationConfiguredSource = ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource;

using AssetBundleCreateRequestAwaiter = ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter;

using AssetBundleRequestAllAssetsAwaiter = ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter;

using AssetBundleRequestAwaiter = ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter;

using AsyncOperationAwaiter = ::GlobalNamespace::UnityAsyncExtensions_AsyncOperationAwaiter;

using ResourceRequestAwaiter = ::GlobalNamespace::UnityAsyncExtensions_ResourceRequestAwaiter;

using UnityWebRequestAsyncOperationAwaiter = ::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter;

using _WaitAsync_d__33 = ::GlobalNamespace::UnityAsyncExtensions__WaitAsync_d__33;

/// [Extension]
/// @brief Method AwaitForAllAssets, addr 0xae29b3c, size 0x3c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method AwaitForAllAssets, addr 0xae29b78, size 0x1e0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<::UnityW<::UnityEngine::Object>>> AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method AwaitForAllAssets, addr 0xae29a90, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAllAssetsAwaiter AwaitForAllAssets(::UnityEngine::AssetBundleRequest*  asyncOperation) ;

/// [Extension]
/// @brief Method GetAsyncClickEventHandler, addr 0xae2c254, size 0x80, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button) ;

/// [Extension]
/// @brief Method GetAsyncClickEventHandler, addr 0xae2c2d4, size 0x70, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncClickEventHandler* GetAsyncClickEventHandler(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncEndEditEventHandler, addr 0xae2d42c, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncEndEditEventHandler, addr 0xae2d4cc, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncEndEditEventHandler_1<::StringW>* GetAsyncEndEditEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncEventHandler, addr 0xae2be34, size 0x6c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler* GetAsyncEventHandler(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncEventHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::AsyncUnityEventHandler_1<T>* GetAsyncEventHandler(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2d824, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2d8c4, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::StringW>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2cc84, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2cd24, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<::UnityEngine::Vector2>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2c524, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2c5c4, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<bool>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2c8d4, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2c974, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2d07c, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2d11c, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<float_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2dc1c, size 0xa0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown) ;

/// [Extension]
/// @brief Method GetAsyncValueChangedEventHandler, addr 0xae2dcbc, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IAsyncValueChangedEventHandler_1<int32_t>* GetAsyncValueChangedEventHandler(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xae29f3c, size 0xb0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_1_Awaiter<::UnityEngine::Rendering::AsyncGPUReadbackRequest> GetAwaiter(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xae2bb9c, size 0x130, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(::Unity::Jobs::JobHandle  jobHandle) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xae2afb8, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityAsyncExtensions_AssetBundleCreateRequestAwaiter GetAwaiter(::UnityEngine::AssetBundleCreateRequest*  asyncOperation) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xae2ab0c, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityAsyncExtensions_AssetBundleRequestAwaiter GetAwaiter(::UnityEngine::AssetBundleRequest*  asyncOperation) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xae2a660, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityAsyncExtensions_ResourceRequestAwaiter GetAwaiter(::UnityEngine::ResourceRequest*  asyncOperation) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xae2b464, size 0x88, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UnityAsyncExtensions_UnityWebRequestAsyncOperationAwaiter GetAwaiter(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation) ;

/// [Extension]
/// @brief Method OnClickAsAsyncEnumerable, addr 0xae2c43c, size 0x7c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button) ;

/// [Extension]
/// @brief Method OnClickAsAsyncEnumerable, addr 0xae2c4b8, size 0x6c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnClickAsAsyncEnumerable(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnClickAsync, addr 0xae2c344, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask OnClickAsync(::UnityEngine::UI::Button*  button) ;

/// [Extension]
/// @brief Method OnClickAsync, addr 0xae2c3c8, size 0x74, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask OnClickAsync(::UnityEngine::UI::Button*  button, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnEndEditAsAsyncEnumerable, addr 0xae2d704, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField) ;

/// [Extension]
/// @brief Method OnEndEditAsAsyncEnumerable, addr 0xae2d7a0, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnEndEditAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnEndEditAsync, addr 0xae2d554, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::UnityEngine::UI::InputField*  inputField) ;

/// [Extension]
/// @brief Method OnEndEditAsync, addr 0xae2d634, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnEndEditAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnInvokeAsAsyncEnumerable, addr 0xae2c1a8, size 0x68, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::Cysharp::Threading::Tasks::AsyncUnit>* OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnInvokeAsAsyncEnumerable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<T>* OnInvokeAsAsyncEnumerable(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnInvokeAsync, addr 0xae2c08c, size 0x74, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask OnInvokeAsync(::UnityEngine::Events::UnityEvent*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnInvokeAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> OnInvokeAsync(::UnityEngine::Events::UnityEvent_1<T>*  unityEvent, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2dafc, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2db98, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::StringW>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2cf5c, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2cff8, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<::UnityEngine::Vector2>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2c7b4, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2c850, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<bool>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2cb64, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2cc00, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2d30c, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2d3a8, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<float_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2deac, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown) ;

/// [Extension]
/// @brief Method OnValueChangedAsAsyncEnumerable, addr 0xae2df48, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskAsyncEnumerable_1<int32_t>* OnValueChangedAsAsyncEnumerable(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2d94c, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2da2c, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::StringW> OnValueChangedAsync(::UnityEngine::UI::InputField*  inputField, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2cdac, size 0xe0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2ce8c, size 0xd0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Vector2> OnValueChangedAsync(::UnityEngine::UI::ScrollRect*  scrollRect, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2c64c, size 0xbc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2c708, size 0xac, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> OnValueChangedAsync(::UnityEngine::UI::Toggle*  toggle, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2c9fc, size 0xbc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2cab8, size 0xac, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Scrollbar*  scrollbar, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2d1a4, size 0xbc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Slider*  slider) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2d260, size 0xac, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<float_t> OnValueChangedAsync(::UnityEngine::UI::Slider*  slider, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2dd44, size 0xbc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown) ;

/// [Extension]
/// @brief Method OnValueChangedAsync, addr 0xae2de00, size 0xac, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> OnValueChangedAsync(::UnityEngine::UI::Dropdown*  dropdown, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method StartAsyncCoroutine, addr 0xae2be04, size 0x30, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask StartAsyncCoroutine(::UnityEngine::MonoBehaviour*  monoBehaviour, ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTask>*  asyncCoroutine) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xae2a314, size 0x17c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ToUniTask(::UnityEngine::AsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xae2bd54, size 0xb0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ToUniTask(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xae2b54c, size 0x244, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> ToUniTask(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xae29fec, size 0x128, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> ToUniTask(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xae2b0a0, size 0x1e0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> ToUniTask(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xae2abf4, size 0x1e0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> ToUniTask(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xae2a748, size 0x1e0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> ToUniTask(::UnityEngine::ResourceRequest*  asyncOperation, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UnityAsyncExtensions::<WaitAsync>d__33))]
/// [Extension]
/// @brief Method WaitAsync, addr 0xae2bad8, size 0xc4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitAsync(::Unity::Jobs::JobHandle  jobHandle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  waitTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0xae2a304, size 0x10, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WithCancellation(::UnityEngine::AsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0xae2b510, size 0x3c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Networking::UnityWebRequest*> WithCancellation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0xae2a114, size 0x30, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> WithCancellation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0xae2b064, size 0x3c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::AssetBundle>> WithCancellation(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0xae2abb8, size 0x3c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> WithCancellation(::UnityEngine::AssetBundleRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0xae2a70c, size 0x3c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<::UnityW<::UnityEngine::Object>> WithCancellation(::UnityEngine::ResourceRequest*  asyncOperation, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions(UnityAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions(UnityAsyncExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21899};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, Unity.Jobs.JobHandle
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/JobHandlePromise
class CORDL_TYPE UnityAsyncExtensions_JobHandlePromise : public ::System::Object {
public:
// Declarations
/// @brief Field core, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field jobHandle, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_jobHandle, put=__cordl_internal_set_jobHandle)) ::Unity::Jobs::JobHandle  jobHandle;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xae2bccc, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* Create(::Unity::Jobs::JobHandle  jobHandle, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xae316f4, size 0x58, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae3174c, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae318cc, size 0x11c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae3185c, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0xae317a4, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::Unity::Jobs::JobHandle const& __cordl_internal_get_jobHandle() const;

constexpr ::Unity::Jobs::JobHandle& __cordl_internal_get_jobHandle() ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_jobHandle(::Unity::Jobs::JobHandle  value) ;

/// @brief Method .ctor, addr 0xae316ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_JobHandlePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_JobHandlePromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_JobHandlePromise(UnityAsyncExtensions_JobHandlePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_JobHandlePromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_JobHandlePromise(UnityAsyncExtensions_JobHandlePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21897};

/// @brief Field jobHandle, offset: 0x10, size: 0x10, def value: None
 ::Unity::Jobs::JobHandle  ___jobHandle;

/// @brief Field core, offset: 0x20, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise, ___jobHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise, ___core) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_JobHandlePromise) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>*() noexcept;

/// @brief Method Create, addr 0xae2b8f4, size 0x1e4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* Create(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xae311e0, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xae31110, size 0xd0, virtual true, abstract: false, final true
inline ::UnityEngine::Networking::UnityWebRequest* GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae311e4, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae31364, size 0x1f0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae312f4, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xae31554, size 0xc4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xae3123c, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& __cordl_internal_get_asyncOperation() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xae31108, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xae30fe8, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Networking::UnityWebRequest*>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Networking__UnityWebRequest__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource(UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource(UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21896};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Networking::UnityWebRequestAsyncOperation*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Networking::UnityWebRequest*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_UnityWebRequestAsyncOperationConfiguredSource) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/UnityWebRequestAsyncOperationConfiguredSource/<>c
class CORDL_TYPE UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xae31688, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xae31680, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c(UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c(UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21895};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UnityWebRequestAsyncOperationConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AssetBundleCreateRequest*  asyncOperation;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>*() noexcept;

/// @brief Method Create, addr 0xae2b280, size 0x1e4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* Create(::UnityEngine::AssetBundleCreateRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xae309a0, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xae308d0, size 0xd0, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::AssetBundle> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae309a4, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae30b24, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae30ab4, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xae30c98, size 0xc4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xae309fc, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AssetBundleCreateRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AssetBundleCreateRequest*& __cordl_internal_get_asyncOperation() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleCreateRequest*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xae308c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xae307a8, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::AssetBundle>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__AssetBundle__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource(UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource(UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21893};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AssetBundleCreateRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::AssetBundle>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleCreateRequestConfiguredSource) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleCreateRequestConfiguredSource/<>c
class CORDL_TYPE AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xae30dcc, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xae30dc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21892};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AssetBundleCreateRequestConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AssetBundleRequestConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AssetBundleRequest*  asyncOperation;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept;

/// @brief Method Create, addr 0xae2add4, size 0x1e4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xae301a0, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xae300d0, size 0xd0, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae301a4, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae30324, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae302b4, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xae30498, size 0xc4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xae301fc, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AssetBundleRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_asyncOperation() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xae300c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xae2ffa8, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleRequestConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AssetBundleRequestConfiguredSource(UnityAsyncExtensions_AssetBundleRequestConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AssetBundleRequestConfiguredSource(UnityAsyncExtensions_AssetBundleRequestConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21890};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestConfiguredSource) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestConfiguredSource/<>c
class CORDL_TYPE AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xae305cc, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xae305c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21889};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AssetBundleRequestConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_ResourceRequestConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::ResourceRequest*  asyncOperation;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>*() noexcept;

/// @brief Method Create, addr 0xae2a928, size 0x1e4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* Create(::UnityEngine::ResourceRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xae2f9a0, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xae2f8d0, size 0xd0, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Object> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae2f9a4, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae2fb24, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae2fab4, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xae2fc98, size 0xc4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xae2f9fc, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::ResourceRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::ResourceRequest*& __cordl_internal_get_asyncOperation() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::ResourceRequest*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xae2f8c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xae2f7a8, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_ResourceRequestConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityW<::UnityEngine::Object>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityW___UnityEngine__Object__() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_ResourceRequestConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_ResourceRequestConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_ResourceRequestConfiguredSource(UnityAsyncExtensions_ResourceRequestConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_ResourceRequestConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_ResourceRequestConfiguredSource(UnityAsyncExtensions_ResourceRequestConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21887};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::ResourceRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityW<::UnityEngine::Object>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_ResourceRequestConfiguredSource) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/ResourceRequestConfiguredSource/<>c
class CORDL_TYPE ResourceRequestConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xae2fdcc, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xae2fdc4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ResourceRequestConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ResourceRequestConfiguredSource_UnityAsyncExtensions___c(ResourceRequestConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ResourceRequestConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ResourceRequestConfiguredSource_UnityAsyncExtensions___c(ResourceRequestConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21886};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::ResourceRequestConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AsyncOperationConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AsyncOperation*  asyncOperation;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xae2a490, size 0x1d0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::AsyncOperation*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xae2f0c0, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae2f188, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae2f308, size 0x190, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae2f298, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xae2f498, size 0xc4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xae2f1e0, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AsyncOperation* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AsyncOperation*& __cordl_internal_get_asyncOperation() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AsyncOperation*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xae2f0b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xae2ef98, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncOperationConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AsyncOperationConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncOperationConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AsyncOperationConfiguredSource(UnityAsyncExtensions_AsyncOperationConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncOperationConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AsyncOperationConfiguredSource(UnityAsyncExtensions_AsyncOperationConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21884};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AsyncOperation*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncOperationConfiguredSource) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncOperationConfiguredSource/<>c
class CORDL_TYPE AsyncOperationConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xae2f5cc, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xae2f5c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationConfiguredSource_UnityAsyncExtensions___c(AsyncOperationConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationConfiguredSource_UnityAsyncExtensions___c(AsyncOperationConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncOperationConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, UnityEngine.Rendering.AsyncGPUReadbackRequest
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*() noexcept;

/// @brief Method Create, addr 0xae2a144, size 0x1c0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* Create(::UnityEngine::Rendering::AsyncGPUReadbackRequest  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xae2e9e0, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xae2e900, size 0xe0, virtual true, abstract: false, final true
inline ::UnityEngine::Rendering::AsyncGPUReadbackRequest GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae2e9e4, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae2eb64, size 0x140, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae2eaf4, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xae2eca4, size 0xa4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xae2ea3c, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::Rendering::AsyncGPUReadbackRequest& __cordl_internal_get_asyncOperation() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::Rendering::AsyncGPUReadbackRequest  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  value) ;

/// @brief Method .ctor, addr 0xae2e8f8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xae2e7d8, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___UnityEngine__Rendering__AsyncGPUReadbackRequest_() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource(UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource(UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21881};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x10, def value: None
 ::UnityEngine::Rendering::AsyncGPUReadbackRequest  ___asyncOperation;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>  ___core;

/// @brief Size padding 0x60 - 0x58 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AsyncGPUReadbackRequestAwaiterConfiguredSource) == 0x60, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AsyncGPUReadbackRequestAwaiterConfiguredSource/<>c
class CORDL_TYPE AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xae2edb8, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xae2edb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c(AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c(AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21880};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncGPUReadbackRequestAwaiterConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource
class CORDL_TYPE UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  NextNode;

/// @brief Field asyncOperation, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncOperation, put=__cordl_internal_set_asyncOperation)) ::UnityEngine::AssetBundleRequest*  asyncOperation;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>  pool;

/// @brief Field progress, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>*() noexcept;

/// @brief Method Create, addr 0xae29d58, size 0x1e4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* Create(::UnityEngine::AssetBundleRequest*  asyncOperation, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xae2e348, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xae2e278, size 0xd0, virtual true, abstract: false, final true
inline ::ArrayW<::UnityW<::UnityEngine::Object>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xae2e34c, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xae2e4cc, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xae2e45c, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xae2e640, size 0xc4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xae2e3a4, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::UnityEngine::AssetBundleRequest* const& __cordl_internal_get_asyncOperation() const;

constexpr ::UnityEngine::AssetBundleRequest*& __cordl_internal_get_asyncOperation() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_asyncOperation(::UnityEngine::AssetBundleRequest*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xae2e270, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xae2e150, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<::UnityW<::UnityEngine::Object>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___ArrayW___UnityW___UnityEngine__Object___() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource(UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource(UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21879};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource*  ___nextNode;

/// @brief Field asyncOperation, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::AssetBundleRequest*  ___asyncOperation;

/// @brief Field progress, offset: 0x20, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___asyncOperation) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___progress) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UnityAsyncExtensions_AssetBundleRequestAllAssetsConfiguredSource) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UnityAsyncExtensions/AssetBundleRequestAllAssetsConfiguredSource/<>c
class CORDL_TYPE AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xae2e774, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xae2e76c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c(AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21878};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AssetBundleRequestAllAssetsConfiguredSource_UnityAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
