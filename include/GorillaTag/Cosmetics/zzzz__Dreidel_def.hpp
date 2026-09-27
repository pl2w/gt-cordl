#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Dreidel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "CjLib/zzzz__FloatSpring_def.hpp"
#include "CjLib/zzzz__Vector3Spring_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Side_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_State_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__Dreidel_Variation_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Dreidel)
namespace GlobalNamespace {
struct Dreidel_Side;
}
namespace GlobalNamespace {
struct Dreidel_State;
}
namespace GlobalNamespace {
struct Dreidel_Variation;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class MeshCollider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class Dreidel;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::Dreidel*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::Dreidel*, "GorillaTag.Cosmetics", "Dreidel");
// Dependencies CjLib.FloatSpring, CjLib.Vector3Spring, GorillaTag.Cosmetics.Dreidel::Side, GorillaTag.Cosmetics.Dreidel::State, GorillaTag.Cosmetics.Dreidel::Variation, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.Dreidel
class CORDL_TYPE Dreidel : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Side = ::GlobalNamespace::Dreidel_Side;

using State = ::GlobalNamespace::Dreidel_State;

using Variation = ::GlobalNamespace::Dreidel_Variation;

/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bodyRect, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_bodyRect, put=__cordl_internal_set_bodyRect)) ::UnityEngine::Vector2  bodyRect;

/// @brief Field bottomPointOffset, offset 0x64, size 0xc 
 __declspec(property(get=__cordl_internal_get_bottomPointOffset, put=__cordl_internal_set_bottomPointOffset)) ::UnityEngine::Vector3  bottomPointOffset;

/// @brief Field bounceFallSwitchTime, offset 0xf0, size 0x4 
 __declspec(property(get=__cordl_internal_get_bounceFallSwitchTime, put=__cordl_internal_set_bounceFallSwitchTime)) float_t  bounceFallSwitchTime;

/// @brief Field canStartSpin, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_canStartSpin, put=__cordl_internal_set_canStartSpin)) bool  canStartSpin;

/// @brief Field centerOfMassOffset, offset 0x58, size 0xc 
 __declspec(property(get=__cordl_internal_get_centerOfMassOffset, put=__cordl_internal_set_centerOfMassOffset)) ::UnityEngine::Vector3  centerOfMassOffset;

/// @brief Field confettiHeight, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_confettiHeight, put=__cordl_internal_set_confettiHeight)) float_t  confettiHeight;

/// @brief Field debugDraw, offset 0x1c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDraw, put=__cordl_internal_set_debugDraw)) bool  debugDraw;

/// @brief Field dreidelCollider, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dreidelCollider, put=__cordl_internal_set_dreidelCollider)) ::UnityW<::UnityEngine::MeshCollider>  dreidelCollider;

/// @brief Field fallSound, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallSound, put=__cordl_internal_set_fallSound)) ::UnityW<::UnityEngine::AudioClip>  fallSound;

/// @brief Field fallTimeSlowTurn, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_fallTimeSlowTurn, put=__cordl_internal_set_fallTimeSlowTurn)) float_t  fallTimeSlowTurn;

/// @brief Field fallTimeTumble, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_fallTimeTumble, put=__cordl_internal_set_fallTimeTumble)) float_t  fallTimeTumble;

/// @brief Field falseTargetReached, offset 0x134, size 0x1 
 __declspec(property(get=__cordl_internal_get_falseTargetReached, put=__cordl_internal_set_falseTargetReached)) bool  falseTargetReached;

/// @brief Field gimelConfetti, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_gimelConfetti, put=__cordl_internal_set_gimelConfetti)) ::UnityW<::UnityEngine::ParticleSystem>  gimelConfetti;

/// @brief Field gimelConfettiSound, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_gimelConfettiSound, put=__cordl_internal_set_gimelConfettiSound)) ::UnityW<::UnityEngine::AudioClip>  gimelConfettiSound;

/// @brief Field groundPointSpring, offset 0x180, size 0x20 
 __declspec(property(get=__cordl_internal_get_groundPointSpring, put=__cordl_internal_set_groundPointSpring)) ::CjLib::Vector3Spring  groundPointSpring;

/// @brief Field groundTrackingDampingRatio, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundTrackingDampingRatio, put=__cordl_internal_set_groundTrackingDampingRatio)) float_t  groundTrackingDampingRatio;

/// @brief Field groundTrackingFrequency, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundTrackingFrequency, put=__cordl_internal_set_groundTrackingFrequency)) float_t  groundTrackingFrequency;

/// @brief Field hasLanded, offset 0x135, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLanded, put=__cordl_internal_set_hasLanded)) bool  hasLanded;

/// @brief Field landingSide, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_landingSide, put=__cordl_internal_set_landingSide)) ::GlobalNamespace::Dreidel_Side  landingSide;

/// @brief Field landingTiltLeadingTarget, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_landingTiltLeadingTarget, put=__cordl_internal_set_landingTiltLeadingTarget)) ::UnityEngine::Vector2  landingTiltLeadingTarget;

/// @brief Field landingTiltTarget, offset 0x1b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_landingTiltTarget, put=__cordl_internal_set_landingTiltTarget)) ::UnityEngine::Vector2  landingTiltTarget;

/// @brief Field landingTiltValues, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_landingTiltValues, put=__cordl_internal_set_landingTiltValues)) ::ArrayW<::UnityEngine::Vector2>  landingTiltValues;

/// @brief Field landingVariation, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_landingVariation, put=__cordl_internal_set_landingVariation)) ::GlobalNamespace::Dreidel_Variation  landingVariation;

/// @brief Field pathDir, offset 0x144, size 0xc 
 __declspec(property(get=__cordl_internal_get_pathDir, put=__cordl_internal_set_pathDir)) ::UnityEngine::Vector3  pathDir;

/// @brief Field pathEndTurnRate, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_pathEndTurnRate, put=__cordl_internal_set_pathEndTurnRate)) float_t  pathEndTurnRate;

/// @brief Field pathMoveSpeed, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_pathMoveSpeed, put=__cordl_internal_set_pathMoveSpeed)) float_t  pathMoveSpeed;

/// @brief Field pathOffset, offset 0x138, size 0xc 
 __declspec(property(get=__cordl_internal_get_pathOffset, put=__cordl_internal_set_pathOffset)) ::UnityEngine::Vector3  pathOffset;

/// @brief Field pathStartTurnRate, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_pathStartTurnRate, put=__cordl_internal_set_pathStartTurnRate)) float_t  pathStartTurnRate;

/// @brief Field pathTurnRateSinOffset, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pathTurnRateSinOffset, put=__cordl_internal_set_pathTurnRateSinOffset)) float_t  pathTurnRateSinOffset;

/// @brief Field respawnTimeAfterLanding, offset 0xf8, size 0x4 
 __declspec(property(get=__cordl_internal_get_respawnTimeAfterLanding, put=__cordl_internal_set_respawnTimeAfterLanding)) float_t  respawnTimeAfterLanding;

/// @brief Field slowTurnDampingRatio, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowTurnDampingRatio, put=__cordl_internal_set_slowTurnDampingRatio)) float_t  slowTurnDampingRatio;

/// @brief Field slowTurnFrequency, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowTurnFrequency, put=__cordl_internal_set_slowTurnFrequency)) float_t  slowTurnFrequency;

/// @brief Field slowTurnSwitchTime, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_slowTurnSwitchTime, put=__cordl_internal_set_slowTurnSwitchTime)) float_t  slowTurnSwitchTime;

/// @brief Field smoothFallDampingRatio, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothFallDampingRatio, put=__cordl_internal_set_smoothFallDampingRatio)) float_t  smoothFallDampingRatio;

/// @brief Field smoothFallFrequency, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_smoothFallFrequency, put=__cordl_internal_set_smoothFallFrequency)) float_t  smoothFallFrequency;

/// @brief Field spinAngle, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinAngle, put=__cordl_internal_set_spinAngle)) float_t  spinAngle;

/// @brief Field spinAxis, offset 0x118, size 0xc 
 __declspec(property(get=__cordl_internal_get_spinAxis, put=__cordl_internal_set_spinAxis)) ::UnityEngine::Vector3  spinAxis;

/// @brief Field spinCounterClockwise, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_spinCounterClockwise, put=__cordl_internal_set_spinCounterClockwise)) bool  spinCounterClockwise;

/// @brief Field spinLoopAudio, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinLoopAudio, put=__cordl_internal_set_spinLoopAudio)) ::UnityW<::UnityEngine::AudioClip>  spinLoopAudio;

/// @brief Field spinSpeed, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinSpeed, put=__cordl_internal_set_spinSpeed)) float_t  spinSpeed;

/// @brief Field spinSpeedEnd, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinSpeedEnd, put=__cordl_internal_set_spinSpeedEnd)) float_t  spinSpeedEnd;

/// @brief Field spinSpeedSpring, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinSpeedSpring, put=__cordl_internal_set_spinSpeedSpring)) ::CjLib::FloatSpring  spinSpeedSpring;

/// @brief Field spinSpeedStart, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinSpeedStart, put=__cordl_internal_set_spinSpeedStart)) float_t  spinSpeedStart;

/// @brief Field spinSpeedStopRate, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinSpeedStopRate, put=__cordl_internal_set_spinSpeedStopRate)) float_t  spinSpeedStopRate;

/// @brief Field spinStartTime, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinStartTime, put=__cordl_internal_set_spinStartTime)) double_t  spinStartTime;

/// @brief Field spinTime, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinTime, put=__cordl_internal_set_spinTime)) float_t  spinTime;

/// @brief Field spinTimeRange, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinTimeRange, put=__cordl_internal_set_spinTimeRange)) ::UnityEngine::Vector2  spinTimeRange;

/// @brief Field spinTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_spinTransform, put=__cordl_internal_set_spinTransform)) ::UnityW<::UnityEngine::Transform>  spinTransform;

/// @brief Field spinWobbleAmplitude, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinWobbleAmplitude, put=__cordl_internal_set_spinWobbleAmplitude)) float_t  spinWobbleAmplitude;

/// @brief Field spinWobbleAmplitudeEndMin, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinWobbleAmplitudeEndMin, put=__cordl_internal_set_spinWobbleAmplitudeEndMin)) float_t  spinWobbleAmplitudeEndMin;

/// @brief Field spinWobbleFrequency, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_spinWobbleFrequency, put=__cordl_internal_set_spinWobbleFrequency)) float_t  spinWobbleFrequency;

/// @brief Field state, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_state, put=__cordl_internal_set_state)) ::GlobalNamespace::Dreidel_State  state;

/// @brief Field stateStartTime, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_stateStartTime, put=__cordl_internal_set_stateStartTime)) double_t  stateStartTime;

/// @brief Field surfaceCheckDistance, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceCheckDistance, put=__cordl_internal_set_surfaceCheckDistance)) float_t  surfaceCheckDistance;

/// @brief Field surfaceDreidelAngleThreshold, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceDreidelAngleThreshold, put=__cordl_internal_set_surfaceDreidelAngleThreshold)) float_t  surfaceDreidelAngleThreshold;

/// @brief Field surfaceLayers, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceLayers, put=__cordl_internal_set_surfaceLayers)) ::UnityEngine::LayerMask  surfaceLayers;

/// @brief Field surfacePlaneNormal, offset 0x15c, size 0xc 
 __declspec(property(get=__cordl_internal_get_surfacePlaneNormal, put=__cordl_internal_set_surfacePlaneNormal)) ::UnityEngine::Vector3  surfacePlaneNormal;

/// @brief Field surfacePlanePoint, offset 0x150, size 0xc 
 __declspec(property(get=__cordl_internal_get_surfacePlanePoint, put=__cordl_internal_set_surfacePlanePoint)) ::UnityEngine::Vector3  surfacePlanePoint;

/// @brief Field surfaceUprightThreshold, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceUprightThreshold, put=__cordl_internal_set_surfaceUprightThreshold)) float_t  surfaceUprightThreshold;

/// @brief Field tiltFrontBack, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltFrontBack, put=__cordl_internal_set_tiltFrontBack)) float_t  tiltFrontBack;

/// @brief Field tiltFrontBackSpring, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_tiltFrontBackSpring, put=__cordl_internal_set_tiltFrontBackSpring)) ::CjLib::FloatSpring  tiltFrontBackSpring;

/// @brief Field tiltLeftRight, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltLeftRight, put=__cordl_internal_set_tiltLeftRight)) float_t  tiltLeftRight;

/// @brief Field tiltLeftRightSpring, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_tiltLeftRightSpring, put=__cordl_internal_set_tiltLeftRightSpring)) ::CjLib::FloatSpring  tiltLeftRightSpring;

/// @brief Field tiltWobble, offset 0x130, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltWobble, put=__cordl_internal_set_tiltWobble)) float_t  tiltWobble;

/// @brief Field tumbleFallDampingRatio, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_tumbleFallDampingRatio, put=__cordl_internal_set_tumbleFallDampingRatio)) float_t  tumbleFallDampingRatio;

/// @brief Field tumbleFallFrequency, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_tumbleFallFrequency, put=__cordl_internal_set_tumbleFallFrequency)) float_t  tumbleFallFrequency;

/// @brief Field tumbleFallFrontBackDampingRatio, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_tumbleFallFrontBackDampingRatio, put=__cordl_internal_set_tumbleFallFrontBackDampingRatio)) float_t  tumbleFallFrontBackDampingRatio;

/// @brief Field tumbleFallFrontBackFrequency, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_tumbleFallFrontBackFrequency, put=__cordl_internal_set_tumbleFallFrontBackFrequency)) float_t  tumbleFallFrontBackFrequency;

/// @brief Method AlignToSurfacePlane, addr 0x5d8ebb0, size 0x18c, virtual false, abstract: false, final false
inline void AlignToSurfacePlane() ;

/// @brief Method GetGroundContactPoint, addr 0x5d8ed3c, size 0x134, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetGroundContactPoint() ;

/// @brief Method GetTiltVectorsForSideWithNext, addr 0x5d8f53c, size 0xc4, virtual false, abstract: false, final false
inline void GetTiltVectorsForSideWithNext(::GlobalNamespace::Dreidel_Side  side, ::by_ref<::UnityEngine::Vector2>  sideTilt, ::by_ref<::UnityEngine::Vector2>  nextSideTilt) ;

/// @brief Method GetTiltVectorsForSideWithPrev, addr 0x5d8f47c, size 0xc0, virtual false, abstract: false, final false
inline void GetTiltVectorsForSideWithPrev(::GlobalNamespace::Dreidel_Side  side, ::by_ref<::UnityEngine::Vector2>  sideTilt, ::by_ref<::UnityEngine::Vector2>  prevSideTilt) ;

/// @brief Method LateUpdate, addr 0x5d8dcac, size 0xf04, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GorillaTag::Cosmetics::Dreidel* New_ctor() ;

/// @brief Method SetSpinStartData, addr 0x5d8dc7c, size 0x30, virtual false, abstract: false, final false
inline void SetSpinStartData(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Vector3  surfaceNormal, float_t  duration, bool  counterClockwise, ::GlobalNamespace::Dreidel_Side  side, ::GlobalNamespace::Dreidel_Variation  variation, double_t  startTime) ;

/// @brief Method Spin, addr 0x5d8d904, size 0x4, virtual false, abstract: false, final false
inline void Spin() ;

/// @brief Method StartFall, addr 0x5d8f248, size 0x234, virtual false, abstract: false, final false
inline void StartFall() ;

/// @brief Method StartFindingSurfaces, addr 0x5d8d5f4, size 0x310, virtual false, abstract: false, final false
inline void StartFindingSurfaces() ;

/// @brief Method StartIdle, addr 0x5d8d2c4, size 0x30c, virtual false, abstract: false, final false
inline void StartIdle() ;

/// @brief Method StartSpin, addr 0x5d8d908, size 0x1ec, virtual false, abstract: false, final false
inline void StartSpin() ;

/// @brief Method TryCheckForSurfaces, addr 0x5d8d5d0, size 0x24, virtual false, abstract: false, final false
inline bool TryCheckForSurfaces() ;

/// @brief Method TryGetSpinStartData, addr 0x5d8daf4, size 0x188, virtual false, abstract: false, final false
inline bool TryGetSpinStartData(::by_ref<::UnityEngine::Vector3>  surfacePoint, ::by_ref<::UnityEngine::Vector3>  surfaceNormal, ::by_ref<float_t>  randomDuration, ::by_ref<::GlobalNamespace::Dreidel_Side>  randomSide, ::by_ref<::GlobalNamespace::Dreidel_Variation>  randomVariation, ::by_ref<double_t>  startTime) ;

/// @brief Method TrySetIdle, addr 0x5d8d288, size 0x3c, virtual false, abstract: false, final false
inline bool TrySetIdle() ;

/// @brief Method UpdateSpinTransform, addr 0x5d8ee70, size 0x3d8, virtual false, abstract: false, final false
inline void UpdateSpinTransform() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_bodyRect() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_bodyRect() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_bottomPointOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_bottomPointOffset() ;

constexpr float_t const& __cordl_internal_get_bounceFallSwitchTime() const;

constexpr float_t& __cordl_internal_get_bounceFallSwitchTime() ;

constexpr bool const& __cordl_internal_get_canStartSpin() const;

constexpr bool& __cordl_internal_get_canStartSpin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_centerOfMassOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_centerOfMassOffset() ;

constexpr float_t const& __cordl_internal_get_confettiHeight() const;

constexpr float_t& __cordl_internal_get_confettiHeight() ;

constexpr bool const& __cordl_internal_get_debugDraw() const;

constexpr bool& __cordl_internal_get_debugDraw() ;

constexpr ::UnityW<::UnityEngine::MeshCollider> const& __cordl_internal_get_dreidelCollider() const;

constexpr ::UnityW<::UnityEngine::MeshCollider>& __cordl_internal_get_dreidelCollider() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_fallSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_fallSound() ;

constexpr float_t const& __cordl_internal_get_fallTimeSlowTurn() const;

constexpr float_t& __cordl_internal_get_fallTimeSlowTurn() ;

constexpr float_t const& __cordl_internal_get_fallTimeTumble() const;

constexpr float_t& __cordl_internal_get_fallTimeTumble() ;

constexpr bool const& __cordl_internal_get_falseTargetReached() const;

constexpr bool& __cordl_internal_get_falseTargetReached() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_gimelConfetti() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_gimelConfetti() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_gimelConfettiSound() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_gimelConfettiSound() ;

constexpr ::CjLib::Vector3Spring const& __cordl_internal_get_groundPointSpring() const;

constexpr ::CjLib::Vector3Spring& __cordl_internal_get_groundPointSpring() ;

constexpr float_t const& __cordl_internal_get_groundTrackingDampingRatio() const;

constexpr float_t& __cordl_internal_get_groundTrackingDampingRatio() ;

constexpr float_t const& __cordl_internal_get_groundTrackingFrequency() const;

constexpr float_t& __cordl_internal_get_groundTrackingFrequency() ;

constexpr bool const& __cordl_internal_get_hasLanded() const;

constexpr bool& __cordl_internal_get_hasLanded() ;

constexpr ::GlobalNamespace::Dreidel_Side const& __cordl_internal_get_landingSide() const;

constexpr ::GlobalNamespace::Dreidel_Side& __cordl_internal_get_landingSide() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_landingTiltLeadingTarget() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_landingTiltLeadingTarget() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_landingTiltTarget() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_landingTiltTarget() ;

constexpr ::ArrayW<::UnityEngine::Vector2> const& __cordl_internal_get_landingTiltValues() const;

constexpr ::ArrayW<::UnityEngine::Vector2>& __cordl_internal_get_landingTiltValues() ;

constexpr ::GlobalNamespace::Dreidel_Variation const& __cordl_internal_get_landingVariation() const;

constexpr ::GlobalNamespace::Dreidel_Variation& __cordl_internal_get_landingVariation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pathDir() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pathDir() ;

constexpr float_t const& __cordl_internal_get_pathEndTurnRate() const;

constexpr float_t& __cordl_internal_get_pathEndTurnRate() ;

constexpr float_t const& __cordl_internal_get_pathMoveSpeed() const;

constexpr float_t& __cordl_internal_get_pathMoveSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_pathOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_pathOffset() ;

constexpr float_t const& __cordl_internal_get_pathStartTurnRate() const;

constexpr float_t& __cordl_internal_get_pathStartTurnRate() ;

constexpr float_t const& __cordl_internal_get_pathTurnRateSinOffset() const;

constexpr float_t& __cordl_internal_get_pathTurnRateSinOffset() ;

constexpr float_t const& __cordl_internal_get_respawnTimeAfterLanding() const;

constexpr float_t& __cordl_internal_get_respawnTimeAfterLanding() ;

constexpr float_t const& __cordl_internal_get_slowTurnDampingRatio() const;

constexpr float_t& __cordl_internal_get_slowTurnDampingRatio() ;

constexpr float_t const& __cordl_internal_get_slowTurnFrequency() const;

constexpr float_t& __cordl_internal_get_slowTurnFrequency() ;

constexpr float_t const& __cordl_internal_get_slowTurnSwitchTime() const;

constexpr float_t& __cordl_internal_get_slowTurnSwitchTime() ;

constexpr float_t const& __cordl_internal_get_smoothFallDampingRatio() const;

constexpr float_t& __cordl_internal_get_smoothFallDampingRatio() ;

constexpr float_t const& __cordl_internal_get_smoothFallFrequency() const;

constexpr float_t& __cordl_internal_get_smoothFallFrequency() ;

constexpr float_t const& __cordl_internal_get_spinAngle() const;

constexpr float_t& __cordl_internal_get_spinAngle() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_spinAxis() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_spinAxis() ;

constexpr bool const& __cordl_internal_get_spinCounterClockwise() const;

constexpr bool& __cordl_internal_get_spinCounterClockwise() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_spinLoopAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_spinLoopAudio() ;

constexpr float_t const& __cordl_internal_get_spinSpeed() const;

constexpr float_t& __cordl_internal_get_spinSpeed() ;

constexpr float_t const& __cordl_internal_get_spinSpeedEnd() const;

constexpr float_t& __cordl_internal_get_spinSpeedEnd() ;

constexpr ::CjLib::FloatSpring const& __cordl_internal_get_spinSpeedSpring() const;

constexpr ::CjLib::FloatSpring& __cordl_internal_get_spinSpeedSpring() ;

constexpr float_t const& __cordl_internal_get_spinSpeedStart() const;

constexpr float_t& __cordl_internal_get_spinSpeedStart() ;

constexpr float_t const& __cordl_internal_get_spinSpeedStopRate() const;

constexpr float_t& __cordl_internal_get_spinSpeedStopRate() ;

constexpr double_t const& __cordl_internal_get_spinStartTime() const;

constexpr double_t& __cordl_internal_get_spinStartTime() ;

constexpr float_t const& __cordl_internal_get_spinTime() const;

constexpr float_t& __cordl_internal_get_spinTime() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_spinTimeRange() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_spinTimeRange() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_spinTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_spinTransform() ;

constexpr float_t const& __cordl_internal_get_spinWobbleAmplitude() const;

constexpr float_t& __cordl_internal_get_spinWobbleAmplitude() ;

constexpr float_t const& __cordl_internal_get_spinWobbleAmplitudeEndMin() const;

constexpr float_t& __cordl_internal_get_spinWobbleAmplitudeEndMin() ;

constexpr float_t const& __cordl_internal_get_spinWobbleFrequency() const;

constexpr float_t& __cordl_internal_get_spinWobbleFrequency() ;

constexpr ::GlobalNamespace::Dreidel_State const& __cordl_internal_get_state() const;

constexpr ::GlobalNamespace::Dreidel_State& __cordl_internal_get_state() ;

constexpr double_t const& __cordl_internal_get_stateStartTime() const;

constexpr double_t& __cordl_internal_get_stateStartTime() ;

constexpr float_t const& __cordl_internal_get_surfaceCheckDistance() const;

constexpr float_t& __cordl_internal_get_surfaceCheckDistance() ;

constexpr float_t const& __cordl_internal_get_surfaceDreidelAngleThreshold() const;

constexpr float_t& __cordl_internal_get_surfaceDreidelAngleThreshold() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_surfaceLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_surfaceLayers() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_surfacePlaneNormal() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_surfacePlaneNormal() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_surfacePlanePoint() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_surfacePlanePoint() ;

constexpr float_t const& __cordl_internal_get_surfaceUprightThreshold() const;

constexpr float_t& __cordl_internal_get_surfaceUprightThreshold() ;

constexpr float_t const& __cordl_internal_get_tiltFrontBack() const;

constexpr float_t& __cordl_internal_get_tiltFrontBack() ;

constexpr ::CjLib::FloatSpring const& __cordl_internal_get_tiltFrontBackSpring() const;

constexpr ::CjLib::FloatSpring& __cordl_internal_get_tiltFrontBackSpring() ;

constexpr float_t const& __cordl_internal_get_tiltLeftRight() const;

constexpr float_t& __cordl_internal_get_tiltLeftRight() ;

constexpr ::CjLib::FloatSpring const& __cordl_internal_get_tiltLeftRightSpring() const;

constexpr ::CjLib::FloatSpring& __cordl_internal_get_tiltLeftRightSpring() ;

constexpr float_t const& __cordl_internal_get_tiltWobble() const;

constexpr float_t& __cordl_internal_get_tiltWobble() ;

constexpr float_t const& __cordl_internal_get_tumbleFallDampingRatio() const;

constexpr float_t& __cordl_internal_get_tumbleFallDampingRatio() ;

constexpr float_t const& __cordl_internal_get_tumbleFallFrequency() const;

constexpr float_t& __cordl_internal_get_tumbleFallFrequency() ;

constexpr float_t const& __cordl_internal_get_tumbleFallFrontBackDampingRatio() const;

constexpr float_t& __cordl_internal_get_tumbleFallFrontBackDampingRatio() ;

constexpr float_t const& __cordl_internal_get_tumbleFallFrontBackFrequency() const;

constexpr float_t& __cordl_internal_get_tumbleFallFrontBackFrequency() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bodyRect(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_bottomPointOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_bounceFallSwitchTime(float_t  value) ;

constexpr void __cordl_internal_set_canStartSpin(bool  value) ;

constexpr void __cordl_internal_set_centerOfMassOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_confettiHeight(float_t  value) ;

constexpr void __cordl_internal_set_debugDraw(bool  value) ;

constexpr void __cordl_internal_set_dreidelCollider(::UnityW<::UnityEngine::MeshCollider>  value) ;

constexpr void __cordl_internal_set_fallSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_fallTimeSlowTurn(float_t  value) ;

constexpr void __cordl_internal_set_fallTimeTumble(float_t  value) ;

constexpr void __cordl_internal_set_falseTargetReached(bool  value) ;

constexpr void __cordl_internal_set_gimelConfetti(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_gimelConfettiSound(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_groundPointSpring(::CjLib::Vector3Spring  value) ;

constexpr void __cordl_internal_set_groundTrackingDampingRatio(float_t  value) ;

constexpr void __cordl_internal_set_groundTrackingFrequency(float_t  value) ;

constexpr void __cordl_internal_set_hasLanded(bool  value) ;

constexpr void __cordl_internal_set_landingSide(::GlobalNamespace::Dreidel_Side  value) ;

constexpr void __cordl_internal_set_landingTiltLeadingTarget(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_landingTiltTarget(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_landingTiltValues(::ArrayW<::UnityEngine::Vector2>  value) ;

constexpr void __cordl_internal_set_landingVariation(::GlobalNamespace::Dreidel_Variation  value) ;

constexpr void __cordl_internal_set_pathDir(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pathEndTurnRate(float_t  value) ;

constexpr void __cordl_internal_set_pathMoveSpeed(float_t  value) ;

constexpr void __cordl_internal_set_pathOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pathStartTurnRate(float_t  value) ;

constexpr void __cordl_internal_set_pathTurnRateSinOffset(float_t  value) ;

constexpr void __cordl_internal_set_respawnTimeAfterLanding(float_t  value) ;

constexpr void __cordl_internal_set_slowTurnDampingRatio(float_t  value) ;

constexpr void __cordl_internal_set_slowTurnFrequency(float_t  value) ;

constexpr void __cordl_internal_set_slowTurnSwitchTime(float_t  value) ;

constexpr void __cordl_internal_set_smoothFallDampingRatio(float_t  value) ;

constexpr void __cordl_internal_set_smoothFallFrequency(float_t  value) ;

constexpr void __cordl_internal_set_spinAngle(float_t  value) ;

constexpr void __cordl_internal_set_spinAxis(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_spinCounterClockwise(bool  value) ;

constexpr void __cordl_internal_set_spinLoopAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_spinSpeed(float_t  value) ;

constexpr void __cordl_internal_set_spinSpeedEnd(float_t  value) ;

constexpr void __cordl_internal_set_spinSpeedSpring(::CjLib::FloatSpring  value) ;

constexpr void __cordl_internal_set_spinSpeedStart(float_t  value) ;

constexpr void __cordl_internal_set_spinSpeedStopRate(float_t  value) ;

constexpr void __cordl_internal_set_spinStartTime(double_t  value) ;

constexpr void __cordl_internal_set_spinTime(float_t  value) ;

constexpr void __cordl_internal_set_spinTimeRange(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_spinTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_spinWobbleAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_spinWobbleAmplitudeEndMin(float_t  value) ;

constexpr void __cordl_internal_set_spinWobbleFrequency(float_t  value) ;

constexpr void __cordl_internal_set_state(::GlobalNamespace::Dreidel_State  value) ;

constexpr void __cordl_internal_set_stateStartTime(double_t  value) ;

constexpr void __cordl_internal_set_surfaceCheckDistance(float_t  value) ;

constexpr void __cordl_internal_set_surfaceDreidelAngleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_surfaceLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_surfacePlaneNormal(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_surfacePlanePoint(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_surfaceUprightThreshold(float_t  value) ;

constexpr void __cordl_internal_set_tiltFrontBack(float_t  value) ;

constexpr void __cordl_internal_set_tiltFrontBackSpring(::CjLib::FloatSpring  value) ;

constexpr void __cordl_internal_set_tiltLeftRight(float_t  value) ;

constexpr void __cordl_internal_set_tiltLeftRightSpring(::CjLib::FloatSpring  value) ;

constexpr void __cordl_internal_set_tiltWobble(float_t  value) ;

constexpr void __cordl_internal_set_tumbleFallDampingRatio(float_t  value) ;

constexpr void __cordl_internal_set_tumbleFallFrequency(float_t  value) ;

constexpr void __cordl_internal_set_tumbleFallFrontBackDampingRatio(float_t  value) ;

constexpr void __cordl_internal_set_tumbleFallFrontBackFrequency(float_t  value) ;

/// @brief Method .ctor, addr 0x5d8f600, size 0x2b4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Dreidel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Dreidel", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Dreidel(Dreidel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Dreidel", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Dreidel(Dreidel const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4917};

/// [Header("References")]
/// [SerializeField]
/// @brief Field spinTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___spinTransform;

/// [SerializeField]
/// @brief Field dreidelCollider, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::MeshCollider>  ___dreidelCollider;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field spinLoopAudio, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___spinLoopAudio;

/// [SerializeField]
/// @brief Field fallSound, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___fallSound;

/// [SerializeField]
/// @brief Field gimelConfettiSound, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___gimelConfettiSound;

/// [SerializeField]
/// @brief Field gimelConfetti, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___gimelConfetti;

/// [Header("Offsets")]
/// [SerializeField]
/// @brief Field centerOfMassOffset, offset: 0x58, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___centerOfMassOffset;

/// [SerializeField]
/// @brief Field bottomPointOffset, offset: 0x64, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___bottomPointOffset;

/// [SerializeField]
/// @brief Field bodyRect, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___bodyRect;

/// [SerializeField]
/// @brief Field confettiHeight, offset: 0x78, size: 0x4, def value: None
 float_t  ___confettiHeight;

/// [Header("Surface Detection")]
/// [SerializeField]
/// @brief Field surfaceCheckDistance, offset: 0x7c, size: 0x4, def value: None
 float_t  ___surfaceCheckDistance;

/// [SerializeField]
/// @brief Field surfaceUprightThreshold, offset: 0x80, size: 0x4, def value: None
 float_t  ___surfaceUprightThreshold;

/// [SerializeField]
/// @brief Field surfaceDreidelAngleThreshold, offset: 0x84, size: 0x4, def value: None
 float_t  ___surfaceDreidelAngleThreshold;

/// [SerializeField]
/// @brief Field surfaceLayers, offset: 0x88, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___surfaceLayers;

/// [Header("Spin Paramss")]
/// [SerializeField]
/// @brief Field spinSpeedStart, offset: 0x8c, size: 0x4, def value: None
 float_t  ___spinSpeedStart;

/// [SerializeField]
/// @brief Field spinSpeedEnd, offset: 0x90, size: 0x4, def value: None
 float_t  ___spinSpeedEnd;

/// [SerializeField]
/// @brief Field spinTime, offset: 0x94, size: 0x4, def value: None
 float_t  ___spinTime;

/// [SerializeField]
/// @brief Field spinTimeRange, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___spinTimeRange;

/// [SerializeField]
/// @brief Field spinWobbleFrequency, offset: 0xa0, size: 0x4, def value: None
 float_t  ___spinWobbleFrequency;

/// [SerializeField]
/// @brief Field spinWobbleAmplitude, offset: 0xa4, size: 0x4, def value: None
 float_t  ___spinWobbleAmplitude;

/// [SerializeField]
/// @brief Field spinWobbleAmplitudeEndMin, offset: 0xa8, size: 0x4, def value: None
 float_t  ___spinWobbleAmplitudeEndMin;

/// [SerializeField]
/// @brief Field tiltFrontBack, offset: 0xac, size: 0x4, def value: None
 float_t  ___tiltFrontBack;

/// [SerializeField]
/// @brief Field tiltLeftRight, offset: 0xb0, size: 0x4, def value: None
 float_t  ___tiltLeftRight;

/// [SerializeField]
/// @brief Field groundTrackingDampingRatio, offset: 0xb4, size: 0x4, def value: None
 float_t  ___groundTrackingDampingRatio;

/// [SerializeField]
/// @brief Field groundTrackingFrequency, offset: 0xb8, size: 0x4, def value: None
 float_t  ___groundTrackingFrequency;

/// [Header("Motion Path")]
/// [SerializeField]
/// @brief Field pathMoveSpeed, offset: 0xbc, size: 0x4, def value: None
 float_t  ___pathMoveSpeed;

/// [SerializeField]
/// @brief Field pathStartTurnRate, offset: 0xc0, size: 0x4, def value: None
 float_t  ___pathStartTurnRate;

/// [SerializeField]
/// @brief Field pathEndTurnRate, offset: 0xc4, size: 0x4, def value: None
 float_t  ___pathEndTurnRate;

/// [SerializeField]
/// @brief Field pathTurnRateSinOffset, offset: 0xc8, size: 0x4, def value: None
 float_t  ___pathTurnRateSinOffset;

/// [Header("Falling Params")]
/// [SerializeField]
/// @brief Field spinSpeedStopRate, offset: 0xcc, size: 0x4, def value: None
 float_t  ___spinSpeedStopRate;

/// [SerializeField]
/// @brief Field tumbleFallDampingRatio, offset: 0xd0, size: 0x4, def value: None
 float_t  ___tumbleFallDampingRatio;

/// [SerializeField]
/// @brief Field tumbleFallFrequency, offset: 0xd4, size: 0x4, def value: None
 float_t  ___tumbleFallFrequency;

/// [SerializeField]
/// @brief Field tumbleFallFrontBackDampingRatio, offset: 0xd8, size: 0x4, def value: None
 float_t  ___tumbleFallFrontBackDampingRatio;

/// [SerializeField]
/// @brief Field tumbleFallFrontBackFrequency, offset: 0xdc, size: 0x4, def value: None
 float_t  ___tumbleFallFrontBackFrequency;

/// [SerializeField]
/// @brief Field smoothFallDampingRatio, offset: 0xe0, size: 0x4, def value: None
 float_t  ___smoothFallDampingRatio;

/// [SerializeField]
/// @brief Field smoothFallFrequency, offset: 0xe4, size: 0x4, def value: None
 float_t  ___smoothFallFrequency;

/// [SerializeField]
/// @brief Field slowTurnDampingRatio, offset: 0xe8, size: 0x4, def value: None
 float_t  ___slowTurnDampingRatio;

/// [SerializeField]
/// @brief Field slowTurnFrequency, offset: 0xec, size: 0x4, def value: None
 float_t  ___slowTurnFrequency;

/// [SerializeField]
/// @brief Field bounceFallSwitchTime, offset: 0xf0, size: 0x4, def value: None
 float_t  ___bounceFallSwitchTime;

/// [SerializeField]
/// @brief Field slowTurnSwitchTime, offset: 0xf4, size: 0x4, def value: None
 float_t  ___slowTurnSwitchTime;

/// [SerializeField]
/// @brief Field respawnTimeAfterLanding, offset: 0xf8, size: 0x4, def value: None
 float_t  ___respawnTimeAfterLanding;

/// [SerializeField]
/// @brief Field fallTimeTumble, offset: 0xfc, size: 0x4, def value: None
 float_t  ___fallTimeTumble;

/// [SerializeField]
/// @brief Field fallTimeSlowTurn, offset: 0x100, size: 0x4, def value: None
 float_t  ___fallTimeSlowTurn;

/// @brief Field state, offset: 0x104, size: 0x4, def value: None
 ::GlobalNamespace::Dreidel_State  ___state;

/// @brief Field stateStartTime, offset: 0x108, size: 0x8, def value: None
 double_t  ___stateStartTime;

/// @brief Field spinSpeed, offset: 0x110, size: 0x4, def value: None
 float_t  ___spinSpeed;

/// @brief Field spinAngle, offset: 0x114, size: 0x4, def value: None
 float_t  ___spinAngle;

/// @brief Field spinAxis, offset: 0x118, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___spinAxis;

/// @brief Field canStartSpin, offset: 0x124, size: 0x1, def value: None
 bool  ___canStartSpin;

/// @brief Field spinStartTime, offset: 0x128, size: 0x8, def value: None
 double_t  ___spinStartTime;

/// @brief Field tiltWobble, offset: 0x130, size: 0x4, def value: None
 float_t  ___tiltWobble;

/// @brief Field falseTargetReached, offset: 0x134, size: 0x1, def value: None
 bool  ___falseTargetReached;

/// @brief Field hasLanded, offset: 0x135, size: 0x1, def value: None
 bool  ___hasLanded;

/// @brief Field pathOffset, offset: 0x138, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pathOffset;

/// @brief Field pathDir, offset: 0x144, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___pathDir;

/// @brief Field surfacePlanePoint, offset: 0x150, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___surfacePlanePoint;

/// @brief Field surfacePlaneNormal, offset: 0x15c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___surfacePlaneNormal;

/// @brief Field tiltFrontBackSpring, offset: 0x168, size: 0x8, def value: None
 ::CjLib::FloatSpring  ___tiltFrontBackSpring;

/// @brief Field tiltLeftRightSpring, offset: 0x170, size: 0x8, def value: None
 ::CjLib::FloatSpring  ___tiltLeftRightSpring;

/// @brief Field spinSpeedSpring, offset: 0x178, size: 0x8, def value: None
 ::CjLib::FloatSpring  ___spinSpeedSpring;

/// @brief Field groundPointSpring, offset: 0x180, size: 0x20, def value: None
 ::CjLib::Vector3Spring  ___groundPointSpring;

/// @brief Field landingTiltValues, offset: 0x1a0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector2>  ___landingTiltValues;

/// @brief Field landingTiltLeadingTarget, offset: 0x1a8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___landingTiltLeadingTarget;

/// @brief Field landingTiltTarget, offset: 0x1b0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___landingTiltTarget;

/// [Header("Debug Params")]
/// [SerializeField]
/// @brief Field landingSide, offset: 0x1b8, size: 0x4, def value: None
 ::GlobalNamespace::Dreidel_Side  ___landingSide;

/// [SerializeField]
/// @brief Field landingVariation, offset: 0x1bc, size: 0x4, def value: None
 ::GlobalNamespace::Dreidel_Variation  ___landingVariation;

/// [SerializeField]
/// @brief Field spinCounterClockwise, offset: 0x1c0, size: 0x1, def value: None
 bool  ___spinCounterClockwise;

/// [SerializeField]
/// @brief Field debugDraw, offset: 0x1c1, size: 0x1, def value: None
 bool  ___debugDraw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___dreidelCollider) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinLoopAudio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___fallSound) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___gimelConfettiSound) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___gimelConfetti) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___centerOfMassOffset) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___bottomPointOffset) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___bodyRect) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___confettiHeight) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___surfaceCheckDistance) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___surfaceUprightThreshold) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___surfaceDreidelAngleThreshold) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___surfaceLayers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinSpeedStart) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinSpeedEnd) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinTime) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinTimeRange) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinWobbleFrequency) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinWobbleAmplitude) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinWobbleAmplitudeEndMin) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tiltFrontBack) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tiltLeftRight) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___groundTrackingDampingRatio) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___groundTrackingFrequency) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___pathMoveSpeed) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___pathStartTurnRate) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___pathEndTurnRate) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___pathTurnRateSinOffset) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinSpeedStopRate) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tumbleFallDampingRatio) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tumbleFallFrequency) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tumbleFallFrontBackDampingRatio) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tumbleFallFrontBackFrequency) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___smoothFallDampingRatio) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___smoothFallFrequency) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___slowTurnDampingRatio) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___slowTurnFrequency) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___bounceFallSwitchTime) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___slowTurnSwitchTime) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___respawnTimeAfterLanding) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___fallTimeTumble) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___fallTimeSlowTurn) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___state) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___stateStartTime) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinSpeed) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinAngle) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinAxis) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___canStartSpin) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinStartTime) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tiltWobble) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___falseTargetReached) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___hasLanded) == 0x135, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___pathOffset) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___pathDir) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___surfacePlanePoint) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___surfacePlaneNormal) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tiltFrontBackSpring) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___tiltLeftRightSpring) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinSpeedSpring) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___groundPointSpring) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___landingTiltValues) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___landingTiltLeadingTarget) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___landingTiltTarget) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___landingSide) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___landingVariation) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___spinCounterClockwise) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::Dreidel, ___debugDraw) == 0x1c1, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::Dreidel) == 0x1c8, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
