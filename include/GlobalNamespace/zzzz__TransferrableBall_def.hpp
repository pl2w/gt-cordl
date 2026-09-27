#pragma once
// IWYU pragma private; include "GlobalNamespace/TransferrableBall.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ContactPoint_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TransferrableBall)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GlobalNamespace {
class TransferrableBall___c;
}
namespace GorillaLocomotion::Climbing {
class GorillaHandClimber;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class SphereCollider;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TransferrableBall;
}
namespace GlobalNamespace {
class TransferrableBall___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::TransferrableBall*);
MARK_REF_T(::GlobalNamespace::TransferrableBall___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableBall*, "", "TransferrableBall");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TransferrableBall___c*, "", "TransferrableBall/<>c");
// Dependencies TransferrableObject, UnityEngine.ContactPoint, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableBall
class CORDL_TYPE TransferrableBall : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using __c = ::GlobalNamespace::TransferrableBall___c;

/// @brief Field allowHeadButting, offset 0x39c, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowHeadButting, put=__cordl_internal_set_allowHeadButting)) bool  allowHeadButting;

/// @brief Field applyFrictionHolding, offset 0x408, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyFrictionHolding, put=__cordl_internal_set_applyFrictionHolding)) bool  applyFrictionHolding;

/// @brief Field ballRadius, offset 0x334, size 0x4 
 __declspec(property(get=__cordl_internal_get_ballRadius, put=__cordl_internal_set_ballRadius)) float_t  ballRadius;

/// @brief Field collisionContacts, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_collisionContacts, put=__cordl_internal_set_collisionContacts)) ::ArrayW<::UnityEngine::ContactPoint>  collisionContacts;

/// @brief Field collisionContactsCount, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionContactsCount, put=__cordl_internal_set_collisionContactsCount)) int32_t  collisionContactsCount;

/// @brief Field debugDraw, offset 0x3ac, size 0x1 
 __declspec(property(get=__cordl_internal_get_debugDraw, put=__cordl_internal_set_debugDraw)) bool  debugDraw;

/// @brief Field depenetrationBias, offset 0x3d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_depenetrationBias, put=__cordl_internal_set_depenetrationBias)) float_t  depenetrationBias;

/// @brief Field depenetrationSpeed, offset 0x338, size 0x4 
 __declspec(property(get=__cordl_internal_get_depenetrationSpeed, put=__cordl_internal_set_depenetrationSpeed)) float_t  depenetrationSpeed;

/// @brief Field frictionHoldLocalPosLeft, offset 0x40c, size 0xc 
 __declspec(property(get=__cordl_internal_get_frictionHoldLocalPosLeft, put=__cordl_internal_set_frictionHoldLocalPosLeft)) ::UnityEngine::Vector3  frictionHoldLocalPosLeft;

/// @brief Field frictionHoldLocalPosRight, offset 0x428, size 0xc 
 __declspec(property(get=__cordl_internal_get_frictionHoldLocalPosRight, put=__cordl_internal_set_frictionHoldLocalPosRight)) ::UnityEngine::Vector3  frictionHoldLocalPosRight;

/// @brief Field frictionHoldLocalRotLeft, offset 0x418, size 0x10 
 __declspec(property(get=__cordl_internal_get_frictionHoldLocalRotLeft, put=__cordl_internal_set_frictionHoldLocalRotLeft)) ::UnityEngine::Quaternion  frictionHoldLocalRotLeft;

/// @brief Field frictionHoldLocalRotRight, offset 0x434, size 0x10 
 __declspec(property(get=__cordl_internal_get_frictionHoldLocalRotRight, put=__cordl_internal_set_frictionHoldLocalRotRight)) ::UnityEngine::Quaternion  frictionHoldLocalRotRight;

/// @brief Field gorillaHeadTriggerTag, offset 0x458, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaHeadTriggerTag, put=__cordl_internal_set_gorillaHeadTriggerTag)) ::StringW  gorillaHeadTriggerTag;

/// @brief Field gravityCounterAmount, offset 0x3a8, size 0x4 
 __declspec(property(get=__cordl_internal_get_gravityCounterAmount, put=__cordl_internal_set_gravityCounterAmount)) float_t  gravityCounterAmount;

/// @brief Field groundContact, offset 0x3d8, size 0x30 
 __declspec(property(get=__cordl_internal_get_groundContact, put=__cordl_internal_set_groundContact)) ::UnityEngine::ContactPoint  groundContact;

/// @brief Field handClimberMap, offset 0x3b0, size 0x8 
 __declspec(property(get=__cordl_internal_get_handClimberMap, put=__cordl_internal_set_handClimberMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>*  handClimberMap;

/// @brief Field handHitAudioMultiplier, offset 0x388, size 0x4 
 __declspec(property(get=__cordl_internal_get_handHitAudioMultiplier, put=__cordl_internal_set_handHitAudioMultiplier)) float_t  handHitAudioMultiplier;

/// @brief Field handRadius, offset 0x3cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_handRadius, put=__cordl_internal_set_handRadius)) float_t  handRadius;

/// @brief Field headButtHitMultiplier, offset 0x3a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_headButtHitMultiplier, put=__cordl_internal_set_headButtHitMultiplier)) float_t  headButtHitMultiplier;

/// @brief Field headButtRadius, offset 0x3a0, size 0x4 
 __declspec(property(get=__cordl_internal_get_headButtRadius, put=__cordl_internal_set_headButtRadius)) float_t  headButtRadius;

/// @brief Field headOverlapping, offset 0x3d6, size 0x1 
 __declspec(property(get=__cordl_internal_get_headOverlapping, put=__cordl_internal_set_headOverlapping)) bool  headOverlapping;

/// @brief Field hitMultiplierCurve, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitMultiplierCurve, put=__cordl_internal_set_hitMultiplierCurve)) ::UnityEngine::AnimationCurve*  hitMultiplierCurve;

/// @brief Field hitSoundBank, offset 0x378, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSoundBank, put=__cordl_internal_set_hitSoundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  hitSoundBank;

/// @brief Field hitSoundPitchMinMax, offset 0x38c, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSoundPitchMinMax, put=__cordl_internal_set_hitSoundPitchMinMax)) ::UnityEngine::Vector2  hitSoundPitchMinMax;

/// @brief Field hitSoundSpamCooldownResetTime, offset 0x450, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitSoundSpamCooldownResetTime, put=__cordl_internal_set_hitSoundSpamCooldownResetTime)) float_t  hitSoundSpamCooldownResetTime;

/// @brief Field hitSoundSpamCount, offset 0x448, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitSoundSpamCount, put=__cordl_internal_set_hitSoundSpamCount)) int32_t  hitSoundSpamCount;

/// @brief Field hitSoundSpamLastHitTime, offset 0x444, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitSoundSpamLastHitTime, put=__cordl_internal_set_hitSoundSpamLastHitTime)) float_t  hitSoundSpamLastHitTime;

/// @brief Field hitSoundSpamLimit, offset 0x44c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitSoundSpamLimit, put=__cordl_internal_set_hitSoundSpamLimit)) int32_t  hitSoundSpamLimit;

/// @brief Field hitSoundVolumeMinMax, offset 0x394, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSoundVolumeMinMax, put=__cordl_internal_set_hitSoundVolumeMinMax)) ::UnityEngine::Vector2  hitSoundVolumeMinMax;

/// @brief Field hitSpeedThreshold, offset 0x33c, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitSpeedThreshold, put=__cordl_internal_set_hitSpeedThreshold)) float_t  hitSpeedThreshold;

/// @brief Field hitSpeedToAudioMinMax, offset 0x380, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSpeedToAudioMinMax, put=__cordl_internal_set_hitSpeedToAudioMinMax)) ::UnityEngine::Vector2  hitSpeedToAudioMinMax;

/// @brief Field hitSpeedToHitMultiplierMinMax, offset 0x344, size 0x8 
 __declspec(property(get=__cordl_internal_get_hitSpeedToHitMultiplierMinMax, put=__cordl_internal_set_hitSpeedToHitMultiplierMinMax)) ::UnityEngine::Vector2  hitSpeedToHitMultiplierMinMax;

/// @brief Field hitTorqueMultiplier, offset 0x358, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitTorqueMultiplier, put=__cordl_internal_set_hitTorqueMultiplier)) float_t  hitTorqueMultiplier;

/// @brief Field leftHandOverlapping, offset 0x3d4, size 0x1 
 __declspec(property(get=__cordl_internal_get_leftHandOverlapping, put=__cordl_internal_set_leftHandOverlapping)) bool  leftHandOverlapping;

/// @brief Field maxHitSpeed, offset 0x340, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxHitSpeed, put=__cordl_internal_set_maxHitSpeed)) float_t  maxHitSpeed;

/// @brief Field minHitSpeedThreshold, offset 0x360, size 0x4 
 __declspec(property(get=__cordl_internal_get_minHitSpeedThreshold, put=__cordl_internal_set_minHitSpeedThreshold)) float_t  minHitSpeedThreshold;

/// @brief Field onGround, offset 0x3d7, size 0x1 
 __declspec(property(get=__cordl_internal_get_onGround, put=__cordl_internal_set_onGround)) bool  onGround;

/// @brief Field playerHeadCollider, offset 0x3b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_playerHeadCollider, put=__cordl_internal_set_playerHeadCollider)) ::UnityW<::UnityEngine::SphereCollider>  playerHeadCollider;

/// @brief Field reflectOffHandAmount, offset 0x35c, size 0x4 
 __declspec(property(get=__cordl_internal_get_reflectOffHandAmount, put=__cordl_internal_set_reflectOffHandAmount)) float_t  reflectOffHandAmount;

/// @brief Field reflectOffHandAmountOutputMinMax, offset 0x370, size 0x8 
 __declspec(property(get=__cordl_internal_get_reflectOffHandAmountOutputMinMax, put=__cordl_internal_set_reflectOffHandAmountOutputMinMax)) ::UnityEngine::Vector2  reflectOffHandAmountOutputMinMax;

/// @brief Field reflectOffHandSpeedInputMinMax, offset 0x368, size 0x8 
 __declspec(property(get=__cordl_internal_get_reflectOffHandSpeedInputMinMax, put=__cordl_internal_set_reflectOffHandSpeedInputMinMax)) ::UnityEngine::Vector2  reflectOffHandSpeedInputMinMax;

/// @brief Field rightHandOverlapping, offset 0x3d5, size 0x1 
 __declspec(property(get=__cordl_internal_get_rightHandOverlapping, put=__cordl_internal_set_rightHandOverlapping)) bool  rightHandOverlapping;

/// @brief Field surfaceGripDistance, offset 0x364, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceGripDistance, put=__cordl_internal_set_surfaceGripDistance)) float_t  surfaceGripDistance;

/// @brief Method ApplyHit, addr 0x5766464, size 0x6d8, virtual false, abstract: false, final false
inline bool ApplyHit(::UnityEngine::Vector3  hitPoint, ::UnityEngine::Vector3  hitDir, float_t  hitSpeed) ;

/// @brief Method CheckCollisionWithHand, addr 0x5765ee4, size 0x580, virtual false, abstract: false, final false
inline bool CheckCollisionWithHand(::UnityEngine::Vector3  handCenter, ::UnityEngine::Quaternion  handRotation, ::UnityEngine::Vector3  palmForward, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  hitNormal, ::by_ref<float_t>  penetrationDist) ;

/// @brief Method CheckCollisionWithHead, addr 0x5766b3c, size 0x1a0, virtual false, abstract: false, final false
inline bool CheckCollisionWithHead(::UnityEngine::SphereCollider*  headCollider, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  hitNormal, ::by_ref<float_t>  penetrationDist) ;

/// @brief Method FixedUpdate, addr 0x5766fd8, size 0xc4, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GlobalNamespace::TransferrableBall* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x57673b8, size 0x9c, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnCollisionStay, addr 0x5767454, size 0x148, virtual false, abstract: false, final false
inline void OnCollisionStay(::UnityEngine::Collision*  collision) ;

/// @brief Method OnTriggerEnter, addr 0x576709c, size 0x1e0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit, addr 0x576727c, size 0x13c, virtual false, abstract: false, final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method PlayHitSound, addr 0x5766e5c, size 0x17c, virtual false, abstract: false, final false
inline void PlayHitSound(float_t  hitSpeed) ;

/// @brief Method TakeOwnershipAndEnablePhysics, addr 0x5766cdc, size 0x180, virtual false, abstract: false, final false
inline void TakeOwnershipAndEnablePhysics() ;

/// @brief Method TriggeredLateUpdate, addr 0x5763fd0, size 0x1e84, virtual true, abstract: false, final false
inline void TriggeredLateUpdate() ;

constexpr bool const& __cordl_internal_get_allowHeadButting() const;

constexpr bool& __cordl_internal_get_allowHeadButting() ;

constexpr bool const& __cordl_internal_get_applyFrictionHolding() const;

constexpr bool& __cordl_internal_get_applyFrictionHolding() ;

constexpr float_t const& __cordl_internal_get_ballRadius() const;

constexpr float_t& __cordl_internal_get_ballRadius() ;

constexpr ::ArrayW<::UnityEngine::ContactPoint> const& __cordl_internal_get_collisionContacts() const;

constexpr ::ArrayW<::UnityEngine::ContactPoint>& __cordl_internal_get_collisionContacts() ;

constexpr int32_t const& __cordl_internal_get_collisionContactsCount() const;

constexpr int32_t& __cordl_internal_get_collisionContactsCount() ;

constexpr bool const& __cordl_internal_get_debugDraw() const;

constexpr bool& __cordl_internal_get_debugDraw() ;

constexpr float_t const& __cordl_internal_get_depenetrationBias() const;

constexpr float_t& __cordl_internal_get_depenetrationBias() ;

constexpr float_t const& __cordl_internal_get_depenetrationSpeed() const;

constexpr float_t& __cordl_internal_get_depenetrationSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_frictionHoldLocalPosLeft() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_frictionHoldLocalPosLeft() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_frictionHoldLocalPosRight() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_frictionHoldLocalPosRight() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_frictionHoldLocalRotLeft() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_frictionHoldLocalRotLeft() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_frictionHoldLocalRotRight() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_frictionHoldLocalRotRight() ;

constexpr ::StringW const& __cordl_internal_get_gorillaHeadTriggerTag() const;

constexpr ::StringW& __cordl_internal_get_gorillaHeadTriggerTag() ;

constexpr float_t const& __cordl_internal_get_gravityCounterAmount() const;

constexpr float_t& __cordl_internal_get_gravityCounterAmount() ;

constexpr ::UnityEngine::ContactPoint const& __cordl_internal_get_groundContact() const;

constexpr ::UnityEngine::ContactPoint& __cordl_internal_get_groundContact() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>* const& __cordl_internal_get_handClimberMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>*& __cordl_internal_get_handClimberMap() ;

constexpr float_t const& __cordl_internal_get_handHitAudioMultiplier() const;

constexpr float_t& __cordl_internal_get_handHitAudioMultiplier() ;

constexpr float_t const& __cordl_internal_get_handRadius() const;

constexpr float_t& __cordl_internal_get_handRadius() ;

constexpr float_t const& __cordl_internal_get_headButtHitMultiplier() const;

constexpr float_t& __cordl_internal_get_headButtHitMultiplier() ;

constexpr float_t const& __cordl_internal_get_headButtRadius() const;

constexpr float_t& __cordl_internal_get_headButtRadius() ;

constexpr bool const& __cordl_internal_get_headOverlapping() const;

constexpr bool& __cordl_internal_get_headOverlapping() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_hitMultiplierCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_hitMultiplierCurve() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_hitSoundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_hitSoundBank() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hitSoundPitchMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hitSoundPitchMinMax() ;

constexpr float_t const& __cordl_internal_get_hitSoundSpamCooldownResetTime() const;

constexpr float_t& __cordl_internal_get_hitSoundSpamCooldownResetTime() ;

constexpr int32_t const& __cordl_internal_get_hitSoundSpamCount() const;

constexpr int32_t& __cordl_internal_get_hitSoundSpamCount() ;

constexpr float_t const& __cordl_internal_get_hitSoundSpamLastHitTime() const;

constexpr float_t& __cordl_internal_get_hitSoundSpamLastHitTime() ;

constexpr int32_t const& __cordl_internal_get_hitSoundSpamLimit() const;

constexpr int32_t& __cordl_internal_get_hitSoundSpamLimit() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hitSoundVolumeMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hitSoundVolumeMinMax() ;

constexpr float_t const& __cordl_internal_get_hitSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_hitSpeedThreshold() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hitSpeedToAudioMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hitSpeedToAudioMinMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_hitSpeedToHitMultiplierMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_hitSpeedToHitMultiplierMinMax() ;

constexpr float_t const& __cordl_internal_get_hitTorqueMultiplier() const;

constexpr float_t& __cordl_internal_get_hitTorqueMultiplier() ;

constexpr bool const& __cordl_internal_get_leftHandOverlapping() const;

constexpr bool& __cordl_internal_get_leftHandOverlapping() ;

constexpr float_t const& __cordl_internal_get_maxHitSpeed() const;

constexpr float_t& __cordl_internal_get_maxHitSpeed() ;

constexpr float_t const& __cordl_internal_get_minHitSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_minHitSpeedThreshold() ;

constexpr bool const& __cordl_internal_get_onGround() const;

constexpr bool& __cordl_internal_get_onGround() ;

constexpr ::UnityW<::UnityEngine::SphereCollider> const& __cordl_internal_get_playerHeadCollider() const;

constexpr ::UnityW<::UnityEngine::SphereCollider>& __cordl_internal_get_playerHeadCollider() ;

constexpr float_t const& __cordl_internal_get_reflectOffHandAmount() const;

constexpr float_t& __cordl_internal_get_reflectOffHandAmount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_reflectOffHandAmountOutputMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_reflectOffHandAmountOutputMinMax() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_reflectOffHandSpeedInputMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_reflectOffHandSpeedInputMinMax() ;

constexpr bool const& __cordl_internal_get_rightHandOverlapping() const;

constexpr bool& __cordl_internal_get_rightHandOverlapping() ;

constexpr float_t const& __cordl_internal_get_surfaceGripDistance() const;

constexpr float_t& __cordl_internal_get_surfaceGripDistance() ;

constexpr void __cordl_internal_set_allowHeadButting(bool  value) ;

constexpr void __cordl_internal_set_applyFrictionHolding(bool  value) ;

constexpr void __cordl_internal_set_ballRadius(float_t  value) ;

constexpr void __cordl_internal_set_collisionContacts(::ArrayW<::UnityEngine::ContactPoint>  value) ;

constexpr void __cordl_internal_set_collisionContactsCount(int32_t  value) ;

constexpr void __cordl_internal_set_debugDraw(bool  value) ;

constexpr void __cordl_internal_set_depenetrationBias(float_t  value) ;

constexpr void __cordl_internal_set_depenetrationSpeed(float_t  value) ;

constexpr void __cordl_internal_set_frictionHoldLocalPosLeft(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_frictionHoldLocalPosRight(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_frictionHoldLocalRotLeft(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_frictionHoldLocalRotRight(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_gorillaHeadTriggerTag(::StringW  value) ;

constexpr void __cordl_internal_set_gravityCounterAmount(float_t  value) ;

constexpr void __cordl_internal_set_groundContact(::UnityEngine::ContactPoint  value) ;

constexpr void __cordl_internal_set_handClimberMap(::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>*  value) ;

constexpr void __cordl_internal_set_handHitAudioMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_handRadius(float_t  value) ;

constexpr void __cordl_internal_set_headButtHitMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_headButtRadius(float_t  value) ;

constexpr void __cordl_internal_set_headOverlapping(bool  value) ;

constexpr void __cordl_internal_set_hitMultiplierCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_hitSoundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_hitSoundPitchMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hitSoundSpamCooldownResetTime(float_t  value) ;

constexpr void __cordl_internal_set_hitSoundSpamCount(int32_t  value) ;

constexpr void __cordl_internal_set_hitSoundSpamLastHitTime(float_t  value) ;

constexpr void __cordl_internal_set_hitSoundSpamLimit(int32_t  value) ;

constexpr void __cordl_internal_set_hitSoundVolumeMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hitSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_hitSpeedToAudioMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hitSpeedToHitMultiplierMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_hitTorqueMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_leftHandOverlapping(bool  value) ;

constexpr void __cordl_internal_set_maxHitSpeed(float_t  value) ;

constexpr void __cordl_internal_set_minHitSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_onGround(bool  value) ;

constexpr void __cordl_internal_set_playerHeadCollider(::UnityW<::UnityEngine::SphereCollider>  value) ;

constexpr void __cordl_internal_set_reflectOffHandAmount(float_t  value) ;

constexpr void __cordl_internal_set_reflectOffHandAmountOutputMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_reflectOffHandSpeedInputMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_rightHandOverlapping(bool  value) ;

constexpr void __cordl_internal_set_surfaceGripDistance(float_t  value) ;

/// @brief Method .ctor, addr 0x576759c, size 0x228, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableBall() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableBall", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableBall(TransferrableBall && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableBall", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableBall(TransferrableBall const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1349};

/// [Header("Transferrable Ball")]
/// @brief Field ballRadius, offset: 0x334, size: 0x4, def value: None
 float_t  ___ballRadius;

/// @brief Field depenetrationSpeed, offset: 0x338, size: 0x4, def value: None
 float_t  ___depenetrationSpeed;

/// [Range(0, 1)]
/// @brief Field hitSpeedThreshold, offset: 0x33c, size: 0x4, def value: None
 float_t  ___hitSpeedThreshold;

/// @brief Field maxHitSpeed, offset: 0x340, size: 0x4, def value: None
 float_t  ___maxHitSpeed;

/// @brief Field hitSpeedToHitMultiplierMinMax, offset: 0x344, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hitSpeedToHitMultiplierMinMax;

/// @brief Field hitMultiplierCurve, offset: 0x350, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___hitMultiplierCurve;

/// @brief Field hitTorqueMultiplier, offset: 0x358, size: 0x4, def value: None
 float_t  ___hitTorqueMultiplier;

/// @brief Field reflectOffHandAmount, offset: 0x35c, size: 0x4, def value: None
 float_t  ___reflectOffHandAmount;

/// @brief Field minHitSpeedThreshold, offset: 0x360, size: 0x4, def value: None
 float_t  ___minHitSpeedThreshold;

/// @brief Field surfaceGripDistance, offset: 0x364, size: 0x4, def value: None
 float_t  ___surfaceGripDistance;

/// @brief Field reflectOffHandSpeedInputMinMax, offset: 0x368, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___reflectOffHandSpeedInputMinMax;

/// @brief Field reflectOffHandAmountOutputMinMax, offset: 0x370, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___reflectOffHandAmountOutputMinMax;

/// @brief Field hitSoundBank, offset: 0x378, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___hitSoundBank;

/// @brief Field hitSpeedToAudioMinMax, offset: 0x380, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hitSpeedToAudioMinMax;

/// @brief Field handHitAudioMultiplier, offset: 0x388, size: 0x4, def value: None
 float_t  ___handHitAudioMultiplier;

/// @brief Field hitSoundPitchMinMax, offset: 0x38c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hitSoundPitchMinMax;

/// @brief Field hitSoundVolumeMinMax, offset: 0x394, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___hitSoundVolumeMinMax;

/// @brief Field allowHeadButting, offset: 0x39c, size: 0x1, def value: None
 bool  ___allowHeadButting;

/// @brief Field headButtRadius, offset: 0x3a0, size: 0x4, def value: None
 float_t  ___headButtRadius;

/// @brief Field headButtHitMultiplier, offset: 0x3a4, size: 0x4, def value: None
 float_t  ___headButtHitMultiplier;

/// @brief Field gravityCounterAmount, offset: 0x3a8, size: 0x4, def value: None
 float_t  ___gravityCounterAmount;

/// @brief Field debugDraw, offset: 0x3ac, size: 0x1, def value: None
 bool  ___debugDraw;

/// @brief Field handClimberMap, offset: 0x3b0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::GorillaLocomotion::Climbing::GorillaHandClimber>,int32_t>*  ___handClimberMap;

/// @brief Field playerHeadCollider, offset: 0x3b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::SphereCollider>  ___playerHeadCollider;

/// @brief Field collisionContacts, offset: 0x3c0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::ContactPoint>  ___collisionContacts;

/// @brief Field collisionContactsCount, offset: 0x3c8, size: 0x4, def value: None
 int32_t  ___collisionContactsCount;

/// @brief Field handRadius, offset: 0x3cc, size: 0x4, def value: None
 float_t  ___handRadius;

/// @brief Field depenetrationBias, offset: 0x3d0, size: 0x4, def value: None
 float_t  ___depenetrationBias;

/// @brief Field leftHandOverlapping, offset: 0x3d4, size: 0x1, def value: None
 bool  ___leftHandOverlapping;

/// @brief Field rightHandOverlapping, offset: 0x3d5, size: 0x1, def value: None
 bool  ___rightHandOverlapping;

/// @brief Field headOverlapping, offset: 0x3d6, size: 0x1, def value: None
 bool  ___headOverlapping;

/// @brief Field onGround, offset: 0x3d7, size: 0x1, def value: None
 bool  ___onGround;

/// @brief Field groundContact, offset: 0x3d8, size: 0x30, def value: None
 ::UnityEngine::ContactPoint  ___groundContact;

/// @brief Field applyFrictionHolding, offset: 0x408, size: 0x1, def value: None
 bool  ___applyFrictionHolding;

/// @brief Field frictionHoldLocalPosLeft, offset: 0x40c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___frictionHoldLocalPosLeft;

/// @brief Field frictionHoldLocalRotLeft, offset: 0x418, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___frictionHoldLocalRotLeft;

/// @brief Field frictionHoldLocalPosRight, offset: 0x428, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___frictionHoldLocalPosRight;

/// @brief Field frictionHoldLocalRotRight, offset: 0x434, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___frictionHoldLocalRotRight;

/// @brief Field hitSoundSpamLastHitTime, offset: 0x444, size: 0x4, def value: None
 float_t  ___hitSoundSpamLastHitTime;

/// @brief Field hitSoundSpamCount, offset: 0x448, size: 0x4, def value: None
 int32_t  ___hitSoundSpamCount;

/// @brief Field hitSoundSpamLimit, offset: 0x44c, size: 0x4, def value: None
 int32_t  ___hitSoundSpamLimit;

/// @brief Field hitSoundSpamCooldownResetTime, offset: 0x450, size: 0x4, def value: None
 float_t  ___hitSoundSpamCooldownResetTime;

/// @brief Field gorillaHeadTriggerTag, offset: 0x458, size: 0x8, def value: None
 ::StringW  ___gorillaHeadTriggerTag;

/// @brief Size padding 0x490 - 0x460 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___ballRadius) == 0x334, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___depenetrationSpeed) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSpeedThreshold) == 0x33c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___maxHitSpeed) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSpeedToHitMultiplierMinMax) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitMultiplierCurve) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitTorqueMultiplier) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___reflectOffHandAmount) == 0x35c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___minHitSpeedThreshold) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___surfaceGripDistance) == 0x364, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___reflectOffHandSpeedInputMinMax) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___reflectOffHandAmountOutputMinMax) == 0x370, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSoundBank) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSpeedToAudioMinMax) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___handHitAudioMultiplier) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSoundPitchMinMax) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSoundVolumeMinMax) == 0x394, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___allowHeadButting) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___headButtRadius) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___headButtHitMultiplier) == 0x3a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___gravityCounterAmount) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___debugDraw) == 0x3ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___handClimberMap) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___playerHeadCollider) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___collisionContacts) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___collisionContactsCount) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___handRadius) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___depenetrationBias) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___leftHandOverlapping) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___rightHandOverlapping) == 0x3d5, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___headOverlapping) == 0x3d6, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___onGround) == 0x3d7, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___groundContact) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___applyFrictionHolding) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___frictionHoldLocalPosLeft) == 0x40c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___frictionHoldLocalRotLeft) == 0x418, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___frictionHoldLocalPosRight) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___frictionHoldLocalRotRight) == 0x434, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSoundSpamLastHitTime) == 0x444, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSoundSpamCount) == 0x448, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSoundSpamLimit) == 0x44c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___hitSoundSpamCooldownResetTime) == 0x450, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TransferrableBall, ___gorillaHeadTriggerTag) == 0x458, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TransferrableBall) == 0x490, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: TransferrableBall/<>c
class CORDL_TYPE TransferrableBall___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::TransferrableBall___c*  __9;

/// @brief Field <>9__44_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__44_0, put=setStaticF___9__44_0)) ::System::Action*  __9__44_0;

static inline ::GlobalNamespace::TransferrableBall___c* New_ctor() ;

/// @brief Method <TakeOwnershipAndEnablePhysics>b__44_0, addr 0x5767834, size 0x4, virtual false, abstract: false, final false
inline void _TakeOwnershipAndEnablePhysics_b__44_0() ;

/// @brief Method .ctor, addr 0x576782c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::TransferrableBall___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__44_0() ;

static inline void setStaticF___9(::GlobalNamespace::TransferrableBall___c*  value) ;

static inline void setStaticF___9__44_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TransferrableBall___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TransferrableBall___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TransferrableBall___c(TransferrableBall___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TransferrableBall___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TransferrableBall___c(TransferrableBall___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1348};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::TransferrableBall___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
