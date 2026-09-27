#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DicePhysics_CosmeticRollOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DicePhysics_CosmeticRollOverride)
// Forward declare root types
namespace GlobalNamespace {
struct DicePhysics_CosmeticRollOverride;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DicePhysics_CosmeticRollOverride);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::DicePhysics_CosmeticRollOverride, "GorillaTag.Cosmetics", "DicePhysics/CosmeticRollOverride");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.DicePhysics/CosmeticRollOverride
struct CORDL_TYPE DicePhysics_CosmeticRollOverride {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr DicePhysics_CosmeticRollOverride() ;

// Ctor Parameters [CppParam { name: "cosmeticName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "landingSide", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "requireHolding", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr DicePhysics_CosmeticRollOverride(::StringW  cosmeticName, int32_t  landingSide, bool  requireHolding) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4830};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field cosmeticName, offset: 0x0, size: 0x8, def value: None
 ::StringW  cosmeticName;

/// @brief Field landingSide, offset: 0x8, size: 0x4, def value: None
 int32_t  landingSide;

/// @brief Field requireHolding, offset: 0xc, size: 0x1, def value: None
 bool  requireHolding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DicePhysics_CosmeticRollOverride, cosmeticName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DicePhysics_CosmeticRollOverride, landingSide) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DicePhysics_CosmeticRollOverride, requireHolding) == 0xc, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::DicePhysics_CosmeticRollOverride) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
