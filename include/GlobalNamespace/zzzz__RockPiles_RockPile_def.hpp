#pragma once
// IWYU pragma private; include "GlobalNamespace/RockPiles_RockPile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RockPiles_RockPile)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct RockPiles_RockPile;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RockPiles_RockPile);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RockPiles_RockPile, "", "RockPiles/RockPile");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: RockPiles/RockPile
struct CORDL_TYPE RockPiles_RockPile {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr RockPiles_RockPile() ;

// Ctor Parameters [CppParam { name: "visual", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: None, comment: None }, CppParam { name: "threshold", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RockPiles_RockPile(::UnityW<::UnityEngine::GameObject>  visual, int32_t  threshold) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{586};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field visual, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  visual;

/// @brief Field threshold, offset: 0x8, size: 0x4, def value: None
 int32_t  threshold;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RockPiles_RockPile, visual) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RockPiles_RockPile, threshold) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RockPiles_RockPile) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
