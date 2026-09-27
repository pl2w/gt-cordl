#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/StickyCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__StickyCosmetic_ObjectState_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(StickyCosmetic)
namespace GlobalNamespace {
struct StickyCosmetic_ObjectState;
}
namespace GorillaTag::Cosmetics {
class UpdateBlendShapeCosmetic;
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
// Forward declare root types
namespace GorillaTag::Cosmetics {
class StickyCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::StickyCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::StickyCosmetic*, "GorillaTag.Cosmetics", "StickyCosmetic");
// Dependencies GorillaTag.Cosmetics.StickyCosmetic::ObjectState, UnityEngine.LayerMask, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.StickyCosmetic
class CORDL_TYPE StickyCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ObjectState = ::GlobalNamespace::StickyCosmetic_ObjectState;

/// @brief Field autoRetractThreshold, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_autoRetractThreshold, put=__cordl_internal_set_autoRetractThreshold)) float_t  autoRetractThreshold;

/// @brief Field blendShapeCosmetic, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_blendShapeCosmetic, put=__cordl_internal_set_blendShapeCosmetic)) ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  blendShapeCosmetic;

/// @brief Field collisionLayers, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_collisionLayers, put=__cordl_internal_set_collisionLayers)) ::UnityEngine::LayerMask  collisionLayers;

/// @brief Field currentState, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentState, put=__cordl_internal_set_currentState)) ::GlobalNamespace::StickyCosmetic_ObjectState  currentState;

/// @brief Field endPositionParent, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_endPositionParent, put=__cordl_internal_set_endPositionParent)) ::UnityW<::UnityEngine::Transform>  endPositionParent;

/// @brief Field endRigidbody, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_endRigidbody, put=__cordl_internal_set_endRigidbody)) ::UnityW<::UnityEngine::Rigidbody>  endRigidbody;

/// @brief Field extendingStartedTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_extendingStartedTime, put=__cordl_internal_set_extendingStartedTime)) float_t  extendingStartedTime;

/// @brief Field lastState, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastState, put=__cordl_internal_set_lastState)) ::GlobalNamespace::StickyCosmetic_ObjectState  lastState;

/// @brief Field maxObjectLength, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxObjectLength, put=__cordl_internal_set_maxObjectLength)) float_t  maxObjectLength;

/// @brief Field onStick, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStick, put=__cordl_internal_set_onStick)) ::UnityEngine::Events::UnityEvent*  onStick;

/// @brief Field onUnstick, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onUnstick, put=__cordl_internal_set_onUnstick)) ::UnityEngine::Events::UnityEvent*  onUnstick;

/// @brief Field rayLength, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_rayLength, put=__cordl_internal_set_rayLength)) float_t  rayLength;

/// @brief Field rayOrigin, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_rayOrigin, put=__cordl_internal_set_rayOrigin)) ::UnityW<::UnityEngine::Transform>  rayOrigin;

/// @brief Field retractAfterSecond, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractAfterSecond, put=__cordl_internal_set_retractAfterSecond)) float_t  retractAfterSecond;

/// @brief Field retractSpeed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_retractSpeed, put=__cordl_internal_set_retractSpeed)) float_t  retractSpeed;

/// @brief Field startPosition, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_startPosition, put=__cordl_internal_set_startPosition)) ::UnityW<::UnityEngine::Transform>  startPosition;

/// @brief Field stick, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_stick, put=__cordl_internal_set_stick)) bool  stick;

/// @brief Method Extend, addr 0x5da2d5c, size 0x1c, virtual false, abstract: false, final false
inline void Extend() ;

/// @brief Method Extend_Internal, addr 0x5da2d80, size 0xf0, virtual false, abstract: false, final false
inline void Extend_Internal() ;

/// @brief Method FixedUpdate, addr 0x5da300c, size 0x48c, virtual false, abstract: false, final false
inline void FixedUpdate() ;

static inline ::GorillaTag::Cosmetics::StickyCosmetic* New_ctor() ;

/// @brief Method Retract, addr 0x5da2d78, size 0x8, virtual false, abstract: false, final false
inline void Retract() ;

/// @brief Method Retract_Internal, addr 0x5da2e90, size 0x17c, virtual false, abstract: false, final false
inline void Retract_Internal() ;

/// @brief Method Start, addr 0x5da2cb4, size 0x44, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UpdateState, addr 0x5da2cf8, size 0x64, virtual false, abstract: false, final false
inline void UpdateState(::GlobalNamespace::StickyCosmetic_ObjectState  newState) ;

constexpr float_t const& __cordl_internal_get_autoRetractThreshold() const;

constexpr float_t& __cordl_internal_get_autoRetractThreshold() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic> const& __cordl_internal_get_blendShapeCosmetic() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>& __cordl_internal_get_blendShapeCosmetic() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_collisionLayers() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_collisionLayers() ;

constexpr ::GlobalNamespace::StickyCosmetic_ObjectState const& __cordl_internal_get_currentState() const;

constexpr ::GlobalNamespace::StickyCosmetic_ObjectState& __cordl_internal_get_currentState() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_endPositionParent() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_endPositionParent() ;

constexpr ::UnityW<::UnityEngine::Rigidbody> const& __cordl_internal_get_endRigidbody() const;

constexpr ::UnityW<::UnityEngine::Rigidbody>& __cordl_internal_get_endRigidbody() ;

constexpr float_t const& __cordl_internal_get_extendingStartedTime() const;

constexpr float_t& __cordl_internal_get_extendingStartedTime() ;

constexpr ::GlobalNamespace::StickyCosmetic_ObjectState const& __cordl_internal_get_lastState() const;

constexpr ::GlobalNamespace::StickyCosmetic_ObjectState& __cordl_internal_get_lastState() ;

constexpr float_t const& __cordl_internal_get_maxObjectLength() const;

constexpr float_t& __cordl_internal_get_maxObjectLength() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onStick() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onStick() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onUnstick() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onUnstick() ;

constexpr float_t const& __cordl_internal_get_rayLength() const;

constexpr float_t& __cordl_internal_get_rayLength() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_rayOrigin() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_rayOrigin() ;

constexpr float_t const& __cordl_internal_get_retractAfterSecond() const;

constexpr float_t& __cordl_internal_get_retractAfterSecond() ;

constexpr float_t const& __cordl_internal_get_retractSpeed() const;

constexpr float_t& __cordl_internal_get_retractSpeed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_startPosition() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_startPosition() ;

constexpr bool const& __cordl_internal_get_stick() const;

constexpr bool& __cordl_internal_get_stick() ;

constexpr void __cordl_internal_set_autoRetractThreshold(float_t  value) ;

constexpr void __cordl_internal_set_blendShapeCosmetic(::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  value) ;

constexpr void __cordl_internal_set_collisionLayers(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_currentState(::GlobalNamespace::StickyCosmetic_ObjectState  value) ;

constexpr void __cordl_internal_set_endPositionParent(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_endRigidbody(::UnityW<::UnityEngine::Rigidbody>  value) ;

constexpr void __cordl_internal_set_extendingStartedTime(float_t  value) ;

constexpr void __cordl_internal_set_lastState(::GlobalNamespace::StickyCosmetic_ObjectState  value) ;

constexpr void __cordl_internal_set_maxObjectLength(float_t  value) ;

constexpr void __cordl_internal_set_onStick(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onUnstick(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_rayLength(float_t  value) ;

constexpr void __cordl_internal_set_rayOrigin(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_retractAfterSecond(float_t  value) ;

constexpr void __cordl_internal_set_retractSpeed(float_t  value) ;

constexpr void __cordl_internal_set_startPosition(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_stick(bool  value) ;

/// @brief Method .ctor, addr 0x5da3498, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StickyCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StickyCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
StickyCosmetic(StickyCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StickyCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
StickyCosmetic(StickyCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4975};

/// [Tooltip("Optional reference to an UpdateBlendShapeCosmetic component. Used to drive extension length based on blend shape weight (e.g. finger flex input).")]
/// [SerializeField]
/// @brief Field blendShapeCosmetic, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::UpdateBlendShapeCosmetic>  ___blendShapeCosmetic;

/// [Tooltip("Defines which physics layers this sticky object can attach to when extending (checked via raycast).")]
/// [SerializeField]
/// @brief Field collisionLayers, offset: 0x28, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___collisionLayers;

/// [Tooltip("Transform origin from which the raycast will be fired forward to detect stickable surfaces.")]
/// [SerializeField]
/// @brief Field rayOrigin, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___rayOrigin;

/// [Tooltip("Transform representing the start or base position of the sticky object (where extension originates).")]
/// [SerializeField]
/// @brief Field startPosition, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___startPosition;

/// [Tooltip("Rigidbody controlling the physical end of the sticky object (the part that extends and can attach).")]
/// [SerializeField]
/// @brief Field endRigidbody, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Rigidbody>  ___endRigidbody;

/// [Tooltip("Parent transform the end object will reattach to when fully retracted. This keeps local transform resets consistent.")]
/// [SerializeField]
/// @brief Field endPositionParent, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___endPositionParent;

/// [Tooltip("Maximum distance the object can extend from its start position (in meters).")]
/// [SerializeField]
/// @brief Field maxObjectLength, offset: 0x50, size: 0x4, def value: None
 float_t  ___maxObjectLength;

/// [Tooltip("If the sticky object remains stuck but the distance from start exceeds this threshold, it will automatically unstuck and begin retracting.")]
/// [SerializeField]
/// @brief Field autoRetractThreshold, offset: 0x54, size: 0x4, def value: None
 float_t  ___autoRetractThreshold;

/// [Tooltip("Speed (units per second) at which the end rigidbody retracts toward its start position when returning.")]
/// [SerializeField]
/// @brief Field retractSpeed, offset: 0x58, size: 0x4, def value: None
 float_t  ___retractSpeed;

/// [Tooltip("If the sticky end remains extended but doesn\u{2019}t stick to anything, it will automatically start retracting after this many seconds.")]
/// [SerializeField]
/// @brief Field retractAfterSecond, offset: 0x5c, size: 0x4, def value: None
 float_t  ___retractAfterSecond;

/// [Tooltip("Invoked when the sticky object successfully attaches to a surface.")]
/// @brief Field onStick, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onStick;

/// [Tooltip("Invoked when the sticky object becomes unstuck \u{2014} either manually or automatically.")]
/// @brief Field onUnstick, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onUnstick;

/// @brief Field currentState, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::StickyCosmetic_ObjectState  ___currentState;

/// @brief Field rayLength, offset: 0x74, size: 0x4, def value: None
 float_t  ___rayLength;

/// @brief Field stick, offset: 0x78, size: 0x1, def value: None
 bool  ___stick;

/// @brief Field lastState, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::StickyCosmetic_ObjectState  ___lastState;

/// @brief Field extendingStartedTime, offset: 0x80, size: 0x4, def value: None
 float_t  ___extendingStartedTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___blendShapeCosmetic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___collisionLayers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___rayOrigin) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___startPosition) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___endRigidbody) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___endPositionParent) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___maxObjectLength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___autoRetractThreshold) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___retractSpeed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___retractAfterSecond) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___onStick) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___onUnstick) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___currentState) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___rayLength) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___stick) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___lastState) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::StickyCosmetic, ___extendingStartedTime) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::StickyCosmetic) == 0x88, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
