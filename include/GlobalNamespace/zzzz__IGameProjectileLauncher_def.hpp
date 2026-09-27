#pragma once
// IWYU pragma private; include "GlobalNamespace/IGameProjectileLauncher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IGameProjectileLauncher)
namespace GlobalNamespace {
class GRRangedEnemyProjectile;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameProjectileLauncher;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::IGameProjectileLauncher*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::IGameProjectileLauncher*, "", "IGameProjectileLauncher");
// Dependencies 
namespace GlobalNamespace {
// Is value type: false
// CS Name: IGameProjectileLauncher
class CORDL_TYPE IGameProjectileLauncher {
public:
// Declarations
/// @brief Method OnProjectileHit, addr 0x58a696c, size 0x4, virtual true, abstract: false, final false
inline void OnProjectileHit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnProjectileInit, addr 0x58a6968, size 0x4, virtual true, abstract: false, final false
inline void OnProjectileInit(::GlobalNamespace::GRRangedEnemyProjectile*  projectile) ;

// Ctor Parameters [CppParam { name: "", ty: "IGameProjectileLauncher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IGameProjectileLauncher(IGameProjectileLauncher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2013};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
