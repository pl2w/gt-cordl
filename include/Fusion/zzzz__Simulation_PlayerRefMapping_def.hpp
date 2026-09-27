#pragma once
// IWYU pragma private; include "Fusion/Simulation_PlayerRefMapping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__PlayerRef_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Simulation_PlayerRefMapping)
// Forward declare root types
namespace GlobalNamespace {
struct Simulation_PlayerRefMapping;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Simulation_PlayerRefMapping);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Simulation_PlayerRefMapping, "Fusion", "Simulation/PlayerRefMapping");
// Dependencies Fusion.PlayerRef
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Simulation/PlayerRefMapping
struct CORDL_TYPE Simulation_PlayerRefMapping {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Simulation_PlayerRefMapping() ;

// Ctor Parameters [CppParam { name: "ActorId", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "PlayerRef", ty: "::Fusion::PlayerRef", modifiers: "", def_value: None, comment: None }]
constexpr Simulation_PlayerRefMapping(int32_t  ActorId, ::Fusion::PlayerRef  PlayerRef) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19308};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field ActorId, offset: 0x0, size: 0x4, def value: None
 int32_t  ActorId;

/// @brief Field PlayerRef, offset: 0x4, size: 0x4, def value: None
 ::Fusion::PlayerRef  PlayerRef;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Simulation_PlayerRefMapping, ActorId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Simulation_PlayerRefMapping, PlayerRef) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Simulation_PlayerRefMapping) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
