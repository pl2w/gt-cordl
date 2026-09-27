#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_ProgressionData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRPlayer_ProgressionData)
// Forward declare root types
namespace GlobalNamespace {
struct GRPlayer_ProgressionData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRPlayer_ProgressionData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_ProgressionData, "", "GRPlayer/ProgressionData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRPlayer/ProgressionData
struct CORDL_TYPE GRPlayer_ProgressionData {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_ProgressionData() ;

// Ctor Parameters [CppParam { name: "points", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "redeemedPoints", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRPlayer_ProgressionData(int32_t  points, int32_t  redeemedPoints) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2005};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field points, offset: 0x0, size: 0x4, def value: None
 int32_t  points;

/// @brief Field redeemedPoints, offset: 0x4, size: 0x4, def value: None
 int32_t  redeemedPoints;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_ProgressionData, points) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ProgressionData, redeemedPoints) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_ProgressionData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
