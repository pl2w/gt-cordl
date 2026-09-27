#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaThrowable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Photon/Pun/zzzz__MonoBehaviourPun_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaThrowable)
namespace Photon::Pun {
class IPhotonViewCallback;
}
namespace Photon::Pun {
class IPunObservable;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaThrowable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaThrowable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaThrowable*, "", "GorillaThrowable");
// Dependencies Photon.Pun.MonoBehaviourPun, UnityEngine.Quaternion, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaThrowable
class CORDL_TYPE GorillaThrowable : public ::Photon::Pun::MonoBehaviourPun {
public:
// Declarations
/// @brief Field audioSource, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field bounceAudioClip, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_bounceAudioClip, put=__cordl_internal_set_bounceAudioClip)) int32_t  bounceAudioClip;

/// @brief Field currentHeadsetVelocity, offset 0x9c, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentHeadsetVelocity, put=__cordl_internal_set_currentHeadsetVelocity)) ::UnityEngine::Vector3  currentHeadsetVelocity;

/// @brief Field currentIndex, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field currentRotationalVelocity, offset 0xa8, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentRotationalVelocity, put=__cordl_internal_set_currentRotationalVelocity)) ::UnityEngine::Vector3  currentRotationalVelocity;

/// @brief Field currentVelocity, offset 0x90, size 0xc 
 __declspec(property(get=__cordl_internal_get_currentVelocity, put=__cordl_internal_set_currentVelocity)) ::UnityEngine::Vector3  currentVelocity;

/// @brief Field denormalizedHeadsetVelocityAverage, offset 0xc0, size 0xc 
 __declspec(property(get=__cordl_internal_get_denormalizedHeadsetVelocityAverage, put=__cordl_internal_set_denormalizedHeadsetVelocityAverage)) ::UnityEngine::Vector3  denormalizedHeadsetVelocityAverage;

/// @brief Field denormalizedRotationalVelocityAverage, offset 0xcc, size 0xc 
 __declspec(property(get=__cordl_internal_get_denormalizedRotationalVelocityAverage, put=__cordl_internal_set_denormalizedRotationalVelocityAverage)) ::UnityEngine::Vector3  denormalizedRotationalVelocityAverage;

/// @brief Field denormalizedVelocityAverage, offset 0xb4, size 0xc 
 __declspec(property(get=__cordl_internal_get_denormalizedVelocityAverage, put=__cordl_internal_set_denormalizedVelocityAverage)) ::UnityEngine::Vector3  denormalizedVelocityAverage;

/// @brief Field exponThrowMultMax, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_exponThrowMultMax, put=__cordl_internal_set_exponThrowMultMax)) float_t  exponThrowMultMax;

/// @brief Field grabbingTransform, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabbingTransform, put=__cordl_internal_set_grabbingTransform)) ::UnityW<::UnityEngine::Transform>  grabbingTransform;

/// @brief Field headsetPositionHistory, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_headsetPositionHistory, put=__cordl_internal_set_headsetPositionHistory)) ::ArrayW<::UnityEngine::Vector3>  headsetPositionHistory;

/// @brief Field headsetTransform, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_headsetTransform, put=__cordl_internal_set_headsetTransform)) ::UnityW<::UnityEngine::Transform>  headsetTransform;

/// @brief Field headsetVelocityHistory, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_headsetVelocityHistory, put=__cordl_internal_set_headsetVelocityHistory)) ::ArrayW<::UnityEngine::Vector3>  headsetVelocityHistory;

/// @brief Field initialLerp, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_initialLerp, put=__cordl_internal_set_initialLerp)) bool  initialLerp;

/// @brief Field isHeld, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_isHeld, put=__cordl_internal_set_isHeld)) bool  isHeld;

/// @brief Field isLinear, offset 0x17c, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLinear, put=__cordl_internal_set_isLinear)) bool  isLinear;

/// @brief Field lerpDistanceLimit, offset 0x104, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpDistanceLimit, put=__cordl_internal_set_lerpDistanceLimit)) float_t  lerpDistanceLimit;

/// @brief Field lerpValue, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_lerpValue, put=__cordl_internal_set_lerpValue)) float_t  lerpValue;

/// @brief Field linearMax, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_linearMax, put=__cordl_internal_set_linearMax)) float_t  linearMax;

/// @brief Field loopIndex, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopIndex, put=__cordl_internal_set_loopIndex)) int32_t  loopIndex;

/// @brief Field maxVelocity, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVelocity, put=__cordl_internal_set_maxVelocity)) float_t  maxVelocity;

/// @brief Field maxVolume, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVolume, put=__cordl_internal_set_maxVolume)) float_t  maxVolume;

/// @brief Field minVelocity, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVelocity, put=__cordl_internal_set_minVelocity)) float_t  minVelocity;

/// @brief Field minVolume, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVolume, put=__cordl_internal_set_minVolume)) float_t  minVolume;

/// @brief Field offset, offset 0x128, size 0xc 
 __declspec(property(get=__cordl_internal_get_offset, put=__cordl_internal_set_offset)) ::UnityEngine::Vector3  offset;

/// @brief Field offsetRotation, offset 0x134, size 0x10 
 __declspec(property(get=__cordl_internal_get_offsetRotation, put=__cordl_internal_set_offsetRotation)) ::UnityEngine::Quaternion  offsetRotation;

/// @brief Field pickupLerp, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_pickupLerp, put=__cordl_internal_set_pickupLerp)) float_t  pickupLerp;

/// @brief Field positionHistory, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_positionHistory, put=__cordl_internal_set_positionHistory)) ::ArrayW<::UnityEngine::Vector3>  positionHistory;

/// @brief Field previousHeadsetPosition, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousHeadsetPosition, put=__cordl_internal_set_previousHeadsetPosition)) ::UnityEngine::Vector3  previousHeadsetPosition;

/// @brief Field previousPosition, offset 0x68, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousPosition, put=__cordl_internal_set_previousPosition)) ::UnityEngine::Vector3  previousPosition;

/// @brief Field previousRotation, offset 0x74, size 0xc 
 __declspec(property(get=__cordl_internal_get_previousRotation, put=__cordl_internal_set_previousRotation)) ::UnityEngine::Vector3  previousRotation;

/// @brief Field rigidbody, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_rigidbody, put=__cordl_internal_set_rigidbody)) ::UnityW<::UnityEngine::Rigidbody>  rigidbody;

/// @brief Field rotationHistory, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationHistory, put=__cordl_internal_set_rotationHistory)) ::ArrayW<::UnityEngine::Vector3>  rotationHistory;

/// @brief Field rotationalVelocityHistory, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_rotationalVelocityHistory, put=__cordl_internal_set_rotationalVelocityHistory)) ::ArrayW<::UnityEngine::Vector3>  rotationalVelocityHistory;

/// @brief Field synchThrow, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get_synchThrow, put=__cordl_internal_set_synchThrow)) bool  synchThrow;

/// @brief Field targetPosition, offset 0xe0, size 0xc 
 __declspec(property(get=__cordl_internal_get_targetPosition, put=__cordl_internal_set_targetPosition)) ::UnityEngine::Vector3  targetPosition;

/// @brief Field targetRotation, offset 0xec, size 0x10 
 __declspec(property(get=__cordl_internal_get_targetRotation, put=__cordl_internal_set_targetRotation)) ::UnityEngine::Quaternion  targetRotation;

/// @brief Field tempFloat, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_tempFloat, put=__cordl_internal_set_tempFloat)) float_t  tempFloat;

/// @brief Field throwMagnitudeLimit, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwMagnitudeLimit, put=__cordl_internal_set_throwMagnitudeLimit)) float_t  throwMagnitudeLimit;

/// @brief Field throwMultiplier, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_throwMultiplier, put=__cordl_internal_set_throwMultiplier)) float_t  throwMultiplier;

/// @brief Field timeLastReceived, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeLastReceived, put=__cordl_internal_set_timeLastReceived)) int32_t  timeLastReceived;

/// @brief Field trackingHistorySize, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_trackingHistorySize, put=__cordl_internal_set_trackingHistorySize)) int32_t  trackingHistorySize;

/// @brief Field transformToFollow, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_transformToFollow, put=__cordl_internal_set_transformToFollow)) ::UnityW<::UnityEngine::Transform>  transformToFollow;

/// @brief Field velocityHistory, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityHistory, put=__cordl_internal_set_velocityHistory)) ::ArrayW<::UnityEngine::Vector3>  velocityHistory;

/// @brief Convert operator to "::Photon::Pun::IPhotonViewCallback"
constexpr operator  ::Photon::Pun::IPhotonViewCallback*() noexcept;

/// @brief Convert operator to "::Photon::Pun::IPunObservable"
constexpr operator  ::Photon::Pun::IPunObservable*() noexcept;

/// @brief Method Grabbed, addr 0x59a5bf4, size 0x154, virtual true, abstract: false, final false
inline void Grabbed(::UnityEngine::Transform*  grabTransform) ;

/// @brief Method InterpolateVolume, addr 0x59a6414, size 0xd0, virtual false, abstract: false, final false
inline float_t InterpolateVolume() ;

/// @brief Method IsHandPushing, addr 0x59a5bf0, size 0x4, virtual false, abstract: false, final false
inline void IsHandPushing(::UnityEngine::XR::XRNode  node) ;

/// @brief Method LateUpdate, addr 0x59a4620, size 0x3f4, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::GorillaThrowable* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x59a61c0, size 0x254, virtual true, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method Photon.Pun.IPunObservable.OnPhotonSerializeView, addr 0x59a5d48, size 0x478, virtual true, abstract: false, final true
inline void Photon_Pun_IPunObservable_OnPhotonSerializeView(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method PlaySurfaceHit, addr 0x59a64e4, size 0x284, virtual false, abstract: false, final false
inline void PlaySurfaceHit(int32_t  soundIndex, float_t  tapVolume) ;

/// @brief Method Start, addr 0x59a4074, size 0x390, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StoreHistories, addr 0x59a57d4, size 0x41c, virtual false, abstract: false, final false
inline void StoreHistories() ;

/// @brief Method ThrowThisThingo, addr 0x59a4a30, size 0x4c0, virtual true, abstract: false, final false
inline void ThrowThisThingo() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr int32_t const& __cordl_internal_get_bounceAudioClip() const;

constexpr int32_t& __cordl_internal_get_bounceAudioClip() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentHeadsetVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentHeadsetVelocity() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentRotationalVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentRotationalVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_currentVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_currentVelocity() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_denormalizedHeadsetVelocityAverage() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_denormalizedHeadsetVelocityAverage() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_denormalizedRotationalVelocityAverage() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_denormalizedRotationalVelocityAverage() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_denormalizedVelocityAverage() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_denormalizedVelocityAverage() ;

constexpr float_t const& __cordl_internal_get_exponThrowMultMax() const;

constexpr float_t& __cordl_internal_get_exponThrowMultMax() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_grabbingTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_grabbingTransform() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_headsetPositionHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_headsetPositionHistory() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_headsetTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_headsetTransform() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_headsetVelocityHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_headsetVelocityHistory() ;

constexpr bool const& __cordl_internal_get_initialLerp() const;

constexpr bool& __cordl_internal_get_initialLerp() ;

constexpr bool const& __cordl_internal_get_isHeld() const;

constexpr bool& __cordl_internal_get_isHeld() ;

constexpr bool const& __cordl_internal_get_isLinear() const;

constexpr bool& __cordl_internal_get_isLinear() ;

constexpr float_t const& __cordl_internal_get_lerpDistanceLimit() const;

constexpr float_t& __cordl_internal_get_lerpDistanceLimit() ;

constexpr float_t const& __cordl_internal_get_lerpValue() const;

constexpr float_t& __cordl_internal_get_lerpValue() ;

constexpr float_t const& __cordl_internal_get_linearMax() const;

constexpr float_t& __cordl_internal_get_linearMax() ;

constexpr int32_t const& __cordl_internal_get_loopIndex() const;

constexpr int32_t& __cordl_internal_get_loopIndex() ;

constexpr float_t const& __cordl_internal_get_maxVelocity() const;

constexpr float_t& __cordl_internal_get_maxVelocity() ;

constexpr float_t const& __cordl_internal_get_maxVolume() const;

constexpr float_t& __cordl_internal_get_maxVolume() ;

constexpr float_t const& __cordl_internal_get_minVelocity() const;

constexpr float_t& __cordl_internal_get_minVelocity() ;

constexpr float_t const& __cordl_internal_get_minVolume() const;

constexpr float_t& __cordl_internal_get_minVolume() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_offset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_offset() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_offsetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_offsetRotation() ;

constexpr float_t const& __cordl_internal_get_pickupLerp() const;

constexpr float_t& __cordl_internal_get_pickupLerp() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_positionHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_positionHistory() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousHeadsetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousHeadsetPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_previousRotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_previousRotation() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rigidbody() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_rotationHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_rotationHistory() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_rotationalVelocityHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_rotationalVelocityHistory() ;

constexpr bool const& __cordl_internal_get_synchThrow() const;

constexpr bool& __cordl_internal_get_synchThrow() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_targetPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_targetPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_targetRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_targetRotation() ;

constexpr float_t const& __cordl_internal_get_tempFloat() const;

constexpr float_t& __cordl_internal_get_tempFloat() ;

constexpr float_t const& __cordl_internal_get_throwMagnitudeLimit() const;

constexpr float_t& __cordl_internal_get_throwMagnitudeLimit() ;

constexpr float_t const& __cordl_internal_get_throwMultiplier() const;

constexpr float_t& __cordl_internal_get_throwMultiplier() ;

constexpr int32_t const& __cordl_internal_get_timeLastReceived() const;

constexpr int32_t& __cordl_internal_get_timeLastReceived() ;

constexpr int32_t const& __cordl_internal_get_trackingHistorySize() const;

constexpr int32_t& __cordl_internal_get_trackingHistorySize() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_transformToFollow() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_transformToFollow() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_velocityHistory() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_velocityHistory() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_bounceAudioClip(int32_t  value) ;

constexpr void __cordl_internal_set_currentHeadsetVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_currentRotationalVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_currentVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_denormalizedHeadsetVelocityAverage(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_denormalizedRotationalVelocityAverage(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_denormalizedVelocityAverage(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_exponThrowMultMax(float_t  value) ;

constexpr void __cordl_internal_set_grabbingTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_headsetPositionHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_headsetTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_headsetVelocityHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_initialLerp(bool  value) ;

constexpr void __cordl_internal_set_isHeld(bool  value) ;

constexpr void __cordl_internal_set_isLinear(bool  value) ;

constexpr void __cordl_internal_set_lerpDistanceLimit(float_t  value) ;

constexpr void __cordl_internal_set_lerpValue(float_t  value) ;

constexpr void __cordl_internal_set_linearMax(float_t  value) ;

constexpr void __cordl_internal_set_loopIndex(int32_t  value) ;

constexpr void __cordl_internal_set_maxVelocity(float_t  value) ;

constexpr void __cordl_internal_set_maxVolume(float_t  value) ;

constexpr void __cordl_internal_set_minVelocity(float_t  value) ;

constexpr void __cordl_internal_set_minVolume(float_t  value) ;

constexpr void __cordl_internal_set_offset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_offsetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_pickupLerp(float_t  value) ;

constexpr void __cordl_internal_set_positionHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_previousHeadsetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_previousRotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rotationHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_rotationalVelocityHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_synchThrow(bool  value) ;

constexpr void __cordl_internal_set_targetPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_targetRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_tempFloat(float_t  value) ;

constexpr void __cordl_internal_set_throwMagnitudeLimit(float_t  value) ;

constexpr void __cordl_internal_set_throwMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_timeLastReceived(int32_t  value) ;

constexpr void __cordl_internal_set_trackingHistorySize(int32_t  value) ;

constexpr void __cordl_internal_set_transformToFollow(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_velocityHistory(::ArrayW<::UnityEngine::Vector3>  value) ;

/// @brief Method .ctor, addr 0x59a5110, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::Photon::Pun::IPhotonViewCallback"
constexpr ::Photon::Pun::IPhotonViewCallback* i___Photon__Pun__IPhotonViewCallback() noexcept;

/// @brief Convert to "::Photon::Pun::IPunObservable"
constexpr ::Photon::Pun::IPunObservable* i___Photon__Pun__IPunObservable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaThrowable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaThrowable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaThrowable(GorillaThrowable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaThrowable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaThrowable(GorillaThrowable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2632};

/// @brief Field trackingHistorySize, offset: 0x28, size: 0x4, def value: None
 int32_t  ___trackingHistorySize;

/// @brief Field throwMultiplier, offset: 0x2c, size: 0x4, def value: None
 float_t  ___throwMultiplier;

/// @brief Field throwMagnitudeLimit, offset: 0x30, size: 0x4, def value: None
 float_t  ___throwMagnitudeLimit;

/// @brief Field velocityHistory, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___velocityHistory;

/// @brief Field headsetVelocityHistory, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___headsetVelocityHistory;

/// @brief Field positionHistory, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___positionHistory;

/// @brief Field headsetPositionHistory, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___headsetPositionHistory;

/// @brief Field rotationHistory, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___rotationHistory;

/// @brief Field rotationalVelocityHistory, offset: 0x60, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___rotationalVelocityHistory;

/// @brief Field previousPosition, offset: 0x68, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousPosition;

/// @brief Field previousRotation, offset: 0x74, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousRotation;

/// @brief Field previousHeadsetPosition, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___previousHeadsetPosition;

/// @brief Field currentIndex, offset: 0x8c, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field currentVelocity, offset: 0x90, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentVelocity;

/// @brief Field currentHeadsetVelocity, offset: 0x9c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentHeadsetVelocity;

/// @brief Field currentRotationalVelocity, offset: 0xa8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___currentRotationalVelocity;

/// @brief Field denormalizedVelocityAverage, offset: 0xb4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___denormalizedVelocityAverage;

/// @brief Field denormalizedHeadsetVelocityAverage, offset: 0xc0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___denormalizedHeadsetVelocityAverage;

/// @brief Field denormalizedRotationalVelocityAverage, offset: 0xcc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___denormalizedRotationalVelocityAverage;

/// @brief Field headsetTransform, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___headsetTransform;

/// @brief Field targetPosition, offset: 0xe0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___targetPosition;

/// @brief Field targetRotation, offset: 0xec, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___targetRotation;

/// @brief Field initialLerp, offset: 0xfc, size: 0x1, def value: None
 bool  ___initialLerp;

/// @brief Field lerpValue, offset: 0x100, size: 0x4, def value: None
 float_t  ___lerpValue;

/// @brief Field lerpDistanceLimit, offset: 0x104, size: 0x4, def value: None
 float_t  ___lerpDistanceLimit;

/// @brief Field isHeld, offset: 0x108, size: 0x1, def value: None
 bool  ___isHeld;

/// @brief Field rigidbody, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rigidbody;

/// @brief Field loopIndex, offset: 0x118, size: 0x4, def value: None
 int32_t  ___loopIndex;

/// @brief Field transformToFollow, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___transformToFollow;

/// @brief Field offset, offset: 0x128, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___offset;

/// @brief Field offsetRotation, offset: 0x134, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___offsetRotation;

/// @brief Field audioSource, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field timeLastReceived, offset: 0x150, size: 0x4, def value: None
 int32_t  ___timeLastReceived;

/// @brief Field synchThrow, offset: 0x154, size: 0x1, def value: None
 bool  ___synchThrow;

/// @brief Field tempFloat, offset: 0x158, size: 0x4, def value: None
 float_t  ___tempFloat;

/// @brief Field grabbingTransform, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___grabbingTransform;

/// @brief Field pickupLerp, offset: 0x168, size: 0x4, def value: None
 float_t  ___pickupLerp;

/// @brief Field minVelocity, offset: 0x16c, size: 0x4, def value: None
 float_t  ___minVelocity;

/// @brief Field maxVelocity, offset: 0x170, size: 0x4, def value: None
 float_t  ___maxVelocity;

/// @brief Field minVolume, offset: 0x174, size: 0x4, def value: None
 float_t  ___minVolume;

/// @brief Field maxVolume, offset: 0x178, size: 0x4, def value: None
 float_t  ___maxVolume;

/// @brief Field isLinear, offset: 0x17c, size: 0x1, def value: None
 bool  ___isLinear;

/// @brief Field linearMax, offset: 0x180, size: 0x4, def value: None
 float_t  ___linearMax;

/// @brief Field exponThrowMultMax, offset: 0x184, size: 0x4, def value: None
 float_t  ___exponThrowMultMax;

/// @brief Field bounceAudioClip, offset: 0x188, size: 0x4, def value: None
 int32_t  ___bounceAudioClip;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___trackingHistorySize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___throwMultiplier) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___throwMagnitudeLimit) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___velocityHistory) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___headsetVelocityHistory) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___positionHistory) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___headsetPositionHistory) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___rotationHistory) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___rotationalVelocityHistory) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___previousPosition) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___previousRotation) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___previousHeadsetPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___currentIndex) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___currentVelocity) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___currentHeadsetVelocity) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___currentRotationalVelocity) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___denormalizedVelocityAverage) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___denormalizedHeadsetVelocityAverage) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___denormalizedRotationalVelocityAverage) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___headsetTransform) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___targetPosition) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___targetRotation) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___initialLerp) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___lerpValue) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___lerpDistanceLimit) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___isHeld) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___rigidbody) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___loopIndex) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___transformToFollow) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___offset) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___offsetRotation) == 0x134, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___audioSource) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___timeLastReceived) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___synchThrow) == 0x154, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___tempFloat) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___grabbingTransform) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___pickupLerp) == 0x168, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___minVelocity) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___maxVelocity) == 0x170, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___minVolume) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___maxVolume) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___isLinear) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___linearMax) == 0x180, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___exponThrowMultMax) == 0x184, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaThrowable, ___bounceAudioClip) == 0x188, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaThrowable) == 0x190, "Size mismatch!");

} // namespace end def GlobalNamespace
