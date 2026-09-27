#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData_ResourceLocator_KeyData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogData_ResourceLocator_KeyData)
// Forward declare root types
namespace GlobalNamespace {
struct ResourceLocator_ContentCatalogData_KeyData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ResourceLocator_ContentCatalogData_KeyData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ResourceLocator_ContentCatalogData_KeyData, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/ResourceLocator/KeyData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/ResourceLocator/KeyData
struct CORDL_TYPE ResourceLocator_ContentCatalogData_KeyData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ResourceLocator_ContentCatalogData_KeyData() ;

// Ctor Parameters [CppParam { name: "keyNameOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "locationSetOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ResourceLocator_ContentCatalogData_KeyData(uint32_t  keyNameOffset, uint32_t  locationSetOffset) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29276};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field keyNameOffset, offset: 0x0, size: 0x4, def value: None
 uint32_t  keyNameOffset;

/// @brief Field locationSetOffset, offset: 0x4, size: 0x4, def value: None
 uint32_t  locationSetOffset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_KeyData, keyNameOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_KeyData, locationSetOffset) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ResourceLocator_ContentCatalogData_KeyData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
