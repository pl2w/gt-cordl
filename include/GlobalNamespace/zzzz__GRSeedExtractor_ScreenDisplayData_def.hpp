#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSeedExtractor_ScreenDisplayData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSeedExtractor_ScreenDisplayData)
// Forward declare root types
namespace GlobalNamespace {
struct GRSeedExtractor_ScreenDisplayData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData, "", "GRSeedExtractor/ScreenDisplayData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRSeedExtractor/ScreenDisplayData
struct CORDL_TYPE GRSeedExtractor_ScreenDisplayData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRSeedExtractor_ScreenDisplayData() ;

// Ctor Parameters [CppParam { name: "playerActorNumber", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "coreCount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "overdriveSupply", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "researchPoints", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "juiceSecondsLeft", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRSeedExtractor_ScreenDisplayData(int32_t  playerActorNumber, int32_t  coreCount, float_t  overdriveSupply, int32_t  researchPoints, int32_t  juiceSecondsLeft) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2026};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field playerActorNumber, offset: 0x0, size: 0x4, def value: None
 int32_t  playerActorNumber;

/// @brief Field coreCount, offset: 0x4, size: 0x4, def value: None
 int32_t  coreCount;

/// @brief Field overdriveSupply, offset: 0x8, size: 0x4, def value: None
 float_t  overdriveSupply;

/// @brief Field researchPoints, offset: 0xc, size: 0x4, def value: None
 int32_t  researchPoints;

/// @brief Field juiceSecondsLeft, offset: 0x10, size: 0x4, def value: None
 int32_t  juiceSecondsLeft;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData, playerActorNumber) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData, coreCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData, overdriveSupply) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData, researchPoints) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData, juiceSecondsLeft) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSeedExtractor_ScreenDisplayData) == 0x14, "Size mismatch!");

} // namespace end def GlobalNamespace
