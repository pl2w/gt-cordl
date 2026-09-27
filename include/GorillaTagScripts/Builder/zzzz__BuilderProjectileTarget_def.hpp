#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderProjectileTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderProjectileTarget)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
class IBuilderPieceFunctional;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class SlingshotProjectileHitNotifier;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderProjectileTarget;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderProjectileTarget*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderProjectileTarget*, "GorillaTagScripts.Builder", "BuilderProjectileTarget");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderProjectileTarget
class CORDL_TYPE BuilderProjectileTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field colliders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field hitAnimation, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitAnimation, put=__cordl_internal_set_hitAnimation)) ::UnityW<::UnityEngine::Animation>  hitAnimation;

/// @brief Field hitCooldown, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitCooldown, put=__cordl_internal_set_hitCooldown)) float_t  hitCooldown;

/// @brief Field hitCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitCount, put=__cordl_internal_set_hitCount)) int32_t  hitCount;

/// @brief Field hitNotifier, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitNotifier, put=__cordl_internal_set_hitNotifier)) ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  hitNotifier;

/// @brief Field hitSoundbank, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSoundbank, put=__cordl_internal_set_hitSoundbank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  hitSoundbank;

/// @brief Field lastHitTime, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastHitTime, put=__cordl_internal_set_lastHitTime)) double_t  lastHitTime;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field scoreText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreText, put=__cordl_internal_set_scoreText)) ::UnityW<::TMPro::TMP_Text>  scoreText;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method Awake, addr 0x5c2eb64, size 0x1a8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c2f22c, size 0x4, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method GetInteractionDistace, addr 0x5c2f230, size 0x8, virtual true, abstract: false, final true
inline float_t GetInteractionDistace() ;

/// @brief Method IsStateValid, addr 0x5c2ef98, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

static inline ::GorillaTagScripts::Builder::BuilderProjectileTarget* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5c2ed0c, size 0x90, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5c2ed9c, size 0xc0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnProjectileHit, addr 0x5c2ee5c, size 0xf4, virtual false, abstract: false, final false
inline void OnProjectileHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnStateChanged, addr 0x5c2ef50, size 0x48, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c2f10c, size 0x120, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method PlayHitEffects, addr 0x5c2efa8, size 0x164, virtual false, abstract: false, final false
inline void PlayHitEffects() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_hitAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_hitAnimation() ;

constexpr float_t const& __cordl_internal_get_hitCooldown() const;

constexpr float_t& __cordl_internal_get_hitCooldown() ;

constexpr int32_t const& __cordl_internal_get_hitCount() const;

constexpr int32_t& __cordl_internal_get_hitCount() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& __cordl_internal_get_hitNotifier() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& __cordl_internal_get_hitNotifier() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_hitSoundbank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_hitSoundbank() ;

constexpr double_t const& __cordl_internal_get_lastHitTime() const;

constexpr double_t& __cordl_internal_get_lastHitTime() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get_scoreText() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get_scoreText() ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_hitAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_hitCooldown(float_t  value) ;

constexpr void __cordl_internal_set_hitCount(int32_t  value) ;

constexpr void __cordl_internal_set_hitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value) ;

constexpr void __cordl_internal_set_hitSoundbank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_lastHitTime(double_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_scoreText(::UnityW<::TMPro::TMP_Text>  value) ;

/// @brief Method .ctor, addr 0x5c2f238, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderProjectileTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectileTarget", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderProjectileTarget(BuilderProjectileTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderProjectileTarget", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderProjectileTarget(BuilderProjectileTarget const& ) = delete;

/// @brief Field HIT offset 0xffffffff size 0x1
static constexpr uint8_t  HIT{static_cast<uint8_t>(0xbu)};

/// @brief Field MAX_SCORE offset 0xffffffff size 0x1
static constexpr uint8_t  MAX_SCORE{static_cast<uint8_t>(0xau)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4169};

/// [SerializeField]
/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field hitNotifier, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  ___hitNotifier;

/// [SerializeField]
/// @brief Field hitCooldown, offset: 0x30, size: 0x4, def value: None
 float_t  ___hitCooldown;

/// [Tooltip("Optional Sounds to play on hit")]
/// [SerializeField]
/// @brief Field hitSoundbank, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___hitSoundbank;

/// [Tooltip("Optional Sounds to play on hit")]
/// [SerializeField]
/// @brief Field hitAnimation, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___hitAnimation;

/// [SerializeField]
/// @brief Field colliders, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// [SerializeField]
/// @brief Field scoreText, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ___scoreText;

/// @brief Field lastHitTime, offset: 0x58, size: 0x8, def value: None
 double_t  ___lastHitTime;

/// @brief Field hitCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___hitCount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___hitNotifier) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___hitCooldown) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___hitSoundbank) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___hitAnimation) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___colliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___scoreText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___lastHitTime) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderProjectileTarget, ___hitCount) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderProjectileTarget) == 0x68, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
