#pragma once
// IWYU pragma private; include "GlobalNamespace/ProjectileWeapon.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectileWeapon)
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
struct RoomSystem_ProjectileSource;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ProjectileWeapon;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ProjectileWeapon*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProjectileWeapon*, "", "ProjectileWeapon");
// Dependencies TransferrableObject, UnityEngine.AudioClip
namespace GlobalNamespace {
// Is value type: false
// CS Name: ProjectileWeapon
class CORDL_TYPE ProjectileWeapon : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
/// @brief Field projectilePrefab, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field projectileTrail, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectileTrail, put=__cordl_internal_set_projectileTrail)) ::UnityW<::UnityEngine::GameObject>  projectileTrail;

/// @brief Field shootSfx, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_shootSfx, put=__cordl_internal_set_shootSfx)) ::UnityW<::UnityEngine::AudioSource>  shootSfx;

/// @brief Field shootSfxClips, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_shootSfxClips, put=__cordl_internal_set_shootSfxClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  shootSfxClips;

/// @brief Method AttachTrail, addr 0x5658e00, size 0x1b0, virtual false, abstract: false, final false
inline void AttachTrail(int32_t  trailHash, ::UnityEngine::GameObject*  newProjectile, ::UnityEngine::Vector3  location, bool  blueTeam, bool  orangeTeam, bool  shouldOverrideColor, ::UnityEngine::Color  overrideColor) ;

/// @brief Method GetIsOnTeams, addr 0x5658cb0, size 0x150, virtual false, abstract: false, final false
inline void GetIsOnTeams(::by_ref<bool>  blueTeam, ::by_ref<bool>  orangeTeam, ::by_ref<bool>  shouldUsePlayerColor) ;

/// @brief Method GetLaunchPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetLaunchPosition() ;

/// @brief Method GetLaunchVelocity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Vector3 GetLaunchVelocity() ;

/// @brief Method LaunchNetworkedProjectile, addr 0x5659070, size 0x508, virtual true, abstract: false, final false
inline ::UnityW<::GlobalNamespace::SlingshotProjectile> LaunchNetworkedProjectile(::UnityEngine::Vector3  location, ::UnityEngine::Vector3  velocity, ::GlobalNamespace::RoomSystem_ProjectileSource  projectileSource, int32_t  projectileCounter, float_t  scale, bool  shouldOverrideColor, ::UnityEngine::Color  color, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method LaunchProjectile, addr 0x56587ac, size 0x504, virtual false, abstract: false, final false
inline void LaunchProjectile() ;

static inline ::GlobalNamespace::ProjectileWeapon* New_ctor() ;

/// @brief Method OnEnable, addr 0x56586d4, size 0xd8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PlayLaunchSfx, addr 0x5658fb0, size 0xc0, virtual false, abstract: false, final false
inline void PlayLaunchSfx() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectileTrail() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectileTrail() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_shootSfx() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_shootSfx() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_shootSfxClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_shootSfxClips() ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_projectileTrail(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_shootSfx(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_shootSfxClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

/// @brief Method .ctor, addr 0x5659578, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProjectileWeapon() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProjectileWeapon", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ProjectileWeapon(ProjectileWeapon && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProjectileWeapon", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProjectileWeapon(ProjectileWeapon const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{756};

/// [SerializeField]
/// @brief Field projectilePrefab, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// [SerializeField]
/// @brief Field projectileTrail, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectileTrail;

/// @brief Field shootSfxClips, offset: 0x348, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___shootSfxClips;

/// @brief Field shootSfx, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___shootSfx;

/// @brief Size padding 0x388 - 0x358 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProjectileWeapon, ___projectilePrefab) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileWeapon, ___projectileTrail) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileWeapon, ___shootSfxClips) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ProjectileWeapon, ___shootSfx) == 0x350, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProjectileWeapon) == 0x388, "Size mismatch!");

} // namespace end def GlobalNamespace
