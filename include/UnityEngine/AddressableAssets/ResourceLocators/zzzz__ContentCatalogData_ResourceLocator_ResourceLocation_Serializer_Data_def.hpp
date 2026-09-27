#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData_ResourceLocator_ResourceLocation_Serializer_Data.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogData_ResourceLocator_ResourceLocation_Serializer_Data)
// Forward declare root types
namespace GlobalNamespace {
struct Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/ResourceLocator/ResourceLocation/Serializer/Data");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/ResourceLocator/ResourceLocation/Serializer/Data
struct CORDL_TYPE Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data() ;

// Ctor Parameters [CppParam { name: "primaryKeyOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "internalIdOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "providerOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dependencySetOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "dependencyHashValue", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "extraDataOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "typeId", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data(uint32_t  primaryKeyOffset, uint32_t  internalIdOffset, uint32_t  providerOffset, uint32_t  dependencySetOffset, int32_t  dependencyHashValue, uint32_t  extraDataOffset, uint32_t  typeId) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29280};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1c};

/// @brief Field primaryKeyOffset, offset: 0x0, size: 0x4, def value: None
 uint32_t  primaryKeyOffset;

/// @brief Field internalIdOffset, offset: 0x4, size: 0x4, def value: None
 uint32_t  internalIdOffset;

/// @brief Field providerOffset, offset: 0x8, size: 0x4, def value: None
 uint32_t  providerOffset;

/// @brief Field dependencySetOffset, offset: 0xc, size: 0x4, def value: None
 uint32_t  dependencySetOffset;

/// @brief Field dependencyHashValue, offset: 0x10, size: 0x4, def value: None
 int32_t  dependencyHashValue;

/// @brief Field extraDataOffset, offset: 0x14, size: 0x4, def value: None
 uint32_t  extraDataOffset;

/// @brief Field typeId, offset: 0x18, size: 0x4, def value: None
 uint32_t  typeId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, primaryKeyOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, internalIdOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, providerOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, dependencySetOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, dependencyHashValue) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, extraDataOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data, typeId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Serializer_ResourceLocation_ResourceLocator_ContentCatalogData_Data) == 0x1c, "Size mismatch!");

} // namespace end def GlobalNamespace
