#pragma once
// IWYU pragma private; include "GlobalNamespace/GRBossMoonTentacleAttack.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRAbilityAttackSimple_def.hpp"
CORDL_MODULE_EXPORT(GRBossMoonTentacleAttack)
// Forward declare root types
namespace GlobalNamespace {
class GRBossMoonTentacleAttack;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRBossMoonTentacleAttack*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRBossMoonTentacleAttack*, "", "GRBossMoonTentacleAttack");
// Dependencies GRAbilityAttackSimple
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRBossMoonTentacleAttack
class CORDL_TYPE GRBossMoonTentacleAttack : public ::GlobalNamespace::GRAbilityAttackSimple {
public:
// Declarations
static inline ::GlobalNamespace::GRBossMoonTentacleAttack* New_ctor() ;

/// @brief Method .ctor, addr 0x586ff10, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRBossMoonTentacleAttack() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRBossMoonTentacleAttack", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRBossMoonTentacleAttack(GRBossMoonTentacleAttack && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRBossMoonTentacleAttack", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRBossMoonTentacleAttack(GRBossMoonTentacleAttack const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1877};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GRBossMoonTentacleAttack) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
