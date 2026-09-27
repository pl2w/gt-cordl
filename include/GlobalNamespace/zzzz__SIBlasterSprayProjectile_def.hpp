#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterSprayProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIBlasterSprayProjectile)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class SIBlasterSprayProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIBlasterSprayProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIBlasterSprayProjectile*, "", "SIBlasterSprayProjectile");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIBlasterSprayProjectile
class CORDL_TYPE SIBlasterSprayProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field knockbackSpeed, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackSpeed, put=__cordl_internal_set_knockbackSpeed)) float_t  knockbackSpeed;

/// @brief Field projectile, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectile, put=__cordl_internal_set_projectile)) ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectile;

/// @brief Field upwardsAngle, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_upwardsAngle, put=__cordl_internal_set_upwardsAngle)) float_t  upwardsAngle;

/// @brief Field verticalOffset, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_verticalOffset, put=__cordl_internal_set_verticalOffset)) float_t  verticalOffset;

/// @brief Method LocalProjectileHit, addr 0x57f8db4, size 0x28c, virtual false, abstract: false, final false
inline void LocalProjectileHit(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method NetworkedProjectileHit, addr 0x57f9548, size 0x3fc, virtual false, abstract: false, final false
inline void NetworkedProjectileHit(::ArrayW<::System::Object*>  data) ;

static inline ::GlobalNamespace::SIBlasterSprayProjectile* New_ctor() ;

/// @brief Method OnEnable, addr 0x57f8d5c, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method TriggerBlastDirectHitPlayer, addr 0x57f9040, size 0x508, virtual false, abstract: false, final false
inline void TriggerBlastDirectHitPlayer(::GlobalNamespace::SIPlayer*  playerHit) ;

constexpr float_t const& __cordl_internal_get_knockbackSpeed() const;

constexpr float_t& __cordl_internal_get_knockbackSpeed() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& __cordl_internal_get_projectile() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& __cordl_internal_get_projectile() ;

constexpr float_t const& __cordl_internal_get_upwardsAngle() const;

constexpr float_t& __cordl_internal_get_upwardsAngle() ;

constexpr float_t const& __cordl_internal_get_verticalOffset() const;

constexpr float_t& __cordl_internal_get_verticalOffset() ;

constexpr void __cordl_internal_set_knockbackSpeed(float_t  value) ;

constexpr void __cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value) ;

constexpr void __cordl_internal_set_upwardsAngle(float_t  value) ;

constexpr void __cordl_internal_set_verticalOffset(float_t  value) ;

/// @brief Method .ctor, addr 0x57f9944, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIBlasterSprayProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterSprayProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIBlasterSprayProjectile(SIBlasterSprayProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterSprayProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIBlasterSprayProjectile(SIBlasterSprayProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{220};

/// @brief Field projectile, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  ___projectile;

/// @brief Field knockbackSpeed, offset: 0x28, size: 0x4, def value: None
 float_t  ___knockbackSpeed;

/// @brief Field verticalOffset, offset: 0x2c, size: 0x4, def value: None
 float_t  ___verticalOffset;

/// @brief Field upwardsAngle, offset: 0x30, size: 0x4, def value: None
 float_t  ___upwardsAngle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIBlasterSprayProjectile, ___projectile) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSprayProjectile, ___knockbackSpeed) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSprayProjectile, ___verticalOffset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSprayProjectile, ___upwardsAngle) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIBlasterSprayProjectile) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
