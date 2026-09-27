#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundle)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundle;
}
// Write type traits
MARK_REF_T(::UnityEngine::AssetBundle*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromMemoryAsyncOperation.h")]
// [ExcludeFromPreset]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetOperation.h")]
// [NativeHeader("Runtime/Scripting/ScriptingExportUtility.h")]
// [NativeHeader("Runtime/Scripting/ScriptingUtility.h")]
// [NativeHeader("AssetBundleScriptingClasses.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleSaveAndLoadHelper.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleUtility.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetUtility.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromFileAsyncOperation.h")]
// [NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromManagedStreamAsyncOperation.h")]
// Dependencies UnityEngine.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AssetBundle
class CORDL_TYPE AssetBundle : public ::UnityEngine::Object {
public:
// Declarations
 __declspec(property(get=get_isStreamedSceneAssetBundle)) bool  isStreamedSceneAssetBundle;

/// [NativeMethod("GetAllAssetNames")]
/// @brief Method GetAllAssetNames, addr 0xb551254, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetAllAssetNames() ;

/// @brief Method GetAllAssetNames_Injected, addr 0xb5512cc, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetAllAssetNames_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetAllLoadedAssetBundles, addr 0xb54fe84, size 0x28, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AssetBundle>>* GetAllLoadedAssetBundles() ;

/// [FreeFunction("GetAllAssetBundles")]
/// @brief Method GetAllLoadedAssetBundles_Native, addr 0xb54fe5c, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::AssetBundle>> GetAllLoadedAssetBundles_Native() ;

/// [NativeMethod("GetAllScenePaths")]
/// @brief Method GetAllScenePaths, addr 0xb551308, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::StringW> GetAllScenePaths() ;

/// @brief Method GetAllScenePaths_Injected, addr 0xb551380, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW> GetAllScenePaths_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method LoadAllAssetsAsync, addr 0xb550ed4, size 0x70, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync() ;

/// @brief Method LoadAllAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync() ;

/// @brief Method LoadAllAssetsAsync, addr 0xb550f44, size 0xc4, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync(::System::Type*  type) ;

/// @brief Method LoadAsset, addr 0xb550458, size 0x80, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW  name) ;

/// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)1)]
/// @brief Method LoadAsset, addr 0xb5504d8, size 0x100, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline T LoadAsset(::StringW  name) ;

/// @brief Method LoadAssetAsync, addr 0xb550854, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW  name, ::System::Type*  type) ;

/// [NativeMethod("LoadAssetAsync_Internal")]
/// [NativeThrows]
/// @brief Method LoadAssetAsync_Internal, addr 0xb550954, size 0x240, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAssetAsync_Internal_Injected, addr 0xb551008, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadAssetAsync_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::Type*  type) ;

/// @brief Method LoadAssetWithSubAssetsAsync, addr 0xb550b94, size 0x100, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::StringW  name, ::System::Type*  type) ;

/// [NativeMethod("LoadAssetWithSubAssetsAsync_Internal")]
/// [NativeThrows]
/// @brief Method LoadAssetWithSubAssetsAsync_Internal, addr 0xb550c94, size 0x240, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAssetWithSubAssetsAsync_Internal_Injected, addr 0xb5513bc, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadAssetWithSubAssetsAsync_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::Type*  type) ;

/// [NativeMethod("LoadAsset_Internal")]
/// [TypeInferenceRule((UnityEngineInternal.TypeInferenceRules)1)]
/// [NativeThrows]
/// @brief Method LoadAsset_Internal, addr 0xb5505d8, size 0x228, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAsset_Internal_Injected, addr 0xb550800, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadAsset_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name, ::System::Type*  type) ;

/// @brief Method LoadFromFile, addr 0xb550398, size 0xc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile(::StringW  path) ;

/// @brief Method LoadFromFileAsync, addr 0xb550124, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW  path) ;

/// @brief Method LoadFromFileAsync, addr 0xb550130, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW  path, uint32_t  crc) ;

/// [FreeFunction("LoadFromFileAsync")]
/// @brief Method LoadFromFileAsync_Internal, addr 0xb54feac, size 0x224, virtual false, abstract: false, final false
static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::StringW  path, uint32_t  crc, uint64_t  offset) ;

/// @brief Method LoadFromFileAsync_Internal_Injected, addr 0xb5500d0, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadFromFileAsync_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  path, uint32_t  crc, uint64_t  offset) ;

/// [FreeFunction("LoadFromFile")]
/// @brief Method LoadFromFile_Internal, addr 0xb550138, size 0x20c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile_Internal(::StringW  path, uint32_t  crc, uint64_t  offset) ;

/// @brief Method LoadFromFile_Internal_Injected, addr 0xb550344, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr LoadFromFile_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  path, uint32_t  crc, uint64_t  offset) ;

static inline ::UnityEngine::AssetBundle* New_ctor() ;

/// [NativeMethod("Unload")]
/// [NativeThrows]
/// @brief Method Unload, addr 0xb55105c, size 0x80, virtual false, abstract: false, final false
inline void Unload(bool  unloadAllLoadedObjects) ;

/// [NativeMethod("UnloadAsync")]
/// [NativeThrows]
/// @brief Method UnloadAsync, addr 0xb551120, size 0x94, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleUnloadOperation* UnloadAsync(bool  unloadAllLoadedObjects) ;

/// @brief Method UnloadAsync_Injected, addr 0xb5511b4, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr UnloadAsync_Injected(::System::IntPtr  _unity_self, bool  unloadAllLoadedObjects) ;

/// @brief Method Unload_Injected, addr 0xb5510dc, size 0x44, virtual false, abstract: false, final false
static inline void Unload_Injected(::System::IntPtr  _unity_self, bool  unloadAllLoadedObjects) ;

/// @brief Method .ctor, addr 0xb54fe04, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

/// [NativeMethod("GetIsStreamedSceneAssetBundle")]
/// @brief Method get_isStreamedSceneAssetBundle, addr 0xb5503a4, size 0x78, virtual false, abstract: false, final false
inline bool get_isStreamedSceneAssetBundle() ;

/// @brief Method get_isStreamedSceneAssetBundle_Injected, addr 0xb55041c, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isStreamedSceneAssetBundle_Injected(::System::IntPtr  _unity_self) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundle(AssetBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundle(AssetBundle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AssetBundle) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
