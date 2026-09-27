#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MetadataType)
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
struct MetadataType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::Metadata::MetadataType);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::MetadataType, "UnityEngine.Localization.Metadata", "MetadataType");
// [Flags]
// Dependencies 
namespace UnityEngine::Localization::Metadata {
// Is value type: true
// CS Name: UnityEngine.Localization.Metadata.MetadataType
struct CORDL_TYPE MetadataType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MetadataType_Unwrapped
enum struct __MetadataType_Unwrapped : int32_t {
__E_Locale = static_cast<int32_t>(0x1),
__E_SharedTableData = static_cast<int32_t>(0x2),
__E_StringTable = static_cast<int32_t>(0x4),
__E_AssetTable = static_cast<int32_t>(0x8),
__E_StringTableEntry = static_cast<int32_t>(0x10),
__E_AssetTableEntry = static_cast<int32_t>(0x20),
__E_SharedStringTableEntry = static_cast<int32_t>(0x40),
__E_SharedAssetTableEntry = static_cast<int32_t>(0x80),
__E_LocalizationSettings = static_cast<int32_t>(0x100),
__E_AllTables = static_cast<int32_t>(0xc),
__E_AllTableEntries = static_cast<int32_t>(0x30),
__E_AllSharedTableEntries = static_cast<int32_t>(0xc0),
__E_All = static_cast<int32_t>(0x1ff),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MetadataType_Unwrapped () const noexcept {
return static_cast<__MetadataType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr MetadataType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr MetadataType(int32_t  value__) noexcept;

/// @brief Field All value: I32(511)
static ::UnityEngine::Localization::Metadata::MetadataType const All;

/// @brief Field AllSharedTableEntries value: I32(192)
static ::UnityEngine::Localization::Metadata::MetadataType const AllSharedTableEntries;

/// @brief Field AllTableEntries value: I32(48)
static ::UnityEngine::Localization::Metadata::MetadataType const AllTableEntries;

/// @brief Field AllTables value: I32(12)
static ::UnityEngine::Localization::Metadata::MetadataType const AllTables;

/// @brief Field AssetTable value: I32(8)
static ::UnityEngine::Localization::Metadata::MetadataType const AssetTable;

/// @brief Field AssetTableEntry value: I32(32)
static ::UnityEngine::Localization::Metadata::MetadataType const AssetTableEntry;

/// @brief Field Locale value: I32(1)
static ::UnityEngine::Localization::Metadata::MetadataType const Locale;

/// @brief Field LocalizationSettings value: I32(256)
static ::UnityEngine::Localization::Metadata::MetadataType const LocalizationSettings;

/// @brief Field SharedAssetTableEntry value: I32(128)
static ::UnityEngine::Localization::Metadata::MetadataType const SharedAssetTableEntry;

/// @brief Field SharedStringTableEntry value: I32(64)
static ::UnityEngine::Localization::Metadata::MetadataType const SharedStringTableEntry;

/// @brief Field SharedTableData value: I32(2)
static ::UnityEngine::Localization::Metadata::MetadataType const SharedTableData;

/// @brief Field StringTable value: I32(4)
static ::UnityEngine::Localization::Metadata::MetadataType const StringTable;

/// @brief Field StringTableEntry value: I32(16)
static ::UnityEngine::Localization::Metadata::MetadataType const StringTableEntry;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25326};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::MetadataType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::MetadataType) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
