#pragma once
// IWYU pragma private; include "GlobalNamespace/SIBlasterSplashProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SIBlasterSplashProjectile)
namespace GlobalNamespace {
class SIGadgetBlasterProjectile;
}
namespace GlobalNamespace {
class SIGadgetProjectileType;
}
namespace GlobalNamespace {
class SIPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class SIBlasterSplashProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SIBlasterSplashProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SIBlasterSplashProjectile*, "", "SIBlasterSplashProjectile");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.RaycastHit
namespace GlobalNamespace {
// Is value type: false
// CS Name: SIBlasterSplashProjectile
class CORDL_TYPE SIBlasterSplashProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field fullSplashRadius, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_fullSplashRadius, put=__cordl_internal_set_fullSplashRadius)) float_t  fullSplashRadius;

/// @brief Field hits, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hits, put=__cordl_internal_set_hits)) ::ArrayW<::UnityEngine::RaycastHit>  hits;

/// @brief Field knockbackSpeed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_knockbackSpeed, put=__cordl_internal_set_knockbackSpeed)) float_t  knockbackSpeed;

/// @brief Field projectile, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectile, put=__cordl_internal_set_projectile)) ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  projectile;

/// @brief Field rigList, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigList, put=__cordl_internal_set_rigList)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  rigList;

/// @brief Field splashHitDistance, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_splashHitDistance, put=__cordl_internal_set_splashHitDistance)) float_t  splashHitDistance;

/// @brief Field upwardsAngle, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_upwardsAngle, put=__cordl_internal_set_upwardsAngle)) float_t  upwardsAngle;

/// @brief Convert operator to "::GlobalNamespace::SIGadgetProjectileType"
constexpr operator  ::GlobalNamespace::SIGadgetProjectileType*() noexcept;

/// @brief Method LocalProjectileHit, addr 0x57f7368, size 0x568, virtual true, abstract: false, final true
inline void LocalProjectileHit(::GlobalNamespace::SIPlayer*  player) ;

/// @brief Method NetworkedProjectileHit, addr 0x57f82b4, size 0x4ac, virtual true, abstract: false, final true
inline void NetworkedProjectileHit(::ArrayW<::System::Object*>  data) ;

static inline ::GlobalNamespace::SIBlasterSplashProjectile* New_ctor() ;

/// @brief Method OnEnable, addr 0x57f7310, size 0x58, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SplashHitLocalPlayer, addr 0x57f7e50, size 0x464, virtual false, abstract: false, final false
inline void SplashHitLocalPlayer(::UnityEngine::Vector3  directionAndMagnitude) ;

/// @brief Method TriggerSplashHitPlayers, addr 0x57f78d0, size 0x580, virtual false, abstract: false, final false
inline void TriggerSplashHitPlayers(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  hitPlayers) ;

constexpr float_t const& __cordl_internal_get_fullSplashRadius() const;

constexpr float_t& __cordl_internal_get_fullSplashRadius() ;

constexpr ::ArrayW<::UnityEngine::RaycastHit> const& __cordl_internal_get_hits() const;

constexpr ::ArrayW<::UnityEngine::RaycastHit>& __cordl_internal_get_hits() ;

constexpr float_t const& __cordl_internal_get_knockbackSpeed() const;

constexpr float_t& __cordl_internal_get_knockbackSpeed() ;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile> const& __cordl_internal_get_projectile() const;

constexpr ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>& __cordl_internal_get_projectile() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>* const& __cordl_internal_get_rigList() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*& __cordl_internal_get_rigList() ;

constexpr float_t const& __cordl_internal_get_splashHitDistance() const;

constexpr float_t& __cordl_internal_get_splashHitDistance() ;

constexpr float_t const& __cordl_internal_get_upwardsAngle() const;

constexpr float_t& __cordl_internal_get_upwardsAngle() ;

constexpr void __cordl_internal_set_fullSplashRadius(float_t  value) ;

constexpr void __cordl_internal_set_hits(::ArrayW<::UnityEngine::RaycastHit>  value) ;

constexpr void __cordl_internal_set_knockbackSpeed(float_t  value) ;

constexpr void __cordl_internal_set_projectile(::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  value) ;

constexpr void __cordl_internal_set_rigList(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  value) ;

constexpr void __cordl_internal_set_splashHitDistance(float_t  value) ;

constexpr void __cordl_internal_set_upwardsAngle(float_t  value) ;

/// @brief Method .ctor, addr 0x57f8c9c, size 0xc0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::SIGadgetProjectileType"
constexpr ::GlobalNamespace::SIGadgetProjectileType* i___GlobalNamespace__SIGadgetProjectileType() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SIBlasterSplashProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterSplashProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SIBlasterSplashProjectile(SIBlasterSplashProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SIBlasterSplashProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SIBlasterSplashProjectile(SIBlasterSplashProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{219};

/// @brief Field knockbackSpeed, offset: 0x20, size: 0x4, def value: None
 float_t  ___knockbackSpeed;

/// @brief Field fullSplashRadius, offset: 0x24, size: 0x4, def value: None
 float_t  ___fullSplashRadius;

/// @brief Field splashHitDistance, offset: 0x28, size: 0x4, def value: None
 float_t  ___splashHitDistance;

/// @brief Field upwardsAngle, offset: 0x2c, size: 0x4, def value: None
 float_t  ___upwardsAngle;

/// @brief Field projectile, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SIGadgetBlasterProjectile>  ___projectile;

/// @brief Field rigList, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::VRRig>>*  ___rigList;

/// @brief Field hits, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::RaycastHit>  ___hits;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SIBlasterSplashProjectile, ___knockbackSpeed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSplashProjectile, ___fullSplashRadius) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSplashProjectile, ___splashHitDistance) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSplashProjectile, ___upwardsAngle) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSplashProjectile, ___projectile) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSplashProjectile, ___rigList) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SIBlasterSplashProjectile, ___hits) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SIBlasterSplashProjectile) == 0x48, "Size mismatch!");

} // namespace end def GlobalNamespace
