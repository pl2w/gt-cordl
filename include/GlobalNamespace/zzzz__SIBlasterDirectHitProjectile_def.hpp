#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterDirectHitProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIBlasterDirectHitProjectile)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace GlobalNamespace {
class SIGadgetProjectileType;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SIBlasterDirectHitProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIBlasterDirectHitProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIBlasterDirectHitProjectile*, "", "SIBlasterDirectHitProjectile");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIBlasterDirectHitProjectile
class CORDL_TYPE SIBlasterDirectHitProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field knockbackSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackSpeed, put=__cordl_internal_set_knockbackSpeed)) float_t  knockbackSpeed;

/// @brief Field projectile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectile, put=__cordl_internal_set_projectile)) ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectile;

/// @brief Field upwardsAngle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_upwardsAngle, put=__cordl_internal_set_upwardsAngle)) float_t  upwardsAngle;

/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileType"
constexpr operator  ::GlobalNamespace::SIGadgetProjectileType*() noexcept;

/// @brief Method LocalProjectileHit, addr 0x57f6270, size 0x238, virtual true, abstract: false, final true
inline void LocalProjectileHit(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method NetworkedProjectileHit, addr 0x57f6ab8, size 0x460, virtual true, abstract: false, final true
inline void NetworkedProjectileHit(::ArrayW<::System::Object*>  data) ;

static inline ::GlobalNamespace::SIBlasterDirectHitProjectile* New_ctor() ;

/// @brief Method OnEnable, addr 0x57f6218, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TriggerBlastDirectHitPlayer, addr 0x57f6860, size 0x240, virtual false, abstract: false, final false
inline void TriggerBlastDirectHitPlayer(::GlobalNamespace::SIPlayer*  playerHit) ;

constexpr float_t const& __cordl_internal_get_knockbackSpeed() const;

constexpr float_t& __cordl_internal_get_knockbackSpeed() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& __cordl_internal_get_projectile() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& __cordl_internal_get_projectile() ;

constexpr float_t const& __cordl_internal_get_upwardsAngle() const;

constexpr float_t& __cordl_internal_get_upwardsAngle() ;

constexpr void __cordl_internal_set_knockbackSpeed(float_t  value) ;

constexpr void __cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value) ;

constexpr void __cordl_internal_set_upwardsAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x57f6f20, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileType"
constexpr ::GlobalNamespace::SIGadgetProjectileType* i___GlobalNamespace__SIGadgetProjectileType() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIBlasterDirectHitProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterDirectHitProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIBlasterDirectHitProjectile(SIBlasterDirectHitProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterDirectHitProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIBlasterDirectHitProjectile(SIBlasterDirectHitProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{215};

/// @brief Field projectile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  ___projectile;

/// @brief Field knockbackSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___knockbackSpeed;

/// @brief Field upwardsAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  ___upwardsAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIBlasterDirectHitProjectile, ___projectile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterDirectHitProjectile, ___knockbackSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterDirectHitProjectile, ___upwardsAngle) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIBlasterDirectHitProjectile) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
