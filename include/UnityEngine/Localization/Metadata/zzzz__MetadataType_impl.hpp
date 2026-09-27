#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/MetadataType.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__MetadataType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::Metadata::MetadataType::MetadataType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Metadata::MetadataType::MetadataType()   {
}
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::Locale{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::SharedTableData{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::StringTable{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::AssetTable{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::StringTableEntry{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::AssetTableEntry{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::SharedStringTableEntry{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::SharedAssetTableEntry{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::LocalizationSettings{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::AllTables{static_cast<int32_t>(0xc)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::AllTableEntries{static_cast<int32_t>(0x30)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::AllSharedTableEntries{static_cast<int32_t>(0xc0)};
constexpr ::UnityEngine::Localization::Metadata::MetadataType  UnityEngine::Localization::Metadata::MetadataType::All{static_cast<int32_t>(0x1ff)};
