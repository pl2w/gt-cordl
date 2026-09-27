#pragma once
// IWYU pragma private; include "GorillaTagScripts/Builder/BuilderShootingGallery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTagScripts/Builder/zzzz__BuilderShootingGallery_FunctionalState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderShootingGallery)
namespace GlobalNamespace {
class BuilderPiece;
}
namespace GlobalNamespace {
struct BuilderShootingGallery_FunctionalState;
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
namespace UnityEngine {
class AnimationCurve;
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
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GorillaTagScripts::Builder {
class BuilderShootingGallery;
}
// Write type traits
MARK_REF_T(::GorillaTagScripts::Builder::BuilderShootingGallery*);
DEFINE_IL2CPP_CLASS(::GorillaTagScripts::Builder::BuilderShootingGallery*, "GorillaTagScripts.Builder", "BuilderShootingGallery");
// Dependencies GorillaTagScripts.Builder.BuilderShootingGallery::FunctionalState, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GorillaTagScripts::Builder {
// Is value type: false
// CS Name: GorillaTagScripts.Builder.BuilderShootingGallery
class CORDL_TYPE BuilderShootingGallery : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using FunctionalState = ::GlobalNamespace::BuilderShootingGallery_FunctionalState;

/// @brief Field activated, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get_activated, put=__cordl_internal_set_activated)) bool  activated;

/// @brief Field colliders, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

/// @brief Field cowboyCurve, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_cowboyCurve, put=__cordl_internal_set_cowboyCurve)) ::UnityEngine::AnimationCurve*  cowboyCurve;

/// @brief Field cowboyCycleDuration, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_cowboyCycleDuration, put=__cordl_internal_set_cowboyCycleDuration)) float_t  cowboyCycleDuration;

/// @brief Field cowboyEnd, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_cowboyEnd, put=__cordl_internal_set_cowboyEnd)) ::UnityW<::UnityEngine::Transform>  cowboyEnd;

/// @brief Field cowboyHitAnimation, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_cowboyHitAnimation, put=__cordl_internal_set_cowboyHitAnimation)) ::UnityW<::UnityEngine::Animation>  cowboyHitAnimation;

/// @brief Field cowboyHitNotifier, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cowboyHitNotifier, put=__cordl_internal_set_cowboyHitNotifier)) ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  cowboyHitNotifier;

/// @brief Field cowboyHitSound, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_cowboyHitSound, put=__cordl_internal_set_cowboyHitSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  cowboyHitSound;

/// @brief Field cowboyInitLocalPos, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_cowboyInitLocalPos, put=__cordl_internal_set_cowboyInitLocalPos)) ::UnityEngine::Vector3  cowboyInitLocalPos;

/// @brief Field cowboyInitLocalRotation, offset 0xac, size 0x10 
 __declspec(property(get=__cordl_internal_get_cowboyInitLocalRotation, put=__cordl_internal_set_cowboyInitLocalRotation)) ::UnityEngine::Quaternion  cowboyInitLocalRotation;

/// @brief Field cowboyStart, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_cowboyStart, put=__cordl_internal_set_cowboyStart)) ::UnityW<::UnityEngine::Transform>  cowboyStart;

/// @brief Field cowboyTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_cowboyTransform, put=__cordl_internal_set_cowboyTransform)) ::UnityW<::UnityEngine::Transform>  cowboyTransform;

/// @brief Field cowboyVelocity, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_cowboyVelocity, put=__cordl_internal_set_cowboyVelocity)) float_t  cowboyVelocity;

/// @brief Field currForward, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_currForward, put=__cordl_internal_set_currForward)) bool  currForward;

/// @brief Field currT, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_currT, put=__cordl_internal_set_currT)) float_t  currT;

/// @brief Field currentState, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::BuilderShootingGallery_FunctionalState  currentState;

/// @brief Field distance, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_distance, put=__cordl_internal_set_distance)) float_t  distance;

/// @brief Field dtSinceServerUpdate, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_dtSinceServerUpdate, put=__cordl_internal_set_dtSinceServerUpdate)) float_t  dtSinceServerUpdate;

/// @brief Field hitCooldown, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitCooldown, put=__cordl_internal_set_hitCooldown)) float_t  hitCooldown;

/// @brief Field lastHitTime, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_lastHitTime, put=__cordl_internal_set_lastHitTime)) double_t  lastHitTime;

/// @brief Field lastServerTimeStamp, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastServerTimeStamp, put=__cordl_internal_set_lastServerTimeStamp)) int32_t  lastServerTimeStamp;

/// @brief Field myPiece, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_myPiece, put=__cordl_internal_set_myPiece)) ::UnityW<::GlobalNamespace::BuilderPiece>  myPiece;

/// @brief Field rotateAmt, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateAmt, put=__cordl_internal_set_rotateAmt)) float_t  rotateAmt;

/// @brief Field rotateStartAmt, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_rotateStartAmt, put=__cordl_internal_set_rotateStartAmt)) float_t  rotateStartAmt;

/// @brief Field wheelCycleDuration, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_wheelCycleDuration, put=__cordl_internal_set_wheelCycleDuration)) float_t  wheelCycleDuration;

/// @brief Field wheelHitAnimation, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_wheelHitAnimation, put=__cordl_internal_set_wheelHitAnimation)) ::UnityW<::UnityEngine::Animation>  wheelHitAnimation;

/// @brief Field wheelHitNotifier, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_wheelHitNotifier, put=__cordl_internal_set_wheelHitNotifier)) ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  wheelHitNotifier;

/// @brief Field wheelHitSound, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_wheelHitSound, put=__cordl_internal_set_wheelHitSound)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  wheelHitSound;

/// @brief Field wheelInitLocalRot, offset 0xc8, size 0x10 
 __declspec(property(get=__cordl_internal_get_wheelInitLocalRot, put=__cordl_internal_set_wheelInitLocalRot)) ::UnityEngine::Quaternion  wheelInitLocalRot;

/// @brief Field wheelTransform, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_wheelTransform, put=__cordl_internal_set_wheelTransform)) ::UnityW<::UnityEngine::Transform>  wheelTransform;

/// @brief Field wheelVelocity, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_wheelVelocity, put=__cordl_internal_set_wheelVelocity)) float_t  wheelVelocity;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceComponent"
constexpr operator  ::GlobalNamespace::IBuilderPieceComponent*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr operator  ::GlobalNamespace::IBuilderPieceFunctional*() noexcept;

/// @brief Method Awake, addr 0x5c31428, size 0x1f8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CowboyCycleCompletionPercent, addr 0x5c322e0, size 0x78, virtual false, abstract: false, final false
inline float_t CowboyCycleCompletionPercent() ;

/// @brief Method CowboyCycleCount, addr 0x5c325bc, size 0x40, virtual false, abstract: false, final false
inline int32_t CowboyCycleCount() ;

/// @brief Method CowboyCycleLengthMs, addr 0x5c324bc, size 0x2c, virtual false, abstract: false, final false
inline int64_t CowboyCycleLengthMs() ;

/// @brief Method CowboyHitEffects, addr 0x5c318e0, size 0xf8, virtual false, abstract: false, final false
inline void CowboyHitEffects() ;

/// @brief Method CowboyPlatformTime, addr 0x5c32514, size 0x54, virtual false, abstract: false, final false
inline double_t CowboyPlatformTime() ;

/// @brief Method FunctionalPieceFixedUpdate, addr 0x5c32138, size 0x1a8, virtual true, abstract: false, final true
inline void FunctionalPieceFixedUpdate() ;

/// @brief Method FunctionalPieceUpdate, addr 0x5c32030, size 0x108, virtual true, abstract: false, final true
inline void FunctionalPieceUpdate() ;

/// @brief Method IsEvenCycle, addr 0x5c32358, size 0x48, virtual false, abstract: false, final false
inline bool IsEvenCycle() ;

/// @brief Method IsStateValid, addr 0x5c31efc, size 0x10, virtual true, abstract: false, final true
inline bool IsStateValid(uint8_t  state) ;

/// @brief Method NetworkTimeMs, addr 0x5c32418, size 0xa4, virtual false, abstract: false, final false
inline int64_t NetworkTimeMs() ;

static inline ::GorillaTagScripts::Builder::BuilderShootingGallery* New_ctor() ;

/// @brief Method OnCowboyHit, addr 0x5c317ec, size 0xf4, virtual false, abstract: false, final false
inline void OnCowboyHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method OnDestroy, addr 0x5c31620, size 0xd8, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPieceActivate, addr 0x5c31c84, size 0x90, virtual true, abstract: false, final true
inline void OnPieceActivate() ;

/// @brief Method OnPieceCreate, addr 0x5c31ad0, size 0x168, virtual true, abstract: false, final true
inline void OnPieceCreate(int32_t  pieceType, int32_t  pieceId) ;

/// @brief Method OnPieceDeactivate, addr 0x5c31d14, size 0x144, virtual true, abstract: false, final true
inline void OnPieceDeactivate() ;

/// @brief Method OnPieceDestroy, addr 0x5c31c38, size 0x4, virtual true, abstract: false, final true
inline void OnPieceDestroy() ;

/// @brief Method OnPiecePlacementDeserialized, addr 0x5c31c3c, size 0x48, virtual true, abstract: false, final true
inline void OnPiecePlacementDeserialized() ;

/// @brief Method OnStateChanged, addr 0x5c31e58, size 0xa4, virtual true, abstract: false, final true
inline void OnStateChanged(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnStateRequest, addr 0x5c31f0c, size 0x124, virtual true, abstract: false, final true
inline void OnStateRequest(uint8_t  newState, ::GlobalNamespace::NetPlayer*  instigator, int32_t  timeStamp) ;

/// @brief Method OnWheelHit, addr 0x5c316f8, size 0xf4, virtual false, abstract: false, final false
inline void OnWheelHit(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method WheelCycleCompletionPercent, addr 0x5c323a0, size 0x78, virtual false, abstract: false, final false
inline float_t WheelCycleCompletionPercent() ;

/// @brief Method WheelCycleLengthMs, addr 0x5c324e8, size 0x2c, virtual false, abstract: false, final false
inline int64_t WheelCycleLengthMs() ;

/// @brief Method WheelHitEffects, addr 0x5c319d8, size 0xf8, virtual false, abstract: false, final false
inline void WheelHitEffects() ;

/// @brief Method WheelPlatformTime, addr 0x5c32568, size 0x54, virtual false, abstract: false, final false
inline double_t WheelPlatformTime() ;

constexpr bool const& __cordl_internal_get_activated() const;

constexpr bool& __cordl_internal_get_activated() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_colliders() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_cowboyCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_cowboyCurve() ;

constexpr float_t const& __cordl_internal_get_cowboyCycleDuration() const;

constexpr float_t& __cordl_internal_get_cowboyCycleDuration() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cowboyEnd() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cowboyEnd() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_cowboyHitAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_cowboyHitAnimation() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& __cordl_internal_get_cowboyHitNotifier() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& __cordl_internal_get_cowboyHitNotifier() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_cowboyHitSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_cowboyHitSound() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_cowboyInitLocalPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_cowboyInitLocalPos() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_cowboyInitLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_cowboyInitLocalRotation() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cowboyStart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cowboyStart() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_cowboyTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_cowboyTransform() ;

constexpr float_t const& __cordl_internal_get_cowboyVelocity() const;

constexpr float_t& __cordl_internal_get_cowboyVelocity() ;

constexpr bool const& __cordl_internal_get_currForward() const;

constexpr bool& __cordl_internal_get_currForward() ;

constexpr float_t const& __cordl_internal_get_currT() const;

constexpr float_t& __cordl_internal_get_currT() ;

constexpr ::GlobalNamespace::BuilderShootingGallery_FunctionalState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::BuilderShootingGallery_FunctionalState& __cordl_internal_get_currentState() ;

constexpr float_t const& __cordl_internal_get_distance() const;

constexpr float_t& __cordl_internal_get_distance() ;

constexpr float_t const& __cordl_internal_get_dtSinceServerUpdate() const;

constexpr float_t& __cordl_internal_get_dtSinceServerUpdate() ;

constexpr float_t const& __cordl_internal_get_hitCooldown() const;

constexpr float_t& __cordl_internal_get_hitCooldown() ;

constexpr double_t const& __cordl_internal_get_lastHitTime() const;

constexpr double_t& __cordl_internal_get_lastHitTime() ;

constexpr int32_t const& __cordl_internal_get_lastServerTimeStamp() const;

constexpr int32_t& __cordl_internal_get_lastServerTimeStamp() ;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece> const& __cordl_internal_get_myPiece() const;

constexpr ::UnityW<::GlobalNamespace::BuilderPiece>& __cordl_internal_get_myPiece() ;

constexpr float_t const& __cordl_internal_get_rotateAmt() const;

constexpr float_t& __cordl_internal_get_rotateAmt() ;

constexpr float_t const& __cordl_internal_get_rotateStartAmt() const;

constexpr float_t& __cordl_internal_get_rotateStartAmt() ;

constexpr float_t const& __cordl_internal_get_wheelCycleDuration() const;

constexpr float_t& __cordl_internal_get_wheelCycleDuration() ;

constexpr ::UnityW<::UnityEngine::Animation> const& __cordl_internal_get_wheelHitAnimation() const;

constexpr ::UnityW<::UnityEngine::Animation>& __cordl_internal_get_wheelHitAnimation() ;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier> const& __cordl_internal_get_wheelHitNotifier() const;

constexpr ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>& __cordl_internal_get_wheelHitNotifier() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_wheelHitSound() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_wheelHitSound() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_wheelInitLocalRot() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_wheelInitLocalRot() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_wheelTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_wheelTransform() ;

constexpr float_t const& __cordl_internal_get_wheelVelocity() const;

constexpr float_t& __cordl_internal_get_wheelVelocity() ;

constexpr void __cordl_internal_set_activated(bool  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_cowboyCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_cowboyCycleDuration(float_t  value) ;

constexpr void __cordl_internal_set_cowboyEnd(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cowboyHitAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_cowboyHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value) ;

constexpr void __cordl_internal_set_cowboyHitSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_cowboyInitLocalPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_cowboyInitLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_cowboyStart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cowboyTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_cowboyVelocity(float_t  value) ;

constexpr void __cordl_internal_set_currForward(bool  value) ;

constexpr void __cordl_internal_set_currT(float_t  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::BuilderShootingGallery_FunctionalState  value) ;

constexpr void __cordl_internal_set_distance(float_t  value) ;

constexpr void __cordl_internal_set_dtSinceServerUpdate(float_t  value) ;

constexpr void __cordl_internal_set_hitCooldown(float_t  value) ;

constexpr void __cordl_internal_set_lastHitTime(double_t  value) ;

constexpr void __cordl_internal_set_lastServerTimeStamp(int32_t  value) ;

constexpr void __cordl_internal_set_myPiece(::UnityW<::GlobalNamespace::BuilderPiece>  value) ;

constexpr void __cordl_internal_set_rotateAmt(float_t  value) ;

constexpr void __cordl_internal_set_rotateStartAmt(float_t  value) ;

constexpr void __cordl_internal_set_wheelCycleDuration(float_t  value) ;

constexpr void __cordl_internal_set_wheelHitAnimation(::UnityW<::UnityEngine::Animation>  value) ;

constexpr void __cordl_internal_set_wheelHitNotifier(::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  value) ;

constexpr void __cordl_internal_set_wheelHitSound(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_wheelInitLocalRot(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_wheelTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_wheelVelocity(float_t  value) ;

/// @brief Method .ctor, addr 0x5c325fc, size 0xf0, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceComponent"
constexpr ::GlobalNamespace::IBuilderPieceComponent* i___GlobalNamespace__IBuilderPieceComponent() noexcept;

/// @brief Convert to "::GlobalNamespace::IBuilderPieceFunctional"
constexpr ::GlobalNamespace::IBuilderPieceFunctional* i___GlobalNamespace__IBuilderPieceFunctional() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BuilderShootingGallery() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BuilderShootingGallery", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BuilderShootingGallery(BuilderShootingGallery && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BuilderShootingGallery", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BuilderShootingGallery(BuilderShootingGallery const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4175};

/// @brief Field myPiece, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BuilderPiece>  ___myPiece;

/// [SerializeField]
/// @brief Field wheelTransform, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___wheelTransform;

/// [SerializeField]
/// @brief Field cowboyTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cowboyTransform;

/// [SerializeField]
/// @brief Field wheelHitNotifier, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  ___wheelHitNotifier;

/// [SerializeField]
/// @brief Field cowboyHitNotifier, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SlingshotProjectileHitNotifier>  ___cowboyHitNotifier;

/// [SerializeField]
/// @brief Field colliders, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___colliders;

/// [SerializeField]
/// @brief Field wheelHitSound, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___wheelHitSound;

/// [SerializeField]
/// @brief Field wheelHitAnimation, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___wheelHitAnimation;

/// [SerializeField]
/// @brief Field cowboyHitSound, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___cowboyHitSound;

/// [SerializeField]
/// @brief Field cowboyHitAnimation, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Animation>  ___cowboyHitAnimation;

/// [SerializeField]
/// @brief Field hitCooldown, offset: 0x70, size: 0x4, def value: None
 float_t  ___hitCooldown;

/// @brief Field lastHitTime, offset: 0x78, size: 0x8, def value: None
 double_t  ___lastHitTime;

/// @brief Field currentState, offset: 0x80, size: 0x4, def value: None
 ::GlobalNamespace::BuilderShootingGallery_FunctionalState  ___currentState;

/// @brief Field activated, offset: 0x84, size: 0x1, def value: None
 bool  ___activated;

/// [SerializeField]
/// @brief Field cowboyVelocity, offset: 0x88, size: 0x4, def value: None
 float_t  ___cowboyVelocity;

/// [SerializeField]
/// @brief Field cowboyStart, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cowboyStart;

/// [SerializeField]
/// @brief Field cowboyEnd, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___cowboyEnd;

/// [SerializeField]
/// @brief Field cowboyCurve, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___cowboyCurve;

/// [SerializeField]
/// @brief Field wheelVelocity, offset: 0xa8, size: 0x4, def value: None
 float_t  ___wheelVelocity;

/// @brief Field cowboyInitLocalRotation, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___cowboyInitLocalRotation;

/// @brief Field cowboyInitLocalPos, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___cowboyInitLocalPos;

/// @brief Field wheelInitLocalRot, offset: 0xc8, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___wheelInitLocalRot;

/// @brief Field cowboyCycleDuration, offset: 0xd8, size: 0x4, def value: None
 float_t  ___cowboyCycleDuration;

/// @brief Field wheelCycleDuration, offset: 0xdc, size: 0x4, def value: None
 float_t  ___wheelCycleDuration;

/// @brief Field distance, offset: 0xe0, size: 0x4, def value: None
 float_t  ___distance;

/// @brief Field currT, offset: 0xe4, size: 0x4, def value: None
 float_t  ___currT;

/// @brief Field currForward, offset: 0xe8, size: 0x1, def value: None
 bool  ___currForward;

/// @brief Field dtSinceServerUpdate, offset: 0xec, size: 0x4, def value: None
 float_t  ___dtSinceServerUpdate;

/// @brief Field lastServerTimeStamp, offset: 0xf0, size: 0x4, def value: None
 int32_t  ___lastServerTimeStamp;

/// @brief Field rotateStartAmt, offset: 0xf4, size: 0x4, def value: None
 float_t  ___rotateStartAmt;

/// @brief Field rotateAmt, offset: 0xf8, size: 0x4, def value: None
 float_t  ___rotateAmt;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___myPiece) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___wheelTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___wheelHitNotifier) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyHitNotifier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___colliders) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___wheelHitSound) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___wheelHitAnimation) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyHitSound) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyHitAnimation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___hitCooldown) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___lastHitTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___currentState) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___activated) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyVelocity) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyStart) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyEnd) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyCurve) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___wheelVelocity) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyInitLocalRotation) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyInitLocalPos) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___wheelInitLocalRot) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___cowboyCycleDuration) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___wheelCycleDuration) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___distance) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___currT) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___currForward) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___dtSinceServerUpdate) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___lastServerTimeStamp) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___rotateStartAmt) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTagScripts::Builder::BuilderShootingGallery, ___rotateAmt) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::GorillaTagScripts::Builder::BuilderShootingGallery) == 0x100, "Size mismatch!");

} // namespace end def GorillaTagScripts::Builder
