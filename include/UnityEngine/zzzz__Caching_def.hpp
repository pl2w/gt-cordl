#pragma once
// IWYU pragma private; include "UnityEngine/Caching.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(Caching)
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
struct Cache;
}
namespace UnityEngine {
struct CachedAssetBundle;
}
namespace UnityEngine {
struct Hash128;
}
// Forward declare root types
namespace UnityEngine {
class Caching;
}
// Write type traits
MARK_REF_T(::UnityEngine::Caching*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Caching*, "UnityEngine", "Caching");
// [StaticAccessor("GetCachingManager()", (UnityEngine.Bindings.StaticAccessorType)0)]
// [NativeHeader("Runtime/Misc/CachingManager.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Caching
class CORDL_TYPE Caching : public ::System::Object {
public:
// Declarations
/// @brief Method AddCache, addr 0xb5688f8, size 0x21c, virtual false, abstract: false, final false
static inline ::UnityEngine::Cache AddCache(::StringW  cachePath) ;

/// [NativeName("AddCachePath")]
/// @brief Method AddCache, addr 0xb568c88, size 0x17c, virtual false, abstract: false, final false
static inline ::UnityEngine::Cache AddCache(::StringW  cachePath, bool  isReadonly) ;

/// @brief Method AddCache_Injected, addr 0xb568e04, size 0x54, virtual false, abstract: false, final false
static inline void AddCache_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  cachePath, bool  isReadonly, ::by_ref<::UnityEngine::Cache>  ret) ;

/// @brief Method ClearAllCachedVersions, addr 0xb5684f4, size 0x74, virtual false, abstract: false, final false
static inline bool ClearAllCachedVersions(::StringW  assetBundleName) ;

/// @brief Method ClearCachedVersion, addr 0xb5680ac, size 0x80, virtual false, abstract: false, final false
static inline bool ClearCachedVersion(::StringW  assetBundleName, ::UnityEngine::Hash128  hash) ;

/// [NativeName("ClearCachedVersion")]
/// @brief Method ClearCachedVersionInternal, addr 0xb56812c, size 0x17c, virtual false, abstract: false, final false
static inline bool ClearCachedVersionInternal(::StringW  assetBundleName, ::UnityEngine::Hash128  hash) ;

/// @brief Method ClearCachedVersionInternal_Injected, addr 0xb5682a8, size 0x44, virtual false, abstract: false, final false
static inline bool ClearCachedVersionInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  assetBundleName, ::by_ref<::UnityEngine::Hash128>  hash) ;

/// @brief Method ClearCachedVersions, addr 0xb568370, size 0x184, virtual false, abstract: false, final false
static inline bool ClearCachedVersions(::StringW  assetBundleName, ::UnityEngine::Hash128  hash, bool  keepInputVersion) ;

/// @brief Method ClearCachedVersions_Injected, addr 0xb568568, size 0x54, virtual false, abstract: false, final false
static inline bool ClearCachedVersions_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  assetBundleName, ::by_ref<::UnityEngine::Hash128>  hash, bool  keepInputVersion) ;

/// @brief Method ClearOtherCachedVersions, addr 0xb5682ec, size 0x84, virtual false, abstract: false, final false
static inline bool ClearOtherCachedVersions(::StringW  assetBundleName, ::UnityEngine::Hash128  hash) ;

/// [NativeThrows]
/// [StaticAccessor("CachingManagerWrapper", (UnityEngine.Bindings.StaticAccessorType)2)]
/// [NativeName("Caching_GetCacheHandleByPath")]
/// @brief Method GetCacheByPath, addr 0xb568b14, size 0x174, virtual false, abstract: false, final false
static inline ::UnityEngine::Cache GetCacheByPath(::StringW  cachePath) ;

/// @brief Method GetCacheByPath_Injected, addr 0xb568e58, size 0x44, virtual false, abstract: false, final false
static inline void GetCacheByPath_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  cachePath, ::by_ref<::UnityEngine::Cache>  ret) ;

/// @brief Method IsVersionCached, addr 0xb5685bc, size 0xa4, virtual false, abstract: false, final false
static inline bool IsVersionCached(::UnityEngine::CachedAssetBundle  cachedBundle) ;

/// [NativeName("IsCached")]
/// @brief Method IsVersionCached, addr 0xb568660, size 0x244, virtual false, abstract: false, final false
static inline bool IsVersionCached(::StringW  url, ::StringW  assetBundleName, ::UnityEngine::Hash128  hash) ;

/// @brief Method IsVersionCached_Injected, addr 0xb5688a4, size 0x54, virtual false, abstract: false, final false
static inline bool IsVersionCached_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  url, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  assetBundleName, ::by_ref<::UnityEngine::Hash128>  hash) ;

/// [NativeName("Caching_GetCurrentCacheHandle")]
/// @brief Method get_currentCacheForWriting, addr 0xb568f1c, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Cache get_currentCacheForWriting() ;

/// @brief Method get_currentCacheForWriting_Injected, addr 0xb568f60, size 0x3c, virtual false, abstract: false, final false
static inline void get_currentCacheForWriting_Injected(::by_ref<::UnityEngine::Cache>  ret) ;

/// [NativeName("Caching_GetDefaultCacheHandle")]
/// @brief Method get_defaultCache, addr 0xb568e9c, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::Cache get_defaultCache() ;

/// @brief Method get_defaultCache_Injected, addr 0xb568ee0, size 0x3c, virtual false, abstract: false, final false
static inline void get_defaultCache_Injected(::by_ref<::UnityEngine::Cache>  ret) ;

/// [NativeName("GetIsReady")]
/// @brief Method get_ready, addr 0xb568084, size 0x28, virtual false, abstract: false, final false
static inline bool get_ready() ;

/// @brief Method set_compressionEnabled, addr 0xb568048, size 0x3c, virtual false, abstract: false, final false
static inline void set_compressionEnabled(bool  value) ;

/// [NativeName("Caching_SetCurrentCacheByHandle")]
/// [NativeThrows]
/// @brief Method set_currentCacheForWriting, addr 0xb568f9c, size 0x40, virtual false, abstract: false, final false
static inline void set_currentCacheForWriting(::UnityEngine::Cache  value) ;

/// @brief Method set_currentCacheForWriting_Injected, addr 0xb568fdc, size 0x3c, virtual false, abstract: false, final false
static inline void set_currentCacheForWriting_Injected(::by_ref<::UnityEngine::Cache>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Caching() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Caching(Caching && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Caching", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Caching(Caching const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14808};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Caching) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
