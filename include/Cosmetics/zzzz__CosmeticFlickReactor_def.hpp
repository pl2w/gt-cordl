#pragma once
// IWYU pragma private; include "Cosmetics/CosmeticFlickReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cosmetics/zzzz__CosmeticFlickReactor_AxisMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CosmeticFlickReactor)
namespace GlobalNamespace {
struct CosmeticFlickReactor_AxisMode;
}
namespace GlobalNamespace {
class SimpleSpeedTracker;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
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
namespace Cosmetics {
class CosmeticFlickReactor;
}
// Write type traits
MARK_REF_T(::Cosmetics::CosmeticFlickReactor*);
DEFINE_IL2CPP_CLASS(::Cosmetics::CosmeticFlickReactor*, "Cosmetics", "CosmeticFlickReactor");
// Dependencies Cosmetics.CosmeticFlickReactor::AxisMode, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.CosmeticFlickReactor
class CORDL_TYPE CosmeticFlickReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using AxisMode = ::GlobalNamespace::CosmeticFlickReactor_AxisMode;

/// @brief Field OnFlickLocal, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFlickLocal, put=__cordl_internal_set_OnFlickLocal)) ::UnityEngine::Events::UnityEvent*  OnFlickLocal;

/// @brief Field OnFlickShared, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFlickShared, put=__cordl_internal_set_OnFlickShared)) ::UnityEngine::Events::UnityEvent*  OnFlickShared;

/// @brief Field axisMode, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_axisMode, put=__cordl_internal_set_axisMode)) ::GlobalNamespace::CosmeticFlickReactor_AxisMode  axisMode;

/// @brief Field axisReference, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_axisReference, put=__cordl_internal_set_axisReference)) ::UnityW<::UnityEngine::Transform>  axisReference;

/// @brief Field blockUntilTime, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_blockUntilTime, put=__cordl_internal_set_blockUntilTime)) float_t  blockUntilTime;

/// @brief Field directionChangeRequired, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_directionChangeRequired, put=__cordl_internal_set_directionChangeRequired)) float_t  directionChangeRequired;

/// @brief Field flickWindowSeconds, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flickWindowSeconds, put=__cordl_internal_set_flickWindowSeconds)) float_t  flickWindowSeconds;

/// @brief Field hasLastPosition, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLastPosition, put=__cordl_internal_set_hasLastPosition)) bool  hasLastPosition;

/// @brief Field isLocal, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocal, put=__cordl_internal_set_isLocal)) bool  isLocal;

/// @brief Field lastPeakSign, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPeakSign, put=__cordl_internal_set_lastPeakSign)) int32_t  lastPeakSign;

/// @brief Field lastPeakSpeed, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPeakSpeed, put=__cordl_internal_set_lastPeakSpeed)) float_t  lastPeakSpeed;

/// @brief Field lastPeakTime, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastPeakTime, put=__cordl_internal_set_lastPeakTime)) float_t  lastPeakTime;

/// @brief Field lastPosition, offset 0x80, size 0xc 
 __declspec(property(get=__cordl_internal_get_lastPosition, put=__cordl_internal_set_lastPosition)) ::UnityEngine::Vector3  lastPosition;

/// @brief Field maxSpeedThreshold, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSpeedThreshold, put=__cordl_internal_set_maxSpeedThreshold)) float_t  maxSpeedThreshold;

/// @brief Field minSpeedThreshold, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSpeedThreshold, put=__cordl_internal_set_minSpeedThreshold)) float_t  minSpeedThreshold;

/// @brief Field onFlickStrength, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFlickStrength, put=__cordl_internal_set_onFlickStrength)) ::UnityEngine::Events::UnityEvent_1<float_t>*  onFlickStrength;

/// @brief Field rb, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_rb, put=__cordl_internal_set_rb)) ::UnityW<::UnityEngine::Rigidbody>  rb;

/// @brief Field retriggerBufferSeconds, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_retriggerBufferSeconds, put=__cordl_internal_set_retriggerBufferSeconds)) float_t  retriggerBufferSeconds;

/// @brief Field rig, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field speedTracker, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_speedTracker, put=__cordl_internal_set_speedTracker)) ::UnityW<::GlobalNamespace::SimpleSpeedTracker>  speedTracker;

/// @brief Field useWorldAxes, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_useWorldAxes, put=__cordl_internal_set_useWorldAxes)) bool  useWorldAxes;

/// @brief Field worldSpace, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_worldSpace, put=__cordl_internal_set_worldSpace)) ::UnityW<::UnityEngine::Transform>  worldSpace;

/// @brief Method Awake, addr 0x5d1ae28, size 0x1d0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FireEvents, addr 0x5d1b6a0, size 0xe0, virtual false, abstract: false, final false
inline void FireEvents(float_t  currentAbsSpeed) ;

/// @brief Method GetSignedSpeedAlong, addr 0x5d1b410, size 0x290, virtual false, abstract: false, final false
inline float_t GetSignedSpeedAlong(::UnityEngine::Vector3  axis) ;

static inline ::Cosmetics::CosmeticFlickReactor* New_ctor() ;

/// @brief Method Reset, addr 0x5d1ad1c, size 0x10c, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method ResetState, addr 0x5d1aff8, size 0x14, virtual false, abstract: false, final false
inline void ResetState() ;

/// @brief Method ResolveAxisDirection, addr 0x5d1b164, size 0x2ac, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 ResolveAxisDirection() ;

/// @brief Method Update, addr 0x5d1b00c, size 0x158, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnFlickLocal() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnFlickLocal() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnFlickShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnFlickShared() ;

constexpr ::GlobalNamespace::CosmeticFlickReactor_AxisMode const& __cordl_internal_get_axisMode() const;

constexpr ::GlobalNamespace::CosmeticFlickReactor_AxisMode& __cordl_internal_get_axisMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_axisReference() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_axisReference() ;

constexpr float_t const& __cordl_internal_get_blockUntilTime() const;

constexpr float_t& __cordl_internal_get_blockUntilTime() ;

constexpr float_t const& __cordl_internal_get_directionChangeRequired() const;

constexpr float_t& __cordl_internal_get_directionChangeRequired() ;

constexpr float_t const& __cordl_internal_get_flickWindowSeconds() const;

constexpr float_t& __cordl_internal_get_flickWindowSeconds() ;

constexpr bool const& __cordl_internal_get_hasLastPosition() const;

constexpr bool& __cordl_internal_get_hasLastPosition() ;

constexpr bool const& __cordl_internal_get_isLocal() const;

constexpr bool& __cordl_internal_get_isLocal() ;

constexpr int32_t const& __cordl_internal_get_lastPeakSign() const;

constexpr int32_t& __cordl_internal_get_lastPeakSign() ;

constexpr float_t const& __cordl_internal_get_lastPeakSpeed() const;

constexpr float_t& __cordl_internal_get_lastPeakSpeed() ;

constexpr float_t const& __cordl_internal_get_lastPeakTime() const;

constexpr float_t& __cordl_internal_get_lastPeakTime() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_lastPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_lastPosition() ;

constexpr float_t const& __cordl_internal_get_maxSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_maxSpeedThreshold() ;

constexpr float_t const& __cordl_internal_get_minSpeedThreshold() const;

constexpr float_t& __cordl_internal_get_minSpeedThreshold() ;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>* const& __cordl_internal_get_onFlickStrength() const;

constexpr ::UnityEngine::Events::UnityEvent_1<float_t>*& __cordl_internal_get_onFlickStrength() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_rb() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_rb() ;

constexpr float_t const& __cordl_internal_get_retriggerBufferSeconds() const;

constexpr float_t& __cordl_internal_get_retriggerBufferSeconds() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker> const& __cordl_internal_get_speedTracker() const;

constexpr ::UnityW<::GlobalNamespace::SimpleSpeedTracker>& __cordl_internal_get_speedTracker() ;

constexpr bool const& __cordl_internal_get_useWorldAxes() const;

constexpr bool& __cordl_internal_get_useWorldAxes() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_worldSpace() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_worldSpace() ;

constexpr void __cordl_internal_set_OnFlickLocal(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_OnFlickShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_axisMode(::GlobalNamespace::CosmeticFlickReactor_AxisMode  value) ;

constexpr void __cordl_internal_set_axisReference(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_blockUntilTime(float_t  value) ;

constexpr void __cordl_internal_set_directionChangeRequired(float_t  value) ;

constexpr void __cordl_internal_set_flickWindowSeconds(float_t  value) ;

constexpr void __cordl_internal_set_hasLastPosition(bool  value) ;

constexpr void __cordl_internal_set_isLocal(bool  value) ;

constexpr void __cordl_internal_set_lastPeakSign(int32_t  value) ;

constexpr void __cordl_internal_set_lastPeakSpeed(float_t  value) ;

constexpr void __cordl_internal_set_lastPeakTime(float_t  value) ;

constexpr void __cordl_internal_set_lastPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_maxSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_minSpeedThreshold(float_t  value) ;

constexpr void __cordl_internal_set_onFlickStrength(::UnityEngine::Events::UnityEvent_1<float_t>*  value) ;

constexpr void __cordl_internal_set_rb(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_retriggerBufferSeconds(float_t  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_speedTracker(::UnityW<::GlobalNamespace::SimpleSpeedTracker>  value) ;

constexpr void __cordl_internal_set_useWorldAxes(bool  value) ;

constexpr void __cordl_internal_set_worldSpace(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5d1b780, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticFlickReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticFlickReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticFlickReactor(CosmeticFlickReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticFlickReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticFlickReactor(CosmeticFlickReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4578};

/// [Header("Axis")]
/// [Tooltip("Which single axis/direction to use for flick detection.\n- X/Y/Z use the axes defined by the Space settings below (Local vs World).\n- CustomForward uses axisReference.forward (ignores Space).")]
/// [SerializeField]
/// @brief Field axisMode, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::CosmeticFlickReactor_AxisMode  ___axisMode;

/// [Tooltip("Used only when AxisMode = CustomForward. The forward/back of this transform defines the direction.")]
/// [SerializeField]
/// @brief Field axisReference, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___axisReference;

/// [Header("Space")]
/// [Tooltip("If enabled, X/Y/Z use world axes, otherwise local axes.\nUse Local for movement relative to the object\u{2019}s facing.\nUse World for absolute directions independent of rotation.")]
/// [SerializeField]
/// @brief Field useWorldAxes, offset: 0x30, size: 0x1, def value: None
 bool  ___useWorldAxes;

/// [Tooltip("Optional transform to define a custom world frame for X/Y/Z.\nIf assigned and Space is World, this transform\u{2019}s Right/Up/Forward act as the world axes.\nIf not assigned, Unity\u{2019}s global axes are used.")]
/// [SerializeField]
/// @brief Field worldSpace, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___worldSpace;

/// [Header("Velocity Source")]
/// [Tooltip("Primary velocity tracker.")]
/// [SerializeField]
/// @brief Field speedTracker, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SimpleSpeedTracker>  ___speedTracker;

/// [Tooltip("Fallback velocity source if speedTracker is missing.")]
/// [SerializeField]
/// @brief Field rb, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___rb;

/// [Header("Thresholds")]
/// [Tooltip("Minimum absolute signed speed along the chosen axis required to consider a object movement (m/s).")]
/// [SerializeField]
/// @brief Field minSpeedThreshold, offset: 0x50, size: 0x4, def value: None
 float_t  ___minSpeedThreshold;

/// [Tooltip("Optional upper bound for mapping flick strength to 0\u{2013}1.\nSet <= 0 to disable onFlickStrength.")]
/// [SerializeField]
/// @brief Field maxSpeedThreshold, offset: 0x54, size: 0x4, def value: None
 float_t  ___maxSpeedThreshold;

/// [Tooltip("How much back-and-forth reversal is required to register a flick.\nExample: 2.5 means => +1.3 then -1.2 within the window (|1.3| + |1.2| = 2.5).")]
/// [SerializeField]
/// @brief Field directionChangeRequired, offset: 0x58, size: 0x4, def value: None
 float_t  ___directionChangeRequired;

/// [Header("Timing")]
/// [Tooltip("Max time allowed between the initial peak and its reversal (seconds).")]
/// [SerializeField]
/// @brief Field flickWindowSeconds, offset: 0x5c, size: 0x4, def value: None
 float_t  ___flickWindowSeconds;

/// [Tooltip("Buffer time after a successful flick during which no new flicks are allowed (seconds).")]
/// [SerializeField]
/// @brief Field retriggerBufferSeconds, offset: 0x60, size: 0x4, def value: None
 float_t  ___retriggerBufferSeconds;

/// [Header("Events")]
/// @brief Field OnFlickShared, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnFlickShared;

/// @brief Field OnFlickLocal, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnFlickLocal;

/// @brief Field onFlickStrength, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<float_t>*  ___onFlickStrength;

/// @brief Field lastPosition, offset: 0x80, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___lastPosition;

/// @brief Field hasLastPosition, offset: 0x8c, size: 0x1, def value: None
 bool  ___hasLastPosition;

/// @brief Field lastPeakSpeed, offset: 0x90, size: 0x4, def value: None
 float_t  ___lastPeakSpeed;

/// @brief Field lastPeakTime, offset: 0x94, size: 0x4, def value: None
 float_t  ___lastPeakTime;

/// @brief Field lastPeakSign, offset: 0x98, size: 0x4, def value: None
 int32_t  ___lastPeakSign;

/// @brief Field blockUntilTime, offset: 0x9c, size: 0x4, def value: None
 float_t  ___blockUntilTime;

/// @brief Field rig, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field isLocal, offset: 0xa8, size: 0x1, def value: None
 bool  ___isLocal;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___axisMode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___axisReference) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___useWorldAxes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___worldSpace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___speedTracker) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___rb) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___minSpeedThreshold) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___maxSpeedThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___directionChangeRequired) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___flickWindowSeconds) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___retriggerBufferSeconds) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___OnFlickShared) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___OnFlickLocal) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___onFlickStrength) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___lastPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___hasLastPosition) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___lastPeakSpeed) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___lastPeakTime) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___lastPeakSign) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___blockUntilTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___rig) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CosmeticFlickReactor, ___isLocal) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::CosmeticFlickReactor) == 0xb0, "Size mismatch!");

} // namespace end def Cosmetics
