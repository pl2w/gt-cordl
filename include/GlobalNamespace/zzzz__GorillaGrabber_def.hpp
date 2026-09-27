#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaGrabber.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GorillaGrabber)
namespace GorillaLocomotion::Gameplay {
class IGorillaGrabable;
}
namespace GorillaLocomotion {
class GTPlayer;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaGrabber;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaGrabber*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaGrabber*, "", "GorillaGrabber");
// Dependencies UnityEngine.Collider, UnityEngine.MonoBehaviour, UnityEngine.Vector3, UnityEngine.XR.XRNode
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaGrabber
class CORDL_TYPE GorillaGrabber : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_IsLeftHand)) bool  IsLeftHand;

 __declspec(property(get=get_IsRightHand)) bool  IsRightHand;

 __declspec(property(get=get_Player)) ::UnityW<::GorillaLocomotion::GTPlayer>  Player;

 __declspec(property(get=get_XrNode)) ::UnityEngine::XR::XRNode  XrNode;

/// @brief Field audioSource, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field breakDistance, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_breakDistance, put=__cordl_internal_set_breakDistance)) float_t  breakDistance;

/// @brief Field coyoteTimeDuration, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_coyoteTimeDuration, put=__cordl_internal_set_coyoteTimeDuration)) float_t  coyoteTimeDuration;

/// @brief Field currentGrabbable, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGrabbable, put=__cordl_internal_set_currentGrabbable)) ::GorillaLocomotion::Gameplay::IGorillaGrabable*  currentGrabbable;

/// @brief Field currentGrabbedTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentGrabbedTransform, put=__cordl_internal_set_currentGrabbedTransform)) ::UnityW<::UnityEngine::Transform>  currentGrabbedTransform;

/// @brief Field grabCastResults, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_grabCastResults, put=__cordl_internal_set_grabCastResults)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  grabCastResults;

/// @brief Field grabRadius, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabRadius, put=__cordl_internal_set_grabRadius)) float_t  grabRadius;

/// @brief Field grabTimeStamp, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_grabTimeStamp, put=__cordl_internal_set_grabTimeStamp)) float_t  grabTimeStamp;

/// @brief Field gripEffects, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_gripEffects, put=__cordl_internal_set_gripEffects)) ::UnityW<::UnityEngine::ParticleSystem>  gripEffects;

/// @brief Field hapticDecay, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticDecay, put=__cordl_internal_set_hapticDecay)) float_t  hapticDecay;

/// @brief Field hapticStrength, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrength, put=__cordl_internal_set_hapticStrength)) float_t  hapticStrength;

/// @brief Field hapticStrengthActual, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_hapticStrengthActual, put=__cordl_internal_set_hapticStrengthActual)) float_t  hapticStrengthActual;

 __declspec(property(get=get_isGrabbing)) bool  isGrabbing;

/// @brief Field localGrabbedPosition, offset 0x40, size 0xc 
 __declspec(property(get=__cordl_internal_get_localGrabbedPosition, put=__cordl_internal_set_localGrabbedPosition)) ::UnityEngine::Vector3  localGrabbedPosition;

/// @brief Field player, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_player, put=__cordl_internal_set_player)) ::UnityW<::GorillaLocomotion::GTPlayer>  player;

/// @brief Field xrNode, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_xrNode, put=__cordl_internal_set_xrNode)) ::UnityEngine::XR::XRNode  xrNode;

/// @brief Method CheckGrabber, addr 0x595a480, size 0x1b8, virtual false, abstract: false, final false
inline void CheckGrabber(bool  initiateGrab) ;

/// @brief Method FindClosestPoint, addr 0x595ac90, size 0xd0, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 FindClosestPoint(::UnityEngine::Collider*  collider, ::UnityEngine::Vector3  position) ;

/// @brief Method GrabDistanceOverCheck, addr 0x595a638, size 0x13c, virtual false, abstract: false, final false
inline bool GrabDistanceOverCheck() ;

/// @brief Method Inject, addr 0x595ad60, size 0x178, virtual false, abstract: false, final false
inline void Inject(::UnityEngine::Transform*  currentGrabbableTransform, ::UnityEngine::Vector3  localGrabbedPosition) ;

static inline ::GlobalNamespace::GorillaGrabber* New_ctor() ;

/// @brief Method Start, addr 0x595a324, size 0x15c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method TryGrab, addr 0x595a774, size 0x51c, virtual false, abstract: false, final false
inline ::GorillaLocomotion::Gameplay::IGorillaGrabable* TryGrab(bool  momentary) ;

/// @brief Method Ungrab, addr 0x594f344, size 0x154, virtual false, abstract: false, final false
inline void Ungrab(::GorillaLocomotion::Gameplay::IGorillaGrabable*  specificGrabbable) ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_breakDistance() const;

constexpr float_t& __cordl_internal_get_breakDistance() ;

constexpr float_t const& __cordl_internal_get_coyoteTimeDuration() const;

constexpr float_t& __cordl_internal_get_coyoteTimeDuration() ;

constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable* const& __cordl_internal_get_currentGrabbable() const;

constexpr ::GorillaLocomotion::Gameplay::IGorillaGrabable*& __cordl_internal_get_currentGrabbable() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_currentGrabbedTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_currentGrabbedTransform() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_grabCastResults() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_grabCastResults() ;

constexpr float_t const& __cordl_internal_get_grabRadius() const;

constexpr float_t& __cordl_internal_get_grabRadius() ;

constexpr float_t const& __cordl_internal_get_grabTimeStamp() const;

constexpr float_t& __cordl_internal_get_grabTimeStamp() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_gripEffects() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_gripEffects() ;

constexpr float_t const& __cordl_internal_get_hapticDecay() const;

constexpr float_t& __cordl_internal_get_hapticDecay() ;

constexpr float_t const& __cordl_internal_get_hapticStrength() const;

constexpr float_t& __cordl_internal_get_hapticStrength() ;

constexpr float_t const& __cordl_internal_get_hapticStrengthActual() const;

constexpr float_t& __cordl_internal_get_hapticStrengthActual() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localGrabbedPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localGrabbedPosition() ;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer> const& __cordl_internal_get_player() const;

constexpr ::UnityW<::GorillaLocomotion::GTPlayer>& __cordl_internal_get_player() ;

constexpr ::UnityEngine::XR::XRNode const& __cordl_internal_get_xrNode() const;

constexpr ::UnityEngine::XR::XRNode& __cordl_internal_get_xrNode() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_breakDistance(float_t  value) ;

constexpr void __cordl_internal_set_coyoteTimeDuration(float_t  value) ;

constexpr void __cordl_internal_set_currentGrabbable(::GorillaLocomotion::Gameplay::IGorillaGrabable*  value) ;

constexpr void __cordl_internal_set_currentGrabbedTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_grabCastResults(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_grabRadius(float_t  value) ;

constexpr void __cordl_internal_set_grabTimeStamp(float_t  value) ;

constexpr void __cordl_internal_set_gripEffects(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_hapticDecay(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrength(float_t  value) ;

constexpr void __cordl_internal_set_hapticStrengthActual(float_t  value) ;

constexpr void __cordl_internal_set_localGrabbedPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_player(::UnityW<::GorillaLocomotion::GTPlayer>  value) ;

constexpr void __cordl_internal_set_xrNode(::UnityEngine::XR::XRNode  value) ;

/// @brief Method .ctor, addr 0x595aed8, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsLeftHand, addr 0x594f7e0, size 0x10, virtual false, abstract: false, final false
inline bool get_IsLeftHand() ;

/// @brief Method get_IsRightHand, addr 0x595a30c, size 0x10, virtual false, abstract: false, final false
inline bool get_IsRightHand() ;

/// @brief Method get_Player, addr 0x595a31c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GorillaLocomotion::GTPlayer> get_Player() ;

/// @brief Method get_XrNode, addr 0x595a304, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::XRNode get_XrNode() ;

/// @brief Method get_isGrabbing, addr 0x595a2f4, size 0x10, virtual false, abstract: false, final false
inline bool get_isGrabbing() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaGrabber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaGrabber", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaGrabber(GorillaGrabber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaGrabber", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaGrabber(GorillaGrabber const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2338};

/// @brief Field player, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::GTPlayer>  ___player;

/// [SerializeField]
/// @brief Field xrNode, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::XR::XRNode  ___xrNode;

/// @brief Field audioSource, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field currentGrabbedTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___currentGrabbedTransform;

/// @brief Field localGrabbedPosition, offset: 0x40, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localGrabbedPosition;

/// @brief Field currentGrabbable, offset: 0x50, size: 0x8, def value: None
 ::GorillaLocomotion::Gameplay::IGorillaGrabable*  ___currentGrabbable;

/// [SerializeField]
/// @brief Field grabRadius, offset: 0x58, size: 0x4, def value: None
 float_t  ___grabRadius;

/// [SerializeField]
/// @brief Field breakDistance, offset: 0x5c, size: 0x4, def value: None
 float_t  ___breakDistance;

/// [SerializeField]
/// @brief Field hapticStrength, offset: 0x60, size: 0x4, def value: None
 float_t  ___hapticStrength;

/// @brief Field hapticStrengthActual, offset: 0x64, size: 0x4, def value: None
 float_t  ___hapticStrengthActual;

/// [SerializeField]
/// @brief Field hapticDecay, offset: 0x68, size: 0x4, def value: None
 float_t  ___hapticDecay;

/// [SerializeField]
/// @brief Field gripEffects, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___gripEffects;

/// @brief Field grabCastResults, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___grabCastResults;

/// @brief Field grabTimeStamp, offset: 0x80, size: 0x4, def value: None
 float_t  ___grabTimeStamp;

/// [SerializeField]
/// @brief Field coyoteTimeDuration, offset: 0x84, size: 0x4, def value: None
 float_t  ___coyoteTimeDuration;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___player) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___xrNode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___audioSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___currentGrabbedTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___localGrabbedPosition) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___currentGrabbable) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___grabRadius) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___breakDistance) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___hapticStrength) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___hapticStrengthActual) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___hapticDecay) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___gripEffects) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___grabCastResults) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___grabTimeStamp) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaGrabber, ___coyoteTimeDuration) == 0x84, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaGrabber) == 0x88, "Size mismatch!");

} // namespace end def GlobalNamespace
