#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSeedExtractor_PlayerData.hpp"
#include "GlobalNamespace/zzzz__GRSeedExtractor_PlayerData_def.hpp"
// Ctor Parameters [CppParam { name: "actorNumber", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "coreCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "coreProcessingPercentage", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overdriveSupply", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "coresProcessedByOverdrive", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "coresPendingOverdriveProcessing", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "researchPoints", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "latestRefreshTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData::GRSeedExtractor_PlayerData(int32_t  actorNumber, int32_t  coreCount, float_t  coreProcessingPercentage, float_t  overdriveSupply, int32_t  coresProcessedByOverdrive, int32_t  coresPendingOverdriveProcessing, int32_t  researchPoints, float_t  latestRefreshTime) noexcept  {
this->actorNumber = actorNumber;
this->coreCount = coreCount;
this->coreProcessingPercentage = coreProcessingPercentage;
this->overdriveSupply = overdriveSupply;
this->coresProcessedByOverdrive = coresProcessedByOverdrive;
this->coresPendingOverdriveProcessing = coresPendingOverdriveProcessing;
this->researchPoints = researchPoints;
this->latestRefreshTime = latestRefreshTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSeedExtractor_PlayerData::GRSeedExtractor_PlayerData()   {
}
