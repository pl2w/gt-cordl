#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData_AssetBundleRequestOptionsSerializationAdapter_SerializedData_Common.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogData_AssetBundleRequestOptionsSerializationAdapter_SerializedData_Common)
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct AssetLoadMode;
}
// Forward declare root types
namespace GlobalNamespace {
struct SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/AssetBundleRequestOptionsSerializationAdapter/SerializedData/Common");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/AssetBundleRequestOptionsSerializationAdapter/SerializedData/Common
struct CORDL_TYPE SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common {
public:
// Declarations
 __declspec(property(get=get_assetLoadMode, put=set_assetLoadMode)) ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode  assetLoadMode;

 __declspec(property(get=get_chunkedTransfer, put=set_chunkedTransfer)) bool  chunkedTransfer;

 __declspec(property(get=get_clearOtherCachedVersionsWhenLoaded, put=set_clearOtherCachedVersionsWhenLoaded)) bool  clearOtherCachedVersionsWhenLoaded;

 __declspec(property(get=get_useCrcForCachedBundle, put=set_useCrcForCachedBundle)) bool  useCrcForCachedBundle;

 __declspec(property(get=get_useUnityWebRequestForLocalBundles, put=set_useUnityWebRequestForLocalBundles)) bool  useUnityWebRequestForLocalBundles;

/// @brief Method get_assetLoadMode, addr 0xae6c464, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode get_assetLoadMode() ;

/// @brief Method get_chunkedTransfer, addr 0xae6c470, size 0xc, virtual false, abstract: false, final false
inline bool get_chunkedTransfer() ;

/// @brief Method get_clearOtherCachedVersionsWhenLoaded, addr 0xae6c494, size 0xc, virtual false, abstract: false, final false
inline bool get_clearOtherCachedVersionsWhenLoaded() ;

/// @brief Method get_useCrcForCachedBundle, addr 0xae6c488, size 0xc, virtual false, abstract: false, final false
inline bool get_useCrcForCachedBundle() ;

/// @brief Method get_useUnityWebRequestForLocalBundles, addr 0xae6c47c, size 0xc, virtual false, abstract: false, final false
inline bool get_useUnityWebRequestForLocalBundles() ;

/// @brief Method set_assetLoadMode, addr 0xae6c684, size 0x14, virtual false, abstract: false, final false
inline void set_assetLoadMode(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode  value) ;

/// @brief Method set_chunkedTransfer, addr 0xae6c698, size 0x20, virtual false, abstract: false, final false
inline void set_chunkedTransfer(bool  value) ;

/// @brief Method set_clearOtherCachedVersionsWhenLoaded, addr 0xae6c6b8, size 0x20, virtual false, abstract: false, final false
inline void set_clearOtherCachedVersionsWhenLoaded(bool  value) ;

/// @brief Method set_useCrcForCachedBundle, addr 0xae6c6d8, size 0x20, virtual false, abstract: false, final false
inline void set_useCrcForCachedBundle(bool  value) ;

/// @brief Method set_useUnityWebRequestForLocalBundles, addr 0xae6c6f8, size 0x20, virtual false, abstract: false, final false
inline void set_useUnityWebRequestForLocalBundles(bool  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common() ;

// Ctor Parameters [CppParam { name: "timeout", ty: "int16_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "redirectLimit", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "retryCount", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "flags", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common(int16_t  timeout, uint8_t  redirectLimit, uint8_t  retryCount, int32_t  flags) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field timeout, offset: 0x0, size: 0x2, def value: None
 int16_t  timeout;

/// @brief Field redirectLimit, offset: 0x2, size: 0x1, def value: None
 uint8_t  redirectLimit;

/// @brief Field retryCount, offset: 0x3, size: 0x1, def value: None
 uint8_t  retryCount;

/// @brief Field flags, offset: 0x4, size: 0x4, def value: None
 int32_t  flags;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common, timeout) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common, redirectLimit) == 0x2, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common, retryCount) == 0x3, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common, flags) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
