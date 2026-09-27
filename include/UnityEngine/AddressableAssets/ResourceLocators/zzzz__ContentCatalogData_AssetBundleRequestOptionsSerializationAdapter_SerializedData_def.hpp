#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData_AssetBundleRequestOptionsSerializationAdapter_SerializedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogData_AssetBundleRequestOptionsSerializationAdapter_SerializedData)
namespace GlobalNamespace {
struct SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common;
}
// Forward declare root types
namespace GlobalNamespace {
struct AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/AssetBundleRequestOptionsSerializationAdapter/SerializedData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/AssetBundleRequestOptionsSerializationAdapter/SerializedData
struct CORDL_TYPE AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData {
public:
// Declarations
using Common = ::GlobalNamespace::SerializedData_AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_Common;

// Ctor Parameters []
// @brief default ctor
constexpr AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData() ;

// Ctor Parameters [CppParam { name: "hashId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bundleNameId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "crc", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "bundleSize", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "commonId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData(uint32_t  hashId, uint32_t  bundleNameId, uint32_t  crc, uint32_t  bundleSize, uint32_t  commonId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29286};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field hashId, offset: 0x0, size: 0x4, def value: None
 uint32_t  hashId;

/// @brief Field bundleNameId, offset: 0x4, size: 0x4, def value: None
 uint32_t  bundleNameId;

/// @brief Field crc, offset: 0x8, size: 0x4, def value: None
 uint32_t  crc;

/// @brief Field bundleSize, offset: 0xc, size: 0x4, def value: None
 uint32_t  bundleSize;

/// @brief Field commonId, offset: 0x10, size: 0x4, def value: None
 uint32_t  commonId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData, hashId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData, bundleNameId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData, crc) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData, bundleSize) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData, commonId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AssetBundleRequestOptionsSerializationAdapter_ContentCatalogData_SerializedData) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
