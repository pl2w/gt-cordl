#pragma once
// IWYU pragma private; include "GlobalNamespace/GameBall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameBallId_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GameBall)
namespace GlobalNamespace {
class MonkeBall;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GameBall;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameBall*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameBall*, "", "GameBall");
// Dependencies GameBallId, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameBall
class CORDL_TYPE GameBall : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsLaunched)) bool  IsLaunched;

/// @brief Field _catchSoundDecay, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__catchSoundDecay, put=__cordl_internal_set__catchSoundDecay)) float_t  _catchSoundDecay;

/// @brief Field _launched, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__launched, put=__cordl_internal_set__launched)) bool  _launched;

/// @brief Field _launchedTimer, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__launchedTimer, put=__cordl_internal_set__launchedTimer)) float_t  _launchedTimer;

/// @brief Field _monkeBall, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__monkeBall, put=__cordl_internal_set__monkeBall)) ::UnityW<::GlobalNamespace::MonkeBall>  _monkeBall;

/// @brief Field audioSource, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field catchSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_catchSound, put=__cordl_internal_set_catchSound)) ::UnityW<::UnityEngine::AudioClip>  catchSound;

/// @brief Field catchSoundVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_catchSoundVolume, put=__cordl_internal_set_catchSoundVolume)) float_t  catchSoundVolume;

/// @brief Field collider, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field disc, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_disc, put=__cordl_internal_set_disc)) bool  disc;

/// @brief Field gravityMult, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityMult, put=__cordl_internal_set_gravityMult)) float_t  gravityMult;

/// @brief Field groundSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_groundSound, put=__cordl_internal_set_groundSound)) ::UnityW<::UnityEngine::AudioClip>  groundSound;

/// @brief Field groundSoundVolume, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundSoundVolume, put=__cordl_internal_set_groundSoundVolume)) float_t  groundSoundVolume;

/// @brief Field heldByActorNumber, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_heldByActorNumber, put=__cordl_internal_set_heldByActorNumber)) int32_t  heldByActorNumber;

/// @brief Field id, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_id, put=__cordl_internal_set_id)) ::GlobalNamespace::GameBallId  id;

/// @brief Field lastHeldByActorNumber, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHeldByActorNumber, put=__cordl_internal_set_lastHeldByActorNumber)) int32_t  lastHeldByActorNumber;

/// @brief Field lastHeldByTeamId, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastHeldByTeamId, put=__cordl_internal_set_lastHeldByTeamId)) int32_t  lastHeldByTeamId;

/// @brief Field localDiscUp, offset 0x2c, size 0xc 
 __declspec(property(get=__cordl_internal_get_localDiscUp, put=__cordl_internal_set_localDiscUp)) ::UnityEngine::Vector3  localDiscUp;

/// @brief Field onlyGrabTeamId, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_onlyGrabTeamId, put=__cordl_internal_set_onlyGrabTeamId)) int32_t  onlyGrabTeamId;

/// @brief Field rigidBody, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidBody, put=__cordl_internal_set_rigidBody)) ::UnityW<::UnityEngine::Rigidbody>  rigidBody;

/// @brief Field throwSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwSound, put=__cordl_internal_set_throwSound)) ::UnityW<::UnityEngine::AudioClip>  throwSound;

/// @brief Field throwSoundVolume, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwSoundVolume, put=__cordl_internal_set_throwSoundVolume)) float_t  throwSoundVolume;

/// @brief Method Awake, addr 0x57a0d24, size 0x1b8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FixedUpdate, addr 0x57a0edc, size 0x178, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetVelocity, addr 0x57a1088, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetVelocity() ;

/// @brief Method IsGamePlayer, addr 0x57a13b4, size 0x74, virtual false, abstract: false, final false
inline bool IsGamePlayer(::UnityEngine::Collider*  collider) ;

static inline ::GlobalNamespace::GameBall* New_ctor() ;

/// @brief Method PlayBounceFX, addr 0x57a12ec, size 0xc0, virtual false, abstract: false, final false
inline void PlayBounceFX() ;

/// @brief Method PlayCatchFx, addr 0x57a115c, size 0xd0, virtual false, abstract: false, final false
inline void PlayCatchFx() ;

/// @brief Method PlayThrowFx, addr 0x57a122c, size 0xc0, virtual false, abstract: false, final false
inline void PlayThrowFx() ;

/// @brief Method SetHeldByTeamId, addr 0x57a13ac, size 0x8, virtual false, abstract: false, final false
inline void SetHeldByTeamId(int32_t  teamId) ;

/// @brief Method SetVelocity, addr 0x57a1144, size 0x18, virtual false, abstract: false, final false
inline void SetVelocity(::UnityEngine::Vector3  velocity) ;

/// @brief Method SetVisualOffset, addr 0x57a1428, size 0x98, virtual false, abstract: false, final false
inline void SetVisualOffset(bool  detach) ;

/// @brief Method WasLaunched, addr 0x57a1054, size 0x34, virtual false, abstract: false, final false
inline void WasLaunched() ;

constexpr float_t const& __cordl_internal_get__catchSoundDecay() const;

constexpr float_t& __cordl_internal_get__catchSoundDecay() ;

constexpr bool const& __cordl_internal_get__launched() const;

constexpr bool& __cordl_internal_get__launched() ;

constexpr float_t const& __cordl_internal_get__launchedTimer() const;

constexpr float_t& __cordl_internal_get__launchedTimer() ;

constexpr ::UnityW<::GlobalNamespace::MonkeBall> const& __cordl_internal_get__monkeBall() const;

constexpr ::UnityW<::GlobalNamespace::MonkeBall>& __cordl_internal_get__monkeBall() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_catchSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_catchSound() ;

constexpr float_t const& __cordl_internal_get_catchSoundVolume() const;

constexpr float_t& __cordl_internal_get_catchSoundVolume() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr bool const& __cordl_internal_get_disc() const;

constexpr bool& __cordl_internal_get_disc() ;

constexpr float_t const& __cordl_internal_get_gravityMult() const;

constexpr float_t& __cordl_internal_get_gravityMult() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_groundSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_groundSound() ;

constexpr float_t const& __cordl_internal_get_groundSoundVolume() const;

constexpr float_t& __cordl_internal_get_groundSoundVolume() ;

constexpr int32_t const& __cordl_internal_get_heldByActorNumber() const;

constexpr int32_t& __cordl_internal_get_heldByActorNumber() ;

constexpr ::GlobalNamespace::GameBallId const& __cordl_internal_get_id() const;

constexpr ::GlobalNamespace::GameBallId& __cordl_internal_get_id() ;

constexpr int32_t const& __cordl_internal_get_lastHeldByActorNumber() const;

constexpr int32_t& __cordl_internal_get_lastHeldByActorNumber() ;

constexpr int32_t const& __cordl_internal_get_lastHeldByTeamId() const;

constexpr int32_t& __cordl_internal_get_lastHeldByTeamId() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localDiscUp() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localDiscUp() ;

constexpr int32_t const& __cordl_internal_get_onlyGrabTeamId() const;

constexpr int32_t& __cordl_internal_get_onlyGrabTeamId() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidBody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidBody() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_throwSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_throwSound() ;

constexpr float_t const& __cordl_internal_get_throwSoundVolume() const;

constexpr float_t& __cordl_internal_get_throwSoundVolume() ;

constexpr void __cordl_internal_set__catchSoundDecay(float_t  value) ;

constexpr void __cordl_internal_set__launched(bool  value) ;

constexpr void __cordl_internal_set__launchedTimer(float_t  value) ;

constexpr void __cordl_internal_set__monkeBall(::UnityW<::GlobalNamespace::MonkeBall>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_catchSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_catchSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_disc(bool  value) ;

constexpr void __cordl_internal_set_gravityMult(float_t  value) ;

constexpr void __cordl_internal_set_groundSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_groundSoundVolume(float_t  value) ;

constexpr void __cordl_internal_set_heldByActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_id(::GlobalNamespace::GameBallId  value) ;

constexpr void __cordl_internal_set_lastHeldByActorNumber(int32_t  value) ;

constexpr void __cordl_internal_set_lastHeldByTeamId(int32_t  value) ;

constexpr void __cordl_internal_set_localDiscUp(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_onlyGrabTeamId(int32_t  value) ;

constexpr void __cordl_internal_set_rigidBody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_throwSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_throwSoundVolume(float_t  value) ;

/// @brief Method .ctor, addr 0x57a14c0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLaunched, addr 0x57a0d1c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsLaunched() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameBall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameBall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GameBall(GameBall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameBall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameBall(GameBall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1533};

/// @brief Field id, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::GameBallId  ___id;

/// @brief Field gravityMult, offset: 0x24, size: 0x4, def value: None
 float_t  ___gravityMult;

/// @brief Field disc, offset: 0x28, size: 0x1, def value: None
 bool  ___disc;

/// @brief Field localDiscUp, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localDiscUp;

/// @brief Field audioSource, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field catchSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___catchSound;

/// @brief Field catchSoundVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___catchSoundVolume;

/// @brief Field _catchSoundDecay, offset: 0x4c, size: 0x4, def value: None
 float_t  ____catchSoundDecay;

/// @brief Field throwSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___throwSound;

/// @brief Field throwSoundVolume, offset: 0x58, size: 0x4, def value: None
 float_t  ___throwSoundVolume;

/// @brief Field groundSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___groundSound;

/// @brief Field groundSoundVolume, offset: 0x68, size: 0x4, def value: None
 float_t  ___groundSoundVolume;

/// [SerializeField]
/// @brief Field rigidBody, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidBody;

/// [SerializeField]
/// @brief Field collider, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

/// @brief Field heldByActorNumber, offset: 0x80, size: 0x4, def value: None
 int32_t  ___heldByActorNumber;

/// @brief Field lastHeldByActorNumber, offset: 0x84, size: 0x4, def value: None
 int32_t  ___lastHeldByActorNumber;

/// @brief Field lastHeldByTeamId, offset: 0x88, size: 0x4, def value: None
 int32_t  ___lastHeldByTeamId;

/// @brief Field onlyGrabTeamId, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___onlyGrabTeamId;

/// @brief Field _launched, offset: 0x90, size: 0x1, def value: None
 bool  ____launched;

/// @brief Field _launchedTimer, offset: 0x94, size: 0x4, def value: None
 float_t  ____launchedTimer;

/// @brief Field _monkeBall, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MonkeBall>  ____monkeBall;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameBall, ___id) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___gravityMult) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___disc) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___localDiscUp) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___audioSource) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___catchSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___catchSoundVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ____catchSoundDecay) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___throwSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___throwSoundVolume) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___groundSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___groundSoundVolume) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___rigidBody) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___collider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___heldByActorNumber) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___lastHeldByActorNumber) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___lastHeldByTeamId) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ___onlyGrabTeamId) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ____launched) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ____launchedTimer) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameBall, ____monkeBall) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameBall) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
