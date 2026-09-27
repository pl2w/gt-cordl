#pragma once
// IWYU pragma private; include "GlobalNamespace/SIGadgetProjectileModifier.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(SIGadgetProjectileModifier)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
// Forward declare root types
namespace GlobalNamespace {
class SIGadgetProjectileModifier;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIGadgetProjectileModifier*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIGadgetProjectileModifier*, "", "SIGadgetProjectileModifier");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIGadgetProjectileModifier
class CORDL_TYPE SIGadgetProjectileModifier {
public:
// Declarations
/// @brief Method ModifyProjectile, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ModifyProjectile(::GlobalNamespace::SIGadgetBlasterProjectile*  projectile) ;

// Ctor Parameters [CppParam { name: "", ty: "SIGadgetProjectileModifier", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIGadgetProjectileModifier(SIGadgetProjectileModifier const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{227};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
