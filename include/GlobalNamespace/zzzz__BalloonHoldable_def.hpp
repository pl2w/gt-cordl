#pragma once
// IWYU pragma private; include "GlobalNamespace/BalloonHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BalloonHoldable_BalloonStates_def.hpp"
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BalloonHoldable)
namespace GlobalNamespace {
struct BalloonHoldable_BalloonStates;
}
namespace GlobalNamespace {
class BalloonHoldable___c;
}
namespace GlobalNamespace {
class FXSystemSettings;
}
namespace GlobalNamespace {
class IFXContext;
}
namespace GlobalNamespace {
class ITetheredObjectBehavior;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion::Swimming {
class WaterVolume;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class LineRenderer;
}
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
class Rigidbody;
}
// Forward declare root types
namespace GlobalNamespace {
class BalloonHoldable;
}
namespace GlobalNamespace {
class BalloonHoldable___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BalloonHoldable*);
MARK_REF_T(::GlobalNamespace::BalloonHoldable___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BalloonHoldable*, "", "BalloonHoldable");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BalloonHoldable___c*, "", "BalloonHoldable/<>c");
// Dependencies BalloonHoldable::BalloonStates, TransferrableObject, UnityEngine.Color, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: BalloonHoldable
class CORDL_TYPE BalloonHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using BalloonStates = ::GlobalNamespace::BalloonHoldable_BalloonStates;

using __c = ::GlobalNamespace::BalloonHoldable___c;

 __declspec(property(get=IFXContext_get_settings)) ::UnityW<::GlobalNamespace::FXSystemSettings>  IFXContext_settings;

/// @brief Field balloonBopSource, offset 0x398, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonBopSource, put=__cordl_internal_set_balloonBopSource)) ::UnityW<::UnityEngine::AudioSource>  balloonBopSource;

/// @brief Field balloonDynamics, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonDynamics, put=__cordl_internal_set_balloonDynamics)) ::GlobalNamespace::ITetheredObjectBehavior*  balloonDynamics;

/// @brief Field balloonInflatSource, offset 0x3a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonInflatSource, put=__cordl_internal_set_balloonInflatSource)) ::UnityW<::UnityEngine::AudioSource>  balloonInflatSource;

/// @brief Field balloonPopFXColor, offset 0x368, size 0x10 
 __declspec(property(get=__cordl_internal_get_balloonPopFXColor, put=__cordl_internal_set_balloonPopFXColor)) ::UnityEngine::Color  balloonPopFXColor;

/// @brief Field balloonPopFXPrefab, offset 0x360, size 0x8 
 __declspec(property(get=__cordl_internal_get_balloonPopFXPrefab, put=__cordl_internal_set_balloonPopFXPrefab)) ::UnityW<::UnityEngine::GameObject>  balloonPopFXPrefab;

/// @brief Field balloonState, offset 0x3c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_balloonState, put=__cordl_internal_set_balloonState)) ::GlobalNamespace::BalloonHoldable_BalloonStates  balloonState;

/// @brief Field beginScale, offset 0x384, size 0x4 
 __declspec(property(get=__cordl_internal_get_beginScale, put=__cordl_internal_set_beginScale)) float_t  beginScale;

/// @brief Field bopSpeed, offset 0x388, size 0x4 
 __declspec(property(get=__cordl_internal_get_bopSpeed, put=__cordl_internal_set_bopSpeed)) float_t  bopSpeed;

/// @brief Field collisionPtAsRemote, offset 0x3b4, size 0xc 
 __declspec(property(get=__cordl_internal_get_collisionPtAsRemote, put=__cordl_internal_set_collisionPtAsRemote)) ::UnityEngine::Vector3  collisionPtAsRemote;

/// @brief Field disableCollisionHandling, offset 0x3d8, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableCollisionHandling, put=__cordl_internal_set_disableCollisionHandling)) bool  disableCollisionHandling;

/// @brief Field disableRelease, offset 0x3d9, size 0x1 
 __declspec(property(get=__cordl_internal_get_disableRelease, put=__cordl_internal_set_disableRelease)) bool  disableRelease;

/// @brief Field forceAppliedAsRemote, offset 0x3a8, size 0xc 
 __declspec(property(get=__cordl_internal_get_forceAppliedAsRemote, put=__cordl_internal_set_forceAppliedAsRemote)) ::UnityEngine::Vector3  forceAppliedAsRemote;

/// @brief Field fullyInflatedScale, offset 0x38c, size 0xc 
 __declspec(property(get=__cordl_internal_get_fullyInflatedScale, put=__cordl_internal_set_fullyInflatedScale)) ::UnityEngine::Vector3  fullyInflatedScale;

/// @brief Field lastOwnershipRequest, offset 0x3d4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastOwnershipRequest, put=__cordl_internal_set_lastOwnershipRequest)) float_t  lastOwnershipRequest;

/// @brief Field lineRenderer, offset 0x348, size 0x8 
 __declspec(property(get=__cordl_internal_get_lineRenderer, put=__cordl_internal_set_lineRenderer)) ::UnityW<::UnityEngine::LineRenderer>  lineRenderer;

/// @brief Field maxDistanceFromOwner, offset 0x3d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistanceFromOwner, put=__cordl_internal_set_maxDistanceFromOwner)) float_t  maxDistanceFromOwner;

/// @brief Field mesh, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_mesh, put=__cordl_internal_set_mesh)) ::UnityW<::UnityEngine::Renderer>  mesh;

/// @brief Field originalOwner, offset 0x358, size 0x8 
 __declspec(property(get=__cordl_internal_get_originalOwner, put=__cordl_internal_set_originalOwner)) ::GlobalNamespace::NetPlayer*  originalOwner;

/// @brief Field poppedTimerLength, offset 0x380, size 0x4 
 __declspec(property(get=__cordl_internal_get_poppedTimerLength, put=__cordl_internal_set_poppedTimerLength)) float_t  poppedTimerLength;

/// @brief Field rb, offset 0x350, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field returnTimer, offset 0x3cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_returnTimer, put=__cordl_internal_set_returnTimer)) float_t  returnTimer;

/// @brief Field scaleTimerLength, offset 0x37c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleTimerLength, put=__cordl_internal_set_scaleTimerLength)) float_t  scaleTimerLength;

/// @brief Field timer, offset 0x378, size 0x4 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) float_t  timer;

/// @brief Field waterVolume, offset 0x3c0, size 0x8 
 __declspec(property(get=__cordl_internal_get_waterVolume, put=__cordl_internal_set_waterVolume)) ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  waterVolume;

/// @brief Convert operator to "::GlobalNamespace::IFXContext"
constexpr operator  ::GlobalNamespace::IFXContext*() noexcept;

/// @brief Method EnableDynamics, addr 0x57182d4, size 0x1c0, virtual false, abstract: false, final false
inline void EnableDynamics(bool  enable, bool  collider, bool  forceKinematicOn) ;

/// @brief Method Grab, addr 0x57185dc, size 0x224, virtual false, abstract: false, final false
inline void Grab() ;

/// @brief Method IFXContext.OnPlayFX, addr 0x571a6f8, size 0x1b0, virtual true, abstract: false, final true
inline void IFXContext_OnPlayFX() ;

/// @brief Method IFXContext.get_settings, addr 0x571a6e0, size 0x18, virtual true, abstract: false, final true
inline ::UnityW<::GlobalNamespace::FXSystemSettings> IFXContext_get_settings() ;

/// @brief Method LateUpdateReplicated, addr 0x571a274, size 0x8, virtual true, abstract: false, final false
inline void LateUpdateReplicated() ;

/// @brief Method LateUpdateShared, addr 0x5719f00, size 0x374, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::BalloonHoldable* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x571a5a4, size 0x13c, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x5718a80, size 0x40, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5718494, size 0x148, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnItemDestroyedOrDisabled, addr 0x57191f8, size 0x10c, virtual true, abstract: false, final false
inline void OnItemDestroyedOrDisabled() ;

/// @brief Method OnJoinedRoom, addr 0x57189c8, size 0x88, virtual true, abstract: false, final false
inline void OnJoinedRoom() ;

/// @brief Method OnOwnerChangeCb, addr 0x5719590, size 0x4, virtual false, abstract: false, final false
inline void OnOwnerChangeCb(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner) ;

/// @brief Method OnOwnershipTransferred, addr 0x5719594, size 0x2ac, virtual true, abstract: false, final false
inline void OnOwnershipTransferred(::GlobalNamespace::NetPlayer*  newOwner, ::GlobalNamespace::NetPlayer*  prevOwner) ;

/// @brief Method OnSpawn, addr 0x5718168, size 0x144, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method OnStateChanged, addr 0x5719dd4, size 0x12c, virtual true, abstract: false, final false
inline void OnStateChanged() ;

/// @brief Method OnTriggerEnter, addr 0x571a27c, size 0x328, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnWorldShareableItemSpawn, addr 0x5718b64, size 0x15c, virtual true, abstract: false, final false
inline void OnWorldShareableItemSpawn() ;

/// @brief Method OwnerPopBalloon, addr 0x5719840, size 0x144, virtual false, abstract: false, final false
inline void OwnerPopBalloon() ;

/// @brief Method PlayDestroyedOrDisabledEffect, addr 0x5719184, size 0x40, virtual true, abstract: false, final false
inline void PlayDestroyedOrDisabledEffect() ;

/// @brief Method PlayPopBalloonFX, addr 0x57191c4, size 0x34, virtual false, abstract: false, final false
inline void PlayPopBalloonFX() ;

/// @brief Method PopBalloon, addr 0x5718e58, size 0x32c, virtual false, abstract: false, final false
inline void PopBalloon() ;

/// @brief Method PopBalloonRemote, addr 0x5719564, size 0x2c, virtual false, abstract: false, final false
inline void PopBalloonRemote() ;

/// @brief Method PreDisable, addr 0x5718ac0, size 0x28, virtual true, abstract: false, final false
inline void PreDisable() ;

/// @brief Method Release, addr 0x5718800, size 0x1c8, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method ResetToDefaultState, addr 0x5718ae8, size 0x7c, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

/// @brief Method ResetToHome, addr 0x5718cc0, size 0x198, virtual true, abstract: false, final false
inline void ResetToHome() ;

/// @brief Method RunLocalPopSM, addr 0x5719984, size 0x450, virtual false, abstract: false, final false
inline void RunLocalPopSM() ;

/// @brief Method ShouldSimulate, addr 0x5718a50, size 0x30, virtual false, abstract: false, final false
inline bool ShouldSimulate() ;

/// @brief Method Start, addr 0x57182ac, size 0x28, virtual true, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_balloonBopSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_balloonBopSource() ;

constexpr ::GlobalNamespace::ITetheredObjectBehavior* const& __cordl_internal_get_balloonDynamics() const;

constexpr ::GlobalNamespace::ITetheredObjectBehavior*& __cordl_internal_get_balloonDynamics() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_balloonInflatSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_balloonInflatSource() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_balloonPopFXColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_balloonPopFXColor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_balloonPopFXPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_balloonPopFXPrefab() ;

constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates const& __cordl_internal_get_balloonState() const;

constexpr ::GlobalNamespace::BalloonHoldable_BalloonStates& __cordl_internal_get_balloonState() ;

constexpr float_t const& __cordl_internal_get_beginScale() const;

constexpr float_t& __cordl_internal_get_beginScale() ;

constexpr float_t const& __cordl_internal_get_bopSpeed() const;

constexpr float_t& __cordl_internal_get_bopSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_collisionPtAsRemote() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_collisionPtAsRemote() ;

constexpr bool const& __cordl_internal_get_disableCollisionHandling() const;

constexpr bool& __cordl_internal_get_disableCollisionHandling() ;

constexpr bool const& __cordl_internal_get_disableRelease() const;

constexpr bool& __cordl_internal_get_disableRelease() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_forceAppliedAsRemote() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_forceAppliedAsRemote() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_fullyInflatedScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_fullyInflatedScale() ;

constexpr float_t const& __cordl_internal_get_lastOwnershipRequest() const;

constexpr float_t& __cordl_internal_get_lastOwnershipRequest() ;

constexpr ::UnityW<::UnityEngine::LineRenderer> const& __cordl_internal_get_lineRenderer() const;

constexpr ::UnityW<::UnityEngine::LineRenderer>& __cordl_internal_get_lineRenderer() ;

constexpr float_t const& __cordl_internal_get_maxDistanceFromOwner() const;

constexpr float_t& __cordl_internal_get_maxDistanceFromOwner() ;

constexpr ::UnityW<::UnityEngine::Renderer> const& __cordl_internal_get_mesh() const;

constexpr ::UnityW<::UnityEngine::Renderer>& __cordl_internal_get_mesh() ;

constexpr ::GlobalNamespace::NetPlayer* const& __cordl_internal_get_originalOwner() const;

constexpr ::GlobalNamespace::NetPlayer*& __cordl_internal_get_originalOwner() ;

constexpr float_t const& __cordl_internal_get_poppedTimerLength() const;

constexpr float_t& __cordl_internal_get_poppedTimerLength() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_returnTimer() const;

constexpr float_t& __cordl_internal_get_returnTimer() ;

constexpr float_t const& __cordl_internal_get_scaleTimerLength() const;

constexpr float_t& __cordl_internal_get_scaleTimerLength() ;

constexpr float_t const& __cordl_internal_get_timer() const;

constexpr float_t& __cordl_internal_get_timer() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume> const& __cordl_internal_get_waterVolume() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>& __cordl_internal_get_waterVolume() ;

constexpr void __cordl_internal_set_balloonBopSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_balloonDynamics(::GlobalNamespace::ITetheredObjectBehavior*  value) ;

constexpr void __cordl_internal_set_balloonInflatSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_balloonPopFXColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_balloonPopFXPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_balloonState(::GlobalNamespace::BalloonHoldable_BalloonStates  value) ;

constexpr void __cordl_internal_set_beginScale(float_t  value) ;

constexpr void __cordl_internal_set_bopSpeed(float_t  value) ;

constexpr void __cordl_internal_set_collisionPtAsRemote(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_disableCollisionHandling(bool  value) ;

constexpr void __cordl_internal_set_disableRelease(bool  value) ;

constexpr void __cordl_internal_set_forceAppliedAsRemote(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_fullyInflatedScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastOwnershipRequest(float_t  value) ;

constexpr void __cordl_internal_set_lineRenderer(::UnityW<::UnityEngine::LineRenderer>  value) ;

constexpr void __cordl_internal_set_maxDistanceFromOwner(float_t  value) ;

constexpr void __cordl_internal_set_mesh(::UnityW<::UnityEngine::Renderer>  value) ;

constexpr void __cordl_internal_set_originalOwner(::GlobalNamespace::NetPlayer*  value) ;

constexpr void __cordl_internal_set_poppedTimerLength(float_t  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_returnTimer(float_t  value) ;

constexpr void __cordl_internal_set_scaleTimerLength(float_t  value) ;

constexpr void __cordl_internal_set_timer(float_t  value) ;

constexpr void __cordl_internal_set_waterVolume(::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  value) ;

/// @brief Method .ctor, addr 0x571a8a8, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IFXContext"
constexpr ::GlobalNamespace::IFXContext* i___GlobalNamespace__IFXContext() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BalloonHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BalloonHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BalloonHoldable(BalloonHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BalloonHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BalloonHoldable(BalloonHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1195};

/// @brief Field balloonDynamics, offset: 0x338, size: 0x8, def value: None
 ::GlobalNamespace::ITetheredObjectBehavior*  ___balloonDynamics;

/// [SerializeField]
/// @brief Field mesh, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Renderer>  ___mesh;

/// @brief Field lineRenderer, offset: 0x348, size: 0x8, def value: None
 ::UnityW<::UnityEngine::LineRenderer>  ___lineRenderer;

/// @brief Field rb, offset: 0x350, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field originalOwner, offset: 0x358, size: 0x8, def value: None
 ::GlobalNamespace::NetPlayer*  ___originalOwner;

/// @brief Field balloonPopFXPrefab, offset: 0x360, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___balloonPopFXPrefab;

/// @brief Field balloonPopFXColor, offset: 0x368, size: 0x10, def value: None
 ::UnityEngine::Color  ___balloonPopFXColor;

/// @brief Field timer, offset: 0x378, size: 0x4, def value: None
 float_t  ___timer;

/// @brief Field scaleTimerLength, offset: 0x37c, size: 0x4, def value: None
 float_t  ___scaleTimerLength;

/// @brief Field poppedTimerLength, offset: 0x380, size: 0x4, def value: None
 float_t  ___poppedTimerLength;

/// @brief Field beginScale, offset: 0x384, size: 0x4, def value: None
 float_t  ___beginScale;

/// @brief Field bopSpeed, offset: 0x388, size: 0x4, def value: None
 float_t  ___bopSpeed;

/// @brief Field fullyInflatedScale, offset: 0x38c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___fullyInflatedScale;

/// @brief Field balloonBopSource, offset: 0x398, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___balloonBopSource;

/// @brief Field balloonInflatSource, offset: 0x3a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___balloonInflatSource;

/// @brief Field forceAppliedAsRemote, offset: 0x3a8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___forceAppliedAsRemote;

/// @brief Field collisionPtAsRemote, offset: 0x3b4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___collisionPtAsRemote;

/// @brief Field waterVolume, offset: 0x3c0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::WaterVolume>  ___waterVolume;

/// [DebugReadout]
/// @brief Field balloonState, offset: 0x3c8, size: 0x4, def value: None
 ::GlobalNamespace::BalloonHoldable_BalloonStates  ___balloonState;

/// @brief Field returnTimer, offset: 0x3cc, size: 0x4, def value: None
 float_t  ___returnTimer;

/// [SerializeField]
/// @brief Field maxDistanceFromOwner, offset: 0x3d0, size: 0x4, def value: None
 float_t  ___maxDistanceFromOwner;

/// @brief Field lastOwnershipRequest, offset: 0x3d4, size: 0x4, def value: None
 float_t  ___lastOwnershipRequest;

/// [SerializeField]
/// @brief Field disableCollisionHandling, offset: 0x3d8, size: 0x1, def value: None
 bool  ___disableCollisionHandling;

/// [SerializeField]
/// @brief Field disableRelease, offset: 0x3d9, size: 0x1, def value: None
 bool  ___disableRelease;

/// @brief Size padding 0x410 - 0x3e0 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___balloonDynamics) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___mesh) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___lineRenderer) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___rb) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___originalOwner) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___balloonPopFXPrefab) == 0x360, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___balloonPopFXColor) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___timer) == 0x378, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___scaleTimerLength) == 0x37c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___poppedTimerLength) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___beginScale) == 0x384, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___bopSpeed) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___fullyInflatedScale) == 0x38c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___balloonBopSource) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___balloonInflatSource) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___forceAppliedAsRemote) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___collisionPtAsRemote) == 0x3b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___waterVolume) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___balloonState) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___returnTimer) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___maxDistanceFromOwner) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___lastOwnershipRequest) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___disableCollisionHandling) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BalloonHoldable, ___disableRelease) == 0x3d9, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BalloonHoldable) == 0x410, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BalloonHoldable/<>c
class CORDL_TYPE BalloonHoldable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::BalloonHoldable___c*  __9;

/// @brief Field <>9__50_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__50_0, put=setStaticF___9__50_0)) ::System::Action*  __9__50_0;

static inline ::GlobalNamespace::BalloonHoldable___c* New_ctor() ;

/// @brief Method <OnTriggerEnter>b__50_0, addr 0x571a980, size 0x4, virtual false, abstract: false, final false
inline void _OnTriggerEnter_b__50_0() ;

/// @brief Method .ctor, addr 0x571a978, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::BalloonHoldable___c* getStaticF___9() ;

static inline ::System::Action* getStaticF___9__50_0() ;

static inline void setStaticF___9(::GlobalNamespace::BalloonHoldable___c*  value) ;

static inline void setStaticF___9__50_0(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BalloonHoldable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BalloonHoldable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BalloonHoldable___c(BalloonHoldable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BalloonHoldable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BalloonHoldable___c(BalloonHoldable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1194};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BalloonHoldable___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
