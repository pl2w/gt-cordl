#pragma once
// IWYU pragma private; include "GorillaTagScripts/WhackAMole___c__DisplayClass85_0.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(WhackAMole___c__DisplayClass85_0)
namespace GorillaTagScripts {
class WhackAMole;
}
// Forward declare root types
namespace GlobalNamespace {
struct WhackAMole___c__DisplayClass85_0;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::WhackAMole___c__DisplayClass85_0);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::WhackAMole___c__DisplayClass85_0, "GorillaTagScripts", "WhackAMole/<>c__DisplayClass85_0");
// [CompilerGenerated]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTagScripts.WhackAMole/<>c__DisplayClass85_0
struct CORDL_TYPE WhackAMole___c__DisplayClass85_0 {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr WhackAMole___c__DisplayClass85_0() ;

// Ctor Parameters [CppParam { name: "minMoleCount", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxMoleCount", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "__4__this", ty: "::UnityW<::GorillaTagScripts::WhackAMole>", modifiers: "", def_value: None, comment: None }, CppParam { name: "hazardMoleChance", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr WhackAMole___c__DisplayClass85_0(float_t  minMoleCount, float_t  maxMoleCount, ::UnityW<::GorillaTagScripts::WhackAMole>  __4__this, float_t  hazardMoleChance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3912};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field minMoleCount, offset: 0x0, size: 0x4, def value: None
 float_t  minMoleCount;

/// @brief Field maxMoleCount, offset: 0x4, size: 0x4, def value: None
 float_t  maxMoleCount;

/// @brief Field <>4__this, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::GorillaTagScripts::WhackAMole>  __4__this;

/// @brief Field hazardMoleChance, offset: 0x10, size: 0x4, def value: None
 float_t  hazardMoleChance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::WhackAMole___c__DisplayClass85_0, minMoleCount) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhackAMole___c__DisplayClass85_0, maxMoleCount) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhackAMole___c__DisplayClass85_0, __4__this) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::WhackAMole___c__DisplayClass85_0, hazardMoleChance) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::WhackAMole___c__DisplayClass85_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
