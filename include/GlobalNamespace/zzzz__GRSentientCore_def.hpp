#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSentientCore.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GRSentientCore_SentientCoreState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GRSentientCore)
namespace GlobalNamespace {
class AbilitySound;
}
namespace GlobalNamespace {
struct GRSentientCore_SentientCoreState;
}
namespace GlobalNamespace {
class GameEntity;
}
namespace GlobalNamespace {
class IGRSleepableEntity;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GRSentientCore;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GRSentientCore*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GRSentientCore*, "", "GRSentientCore");
// Dependencies GRSentientCore::SentientCoreState, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GRSentientCore
class CORDL_TYPE GRSentientCore : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SentientCoreState = ::GlobalNamespace::GRSentientCore_SentientCoreState;

 __declspec(property(get=get_Position)) ::UnityEngine::Vector3  Position;

 __declspec(property(get=get_WakeUpRadius)) float_t  WakeUpRadius;

/// @brief Field alertEnemiesSound, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_alertEnemiesSound, put=__cordl_internal_set_alertEnemiesSound)) ::GlobalNamespace::AbilitySound*  alertEnemiesSound;

/// @brief Field alertNoiseEventMagnitude, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_alertNoiseEventMagnitude, put=__cordl_internal_set_alertNoiseEventMagnitude)) float_t  alertNoiseEventMagnitude;

/// @brief Field debugDraw, offset 0x7c, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDraw, put=__cordl_internal_set_debugDraw)) bool  debugDraw;

/// @brief Field enemyAlertDuration, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_enemyAlertDuration, put=__cordl_internal_set_enemyAlertDuration)) float_t  enemyAlertDuration;

/// @brief Field gameEntity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_gameEntity, put=__cordl_internal_set_gameEntity)) ::UnityW<::GlobalNamespace::GameEntity>  gameEntity;

/// @brief Field isPlayingAlert, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isPlayingAlert, put=__cordl_internal_set_isPlayingAlert)) bool  isPlayingAlert;

/// @brief Field jumpAngleMinMax, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumpAngleMinMax, put=__cordl_internal_set_jumpAngleMinMax)) ::UnityEngine::Vector2  jumpAngleMinMax;

/// @brief Field jumpAnticipationTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpAnticipationTime, put=__cordl_internal_set_jumpAnticipationTime)) float_t  jumpAnticipationTime;

/// @brief Field jumpCooldownTime, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpCooldownTime, put=__cordl_internal_set_jumpCooldownTime)) float_t  jumpCooldownTime;

/// @brief Field jumpDirection, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_jumpDirection, put=__cordl_internal_set_jumpDirection)) ::UnityEngine::Vector3  jumpDirection;

/// @brief Field jumpGravityAccel, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpGravityAccel, put=__cordl_internal_set_jumpGravityAccel)) float_t  jumpGravityAccel;

/// @brief Field jumpSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_jumpSound, put=__cordl_internal_set_jumpSound)) ::GlobalNamespace::AbilitySound*  jumpSound;

/// @brief Field jumpSpeed, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpSpeed, put=__cordl_internal_set_jumpSpeed)) float_t  jumpSpeed;

/// @brief Field jumpStartPosition, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_jumpStartPosition, put=__cordl_internal_set_jumpStartPosition)) ::UnityEngine::Vector3  jumpStartPosition;

/// @brief Field jumpStartTime, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_jumpStartTime, put=__cordl_internal_set_jumpStartTime)) float_t  jumpStartTime;

/// @brief Field jumpVelocity, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get_jumpVelocity, put=__cordl_internal_set_jumpVelocity)) ::UnityEngine::Vector3  jumpVelocity;

/// @brief Field landSound, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_landSound, put=__cordl_internal_set_landSound)) ::GlobalNamespace::AbilitySound*  landSound;

/// @brief Field localState, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_localState, put=__cordl_internal_set_localState)) ::GlobalNamespace::GRSentientCore_SentientCoreState  localState;

/// @brief Field localStateStartTime, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_localStateStartTime, put=__cordl_internal_set_localStateStartTime)) float_t  localStateStartTime;

/// @brief Field maxSpeed, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeed, put=__cordl_internal_set_maxSpeed)) float_t  maxSpeed;

/// @brief Field radius, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_radius, put=__cordl_internal_set_radius)) float_t  radius;

/// @brief Field rb, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field sleepRequested, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get_sleepRequested, put=__cordl_internal_set_sleepRequested)) bool  sleepRequested;

/// @brief Field surfaceNormal, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_surfaceNormal, put=__cordl_internal_set_surfaceNormal)) ::UnityEngine::Vector3  surfaceNormal;

/// @brief Field timeRangeBetweenAlerts, offset 0x4c, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeRangeBetweenAlerts, put=__cordl_internal_set_timeRangeBetweenAlerts)) ::UnityEngine::Vector2  timeRangeBetweenAlerts;

/// @brief Field timeUntilFirstAlert, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUntilFirstAlert, put=__cordl_internal_set_timeUntilFirstAlert)) float_t  timeUntilFirstAlert;

/// @brief Field timeUntilNextAlert, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeUntilNextAlert, put=__cordl_internal_set_timeUntilNextAlert)) float_t  timeUntilNextAlert;

/// @brief Field trailFX, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_trailFX, put=__cordl_internal_set_trailFX)) ::UnityW<::UnityEngine::ParticleSystem>  trailFX;

/// @brief Field useSurfaceNormalForGravityDirection, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_useSurfaceNormalForGravityDirection, put=__cordl_internal_set_useSurfaceNormalForGravityDirection)) bool  useSurfaceNormalForGravityDirection;

/// @brief Field visualCore, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_visualCore, put=__cordl_internal_set_visualCore)) ::UnityW<::UnityEngine::Transform>  visualCore;

/// @brief Field wakeupRadius, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_wakeupRadius, put=__cordl_internal_set_wakeupRadius)) float_t  wakeupRadius;

/// @brief Convert operator to "::GlobalNamespace::IGRSleepableEntity"
constexpr operator  ::GlobalNamespace::IGRSleepableEntity*() noexcept;

/// @brief Method AuthorityInitiateJump, addr 0x58b2cf0, size 0x1f8, virtual false, abstract: false, final false
inline void AuthorityInitiateJump() ;

/// @brief Method AuthorityUpdate, addr 0x58b1b00, size 0x274, virtual false, abstract: false, final false
inline void AuthorityUpdate() ;

/// @brief Method DrawJumpPath, addr 0x58b2ee8, size 0x524, virtual false, abstract: false, final false
inline void DrawJumpPath(::UnityEngine::Color  pathColor) ;

/// @brief Method IsSleeping, addr 0x58b187c, size 0x20, virtual true, abstract: false, final true
inline bool IsSleeping() ;

static inline ::GlobalNamespace::GRSentientCore* New_ctor() ;

/// @brief Method OnDestroy, addr 0x58b14c8, size 0x3b4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDetached, addr 0x58b1a0c, size 0x8, virtual false, abstract: false, final false
inline void OnDetached() ;

/// @brief Method OnGrabbed, addr 0x58b19c8, size 0x34, virtual false, abstract: false, final false
inline void OnGrabbed() ;

/// @brief Method OnReleased, addr 0x58b19fc, size 0x8, virtual false, abstract: false, final false
inline void OnReleased() ;

/// @brief Method OnSnapped, addr 0x58b1a04, size 0x8, virtual false, abstract: false, final false
inline void OnSnapped() ;

/// @brief Method OnStateChanged, addr 0x58b1910, size 0x48, virtual false, abstract: false, final false
inline void OnStateChanged(int64_t  prevState, int64_t  nextState) ;

/// @brief Method PerformJump, addr 0x58b340c, size 0x248, virtual false, abstract: false, final false
inline void PerformJump(::UnityEngine::Vector3  startPos, ::UnityEngine::Vector3  normal, ::UnityEngine::Vector3  direction, double_t  jumpNetworkTime) ;

/// @brief Method SetState, addr 0x58b1958, size 0x70, virtual false, abstract: false, final false
inline void SetState(::GlobalNamespace::GRSentientCore_SentientCoreState  nextState) ;

/// @brief Method SharedUpdate, addr 0x58b1d74, size 0xf7c, virtual false, abstract: false, final false
inline void SharedUpdate() ;

/// @brief Method Sleep, addr 0x58b14bc, size 0xc, virtual true, abstract: false, final true
inline void Sleep() ;

/// @brief Method Start, addr 0x58b110c, size 0x3b0, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0x58b1a14, size 0xec, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WakeUp, addr 0x58b189c, size 0x74, virtual true, abstract: false, final true
inline void WakeUp() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_alertEnemiesSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_alertEnemiesSound() ;

constexpr float_t const& __cordl_internal_get_alertNoiseEventMagnitude() const;

constexpr float_t& __cordl_internal_get_alertNoiseEventMagnitude() ;

constexpr bool const& __cordl_internal_get_debugDraw() const;

constexpr bool& __cordl_internal_get_debugDraw() ;

constexpr float_t const& __cordl_internal_get_enemyAlertDuration() const;

constexpr float_t& __cordl_internal_get_enemyAlertDuration() ;

constexpr ::UnityW<::GlobalNamespace::GameEntity> const& __cordl_internal_get_gameEntity() const;

constexpr ::UnityW<::GlobalNamespace::GameEntity>& __cordl_internal_get_gameEntity() ;

constexpr bool const& __cordl_internal_get_isPlayingAlert() const;

constexpr bool& __cordl_internal_get_isPlayingAlert() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_jumpAngleMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_jumpAngleMinMax() ;

constexpr float_t const& __cordl_internal_get_jumpAnticipationTime() const;

constexpr float_t& __cordl_internal_get_jumpAnticipationTime() ;

constexpr float_t const& __cordl_internal_get_jumpCooldownTime() const;

constexpr float_t& __cordl_internal_get_jumpCooldownTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_jumpDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_jumpDirection() ;

constexpr float_t const& __cordl_internal_get_jumpGravityAccel() const;

constexpr float_t& __cordl_internal_get_jumpGravityAccel() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_jumpSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_jumpSound() ;

constexpr float_t const& __cordl_internal_get_jumpSpeed() const;

constexpr float_t& __cordl_internal_get_jumpSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_jumpStartPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_jumpStartPosition() ;

constexpr float_t const& __cordl_internal_get_jumpStartTime() const;

constexpr float_t& __cordl_internal_get_jumpStartTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_jumpVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_jumpVelocity() ;

constexpr ::GlobalNamespace::AbilitySound* const& __cordl_internal_get_landSound() const;

constexpr ::GlobalNamespace::AbilitySound*& __cordl_internal_get_landSound() ;

constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState const& __cordl_internal_get_localState() const;

constexpr ::GlobalNamespace::GRSentientCore_SentientCoreState& __cordl_internal_get_localState() ;

constexpr float_t const& __cordl_internal_get_localStateStartTime() const;

constexpr float_t& __cordl_internal_get_localStateStartTime() ;

constexpr float_t const& __cordl_internal_get_maxSpeed() const;

constexpr float_t& __cordl_internal_get_maxSpeed() ;

constexpr float_t const& __cordl_internal_get_radius() const;

constexpr float_t& __cordl_internal_get_radius() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr bool const& __cordl_internal_get_sleepRequested() const;

constexpr bool& __cordl_internal_get_sleepRequested() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_surfaceNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_surfaceNormal() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_timeRangeBetweenAlerts() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_timeRangeBetweenAlerts() ;

constexpr float_t const& __cordl_internal_get_timeUntilFirstAlert() const;

constexpr float_t& __cordl_internal_get_timeUntilFirstAlert() ;

constexpr float_t const& __cordl_internal_get_timeUntilNextAlert() const;

constexpr float_t& __cordl_internal_get_timeUntilNextAlert() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_trailFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_trailFX() ;

constexpr bool const& __cordl_internal_get_useSurfaceNormalForGravityDirection() const;

constexpr bool& __cordl_internal_get_useSurfaceNormalForGravityDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_visualCore() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_visualCore() ;

constexpr float_t const& __cordl_internal_get_wakeupRadius() const;

constexpr float_t& __cordl_internal_get_wakeupRadius() ;

constexpr void __cordl_internal_set_alertEnemiesSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_alertNoiseEventMagnitude(float_t  value) ;

constexpr void __cordl_internal_set_debugDraw(bool  value) ;

constexpr void __cordl_internal_set_enemyAlertDuration(float_t  value) ;

constexpr void __cordl_internal_set_gameEntity(::UnityW<::GlobalNamespace::GameEntity>  value) ;

constexpr void __cordl_internal_set_isPlayingAlert(bool  value) ;

constexpr void __cordl_internal_set_jumpAngleMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_jumpAnticipationTime(float_t  value) ;

constexpr void __cordl_internal_set_jumpCooldownTime(float_t  value) ;

constexpr void __cordl_internal_set_jumpDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_jumpGravityAccel(float_t  value) ;

constexpr void __cordl_internal_set_jumpSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_jumpSpeed(float_t  value) ;

constexpr void __cordl_internal_set_jumpStartPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_jumpStartTime(float_t  value) ;

constexpr void __cordl_internal_set_jumpVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_landSound(::GlobalNamespace::AbilitySound*  value) ;

constexpr void __cordl_internal_set_localState(::GlobalNamespace::GRSentientCore_SentientCoreState  value) ;

constexpr void __cordl_internal_set_localStateStartTime(float_t  value) ;

constexpr void __cordl_internal_set_maxSpeed(float_t  value) ;

constexpr void __cordl_internal_set_radius(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_sleepRequested(bool  value) ;

constexpr void __cordl_internal_set_surfaceNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_timeRangeBetweenAlerts(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_timeUntilFirstAlert(float_t  value) ;

constexpr void __cordl_internal_set_timeUntilNextAlert(float_t  value) ;

constexpr void __cordl_internal_set_trailFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_useSurfaceNormalForGravityDirection(bool  value) ;

constexpr void __cordl_internal_set_visualCore(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_wakeupRadius(float_t  value) ;

/// @brief Method .ctor, addr 0x58b3654, size 0xcc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Position, addr 0x58b10e4, size 0x20, virtual true, abstract: false, final true
inline ::UnityEngine::Vector3 get_Position() ;

/// @brief Method get_WakeUpRadius, addr 0x58b1104, size 0x8, virtual true, abstract: false, final true
inline float_t get_WakeUpRadius() ;

/// @brief Convert to "::GlobalNamespace::IGRSleepableEntity"
constexpr ::GlobalNamespace::IGRSleepableEntity* i___GlobalNamespace__IGRSleepableEntity() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GRSentientCore() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GRSentientCore", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GRSentientCore(GRSentientCore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GRSentientCore", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GRSentientCore(GRSentientCore const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2035};

/// @brief Field gameEntity, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameEntity>  ___gameEntity;

/// @brief Field jumpAngleMinMax, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___jumpAngleMinMax;

/// @brief Field jumpSpeed, offset: 0x30, size: 0x4, def value: None
 float_t  ___jumpSpeed;

/// @brief Field jumpGravityAccel, offset: 0x34, size: 0x4, def value: None
 float_t  ___jumpGravityAccel;

/// @brief Field maxSpeed, offset: 0x38, size: 0x4, def value: None
 float_t  ___maxSpeed;

/// @brief Field radius, offset: 0x3c, size: 0x4, def value: None
 float_t  ___radius;

/// @brief Field jumpAnticipationTime, offset: 0x40, size: 0x4, def value: None
 float_t  ___jumpAnticipationTime;

/// @brief Field jumpCooldownTime, offset: 0x44, size: 0x4, def value: None
 float_t  ___jumpCooldownTime;

/// @brief Field useSurfaceNormalForGravityDirection, offset: 0x48, size: 0x1, def value: None
 bool  ___useSurfaceNormalForGravityDirection;

/// @brief Field timeRangeBetweenAlerts, offset: 0x4c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___timeRangeBetweenAlerts;

/// @brief Field timeUntilFirstAlert, offset: 0x54, size: 0x4, def value: None
 float_t  ___timeUntilFirstAlert;

/// @brief Field alertNoiseEventMagnitude, offset: 0x58, size: 0x4, def value: None
 float_t  ___alertNoiseEventMagnitude;

/// @brief Field jumpSound, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___jumpSound;

/// @brief Field landSound, offset: 0x68, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___landSound;

/// @brief Field alertEnemiesSound, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  ___alertEnemiesSound;

/// @brief Field wakeupRadius, offset: 0x78, size: 0x4, def value: None
 float_t  ___wakeupRadius;

/// @brief Field debugDraw, offset: 0x7c, size: 0x1, def value: None
 bool  ___debugDraw;

/// @brief Field visualCore, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___visualCore;

/// @brief Field trailFX, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___trailFX;

/// @brief Field surfaceNormal, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___surfaceNormal;

/// @brief Field jumpDirection, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___jumpDirection;

/// @brief Field jumpStartPosition, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___jumpStartPosition;

/// @brief Field jumpVelocity, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___jumpVelocity;

/// @brief Field jumpStartTime, offset: 0xc0, size: 0x4, def value: None
 float_t  ___jumpStartTime;

/// @brief Field rb, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field timeUntilNextAlert, offset: 0xd0, size: 0x4, def value: None
 float_t  ___timeUntilNextAlert;

/// @brief Field enemyAlertDuration, offset: 0xd4, size: 0x4, def value: None
 float_t  ___enemyAlertDuration;

/// @brief Field isPlayingAlert, offset: 0xd8, size: 0x1, def value: None
 bool  ___isPlayingAlert;

/// @brief Field sleepRequested, offset: 0xd9, size: 0x1, def value: None
 bool  ___sleepRequested;

/// [ReadOnly]
/// @brief Field localState, offset: 0xdc, size: 0x4, def value: None
 ::GlobalNamespace::GRSentientCore_SentientCoreState  ___localState;

/// @brief Field localStateStartTime, offset: 0xe0, size: 0x4, def value: None
 float_t  ___localStateStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___gameEntity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpAngleMinMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpSpeed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpGravityAccel) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___maxSpeed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___radius) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpAnticipationTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpCooldownTime) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___useSurfaceNormalForGravityDirection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___timeRangeBetweenAlerts) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___timeUntilFirstAlert) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___alertNoiseEventMagnitude) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___landSound) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___alertEnemiesSound) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___wakeupRadius) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___debugDraw) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___visualCore) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___trailFX) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___surfaceNormal) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpDirection) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpStartPosition) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpVelocity) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___jumpStartTime) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___rb) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___timeUntilNextAlert) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___enemyAlertDuration) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___isPlayingAlert) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___sleepRequested) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___localState) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GRSentientCore, ___localStateStartTime) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GRSentientCore) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
