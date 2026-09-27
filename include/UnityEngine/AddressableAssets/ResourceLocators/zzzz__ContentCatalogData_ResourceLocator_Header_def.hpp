#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/ResourceLocators/ContentCatalogData_ResourceLocator_Header.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ContentCatalogData_ResourceLocator_Header)
// Forward declare root types
namespace GlobalNamespace {
struct ResourceLocator_ContentCatalogData_Header;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, "UnityEngine.AddressableAssets.ResourceLocators", "ContentCatalogData/ResourceLocator/Header");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.ResourceLocators.ContentCatalogData/ResourceLocator/Header
struct CORDL_TYPE ResourceLocator_ContentCatalogData_Header {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr ResourceLocator_ContentCatalogData_Header() ;

// Ctor Parameters [CppParam { name: "magic", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "keysOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "idOffset", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "instanceProvider", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sceneProvider", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "initObjectsArray", ty: "uint32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "buildResultHash", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
constexpr ResourceLocator_ContentCatalogData_Header(int32_t  magic, int32_t  version, uint32_t  keysOffset, uint32_t  idOffset, uint32_t  instanceProvider, uint32_t  sceneProvider, uint32_t  initObjectsArray, uint32_t  buildResultHash) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29275};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field magic, offset: 0x0, size: 0x4, def value: None
 int32_t  magic;

/// @brief Field version, offset: 0x4, size: 0x4, def value: None
 int32_t  version;

/// @brief Field keysOffset, offset: 0x8, size: 0x4, def value: None
 uint32_t  keysOffset;

/// @brief Field idOffset, offset: 0xc, size: 0x4, def value: None
 uint32_t  idOffset;

/// @brief Field instanceProvider, offset: 0x10, size: 0x4, def value: None
 uint32_t  instanceProvider;

/// @brief Field sceneProvider, offset: 0x14, size: 0x4, def value: None
 uint32_t  sceneProvider;

/// @brief Field initObjectsArray, offset: 0x18, size: 0x4, def value: None
 uint32_t  initObjectsArray;

/// @brief Field buildResultHash, offset: 0x1c, size: 0x4, def value: None
 uint32_t  buildResultHash;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, magic) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, version) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, keysOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, idOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, instanceProvider) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, sceneProvider) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, initObjectsArray) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header, buildResultHash) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ResourceLocator_ContentCatalogData_Header) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
