#pragma once
// IWYU pragma private; include "GlobalNamespace/GiantSnowflakeAudio_SnowflakeScaleOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GiantSnowflakeAudio_SnowflakeScaleOverride)
// Forward declare root types
namespace GlobalNamespace {
struct GiantSnowflakeAudio_SnowflakeScaleOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride, "", "GiantSnowflakeAudio/SnowflakeScaleOverride");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GiantSnowflakeAudio/SnowflakeScaleOverride
struct CORDL_TYPE GiantSnowflakeAudio_SnowflakeScaleOverride {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GiantSnowflakeAudio_SnowflakeScaleOverride() ;

// Ctor Parameters [CppParam { name: "scaleMax", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "newOverrideIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GiantSnowflakeAudio_SnowflakeScaleOverride(float_t  scaleMax, int32_t  newOverrideIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2117};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field scaleMax, offset: 0x0, size: 0x4, def value: None
 float_t  scaleMax;

/// [GorillaSoundLookup]
/// @brief Field newOverrideIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  newOverrideIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride, scaleMax) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride, newOverrideIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GiantSnowflakeAudio_SnowflakeScaleOverride) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
