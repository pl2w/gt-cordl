#pragma once
// IWYU pragma private; include "GlobalNamespace/StickyProjectile.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StickyProjectile)
namespace GlobalNamespace {
template<typename T>
class FlagEvents_1;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class PlayerColoredCosmetic;
}
namespace GlobalNamespace {
struct StickyProjectile_StickFlags;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaLocomotion::Swimming {
class RigidbodyWaterInteraction;
}
namespace GorillaTag::Cosmetics {
class IProjectile;
}
namespace UnityEngine::Events {
class UnityEvent;
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
class StickyProjectile;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::StickyProjectile*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StickyProjectile*, "", "StickyProjectile");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector2, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: StickyProjectile
class CORDL_TYPE StickyProjectile : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using StickFlags = ::GlobalNamespace::StickyProjectile_StickFlags;

/// @brief Field INVERSE_HEAD_ROTATION, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_INVERSE_HEAD_ROTATION, put=__cordl_internal_set_INVERSE_HEAD_ROTATION)) ::UnityEngine::Quaternion  INVERSE_HEAD_ROTATION;

/// @brief Field OnLaunch, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLaunch, put=__cordl_internal_set_OnLaunch)) ::UnityEngine::Events::UnityEvent*  OnLaunch;

/// @brief Field OnReset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnReset, put=__cordl_internal_set_OnReset)) ::UnityEngine::Events::UnityEvent*  OnReset;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0xec, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field alignToHitNormal, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get_alignToHitNormal, put=__cordl_internal_set_alignToHitNormal)) bool  alignToHitNormal;

/// @brief Field collider, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_collider, put=__cordl_internal_set_collider)) ::UnityW<::UnityEngine::Collider>  collider;

/// @brief Field faceVelocityWhileAirborne, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_faceVelocityWhileAirborne, put=__cordl_internal_set_faceVelocityWhileAirborne)) bool  faceVelocityWhileAirborne;

/// @brief Field headZoneInverseLocalPosition, offset 0x94, size 0xc 
 __declspec(property(get=__cordl_internal_get_headZoneInverseLocalPosition, put=__cordl_internal_set_headZoneInverseLocalPosition)) ::UnityEngine::Vector3  headZoneInverseLocalPosition;

/// @brief Field headZoneInversePosition, offset 0x88, size 0xc 
 __declspec(property(get=__cordl_internal_get_headZoneInversePosition, put=__cordl_internal_set_headZoneInversePosition)) ::UnityEngine::Vector3  headZoneInversePosition;

/// @brief Field headZonePosition, offset 0x50, size 0xc 
 __declspec(property(get=__cordl_internal_get_headZonePosition, put=__cordl_internal_set_headZonePosition)) ::UnityEngine::Vector3  headZonePosition;

/// @brief Field headZoneRadius, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_headZoneRadius, put=__cordl_internal_set_headZoneRadius)) float_t  headZoneRadius;

/// @brief Field launchRandomSpinSpeedMinMax, offset 0x2c, size 0x8 
 __declspec(property(get=__cordl_internal_get_launchRandomSpinSpeedMinMax, put=__cordl_internal_set_launchRandomSpinSpeedMinMax)) ::UnityEngine::Vector2  launchRandomSpinSpeedMinMax;

/// @brief Field localHeadZonePosition, offset 0x60, size 0xc 
 __declspec(property(get=__cordl_internal_get_localHeadZonePosition, put=__cordl_internal_set_localHeadZonePosition)) ::UnityEngine::Vector3  localHeadZonePosition;

/// @brief Field pcc, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_pcc, put=__cordl_internal_set_pcc)) ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  pcc;

/// @brief Field rb, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field rbwi, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rbwi, put=__cordl_internal_set_rbwi)) ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>  rbwi;

/// @brief Field scaleOnLocalHead, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleOnLocalHead, put=__cordl_internal_set_scaleOnLocalHead)) float_t  scaleOnLocalHead;

/// @brief Field scaleOnLocalHeadZone, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_scaleOnLocalHeadZone, put=__cordl_internal_set_scaleOnLocalHeadZone)) float_t  scaleOnLocalHeadZone;

/// @brief Field stickEvents, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickEvents, put=__cordl_internal_set_stickEvents)) ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>*  stickEvents;

/// @brief Field stickyPart, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stickyPart, put=__cordl_internal_set_stickyPart)) ::UnityW<::UnityEngine::Transform>  stickyPart;

/// @brief Field stickyPartLocalPosition, offset 0xa0, size 0xc 
 __declspec(property(get=__cordl_internal_get_stickyPartLocalPosition, put=__cordl_internal_set_stickyPartLocalPosition)) ::UnityEngine::Vector3  stickyPartLocalPosition;

/// @brief Field stickyPartLocalRotation, offset 0xac, size 0x10 
 __declspec(property(get=__cordl_internal_get_stickyPartLocalRotation, put=__cordl_internal_set_stickyPartLocalRotation)) ::UnityEngine::Quaternion  stickyPartLocalRotation;

/// @brief Field stickyPartLocalScale, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_stickyPartLocalScale, put=__cordl_internal_set_stickyPartLocalScale)) ::UnityEngine::Vector3  stickyPartLocalScale;

/// @brief Field triggerLayer, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerLayer, put=__cordl_internal_set_triggerLayer)) int32_t  triggerLayer;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Convert operator to "::GorillaTag::Cosmetics::IProjectile"
constexpr operator  ::GorillaTag::Cosmetics::IProjectile*() noexcept;

/// @brief Method Awake, addr 0x578facc, size 0x1c0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method Launch, addr 0x578fc8c, size 0x38c, virtual true, abstract: false, final true
inline void Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progress) ;

static inline ::GlobalNamespace::StickyProjectile* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5790170, size 0x1c4, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method OnDisable, addr 0x5790a40, size 0x48, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5790a14, size 0x2c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnTriggerEnter, addr 0x5790334, size 0x6e0, virtual false, abstract: false, final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method StickTo, addr 0x5790018, size 0x158, virtual false, abstract: false, final false
inline void StickTo(::UnityEngine::Transform*  otherTransform, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation) ;

/// @brief Method Tick, addr 0x5790a98, size 0x34, virtual true, abstract: false, final true
inline void Tick() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_INVERSE_HEAD_ROTATION() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_INVERSE_HEAD_ROTATION() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnLaunch() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnLaunch() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnReset() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnReset() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get_alignToHitNormal() const;

constexpr bool& __cordl_internal_get_alignToHitNormal() ;

constexpr ::UnityW<::UnityEngine::Collider> const& __cordl_internal_get_collider() const;

constexpr ::UnityW<::UnityEngine::Collider>& __cordl_internal_get_collider() ;

constexpr bool const& __cordl_internal_get_faceVelocityWhileAirborne() const;

constexpr bool& __cordl_internal_get_faceVelocityWhileAirborne() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headZoneInverseLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headZoneInverseLocalPosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headZoneInversePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headZoneInversePosition() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_headZonePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_headZonePosition() ;

constexpr float_t const& __cordl_internal_get_headZoneRadius() const;

constexpr float_t& __cordl_internal_get_headZoneRadius() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_launchRandomSpinSpeedMinMax() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_launchRandomSpinSpeedMinMax() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_localHeadZonePosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_localHeadZonePosition() ;

constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic> const& __cordl_internal_get_pcc() const;

constexpr ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>& __cordl_internal_get_pcc() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction> const& __cordl_internal_get_rbwi() const;

constexpr ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>& __cordl_internal_get_rbwi() ;

constexpr float_t const& __cordl_internal_get_scaleOnLocalHead() const;

constexpr float_t& __cordl_internal_get_scaleOnLocalHead() ;

constexpr float_t const& __cordl_internal_get_scaleOnLocalHeadZone() const;

constexpr float_t& __cordl_internal_get_scaleOnLocalHeadZone() ;

constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>* const& __cordl_internal_get_stickEvents() const;

constexpr ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>*& __cordl_internal_get_stickEvents() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_stickyPart() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_stickyPart() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_stickyPartLocalPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_stickyPartLocalPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_stickyPartLocalRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_stickyPartLocalRotation() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_stickyPartLocalScale() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_stickyPartLocalScale() ;

constexpr int32_t const& __cordl_internal_get_triggerLayer() const;

constexpr int32_t& __cordl_internal_get_triggerLayer() ;

constexpr void __cordl_internal_set_INVERSE_HEAD_ROTATION(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_OnLaunch(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnReset(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_alignToHitNormal(bool  value) ;

constexpr void __cordl_internal_set_collider(::UnityW<::UnityEngine::Collider>  value) ;

constexpr void __cordl_internal_set_faceVelocityWhileAirborne(bool  value) ;

constexpr void __cordl_internal_set_headZoneInverseLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headZoneInversePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headZonePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_headZoneRadius(float_t  value) ;

constexpr void __cordl_internal_set_launchRandomSpinSpeedMinMax(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_localHeadZonePosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_pcc(::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_rbwi(::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>  value) ;

constexpr void __cordl_internal_set_scaleOnLocalHead(float_t  value) ;

constexpr void __cordl_internal_set_scaleOnLocalHeadZone(float_t  value) ;

constexpr void __cordl_internal_set_stickEvents(::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>*  value) ;

constexpr void __cordl_internal_set_stickyPart(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stickyPartLocalPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_stickyPartLocalRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_stickyPartLocalScale(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_triggerLayer(int32_t  value) ;

/// @brief Method .ctor, addr 0x5790acc, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5790a88, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// @brief Convert to "::GorillaTag::Cosmetics::IProjectile"
constexpr ::GorillaTag::Cosmetics::IProjectile* i___GorillaTag__Cosmetics__IProjectile() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5790a90, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickyProjectile() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickyProjectile", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StickyProjectile(StickyProjectile && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickyProjectile", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickyProjectile(StickyProjectile const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1446};

/// [SerializeField]
/// @brief Field stickyPart, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___stickyPart;

/// [Tooltip("Align the positive Z direction of this object to the rigidbody\'s velocity.")]
/// [SerializeField]
/// @brief Field faceVelocityWhileAirborne, offset: 0x28, size: 0x1, def value: None
 bool  ___faceVelocityWhileAirborne;

/// [Tooltip("Set the rigidbody\'s angular velocity to a random unit Vector3, multiplied by a random value in this range.")]
/// [SerializeField]
/// @brief Field launchRandomSpinSpeedMinMax, offset: 0x2c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___launchRandomSpinSpeedMinMax;

/// [Tooltip("When enabled, the positive Z direction will face away from whatever surface the projectile hit. When disabled, it will keep its original rotation.")]
/// [SerializeField]
/// @brief Field alignToHitNormal, offset: 0x34, size: 0x1, def value: None
 bool  ___alignToHitNormal;

/// [Space]
/// [SerializeField]
/// @brief Field OnReset, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnReset;

/// [SerializeField]
/// @brief Field OnLaunch, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnLaunch;

/// [Tooltip("Scale the \'Sticky Part\' by this value when hitting the local player\'s head. Usually used to prevent things from obscuring your vision too much.")]
/// [SerializeField]
/// @brief Field scaleOnLocalHead, offset: 0x48, size: 0x4, def value: None
 float_t  ___scaleOnLocalHead;

/// [Tooltip("The radius of the head zone. Can be set to 0 to disable head zone functionality.")]
/// [SerializeField]
/// @brief Field headZoneRadius, offset: 0x4c, size: 0x4, def value: None
 float_t  ___headZoneRadius;

/// [Tooltip("The local origin of the head zone, relative to the player rig\'s head transform. When a shot hits inside the zone, the \'Sticky Part\' will be moved to this position relative to the hit player\'s head.")]
/// [SerializeField]
/// @brief Field headZonePosition, offset: 0x50, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headZonePosition;

/// [Tooltip("Scale the \'Sticky Part\' by this value when hitting the local player\'s head zone. Can override \'Scale On Local Head\' in case you want it to appear larger for emphasis.")]
/// [SerializeField]
/// @brief Field scaleOnLocalHeadZone, offset: 0x5c, size: 0x4, def value: None
 float_t  ___scaleOnLocalHeadZone;

/// [Tooltip("When a shot hits inside a remote player\'s head zone, it will be moved to the \'Head Zone Relative Position\'. For the local player, it will instead be moved here. This DOES NOT AFFECT the actual origin of the head zone for hit-detection purposes, it is purely visual after-the-fact.")]
/// [SerializeField]
/// @brief Field localHeadZonePosition, offset: 0x60, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___localHeadZonePosition;

/// [SerializeField]
/// @brief Field stickEvents, offset: 0x70, size: 0x8, def value: None
 ::GlobalNamespace::FlagEvents_1<::GlobalNamespace::StickyProjectile_StickFlags>*  ___stickEvents;

/// @brief Field INVERSE_HEAD_ROTATION, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___INVERSE_HEAD_ROTATION;

/// @brief Field headZoneInversePosition, offset: 0x88, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headZoneInversePosition;

/// @brief Field headZoneInverseLocalPosition, offset: 0x94, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___headZoneInverseLocalPosition;

/// @brief Field stickyPartLocalPosition, offset: 0xa0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___stickyPartLocalPosition;

/// @brief Field stickyPartLocalRotation, offset: 0xac, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___stickyPartLocalRotation;

/// @brief Field stickyPartLocalScale, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___stickyPartLocalScale;

/// @brief Field rb, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// @brief Field rbwi, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Swimming::RigidbodyWaterInteraction>  ___rbwi;

/// @brief Field collider, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Collider>  ___collider;

/// @brief Field pcc, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::PlayerColoredCosmetic>  ___pcc;

/// @brief Field triggerLayer, offset: 0xe8, size: 0x4, def value: None
 int32_t  ___triggerLayer;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xec, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___stickyPart) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___faceVelocityWhileAirborne) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___launchRandomSpinSpeedMinMax) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___alignToHitNormal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___OnReset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___OnLaunch) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___scaleOnLocalHead) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___headZoneRadius) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___headZonePosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___scaleOnLocalHeadZone) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___localHeadZonePosition) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___stickEvents) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___INVERSE_HEAD_ROTATION) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___headZoneInversePosition) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___headZoneInverseLocalPosition) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___stickyPartLocalPosition) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___stickyPartLocalRotation) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___stickyPartLocalScale) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___rb) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___rbwi) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___collider) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___pcc) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ___triggerLayer) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StickyProjectile, ____TickRunning_k__BackingField) == 0xec, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StickyProjectile) == 0xf0, "Size mismatch!");

} // namespace end def GlobalNamespace
