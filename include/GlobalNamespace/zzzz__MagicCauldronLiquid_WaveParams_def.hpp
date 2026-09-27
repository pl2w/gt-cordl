#pragma once
// IWYU pragma private; include "GlobalNamespace/MagicCauldronLiquid_WaveParams.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(MagicCauldronLiquid_WaveParams)
// Forward declare root types
namespace GlobalNamespace {
struct MagicCauldronLiquid_WaveParams;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MagicCauldronLiquid_WaveParams);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MagicCauldronLiquid_WaveParams, "", "MagicCauldronLiquid/WaveParams");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MagicCauldronLiquid/WaveParams
struct CORDL_TYPE MagicCauldronLiquid_WaveParams {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr MagicCauldronLiquid_WaveParams() ;

// Ctor Parameters [CppParam { name: "amplitude", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "frequency", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "rotation", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr MagicCauldronLiquid_WaveParams(float_t  amplitude, float_t  frequency, float_t  scale, float_t  rotation) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2332};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field amplitude, offset: 0x0, size: 0x4, def value: None
 float_t  amplitude;

/// @brief Field frequency, offset: 0x4, size: 0x4, def value: None
 float_t  frequency;

/// @brief Field scale, offset: 0x8, size: 0x4, def value: None
 float_t  scale;

/// @brief Field rotation, offset: 0xc, size: 0x4, def value: None
 float_t  rotation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid_WaveParams, amplitude) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid_WaveParams, frequency) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid_WaveParams, scale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MagicCauldronLiquid_WaveParams, rotation) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MagicCauldronLiquid_WaveParams) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
