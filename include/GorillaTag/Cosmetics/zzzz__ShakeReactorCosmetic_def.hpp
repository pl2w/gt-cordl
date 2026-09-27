#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/ShakeReactorCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/CosmeticSystem/zzzz__ECosmeticSelectSide_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShakeReactorCosmetic)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class SimpleSpeedTracker;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::CosmeticSystem {
struct ECosmeticSelectSide;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace GorillaTag {
class ISpawnable;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class ShakeReactorCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::ShakeReactorCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::ShakeReactorCosmetic*, "GorillaTag.Cosmetics", "ShakeReactorCosmetic");
// Dependencies GorillaTag.CosmeticSystem.ECosmeticSelectSide, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.ShakeReactorCosmetic
class CORDL_TYPE ShakeReactorCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_CosmeticSelectedSide, put=set_CosmeticSelectedSide)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  CosmeticSelectedSide;

 __declspec(property(get=get_IsSpawned, put=set_IsSpawned)) bool  IsSpawned;

/// @brief Field MaxShake, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_MaxShake, put=__cordl_internal_set_MaxShake)) ::UnityEngine::Events::UnityEvent*  MaxShake;

/// @brief Field ShakeEndLocal, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShakeEndLocal, put=__cordl_internal_set_ShakeEndLocal)) ::UnityEngine::Events::UnityEvent*  ShakeEndLocal;

/// @brief Field ShakeEndShared, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShakeEndShared, put=__cordl_internal_set_ShakeEndShared)) ::UnityEngine::Events::UnityEvent*  ShakeEndShared;

/// @brief Field ShakeStartLocal, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShakeStartLocal, put=__cordl_internal_set_ShakeStartLocal)) ::UnityEngine::Events::UnityEvent*  ShakeStartLocal;

/// @brief Field ShakeStartShared, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_ShakeStartShared, put=__cordl_internal_set_ShakeStartShared)) ::UnityEngine::Events::UnityEvent*  ShakeStartShared;

/// @brief Field <CosmeticSelectedSide>k__BackingField, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get__CosmeticSelectedSide_k__BackingField, put=__cordl_internal_set__CosmeticSelectedSide_k__BackingField)) ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  _CosmeticSelectedSide_k__BackingField;

/// @brief Field <IsSpawned>k__BackingField, offset 0xd9, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSpawned_k__BackingField, put=__cordl_internal_set__IsSpawned_k__BackingField)) bool  _IsSpawned_k__BackingField;

/// @brief Field _events, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field angleToleranceDeg, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleToleranceDeg, put=__cordl_internal_set_angleToleranceDeg)) float_t  angleToleranceDeg;

/// @brief Field callLimiter, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field continuousProperties, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field debugCurrentHalfCycleDistance, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugCurrentHalfCycleDistance, put=__cordl_internal_set_debugCurrentHalfCycleDistance)) float_t  debugCurrentHalfCycleDistance;

/// @brief Field debugCurrentRateHz, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get_debugCurrentRateHz, put=__cordl_internal_set_debugCurrentRateHz)) float_t  debugCurrentRateHz;

/// @brief Field hasLastDir, offset 0xa4, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLastDir, put=__cordl_internal_set_hasLastDir)) bool  hasLastDir;

/// @brief Field isShaking, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_isShaking, put=__cordl_internal_set_isShaking)) bool  isShaking;

/// @brief Field lastAmplitudeMeters, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastAmplitudeMeters, put=__cordl_internal_set_lastAmplitudeMeters)) float_t  lastAmplitudeMeters;

/// @brief Field lastPosition, offset 0xac, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field lastReversalTime, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastReversalTime, put=__cordl_internal_set_lastReversalTime)) float_t  lastReversalTime;

/// @brief Field lastVelocityDir, offset 0x98, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastVelocityDir, put=__cordl_internal_set_lastVelocityDir)) ::UnityEngine::Vector3  lastVelocityDir;

/// @brief Field maxShakeAmplitude, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxShakeAmplitude, put=__cordl_internal_set_maxShakeAmplitude)) float_t  maxShakeAmplitude;

/// @brief Field maxShakeRate, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxShakeRate, put=__cordl_internal_set_maxShakeRate)) float_t  maxShakeRate;

/// @brief Field minSpeedForReversal, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpeedForReversal, put=__cordl_internal_set_minSpeedForReversal)) float_t  minSpeedForReversal;

/// @brief Field myRig, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field nextAllowedShakeStartTime, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextAllowedShakeStartTime, put=__cordl_internal_set_nextAllowedShakeStartTime)) float_t  nextAllowedShakeStartTime;

/// @brief Field pathSinceLastReversal, offset 0xb8, size 0x4 
 __declspec(property(get=__cordl_internal_get_pathSinceLastReversal, put=__cordl_internal_set_pathSinceLastReversal)) float_t  pathSinceLastReversal;

/// @brief Field recentHalfCycleDurations, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_recentHalfCycleDurations, put=__cordl_internal_set_recentHalfCycleDurations)) ::System::Collections::Generic::Queue_1<float_t>*  recentHalfCycleDurations;

/// @brief Field shakeAmplitudeThreshold, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get_shakeAmplitudeThreshold, put=__cordl_internal_set_shakeAmplitudeThreshold)) float_t  shakeAmplitudeThreshold;

/// @brief Field shakeRateThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_shakeRateThreshold, put=__cordl_internal_set_shakeRateThreshold)) float_t  shakeRateThreshold;

/// @brief Field softMaxMultiplier, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_softMaxMultiplier, put=__cordl_internal_set_softMaxMultiplier)) float_t  softMaxMultiplier;

/// @brief Field speedTracker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedTracker, put=__cordl_internal_set_speedTracker)) ::UnityW<::GlobalNamespace::SimpleSpeedTracker>  speedTracker;

/// @brief Field startCooldownSeconds, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_startCooldownSeconds, put=__cordl_internal_set_startCooldownSeconds)) float_t  startCooldownSeconds;

/// @brief Field subscribed, offset 0xd8, size 0x1 
 __declspec(property(get=__cordl_internal_get_subscribed, put=__cordl_internal_set_subscribed)) bool  subscribed;

/// @brief Field useMaxes, offset 0x3c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useMaxes, put=__cordl_internal_set_useMaxes)) bool  useMaxes;

/// @brief Convert operator to "::GorillaTag::ISpawnable"
constexpr operator  ::GorillaTag::ISpawnable*() noexcept;

/// @brief Method ApplyStrength, addr 0x5da0eec, size 0x14, virtual false, abstract: false, final false
inline void ApplyStrength(float_t  strength01) ;

/// @brief Method EnqueueHalfCycle, addr 0x5da0cd0, size 0xa8, virtual false, abstract: false, final false
inline void EnqueueHalfCycle(float_t  duration) ;

/// @brief Method GetAverageHalfCycleDuration, addr 0x5da0d78, size 0x174, virtual false, abstract: false, final false
inline float_t GetAverageHalfCycleDuration() ;

static inline ::GorillaTag::Cosmetics::ShakeReactorCosmetic* New_ctor() ;

/// @brief Method OnDespawn, addr 0x5da1098, size 0x4, virtual true, abstract: false, final true
inline void OnDespawn() ;

/// @brief Method OnDisable, addr 0x5da01e0, size 0x13c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d9fe90, size 0x350, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnShake, addr 0x5da0f00, size 0x170, virtual false, abstract: false, final false
inline void OnShake(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnSpawn, addr 0x5da1090, size 0x8, virtual true, abstract: false, final true
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method Update, addr 0x5da031c, size 0x9b4, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_MaxShake() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_MaxShake() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ShakeEndLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ShakeEndLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ShakeEndShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ShakeEndShared() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ShakeStartLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ShakeStartLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_ShakeStartShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_ShakeStartShared() ;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide const& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() const;

constexpr ::GorillaTag::CosmeticSystem::ECosmeticSelectSide& __cordl_internal_get__CosmeticSelectedSide_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSpawned_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSpawned_k__BackingField() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr float_t const& __cordl_internal_get_angleToleranceDeg() const;

constexpr float_t& __cordl_internal_get_angleToleranceDeg() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr float_t const& __cordl_internal_get_debugCurrentHalfCycleDistance() const;

constexpr float_t& __cordl_internal_get_debugCurrentHalfCycleDistance() ;

constexpr float_t const& __cordl_internal_get_debugCurrentRateHz() const;

constexpr float_t& __cordl_internal_get_debugCurrentRateHz() ;

constexpr bool const& __cordl_internal_get_hasLastDir() const;

constexpr bool& __cordl_internal_get_hasLastDir() ;

constexpr bool const& __cordl_internal_get_isShaking() const;

constexpr bool& __cordl_internal_get_isShaking() ;

constexpr float_t const& __cordl_internal_get_lastAmplitudeMeters() const;

constexpr float_t& __cordl_internal_get_lastAmplitudeMeters() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr float_t const& __cordl_internal_get_lastReversalTime() const;

constexpr float_t& __cordl_internal_get_lastReversalTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastVelocityDir() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastVelocityDir() ;

constexpr float_t const& __cordl_internal_get_maxShakeAmplitude() const;

constexpr float_t& __cordl_internal_get_maxShakeAmplitude() ;

constexpr float_t const& __cordl_internal_get_maxShakeRate() const;

constexpr float_t& __cordl_internal_get_maxShakeRate() ;

constexpr float_t const& __cordl_internal_get_minSpeedForReversal() const;

constexpr float_t& __cordl_internal_get_minSpeedForReversal() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr float_t const& __cordl_internal_get_nextAllowedShakeStartTime() const;

constexpr float_t& __cordl_internal_get_nextAllowedShakeStartTime() ;

constexpr float_t const& __cordl_internal_get_pathSinceLastReversal() const;

constexpr float_t& __cordl_internal_get_pathSinceLastReversal() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* const& __cordl_internal_get_recentHalfCycleDurations() const;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get_recentHalfCycleDurations() ;

constexpr float_t const& __cordl_internal_get_shakeAmplitudeThreshold() const;

constexpr float_t& __cordl_internal_get_shakeAmplitudeThreshold() ;

constexpr float_t const& __cordl_internal_get_shakeRateThreshold() const;

constexpr float_t& __cordl_internal_get_shakeRateThreshold() ;

constexpr float_t const& __cordl_internal_get_softMaxMultiplier() const;

constexpr float_t& __cordl_internal_get_softMaxMultiplier() ;

constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker> const& __cordl_internal_get_speedTracker() const;

constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker>& __cordl_internal_get_speedTracker() ;

constexpr float_t const& __cordl_internal_get_startCooldownSeconds() const;

constexpr float_t& __cordl_internal_get_startCooldownSeconds() ;

constexpr bool const& __cordl_internal_get_subscribed() const;

constexpr bool& __cordl_internal_get_subscribed() ;

constexpr bool const& __cordl_internal_get_useMaxes() const;

constexpr bool& __cordl_internal_get_useMaxes() ;

constexpr void __cordl_internal_set_MaxShake(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ShakeEndLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ShakeEndShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ShakeStartLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_ShakeStartShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__CosmeticSelectedSide_k__BackingField(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

constexpr void __cordl_internal_set__IsSpawned_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_angleToleranceDeg(float_t  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_debugCurrentHalfCycleDistance(float_t  value) ;

constexpr void __cordl_internal_set_debugCurrentRateHz(float_t  value) ;

constexpr void __cordl_internal_set_hasLastDir(bool  value) ;

constexpr void __cordl_internal_set_isShaking(bool  value) ;

constexpr void __cordl_internal_set_lastAmplitudeMeters(float_t  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lastReversalTime(float_t  value) ;

constexpr void __cordl_internal_set_lastVelocityDir(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxShakeAmplitude(float_t  value) ;

constexpr void __cordl_internal_set_maxShakeRate(float_t  value) ;

constexpr void __cordl_internal_set_minSpeedForReversal(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_nextAllowedShakeStartTime(float_t  value) ;

constexpr void __cordl_internal_set_pathSinceLastReversal(float_t  value) ;

constexpr void __cordl_internal_set_recentHalfCycleDurations(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr void __cordl_internal_set_shakeAmplitudeThreshold(float_t  value) ;

constexpr void __cordl_internal_set_shakeRateThreshold(float_t  value) ;

constexpr void __cordl_internal_set_softMaxMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_speedTracker(::UnityW<::GlobalNamespace::SimpleSpeedTracker>  value) ;

constexpr void __cordl_internal_set_startCooldownSeconds(float_t  value) ;

constexpr void __cordl_internal_set_subscribed(bool  value) ;

constexpr void __cordl_internal_set_useMaxes(bool  value) ;

/// @brief Method .ctor, addr 0x5da109c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_CosmeticSelectedSide, addr 0x5da1080, size 0x8, virtual true, abstract: false, final true
inline ::GorillaTag::CosmeticSystem::ECosmeticSelectSide get_CosmeticSelectedSide() ;

/// [CompilerGenerated]
/// @brief Method get_IsSpawned, addr 0x5da1070, size 0x8, virtual true, abstract: false, final true
inline bool get_IsSpawned() ;

/// @brief Convert to "::GorillaTag::ISpawnable"
constexpr ::GorillaTag::ISpawnable* i___GorillaTag__ISpawnable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CosmeticSelectedSide, addr 0x5da1088, size 0x8, virtual true, abstract: false, final true
inline void set_CosmeticSelectedSide(::GorillaTag::CosmeticSystem::ECosmeticSelectSide  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSpawned, addr 0x5da1078, size 0x8, virtual true, abstract: false, final true
inline void set_IsSpawned(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShakeReactorCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShakeReactorCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShakeReactorCosmetic(ShakeReactorCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShakeReactorCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShakeReactorCosmetic(ShakeReactorCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4968};

/// @brief Field kEpsilon offset 0xffffffff size 0x4
static constexpr float_t  kEpsilon{static_cast<float_t>(1e-5f)};

/// @brief Field kFrequencyHistoryCount offset 0xffffffff size 0x4
static constexpr int32_t  kFrequencyHistoryCount{static_cast<int32_t>(0x1)};

/// @brief Field kHalfPerCycle offset 0xffffffff size 0x4
static constexpr float_t  kHalfPerCycle{static_cast<float_t>(0.5f)};

/// @brief Field kMinHalfCycleDuration offset 0xffffffff size 0x4
static constexpr float_t  kMinHalfCycleDuration{static_cast<float_t>(0.0005f)};

/// @brief Field kNoReversalGraceMultiplier offset 0xffffffff size 0x4
static constexpr float_t  kNoReversalGraceMultiplier{static_cast<float_t>(1.0f)};

/// @brief Field kTinyVelocitySqr offset 0xffffffff size 0x4
static constexpr float_t  kTinyVelocitySqr{static_cast<float_t>(1e-6f)};

/// [Header("Speed Source")]
/// [Tooltip("Speed component provider")]
/// [SerializeField]
/// @brief Field speedTracker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SimpleSpeedTracker>  ___speedTracker;

/// [Header("Settings")]
/// [Tooltip("Minimum reversals-per-second required to consider motion a shake - Hz.")]
/// [SerializeField]
/// @brief Field shakeRateThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___shakeRateThreshold;

/// [Tooltip("Minimum distance traveled between direction reversals to count as a valid half-cycle.")]
/// [SerializeField]
/// @brief Field shakeAmplitudeThreshold, offset: 0x2c, size: 0x4, def value: None
 float_t  ___shakeAmplitudeThreshold;

/// [Tooltip("Minimum angle change (degrees) between consecutive lobes to register a reversal. Higher = stricter.")]
/// [SerializeField]
/// [Range(10, 170)]
/// @brief Field angleToleranceDeg, offset: 0x30, size: 0x4, def value: None
 float_t  ___angleToleranceDeg;

/// [Tooltip("Minimum speed required to accept a direction reversal, ignores tiny jitter near stop.")]
/// [SerializeField]
/// @brief Field minSpeedForReversal, offset: 0x34, size: 0x4, def value: None
 float_t  ___minSpeedForReversal;

/// [Tooltip("After a shake ends, how long to wait before ShakeStartLocal can fire again")]
/// [SerializeField]
/// @brief Field startCooldownSeconds, offset: 0x38, size: 0x4, def value: None
 float_t  ___startCooldownSeconds;

/// [SerializeField]
/// @brief Field useMaxes, offset: 0x3c, size: 0x1, def value: None
 bool  ___useMaxes;

/// [Tooltip("If enabled, exceeding this rate is considered a max shake.")]
/// [SerializeField]
/// @brief Field maxShakeRate, offset: 0x40, size: 0x4, def value: None
 float_t  ___maxShakeRate;

/// [Tooltip("If enabled, exceeding this amplitude per half cycle is considered a max shake.")]
/// [SerializeField]
/// @brief Field maxShakeAmplitude, offset: 0x44, size: 0x4, def value: None
 float_t  ___maxShakeAmplitude;

/// [Header("Continuous Output")]
/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x48, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [Header("Advanced")]
/// [Tooltip("When no hard max amplitude is defined, strength is mapped to Threshold \u{d7} this multiplier.")]
/// [SerializeField]
/// @brief Field softMaxMultiplier, offset: 0x50, size: 0x4, def value: None
 float_t  ___softMaxMultiplier;

/// [FormerlySerializedAs("ShakeStart")]
/// [Header("Events")]
/// @brief Field ShakeStartLocal, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ShakeStartLocal;

/// @brief Field ShakeStartShared, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ShakeStartShared;

/// [FormerlySerializedAs("ShakeEnd")]
/// @brief Field ShakeEndLocal, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ShakeEndLocal;

/// @brief Field ShakeEndShared, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___ShakeEndShared;

/// @brief Field MaxShake, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___MaxShake;

/// [Header("Debug")]
/// @brief Field isShaking, offset: 0x80, size: 0x1, def value: None
 bool  ___isShaking;

/// @brief Field lastAmplitudeMeters, offset: 0x84, size: 0x4, def value: None
 float_t  ___lastAmplitudeMeters;

/// @brief Field debugCurrentHalfCycleDistance, offset: 0x88, size: 0x4, def value: None
 float_t  ___debugCurrentHalfCycleDistance;

/// @brief Field debugCurrentRateHz, offset: 0x8c, size: 0x4, def value: None
 float_t  ___debugCurrentRateHz;

/// @brief Field recentHalfCycleDurations, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ___recentHalfCycleDurations;

/// @brief Field lastVelocityDir, offset: 0x98, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastVelocityDir;

/// @brief Field hasLastDir, offset: 0xa4, size: 0x1, def value: None
 bool  ___hasLastDir;

/// @brief Field lastReversalTime, offset: 0xa8, size: 0x4, def value: None
 float_t  ___lastReversalTime;

/// @brief Field lastPosition, offset: 0xac, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field pathSinceLastReversal, offset: 0xb8, size: 0x4, def value: None
 float_t  ___pathSinceLastReversal;

/// @brief Field nextAllowedShakeStartTime, offset: 0xbc, size: 0x4, def value: None
 float_t  ___nextAllowedShakeStartTime;

/// @brief Field _events, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field callLimiter, offset: 0xc8, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// @brief Field myRig, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field subscribed, offset: 0xd8, size: 0x1, def value: None
 bool  ___subscribed;

/// [CompilerGenerated]
/// @brief Field <IsSpawned>k__BackingField, offset: 0xd9, size: 0x1, def value: None
 bool  ____IsSpawned_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <CosmeticSelectedSide>k__BackingField, offset: 0xdc, size: 0x4, def value: None
 ::GorillaTag::CosmeticSystem::ECosmeticSelectSide  ____CosmeticSelectedSide_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___speedTracker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___shakeRateThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___shakeAmplitudeThreshold) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___angleToleranceDeg) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___minSpeedForReversal) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___startCooldownSeconds) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___useMaxes) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___maxShakeRate) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___maxShakeAmplitude) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___continuousProperties) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___softMaxMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___ShakeStartLocal) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___ShakeStartShared) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___ShakeEndLocal) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___ShakeEndShared) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___MaxShake) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___isShaking) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___lastAmplitudeMeters) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___debugCurrentHalfCycleDistance) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___debugCurrentRateHz) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___recentHalfCycleDurations) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___lastVelocityDir) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___hasLastDir) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___lastReversalTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___lastPosition) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___pathSinceLastReversal) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___nextAllowedShakeStartTime) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ____events) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___callLimiter) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___myRig) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ___subscribed) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ____IsSpawned_k__BackingField) == 0xd9, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::ShakeReactorCosmetic, ____CosmeticSelectedSide_k__BackingField) == 0xdc, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::ShakeReactorCosmetic) == 0xe0, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
