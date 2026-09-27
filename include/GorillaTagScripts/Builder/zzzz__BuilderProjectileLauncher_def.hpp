#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectileLauncher.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SlingshotProjectile_AOEKnockbackConfig_def.hpp"
#include "GorillaTagScripts/Builder/zzzz__BuilderProjectileLauncher_FunctionalState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderProjectileLauncher)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderProjectileLauncher_FunctionalState;
}
namespace GlobalNamespace {
class IBuilderPieceComponent;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaTagScripts::Builder {
class BuilderProjectile;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderProjectileLauncher;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderProjectileLauncher*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderProjectileLauncher*, "GorillaTagScripts.Builder", "BuilderProjectileLauncher");
// Dependencies GorillaTagScripts.Builder.BuilderProjectileLauncher::FunctionalState, SlingshotProjectile::AOEKnockbackConfig, UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderProjectileLauncher
class CORDL_TYPE BuilderProjectileLauncher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FunctionalState = ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState;

/// @brief Field allProjectiles, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_allProjectiles, put=__cordl_internal_set_allProjectiles)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  allProjectiles;

/// @brief Field currentState, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState  currentState;

/// @brief Field fireCooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_fireCooldown, put=__cordl_internal_set_fireCooldown)) float_t  fireCooldown;

/// @brief Field gravityMultiplier, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityMultiplier, put=__cordl_internal_set_gravityMultiplier)) float_t  gravityMultiplier;

/// @brief Field knockbackConfig, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_knockbackConfig, put=__cordl_internal_set_knockbackConfig)) ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  knockbackConfig;

/// @brief Field lastFireTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastFireTime, put=__cordl_internal_set_lastFireTime)) float_t  lastFireTime;

/// @brief Field launchPosition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchPosition, put=__cordl_internal_set_launchPosition)) ::UnityW<::UnityEngine::Transform>  launchPosition;

/// @brief Field launchSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchSound, put=__cordl_internal_set_launchSound)) ::UnityW<::UnityEngine::AudioSource>  launchSound;

/// @brief Field launchVelocity, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_launchVelocity, put=__cordl_internal_set_launchVelocity)) float_t  launchVelocity;

/// @brief Field launchedProjectiles, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchedProjectiles, put=__cordl_internal_set_launchedProjectiles)) ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  launchedProjectiles;

/// @brief Field myPiece, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field projectilePrefab, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_projectilePrefab, put=__cordl_internal_set_projectilePrefab)) ::UnityW<::UnityEngine::GameObject>  projectilePrefab;

/// @brief Field projectileScale, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_projectileScale, put=__cordl_internal_set_projectileScale)) float_t  projectileScale;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method FunctionalPieceUpdate, addr 0x5c2e804, size 0x194, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method IsStateValid, addr 0x5c2e7f0, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

/// @brief Method LaunchProjectile, addr 0x5c2e1e4, size 0x508, virtual false, abstract: false, final false
inline void LaunchProjectile(int32_t  timeStamp) ;

static inline ::GorillaTagScripts::Builder::BuilderProjectileLauncher* New_ctor() ;

/// @brief Method OnPieceActivate, addr 0x5c2e9a4, size 0x28, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c2e998, size 0x4, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c2e9cc, size 0xa8, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c2e99c, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c2e9a0, size 0x4, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c2e6ec, size 0x104, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c2e800, size 0x4, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method RegisterProjectile, addr 0x5c2d0ec, size 0xac, virtual false, abstract: false, final false
inline void RegisterProjectile(::GorillaTagScripts::Builder::BuilderProjectile*  projectile) ;

/// @brief Method UnRegisterProjectile, addr 0x5c2d8e4, size 0x84, virtual false, abstract: false, final false
inline void UnRegisterProjectile(::GorillaTagScripts::Builder::BuilderProjectile*  projectile) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>* const& __cordl_internal_get_allProjectiles() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*& __cordl_internal_get_allProjectiles() ;

constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_fireCooldown() const;

constexpr float_t& __cordl_internal_get_fireCooldown() ;

constexpr float_t const& __cordl_internal_get_gravityMultiplier() const;

constexpr float_t& __cordl_internal_get_gravityMultiplier() ;

constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig const& __cordl_internal_get_knockbackConfig() const;

constexpr ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig& __cordl_internal_get_knockbackConfig() ;

constexpr float_t const& __cordl_internal_get_lastFireTime() const;

constexpr float_t& __cordl_internal_get_lastFireTime() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_launchPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_launchPosition() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_launchSound() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_launchSound() ;

constexpr float_t const& __cordl_internal_get_launchVelocity() const;

constexpr float_t& __cordl_internal_get_launchVelocity() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>* const& __cordl_internal_get_launchedProjectiles() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*& __cordl_internal_get_launchedProjectiles() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_projectilePrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_projectilePrefab() ;

constexpr float_t const& __cordl_internal_get_projectileScale() const;

constexpr float_t& __cordl_internal_get_projectileScale() ;

constexpr void __cordl_internal_set_allProjectiles(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::BuilderProjectileLauncher_FunctionalState  value) ;

constexpr void __cordl_internal_set_fireCooldown(float_t  value) ;

constexpr void __cordl_internal_set_gravityMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_knockbackConfig(::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  value) ;

constexpr void __cordl_internal_set_lastFireTime(float_t  value) ;

constexpr void __cordl_internal_set_launchPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_launchSound(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_launchVelocity(float_t  value) ;

constexpr void __cordl_internal_set_launchedProjectiles(::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_projectilePrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_projectileScale(float_t  value) ;

/// @brief Method .ctor, addr 0x5c2ea74, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderProjectileLauncher() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectileLauncher", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderProjectileLauncher(BuilderProjectileLauncher && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectileLauncher", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderProjectileLauncher(BuilderProjectileLauncher const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4168};

/// @brief Field launchedProjectiles, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  ___launchedProjectiles;

/// [SerializeField]
/// @brief Field myPiece, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field fireCooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ___fireCooldown;

/// [Tooltip("launch in Y direction")]
/// [SerializeField]
/// @brief Field launchPosition, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___launchPosition;

/// [SerializeField]
/// @brief Field launchVelocity, offset: 0x40, size: 0x4, def value: None
 float_t  ___launchVelocity;

/// [SerializeField]
/// @brief Field launchSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___launchSound;

/// [SerializeField]
/// @brief Field projectilePrefab, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___projectilePrefab;

/// @brief Field projectileScale, offset: 0x58, size: 0x4, def value: None
 float_t  ___projectileScale;

/// [SerializeField]
/// @brief Field gravityMultiplier, offset: 0x5c, size: 0x4, def value: None
 float_t  ___gravityMultiplier;

/// @brief Field knockbackConfig, offset: 0x60, size: 0x18, def value: None
 ::GlobalNamespace::SlingshotProjectile_AOEKnockbackConfig  ___knockbackConfig;

/// @brief Field lastFireTime, offset: 0x78, size: 0x4, def value: None
 float_t  ___lastFireTime;

/// @brief Field currentState, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::BuilderProjectileLauncher_FunctionalState  ___currentState;

/// @brief Field allProjectiles, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::GorillaTagScripts::Builder::BuilderProjectile>>*  ___allProjectiles;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___launchedProjectiles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___myPiece) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___fireCooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___launchPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___launchVelocity) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___launchSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___projectilePrefab) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___projectileScale) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___gravityMultiplier) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___knockbackConfig) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___lastFireTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___currentState) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileLauncher, ___allProjectiles) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderProjectileLauncher) == 0x88, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
