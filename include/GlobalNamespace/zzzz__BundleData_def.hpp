#pragma once
// IWYU pragma private; include "GlobalNamespace/BundleData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MothershipProgressionNodeRef_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BundleData)
namespace GlobalNamespace {
struct MothershipProgressionNodeRef;
}
// Forward declare root types
namespace GlobalNamespace {
struct BundleData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BundleData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BundleData, "", "BundleData");
// Dependencies MothershipProgressionNodeRef
namespace GlobalNamespace {
// Is value type: true
// CS Name: BundleData
struct CORDL_TYPE BundleData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr BundleData() ;

// Ctor Parameters [CppParam { name: "skuName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "playFabItemName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "shinyRocks", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "majorVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minorVersion", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "minorVersion2", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "mothershipTransactionIds", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None, comment: None }, CppParam { name: "progressionNodes", ty: "::ArrayW<::GlobalNamespace::MothershipProgressionNodeRef>", modifiers: "", def_value: None, comment: None }, CppParam { name: "playFabItemNameGTFC", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "skuNameGTFC", ty: "::StringW", modifiers: "", def_value: None, comment: None }]
constexpr BundleData(::StringW  skuName, ::StringW  playFabItemName, int32_t  shinyRocks, int32_t  majorVersion, int32_t  minorVersion, int32_t  minorVersion2, bool  isActive, ::ArrayW<::StringW>  mothershipTransactionIds, ::ArrayW<::GlobalNamespace::MothershipProgressionNodeRef>  progressionNodes, ::StringW  playFabItemNameGTFC, ::StringW  skuNameGTFC) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1292};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field skuName, offset: 0x0, size: 0x8, def value: None
 ::StringW  skuName;

/// @brief Field playFabItemName, offset: 0x8, size: 0x8, def value: None
 ::StringW  playFabItemName;

/// @brief Field shinyRocks, offset: 0x10, size: 0x4, def value: None
 int32_t  shinyRocks;

/// @brief Field majorVersion, offset: 0x14, size: 0x4, def value: None
 int32_t  majorVersion;

/// @brief Field minorVersion, offset: 0x18, size: 0x4, def value: None
 int32_t  minorVersion;

/// @brief Field minorVersion2, offset: 0x1c, size: 0x4, def value: None
 int32_t  minorVersion2;

/// @brief Field isActive, offset: 0x20, size: 0x1, def value: None
 bool  isActive;

/// @brief Field mothershipTransactionIds, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW>  mothershipTransactionIds;

/// @brief Field progressionNodes, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::MothershipProgressionNodeRef>  progressionNodes;

/// @brief Field playFabItemNameGTFC, offset: 0x38, size: 0x8, def value: None
 ::StringW  playFabItemNameGTFC;

/// @brief Field skuNameGTFC, offset: 0x40, size: 0x8, def value: None
 ::StringW  skuNameGTFC;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BundleData, skuName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, playFabItemName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, shinyRocks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, majorVersion) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, minorVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, minorVersion2) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, isActive) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, mothershipTransactionIds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, progressionNodes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, playFabItemNameGTFC) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BundleData, skuNameGTFC) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BundleData) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
