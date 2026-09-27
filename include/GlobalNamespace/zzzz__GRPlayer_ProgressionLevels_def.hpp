#pragma once
// IWYU pragma private; include "GlobalNamespace/GRPlayer_ProgressionLevels.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GRPlayer_ProgressionLevels)
// Forward declare root types
namespace GlobalNamespace {
struct GRPlayer_ProgressionLevels;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GRPlayer_ProgressionLevels);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRPlayer_ProgressionLevels, "", "GRPlayer/ProgressionLevels");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GRPlayer/ProgressionLevels
struct CORDL_TYPE GRPlayer_ProgressionLevels {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GRPlayer_ProgressionLevels() ;

// Ctor Parameters [CppParam { name: "tierId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "tierName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "grades", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "pointsPerGrade", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GRPlayer_ProgressionLevels(int32_t  tierId, ::StringW  tierName, int32_t  grades, int32_t  pointsPerGrade) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2006};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field tierId, offset: 0x0, size: 0x4, def value: None
 int32_t  tierId;

/// @brief Field tierName, offset: 0x8, size: 0x8, def value: None
 ::StringW  tierName;

/// @brief Field grades, offset: 0x10, size: 0x4, def value: None
 int32_t  grades;

/// @brief Field pointsPerGrade, offset: 0x14, size: 0x4, def value: None
 int32_t  pointsPerGrade;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRPlayer_ProgressionLevels, tierId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ProgressionLevels, tierName) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ProgressionLevels, grades) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRPlayer_ProgressionLevels, pointsPerGrade) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRPlayer_ProgressionLevels) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
