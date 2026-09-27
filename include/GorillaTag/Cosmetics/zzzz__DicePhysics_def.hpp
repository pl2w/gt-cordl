#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/DicePhysics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_CosmeticRollOverride_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__DicePhysics_DiceType_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DicePhysics)
namespace GlobalNamespace {
struct DicePhysics_CosmeticRollOverride;
}
namespace GlobalNamespace {
struct DicePhysics_DiceType;
}
namespace GlobalNamespace {
class InteractionPoint;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class DiceHoldable;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class DicePhysics;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::DicePhysics*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::DicePhysics*, "GorillaTag.Cosmetics", "DicePhysics");
// Dependencies GorillaTag.Cosmetics.DicePhysics::CosmeticRollOverride, GorillaTag.Cosmetics.DicePhysics::DiceType, UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.DicePhysics
class CORDL_TYPE DicePhysics : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CosmeticRollOverride = ::GlobalNamespace::DicePhysics_CosmeticRollOverride;

using DiceType = ::GlobalNamespace::DicePhysics_DiceType;

/// @brief Field allowPickupFromGround, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_allowPickupFromGround, put=__cordl_internal_set_allowPickupFromGround)) bool  allowPickupFromGround;

/// @brief Field angleDeltaVsStrengthCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_angleDeltaVsStrengthCurve, put=__cordl_internal_set_angleDeltaVsStrengthCurve)) ::UnityEngine::AnimationCurve*  angleDeltaVsStrengthCurve;

/// @brief Field bounceAmplification, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_bounceAmplification, put=__cordl_internal_set_bounceAmplification)) float_t  bounceAmplification;

/// @brief Field cachedLocalRig, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_cachedLocalRig, put=__cordl_internal_set_cachedLocalRig)) ::UnityW<::GlobalNamespace::VRRig>  cachedLocalRig;

/// @brief Field cosmeticRollOverrides, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_cosmeticRollOverrides, put=__cordl_internal_set_cosmeticRollOverrides)) ::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride>  cosmeticRollOverrides;

/// @brief Field d20SideDirections, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_d20SideDirections, put=__cordl_internal_set_d20SideDirections)) ::ArrayW<::UnityEngine::Vector3>  d20SideDirections;

/// @brief Field d6SideDirections, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_d6SideDirections, put=__cordl_internal_set_d6SideDirections)) ::ArrayW<::UnityEngine::Vector3>  d6SideDirections;

/// @brief Field damping, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_damping, put=__cordl_internal_set_damping)) float_t  damping;

/// @brief Field diceType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_diceType, put=__cordl_internal_set_diceType)) ::GlobalNamespace::DicePhysics_DiceType  diceType;

/// @brief Field forceLandingSide, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_forceLandingSide, put=__cordl_internal_set_forceLandingSide)) bool  forceLandingSide;

/// @brief Field forcedLandingSide, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_forcedLandingSide, put=__cordl_internal_set_forcedLandingSide)) int32_t  forcedLandingSide;

/// @brief Field holdableParent, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_holdableParent, put=__cordl_internal_set_holdableParent)) ::UnityW<::GorillaTag::Cosmetics::DiceHoldable>  holdableParent;

/// @brief Field interactionPoint, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionPoint, put=__cordl_internal_set_interactionPoint)) ::UnityW<::GlobalNamespace::InteractionPoint>  interactionPoint;

/// @brief Field landingSide, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_landingSide, put=__cordl_internal_set_landingSide)) int32_t  landingSide;

/// @brief Field landingTime, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_landingTime, put=__cordl_internal_set_landingTime)) float_t  landingTime;

/// @brief Field landingTimeVsStrengthCurve, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_landingTimeVsStrengthCurve, put=__cordl_internal_set_landingTimeVsStrengthCurve)) ::UnityEngine::AnimationCurve*  landingTimeVsStrengthCurve;

/// @brief Field onBestRoll, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onBestRoll, put=__cordl_internal_set_onBestRoll)) ::UnityEngine::Events::UnityEvent*  onBestRoll;

/// @brief Field onRollFinished, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onRollFinished, put=__cordl_internal_set_onRollFinished)) ::UnityEngine::Events::UnityEvent*  onRollFinished;

/// @brief Field onWorstRoll, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onWorstRoll, put=__cordl_internal_set_onWorstRoll)) ::UnityEngine::Events::UnityEvent*  onWorstRoll;

/// @brief Field postLandingTime, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_postLandingTime, put=__cordl_internal_set_postLandingTime)) float_t  postLandingTime;

/// @brief Field prevVelocity, offset 0xb0, size 0xc 
 __declspec(property(get=__cordl_internal_get_prevVelocity, put=__cordl_internal_set_prevVelocity)) ::UnityEngine::Vector3  prevVelocity;

/// @brief Field rb, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field scale, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_scale, put=__cordl_internal_set_scale)) float_t  scale;

/// @brief Field strength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) float_t  strength;

/// @brief Field surfaceLayers, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_surfaceLayers, put=__cordl_internal_set_surfaceLayers)) ::UnityEngine::LayerMask  surfaceLayers;

/// @brief Field throwSettledTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwSettledTime, put=__cordl_internal_set_throwSettledTime)) double_t  throwSettledTime;

/// @brief Field throwStartTime, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_throwStartTime, put=__cordl_internal_set_throwStartTime)) double_t  throwStartTime;

/// @brief Field velocity, offset 0xbc, size 0xc 
 __declspec(property(get=__cordl_internal_get_velocity, put=__cordl_internal_set_velocity)) ::UnityEngine::Vector3  velocity;

/// @brief Method CheckCosmeticRollOverride, addr 0x5d62688, size 0x4a4, virtual false, abstract: false, final false
inline bool CheckCosmeticRollOverride(::by_ref<int32_t>  rollSide) ;

/// @brief Method EndThrow, addr 0x5d61868, size 0x268, virtual false, abstract: false, final false
inline void EndThrow() ;

/// @brief Method FixedUpdate, addr 0x5d62b98, size 0x670, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetRandomSide, addr 0x5d62350, size 0x90, virtual false, abstract: false, final false
inline int32_t GetRandomSide() ;

/// @brief Method GetSideDirection, addr 0x5d62b2c, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetSideDirection(int32_t  side) ;

/// @brief Method InvokeLandingEffects, addr 0x5d63208, size 0x54, virtual false, abstract: false, final false
inline void InvokeLandingEffects(int32_t  side) ;

static inline ::GorillaTag::Cosmetics::DicePhysics* New_ctor() ;

/// @brief Method OnCollisionEnter, addr 0x5d6325c, size 0x130, virtual false, abstract: false, final false
inline void OnCollisionEnter(::UnityEngine::Collision*  collision) ;

/// @brief Method StartThrow, addr 0x5d623e0, size 0x250, virtual false, abstract: false, final false
inline void StartThrow(::GorillaTag::Cosmetics::DiceHoldable*  holdable, ::UnityEngine::Vector3  startPosition, ::UnityEngine::Vector3  velocity, float_t  playerScale, int32_t  side, double_t  startTime) ;

constexpr bool const& __cordl_internal_get_allowPickupFromGround() const;

constexpr bool& __cordl_internal_get_allowPickupFromGround() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_angleDeltaVsStrengthCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_angleDeltaVsStrengthCurve() ;

constexpr float_t const& __cordl_internal_get_bounceAmplification() const;

constexpr float_t& __cordl_internal_get_bounceAmplification() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_cachedLocalRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_cachedLocalRig() ;

constexpr ::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride> const& __cordl_internal_get_cosmeticRollOverrides() const;

constexpr ::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride>& __cordl_internal_get_cosmeticRollOverrides() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_d20SideDirections() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_d20SideDirections() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_d6SideDirections() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_d6SideDirections() ;

constexpr float_t const& __cordl_internal_get_damping() const;

constexpr float_t& __cordl_internal_get_damping() ;

constexpr ::GlobalNamespace::DicePhysics_DiceType const& __cordl_internal_get_diceType() const;

constexpr ::GlobalNamespace::DicePhysics_DiceType& __cordl_internal_get_diceType() ;

constexpr bool const& __cordl_internal_get_forceLandingSide() const;

constexpr bool& __cordl_internal_get_forceLandingSide() ;

constexpr int32_t const& __cordl_internal_get_forcedLandingSide() const;

constexpr int32_t& __cordl_internal_get_forcedLandingSide() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::DiceHoldable> const& __cordl_internal_get_holdableParent() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::DiceHoldable>& __cordl_internal_get_holdableParent() ;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint> const& __cordl_internal_get_interactionPoint() const;

constexpr ::UnityW<::GlobalNamespace::InteractionPoint>& __cordl_internal_get_interactionPoint() ;

constexpr int32_t const& __cordl_internal_get_landingSide() const;

constexpr int32_t& __cordl_internal_get_landingSide() ;

constexpr float_t const& __cordl_internal_get_landingTime() const;

constexpr float_t& __cordl_internal_get_landingTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_landingTimeVsStrengthCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_landingTimeVsStrengthCurve() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onBestRoll() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onBestRoll() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onRollFinished() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onRollFinished() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onWorstRoll() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onWorstRoll() ;

constexpr float_t const& __cordl_internal_get_postLandingTime() const;

constexpr float_t& __cordl_internal_get_postLandingTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_prevVelocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_prevVelocity() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_scale() const;

constexpr float_t& __cordl_internal_get_scale() ;

constexpr float_t const& __cordl_internal_get_strength() const;

constexpr float_t& __cordl_internal_get_strength() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_surfaceLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_surfaceLayers() ;

constexpr double_t const& __cordl_internal_get_throwSettledTime() const;

constexpr double_t& __cordl_internal_get_throwSettledTime() ;

constexpr double_t const& __cordl_internal_get_throwStartTime() const;

constexpr double_t& __cordl_internal_get_throwStartTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_velocity() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_velocity() ;

constexpr void __cordl_internal_set_allowPickupFromGround(bool  value) ;

constexpr void __cordl_internal_set_angleDeltaVsStrengthCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_bounceAmplification(float_t  value) ;

constexpr void __cordl_internal_set_cachedLocalRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_cosmeticRollOverrides(::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride>  value) ;

constexpr void __cordl_internal_set_d20SideDirections(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_d6SideDirections(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_damping(float_t  value) ;

constexpr void __cordl_internal_set_diceType(::GlobalNamespace::DicePhysics_DiceType  value) ;

constexpr void __cordl_internal_set_forceLandingSide(bool  value) ;

constexpr void __cordl_internal_set_forcedLandingSide(int32_t  value) ;

constexpr void __cordl_internal_set_holdableParent(::UnityW<::GorillaTag::Cosmetics::DiceHoldable>  value) ;

constexpr void __cordl_internal_set_interactionPoint(::UnityW<::GlobalNamespace::InteractionPoint>  value) ;

constexpr void __cordl_internal_set_landingSide(int32_t  value) ;

constexpr void __cordl_internal_set_landingTime(float_t  value) ;

constexpr void __cordl_internal_set_landingTimeVsStrengthCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_onBestRoll(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onRollFinished(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onWorstRoll(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_postLandingTime(float_t  value) ;

constexpr void __cordl_internal_set_prevVelocity(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_scale(float_t  value) ;

constexpr void __cordl_internal_set_strength(float_t  value) ;

constexpr void __cordl_internal_set_surfaceLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_throwSettledTime(double_t  value) ;

constexpr void __cordl_internal_set_throwStartTime(double_t  value) ;

constexpr void __cordl_internal_set_velocity(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5d6338c, size 0x1d8c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DicePhysics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DicePhysics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DicePhysics(DicePhysics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DicePhysics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DicePhysics(DicePhysics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4831};

/// @brief Field a offset 0xffffffff size 0x4
static constexpr float_t  a{static_cast<float_t>(38.833332f)};

/// @brief Field b offset 0xffffffff size 0x4
static constexpr float_t  b{static_cast<float_t>(77.66666f)};

/// [SerializeField]
/// @brief Field diceType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::DicePhysics_DiceType  ___diceType;

/// [SerializeField]
/// @brief Field landingTime, offset: 0x24, size: 0x4, def value: None
 float_t  ___landingTime;

/// [SerializeField]
/// @brief Field postLandingTime, offset: 0x28, size: 0x4, def value: None
 float_t  ___postLandingTime;

/// [SerializeField]
/// @brief Field surfaceLayers, offset: 0x2c, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___surfaceLayers;

/// [SerializeField]
/// @brief Field angleDeltaVsStrengthCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___angleDeltaVsStrengthCurve;

/// [SerializeField]
/// @brief Field landingTimeVsStrengthCurve, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___landingTimeVsStrengthCurve;

/// [SerializeField]
/// @brief Field strength, offset: 0x40, size: 0x4, def value: None
 float_t  ___strength;

/// [SerializeField]
/// @brief Field damping, offset: 0x44, size: 0x4, def value: None
 float_t  ___damping;

/// [SerializeField]
/// @brief Field forceLandingSide, offset: 0x48, size: 0x1, def value: None
 bool  ___forceLandingSide;

/// [SerializeField]
/// @brief Field forcedLandingSide, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___forcedLandingSide;

/// [SerializeField]
/// @brief Field allowPickupFromGround, offset: 0x50, size: 0x1, def value: None
 bool  ___allowPickupFromGround;

/// [SerializeField]
/// @brief Field bounceAmplification, offset: 0x54, size: 0x4, def value: None
 float_t  ___bounceAmplification;

/// [SerializeField]
/// @brief Field cosmeticRollOverrides, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::DicePhysics_CosmeticRollOverride>  ___cosmeticRollOverrides;

/// [SerializeField]
/// @brief Field onBestRoll, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onBestRoll;

/// [SerializeField]
/// @brief Field onWorstRoll, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onWorstRoll;

/// [SerializeField]
/// @brief Field onRollFinished, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onRollFinished;

/// [SerializeField]
/// @brief Field rb, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// [SerializeField]
/// @brief Field interactionPoint, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::InteractionPoint>  ___interactionPoint;

/// @brief Field cachedLocalRig, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___cachedLocalRig;

/// @brief Field holdableParent, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::DiceHoldable>  ___holdableParent;

/// @brief Field throwStartTime, offset: 0x98, size: 0x8, def value: None
 double_t  ___throwStartTime;

/// @brief Field throwSettledTime, offset: 0xa0, size: 0x8, def value: None
 double_t  ___throwSettledTime;

/// @brief Field landingSide, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___landingSide;

/// @brief Field scale, offset: 0xac, size: 0x4, def value: None
 float_t  ___scale;

/// @brief Field prevVelocity, offset: 0xb0, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___prevVelocity;

/// @brief Field velocity, offset: 0xbc, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___velocity;

/// @brief Field d20SideDirections, offset: 0xc8, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___d20SideDirections;

/// @brief Field d6SideDirections, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___d6SideDirections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___diceType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___landingTime) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___postLandingTime) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___surfaceLayers) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___angleDeltaVsStrengthCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___landingTimeVsStrengthCurve) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___strength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___damping) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___forceLandingSide) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___forcedLandingSide) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___allowPickupFromGround) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___bounceAmplification) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___cosmeticRollOverrides) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___onBestRoll) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___onWorstRoll) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___onRollFinished) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___rb) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___interactionPoint) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___cachedLocalRig) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___holdableParent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___throwStartTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___throwSettledTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___landingSide) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___scale) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___prevVelocity) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___velocity) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___d20SideDirections) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::DicePhysics, ___d6SideDirections) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::DicePhysics) == 0xd8, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
