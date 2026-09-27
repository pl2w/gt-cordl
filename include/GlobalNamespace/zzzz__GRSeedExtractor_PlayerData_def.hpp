#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSeedExtractor_PlayerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSeedExtractor_PlayerData)
// Forward declare root types
namespace GlobalNamespace {
struct GRSeedExtractor_PlayerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRSeedExtractor_PlayerData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSeedExtractor_PlayerData, "", "GRSeedExtractor/PlayerData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRSeedExtractor/PlayerData
struct CORDL_TYPE GRSeedExtractor_PlayerData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRSeedExtractor_PlayerData() ;

// Ctor Parameters [CppParam { name: "actorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "coreCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "coreProcessingPercentage", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "overdriveSupply", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "coresProcessedByOverdrive", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "coresPendingOverdriveProcessing", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "researchPoints", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "latestRefreshTime", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr GRSeedExtractor_PlayerData(int32_t  actorNumber, int32_t  coreCount, float_t  coreProcessingPercentage, float_t  overdriveSupply, int32_t  coresProcessedByOverdrive, int32_t  coresPendingOverdriveProcessing, int32_t  researchPoints, float_t  latestRefreshTime) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2025};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field actorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  actorNumber;

/// @brief Field coreCount, offset: 0x4, size: 0x4, def value: None
 int32_t  coreCount;

/// @brief Field coreProcessingPercentage, offset: 0x8, size: 0x4, def value: None
 float_t  coreProcessingPercentage;

/// @brief Field overdriveSupply, offset: 0xc, size: 0x4, def value: None
 float_t  overdriveSupply;

/// @brief Field coresProcessedByOverdrive, offset: 0x10, size: 0x4, def value: None
 int32_t  coresProcessedByOverdrive;

/// @brief Field coresPendingOverdriveProcessing, offset: 0x14, size: 0x4, def value: None
 int32_t  coresPendingOverdriveProcessing;

/// @brief Field researchPoints, offset: 0x18, size: 0x4, def value: None
 int32_t  researchPoints;

/// @brief Field latestRefreshTime, offset: 0x1c, size: 0x4, def value: None
 float_t  latestRefreshTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, actorNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, coreCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, coreProcessingPercentage) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, overdriveSupply) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, coresProcessedByOverdrive) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, coresPendingOverdriveProcessing) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, researchPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_PlayerData, latestRefreshTime) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSeedExtractor_PlayerData) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
