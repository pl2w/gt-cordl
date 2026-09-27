#pragma once
// IWYU pragma private; include "GlobalNamespace/BundleData.hpp"
#include "GlobalNamespace/zzzz__MothershipProgressionNodeRef_impl.hpp"
#include "GlobalNamespace/zzzz__BundleData_def.hpp"
#include "GlobalNamespace/zzzz__MothershipProgressionNodeRef_def.hpp"
// Ctor Parameters [CppParam { name: "skuName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playFabItemName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "shinyRocks", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "majorVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minorVersion", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "minorVersion2", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "isActive", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mothershipTransactionIds", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "progressionNodes", ty: "::ArrayW<::GlobalNamespace::MothershipProgressionNodeRef>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "playFabItemNameGTFC", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "skuNameGTFC", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::BundleData::BundleData(::StringW  skuName, ::StringW  playFabItemName, int32_t  shinyRocks, int32_t  majorVersion, int32_t  minorVersion, int32_t  minorVersion2, bool  isActive, ::ArrayW<::StringW>  mothershipTransactionIds, ::ArrayW<::GlobalNamespace::MothershipProgressionNodeRef>  progressionNodes, ::StringW  playFabItemNameGTFC, ::StringW  skuNameGTFC) noexcept  {
this->skuName = skuName;
this->playFabItemName = playFabItemName;
this->shinyRocks = shinyRocks;
this->majorVersion = majorVersion;
this->minorVersion = minorVersion;
this->minorVersion2 = minorVersion2;
this->isActive = isActive;
this->mothershipTransactionIds = mothershipTransactionIds;
this->progressionNodes = progressionNodes;
this->playFabItemNameGTFC = playFabItemNameGTFC;
this->skuNameGTFC = skuNameGTFC;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BundleData::BundleData()   {
}
