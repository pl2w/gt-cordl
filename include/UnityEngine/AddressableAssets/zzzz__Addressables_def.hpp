#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Addressables.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__IResourceProvider_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Addressables)
namespace GlobalNamespace {
struct Addressables_MergeMode;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::AddressableAssets::ResourceLocators {
class IResourceLocator;
}
namespace UnityEngine::AddressableAssets {
class AddressablesImpl;
}
namespace UnityEngine::AddressableAssets {
class ResourceLocatorInfo;
}
namespace UnityEngine::Networking {
class UnityWebRequest;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class ResourceLocationBase;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class IInstanceProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct InstantiationParameters;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneInstance;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct SceneReleaseMode;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LogType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class Addressables;
}
// Write type traits
MARK_REF_T(::UnityEngine::AddressableAssets::Addressables*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AddressableAssets::Addressables*, "UnityEngine.AddressableAssets", "Addressables");
// Dependencies System.Object, UnityEngine.ResourceManagement.ResourceProviders.IResourceProvider
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Addressables
class CORDL_TYPE Addressables : public ::System::Object {
public:
// Declarations
using MergeMode = ::GlobalNamespace::Addressables_MergeMode;

/// @brief Field BuildReportPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BuildReportPath, put=setStaticF_BuildReportPath)) ::StringW  BuildReportPath;

/// @brief Field LibraryPath, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LibraryPath, put=setStaticF_LibraryPath)) ::StringW  LibraryPath;

/// @brief Field m_AddressablesInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_AddressablesInstance, put=setStaticF_m_AddressablesInstance)) ::UnityEngine::AddressableAssets::AddressablesImpl*  m_AddressablesInstance;

/// @brief Field reinitializeAddressables, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_reinitializeAddressables, put=setStaticF_reinitializeAddressables)) bool  reinitializeAddressables;

/// @brief Method AddResourceLocator, addr 0xae580ec, size 0xb0, virtual false, abstract: false, final false
static inline void AddResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  locator, ::StringW  localCatalogHash, ::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  remoteCatalogLocation) ;

/// @brief Method CheckForCatalogUpdates, addr 0xae57adc, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::StringW>*> CheckForCatalogUpdates(bool  autoReleaseHandle) ;

/// @brief Method CleanBundleCache, addr 0xae58514, size 0xc4, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> CleanBundleCache(::System::Collections::Generic::IEnumerable_1<::StringW>*  catalogsIds) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae55570, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::StringW  key, bool  autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae5530c, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Object*  key, bool  autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae554a4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::IEnumerable*  keys, bool  autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae553d8, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<bool> ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  autoReleaseHandle) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae55260, size 0xac, virtual false, abstract: false, final false
static inline void ClearDependencyCacheAsync(::StringW  key) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae54530, size 0xac, virtual false, abstract: false, final false
static inline void ClearDependencyCacheAsync(::System::Object*  key) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae54d18, size 0xac, virtual false, abstract: false, final false
static inline void ClearDependencyCacheAsync(::System::Collections::IEnumerable*  keys) ;

/// @brief Method ClearDependencyCacheAsync, addr 0xae547e8, size 0xac, virtual false, abstract: false, final false
static inline void ClearDependencyCacheAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations) ;

/// @brief Method ClearResourceLocators, addr 0xae58414, size 0x90, virtual false, abstract: false, final false
static inline void ClearResourceLocators() ;

/// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>)
static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  remoteCatalogLocation) ;

/// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>)
static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW  remoteCatalogPath) ;

/// @brief Method CreateCatalogLocationWithHashDependencies, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::ResourceManagement::ResourceProviders::IResourceProvider*>)
static inline ::UnityEngine::ResourceManagement::ResourceLocations::ResourceLocationBase* CreateCatalogLocationWithHashDependencies(::StringW  remoteCatalogPath, ::StringW  remoteHashPath) ;

/// @brief Method DownloadDependenciesAsync, addr 0xae53ce8, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Object*  key, bool  autoReleaseHandle) ;

/// @brief Method DownloadDependenciesAsync, addr 0xae541fc, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Collections::IEnumerable*  keys, ::GlobalNamespace::Addressables_MergeMode  mode, bool  autoReleaseHandle) ;

/// @brief Method DownloadDependenciesAsync, addr 0xae53ff4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle DownloadDependenciesAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, bool  autoReleaseHandle) ;

/// @brief Method GetDownloadSizeAsync, addr 0xae52fb4, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::StringW  key) ;

/// @brief Method GetDownloadSizeAsync, addr 0xae52e24, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Object*  key) ;

/// @brief Method GetDownloadSizeAsync, addr 0xae53074, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<int64_t> GetDownloadSizeAsync(::System::Collections::IEnumerable*  keys) ;

/// @brief Method GetLocatorInfo, addr 0xae558c0, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* GetLocatorInfo(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  locator) ;

/// @brief Method GetLocatorInfo, addr 0xae5563c, size 0x98, virtual false, abstract: false, final false
static inline ::UnityEngine::AddressableAssets::ResourceLocatorInfo* GetLocatorInfo(::StringW  locatorId) ;

/// @brief Method InitializeAsync, addr 0xae52184, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync() ;

/// @brief Method InitializeAsync, addr 0xae522c8, size 0xc0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> InitializeAsync(bool  autoReleaseHandle) ;

/// @brief Method InstantiateAsync, addr 0xae560e4, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::System::Object*  key, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiateParameters, bool  trackHandle) ;

/// @brief Method InstantiateAsync, addr 0xae55db8, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::System::Object*  key, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace, bool  trackHandle) ;

/// @brief Method InstantiateAsync, addr 0xae55f28, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::System::Object*  key, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, bool  trackHandle) ;

/// @brief Method InstantiateAsync, addr 0xae565fc, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::ResourceManagement::ResourceProviders::InstantiationParameters  instantiateParameters, bool  trackHandle) ;

/// @brief Method InstantiateAsync, addr 0xae559cc, size 0x114, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::Transform*  parent, bool  instantiateInWorldSpace, bool  trackHandle) ;

/// @brief Method InstantiateAsync, addr 0xae55bfc, size 0x134, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>> InstantiateAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  parent, bool  trackHandle) ;

/// [Conditional("ADDRESSABLES_LOG_ALL")]
/// @brief Method InternalSafeSerializationLog, addr 0xae51930, size 0x114, virtual false, abstract: false, final false
static inline void InternalSafeSerializationLog(::StringW  msg, ::UnityEngine::LogType  logType) ;

/// [Conditional("ADDRESSABLES_LOG_ALL")]
/// @brief Method InternalSafeSerializationLogFormat, addr 0xae51b4c, size 0x124, virtual false, abstract: false, final false
static inline void InternalSafeSerializationLogFormat(::StringW  format, ::UnityEngine::LogType  logType, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::System::Object*  key) ;

/// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::StringW  key, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::StringW  key, bool  releaseDependenciesOnFailure, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Object*  key, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Object*  key, ::System::Action_1<TObject>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Collections::IEnumerable*  keys, ::System::Action_1<TObject>*  callback, ::GlobalNamespace::Addressables_MergeMode  mode) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Collections::IEnumerable*  keys, ::System::Action_1<TObject>*  callback, ::GlobalNamespace::Addressables_MergeMode  mode, bool  releaseDependenciesOnFailure) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback) ;

/// @brief Method LoadAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TObject>*> LoadAssetsAsync(::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*  locations, ::System::Action_1<TObject>*  callback, bool  releaseDependenciesOnFailure) ;

/// @brief Method LoadContentCatalogAsync, addr 0xae526e8, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> LoadContentCatalogAsync(::StringW  catalogPath, bool  autoReleaseHandle, ::StringW  providerSuffix) ;

/// @brief Method LoadContentCatalogAsync, addr 0xae52420, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*> LoadContentCatalogAsync(::StringW  catalogPath, ::StringW  providerSuffix) ;

/// @brief Method LoadResourceLocationsAsync, addr 0xae52a04, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> LoadResourceLocationsAsync(::System::Object*  key, ::System::Type*  type) ;

/// @brief Method LoadResourceLocationsAsync, addr 0xae527c0, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> LoadResourceLocationsAsync(::System::Collections::IEnumerable*  keys, ::GlobalNamespace::Addressables_MergeMode  mode, ::System::Type*  type) ;

/// @brief Method LoadSceneAsync, addr 0xae566e4, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::System::Object*  key, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode  releaseMode) ;

/// @brief Method LoadSceneAsync, addr 0xae56a3c, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::System::Object*  key, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode  releaseMode, bool  activateOnLoad, int32_t  priority) ;

/// @brief Method LoadSceneAsync, addr 0xae56b48, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::System::Object*  key, ::UnityEngine::SceneManagement::LoadSceneParameters  loadSceneParameters, bool  activateOnLoad, int32_t  priority) ;

/// @brief Method LoadSceneAsync, addr 0xae56c34, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::System::Object*  key, ::UnityEngine::SceneManagement::LoadSceneParameters  loadSceneParameters, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode  releaseMode, bool  activateOnLoad, int32_t  priority) ;

/// @brief Method LoadSceneAsync, addr 0xae56d28, size 0x104, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority) ;

/// @brief Method LoadSceneAsync, addr 0xae56f30, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode  releaseMode, bool  activateOnLoad, int32_t  priority) ;

/// @brief Method LoadSceneAsync, addr 0xae5703c, size 0xec, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneParameters  loadSceneParameters, bool  activateOnLoad, int32_t  priority) ;

/// @brief Method LoadSceneAsync, addr 0xae57128, size 0xf4, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> LoadSceneAsync(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location, ::UnityEngine::SceneManagement::LoadSceneParameters  loadSceneParameters, ::UnityEngine::ResourceManagement::ResourceProviders::SceneReleaseMode  releaseMode, bool  activateOnLoad, int32_t  priority) ;

/// [Conditional("ADDRESSABLES_LOG_ALL")]
/// @brief Method Log, addr 0xae51da8, size 0x98, virtual false, abstract: false, final false
static inline void Log(::StringW  msg) ;

/// @brief Method LogError, addr 0xae4c8b0, size 0x98, virtual false, abstract: false, final false
static inline void LogError(::StringW  msg) ;

/// @brief Method LogErrorFormat, addr 0xae4d138, size 0xa8, virtual false, abstract: false, final false
static inline void LogErrorFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogException, addr 0xae520f0, size 0x90, virtual false, abstract: false, final false
static inline void LogException(::System::Exception*  ex) ;

/// @brief Method LogException, addr 0xae51f90, size 0xc4, virtual false, abstract: false, final false
static inline void LogException(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op, ::System::Exception*  ex) ;

/// [Conditional("ADDRESSABLES_LOG_ALL")]
/// @brief Method LogFormat, addr 0xae51e40, size 0xa8, virtual false, abstract: false, final false
static inline void LogFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method LogWarning, addr 0xae4c818, size 0x98, virtual false, abstract: false, final false
static inline void LogWarning(::StringW  msg) ;

/// @brief Method LogWarningFormat, addr 0xae51ee8, size 0xa8, virtual false, abstract: false, final false
static inline void LogWarningFormat(::StringW  format, /* [ParamArray] */ ::ArrayW<::System::Object*>  args) ;

/// @brief Method Release, addr 0xae52c30, size 0x8, virtual false, abstract: false, final false
static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline void Release(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  handle) ;

/// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
static inline void Release(TObject  obj) ;

/// @brief Method ReleaseInstance, addr 0xae52dbc, size 0x18, virtual false, abstract: false, final false
static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// @brief Method ReleaseInstance, addr 0xae52dd4, size 0x50, virtual false, abstract: false, final false
static inline bool ReleaseInstance(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::GameObject>>  handle) ;

/// @brief Method ReleaseInstance, addr 0xae52c38, size 0x98, virtual false, abstract: false, final false
static inline bool ReleaseInstance(::UnityEngine::GameObject*  instance) ;

/// @brief Method RemoveResourceLocator, addr 0xae58298, size 0x98, virtual false, abstract: false, final false
static inline void RemoveResourceLocator(::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*  locator) ;

/// @brief Method ResolveInternalId, addr 0xae5109c, size 0x98, virtual false, abstract: false, final false
static inline ::StringW ResolveInternalId(::StringW  id) ;

/// @brief Method UnloadSceneAsync, addr 0xae57848, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, bool  autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync, addr 0xae57520, size 0xe8, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::UnityEngine::SceneManagement::UnloadSceneOptions  unloadOptions, bool  autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync, addr 0xae57928, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>  handle, bool  autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync, addr 0xae5776c, size 0xdc, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  scene, bool  autoReleaseHandle) ;

/// @brief Method UnloadSceneAsync, addr 0xae5721c, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> UnloadSceneAsync(::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance  scene, ::UnityEngine::SceneManagement::UnloadSceneOptions  unloadOptions, bool  autoReleaseHandle) ;

/// @brief Method UpdateCatalogs, addr 0xae58014, size 0xd8, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> UpdateCatalogs(bool  autoCleanBundleCache, ::System::Collections::Generic::IEnumerable_1<::StringW>*  catalogs, bool  autoReleaseHandle) ;

/// @brief Method UpdateCatalogs, addr 0xae57cf0, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::List_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>*> UpdateCatalogs(::System::Collections::Generic::IEnumerable_1<::StringW>*  catalogs, bool  autoReleaseHandle) ;

static inline ::StringW getStaticF_BuildReportPath() ;

static inline ::StringW getStaticF_LibraryPath() ;

static inline ::UnityEngine::AddressableAssets::AddressablesImpl* getStaticF_m_AddressablesInstance() ;

static inline bool getStaticF_reinitializeAddressables() ;

/// @brief Method get_BuildPath, addr 0xae51564, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_BuildPath() ;

/// @brief Method get_Instance, addr 0xae50f80, size 0x88, virtual false, abstract: false, final false
static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_Instance() ;

/// @brief Method get_InstanceProvider, addr 0xae51008, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::ResourceProviders::IInstanceProvider* get_InstanceProvider() ;

/// @brief Method get_InternalIdTransformFunc, addr 0xae51188, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>* get_InternalIdTransformFunc() ;

/// @brief Method get_PlayerBuildDataPath, addr 0xae516d0, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_PlayerBuildDataPath() ;

/// @brief Method get_ResourceLocators, addr 0xae518a0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::AddressableAssets::ResourceLocators::IResourceLocator*>* get_ResourceLocators() ;

/// @brief Method get_ResourceManager, addr 0xae50eec, size 0x94, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager() ;

/// @brief Method get_RuntimePath, addr 0xae5180c, size 0x90, virtual false, abstract: false, final false
static inline ::StringW get_RuntimePath() ;

/// @brief Method get_StreamingAssetsSubFolder, addr 0xae51468, size 0xbc, virtual false, abstract: false, final false
static inline ::StringW get_StreamingAssetsSubFolder() ;

/// @brief Method get_Version, addr 0xae50eac, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_Version() ;

/// @brief Method get_WebRequestOverride, addr 0xae512f8, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>* get_WebRequestOverride() ;

/// @brief Method get_m_Addressables, addr 0xae50e54, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::AddressableAssets::AddressablesImpl* get_m_Addressables() ;

static inline void setStaticF_BuildReportPath(::StringW  value) ;

static inline void setStaticF_LibraryPath(::StringW  value) ;

static inline void setStaticF_m_AddressablesInstance(::UnityEngine::AddressableAssets::AddressablesImpl*  value) ;

static inline void setStaticF_reinitializeAddressables(bool  value) ;

/// @brief Method set_InternalIdTransformFunc, addr 0xae5123c, size 0xa4, virtual false, abstract: false, final false
static inline void set_InternalIdTransformFunc(::System::Func_2<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*,::StringW>*  value) ;

/// @brief Method set_WebRequestOverride, addr 0xae513ac, size 0xa4, virtual false, abstract: false, final false
static inline void set_WebRequestOverride(::System::Action_1<::UnityEngine::Networking::UnityWebRequest*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Addressables() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Addressables(Addressables && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Addressables", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Addressables(Addressables const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29212};

/// @brief Field kAddressablesRuntimeBuildLogPath offset 0xffffffff size 0x8
static constexpr ::ConstString  kAddressablesRuntimeBuildLogPath{u"AddressablesRuntimeBuildLog"};

/// @brief Field kAddressablesRuntimeDataPath offset 0xffffffff size 0x8
static constexpr ::ConstString  kAddressablesRuntimeDataPath{u"AddressablesRuntimeDataPath"};

/// @brief Field k_AddressablesLogConditional offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AddressablesLogConditional{u"ADDRESSABLES_LOG_ALL"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AddressableAssets::Addressables) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
