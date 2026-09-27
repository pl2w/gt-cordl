#pragma once
// IWYU pragma private; include "GlobalNamespace/CosmeticTiltReactor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__CosmeticTiltReactor_TiltEvent_ComparisonMethod_def.hpp"
#include "GlobalNamespace/zzzz__CosmeticTiltReactor_TiltEvent_TiltEventType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CosmeticTiltReactor)
namespace GlobalNamespace {
class CosmeticTiltReactor_TiltEvent;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
struct TiltEvent_CosmeticTiltReactor_ComparisonMethod;
}
namespace GlobalNamespace {
struct TiltEvent_CosmeticTiltReactor_TiltEventType;
}
namespace GlobalNamespace {
class TransferrableObject;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CosmeticTiltReactor;
}
namespace GlobalNamespace {
class CosmeticTiltReactor_TiltEvent;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CosmeticTiltReactor*);
MARK_REF_T(::GlobalNamespace::CosmeticTiltReactor_TiltEvent*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticTiltReactor*, "", "CosmeticTiltReactor");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CosmeticTiltReactor_TiltEvent*, "", "CosmeticTiltReactor/TiltEvent");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticTiltReactor
class CORDL_TYPE CosmeticTiltReactor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TiltEvent = ::GlobalNamespace::CosmeticTiltReactor_TiltEvent;

/// @brief Field _rig, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field angle, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_angle, put=__cordl_internal_set_angle)) float_t  angle;

/// @brief Field calculateAngle, offset 0x6c, size 0x1 
 __declspec(property(get=__cordl_internal_get_calculateAngle, put=__cordl_internal_set_calculateAngle)) bool  calculateAngle;

/// @brief Field calculateDot, offset 0x6d, size 0x1 
 __declspec(property(get=__cordl_internal_get_calculateDot, put=__cordl_internal_set_calculateDot)) bool  calculateDot;

/// @brief Field continuousProperties, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field dotProduct, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_dotProduct, put=__cordl_internal_set_dotProduct)) float_t  dotProduct;

/// @brief Field events, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticTiltReactor_TiltEvent*>*  events;

/// @brief Field hasContinuousProperties, offset 0x61, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasContinuousProperties, put=__cordl_internal_set_hasContinuousProperties)) bool  hasContinuousProperties;

/// @brief Field isLocallyOwned, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get_isLocallyOwned, put=__cordl_internal_set_isLocallyOwned)) bool  isLocallyOwned;

/// @brief Field onlyWhileHeld, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_onlyWhileHeld, put=__cordl_internal_set_onlyWhileHeld)) bool  onlyWhileHeld;

/// @brief Field parentTransferable, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_parentTransferable, put=__cordl_internal_set_parentTransferable)) ::UnityW<::GlobalNamespace::TransferrableObject>  parentTransferable;

/// @brief Field referenceDirection, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_referenceDirection, put=__cordl_internal_set_referenceDirection)) ::UnityEngine::Vector3  referenceDirection;

/// @brief Field referenceTransform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_referenceTransform, put=__cordl_internal_set_referenceTransform)) ::UnityW<::UnityEngine::Transform>  referenceTransform;

/// @brief Field syncForAllPlayers, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncForAllPlayers, put=__cordl_internal_set_syncForAllPlayers)) bool  syncForAllPlayers;

/// @brief Field useTransform, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTransform, put=__cordl_internal_set_useTransform)) bool  useTransform;

/// @brief Field wasInHand, offset 0x6e, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasInHand, put=__cordl_internal_set_wasInHand)) bool  wasInHand;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x580119c, size 0x744, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method FireEvents, addr 0x5801fb8, size 0x33c, virtual false, abstract: false, final false
inline void FireEvents() ;

static inline ::GlobalNamespace::CosmeticTiltReactor* New_ctor() ;

/// @brief Method OnDisable, addr 0x5801cb0, size 0x98, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x58018e0, size 0x240, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ResetEvents, addr 0x5801b20, size 0x190, virtual false, abstract: false, final false
inline void ResetEvents() ;

/// @brief Method SliceUpdate, addr 0x5801d48, size 0x270, virtual true, abstract: false, final true
inline void SliceUpdate() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr float_t const& __cordl_internal_get_angle() const;

constexpr float_t& __cordl_internal_get_angle() ;

constexpr bool const& __cordl_internal_get_calculateAngle() const;

constexpr bool& __cordl_internal_get_calculateAngle() ;

constexpr bool const& __cordl_internal_get_calculateDot() const;

constexpr bool& __cordl_internal_get_calculateDot() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr float_t const& __cordl_internal_get_dotProduct() const;

constexpr float_t& __cordl_internal_get_dotProduct() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticTiltReactor_TiltEvent*>* const& __cordl_internal_get_events() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticTiltReactor_TiltEvent*>*& __cordl_internal_get_events() ;

constexpr bool const& __cordl_internal_get_hasContinuousProperties() const;

constexpr bool& __cordl_internal_get_hasContinuousProperties() ;

constexpr bool const& __cordl_internal_get_isLocallyOwned() const;

constexpr bool& __cordl_internal_get_isLocallyOwned() ;

constexpr bool const& __cordl_internal_get_onlyWhileHeld() const;

constexpr bool& __cordl_internal_get_onlyWhileHeld() ;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject> const& __cordl_internal_get_parentTransferable() const;

constexpr ::UnityW<::GlobalNamespace::TransferrableObject>& __cordl_internal_get_parentTransferable() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_referenceDirection() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_referenceDirection() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_referenceTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_referenceTransform() ;

constexpr bool const& __cordl_internal_get_syncForAllPlayers() const;

constexpr bool& __cordl_internal_get_syncForAllPlayers() ;

constexpr bool const& __cordl_internal_get_useTransform() const;

constexpr bool& __cordl_internal_get_useTransform() ;

constexpr bool const& __cordl_internal_get_wasInHand() const;

constexpr bool& __cordl_internal_get_wasInHand() ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_angle(float_t  value) ;

constexpr void __cordl_internal_set_calculateAngle(bool  value) ;

constexpr void __cordl_internal_set_calculateDot(bool  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_dotProduct(float_t  value) ;

constexpr void __cordl_internal_set_events(::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticTiltReactor_TiltEvent*>*  value) ;

constexpr void __cordl_internal_set_hasContinuousProperties(bool  value) ;

constexpr void __cordl_internal_set_isLocallyOwned(bool  value) ;

constexpr void __cordl_internal_set_onlyWhileHeld(bool  value) ;

constexpr void __cordl_internal_set_parentTransferable(::UnityW<::GlobalNamespace::TransferrableObject>  value) ;

constexpr void __cordl_internal_set_referenceDirection(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_referenceTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_syncForAllPlayers(bool  value) ;

constexpr void __cordl_internal_set_useTransform(bool  value) ;

constexpr void __cordl_internal_set_wasInHand(bool  value) ;

/// @brief Method .ctor, addr 0x58022f4, size 0x68, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticTiltReactor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticTiltReactor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticTiltReactor(CosmeticTiltReactor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticTiltReactor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticTiltReactor(CosmeticTiltReactor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1676};

/// [SerializeField]
/// @brief Field useTransform, offset: 0x20, size: 0x1, def value: None
 bool  ___useTransform;

/// [Tooltip("Direction to which this transform\'s y is compared in world space")]
/// [SerializeField]
/// @brief Field referenceDirection, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___referenceDirection;

/// [Tooltip("compare referenceTransform\'s y to this transform\'s y")]
/// [SerializeField]
/// @brief Field referenceTransform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___referenceTransform;

/// [SerializeField]
/// @brief Field events, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::CosmeticTiltReactor_TiltEvent*>*  ___events;

/// [Tooltip("input for continuous properties is the dot product of this transform\'s y and the reference direction")]
/// [SerializeField]
/// @brief Field continuousProperties, offset: 0x40, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [Tooltip("Should this script be run for all clients or just the owner")]
/// [SerializeField]
/// @brief Field syncForAllPlayers, offset: 0x48, size: 0x1, def value: None
 bool  ___syncForAllPlayers;

/// [Tooltip("option to run only if this transferrable object is in the hand")]
/// [SerializeField]
/// @brief Field onlyWhileHeld, offset: 0x49, size: 0x1, def value: None
 bool  ___onlyWhileHeld;

/// @brief Field _rig, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

/// @brief Field parentTransferable, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::TransferrableObject>  ___parentTransferable;

/// @brief Field isLocallyOwned, offset: 0x60, size: 0x1, def value: None
 bool  ___isLocallyOwned;

/// @brief Field hasContinuousProperties, offset: 0x61, size: 0x1, def value: None
 bool  ___hasContinuousProperties;

/// @brief Field angle, offset: 0x64, size: 0x4, def value: None
 float_t  ___angle;

/// @brief Field dotProduct, offset: 0x68, size: 0x4, def value: None
 float_t  ___dotProduct;

/// @brief Field calculateAngle, offset: 0x6c, size: 0x1, def value: None
 bool  ___calculateAngle;

/// @brief Field calculateDot, offset: 0x6d, size: 0x1, def value: None
 bool  ___calculateDot;

/// @brief Field wasInHand, offset: 0x6e, size: 0x1, def value: None
 bool  ___wasInHand;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___useTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___referenceDirection) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___referenceTransform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___events) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___continuousProperties) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___syncForAllPlayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___onlyWhileHeld) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ____rig) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___parentTransferable) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___isLocallyOwned) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___hasContinuousProperties) == 0x61, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___angle) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___dotProduct) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___calculateAngle) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___calculateDot) == 0x6d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor, ___wasInHand) == 0x6e, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticTiltReactor) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies CosmeticTiltReactor::TiltEvent::ComparisonMethod, CosmeticTiltReactor::TiltEvent::TiltEventType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CosmeticTiltReactor/TiltEvent
class CORDL_TYPE CosmeticTiltReactor_TiltEvent : public ::System::Object {
public:
// Declarations
using ComparisonMethod = ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod;

using TiltEventType = ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType;

/// @brief Field OnTiltEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnTiltEvent, put=__cordl_internal_set_OnTiltEvent)) ::UnityEngine::Events::UnityEvent*  OnTiltEvent;

/// @brief Field angleThreshold, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_angleThreshold, put=__cordl_internal_set_angleThreshold)) float_t  angleThreshold;

/// @brief Field comparisonMethod, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_comparisonMethod, put=__cordl_internal_set_comparisonMethod)) ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod  comparisonMethod;

/// @brief Field dotThreshold, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_dotThreshold, put=__cordl_internal_set_dotThreshold)) float_t  dotThreshold;

/// @brief Field duration, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field hasFired, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasFired, put=__cordl_internal_set_hasFired)) bool  hasFired;

/// @brief Field retriggerDelay, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_retriggerDelay, put=__cordl_internal_set_retriggerDelay)) float_t  retriggerDelay;

/// @brief Field thresholdCrossTime, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_thresholdCrossTime, put=__cordl_internal_set_thresholdCrossTime)) double_t  thresholdCrossTime;

/// @brief Field tiltEventType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_tiltEventType, put=__cordl_internal_set_tiltEventType)) ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType  tiltEventType;

/// @brief Field wasGreater, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasGreater, put=__cordl_internal_set_wasGreater)) bool  wasGreater;

static inline ::GlobalNamespace::CosmeticTiltReactor_TiltEvent* New_ctor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnTiltEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnTiltEvent() ;

constexpr float_t const& __cordl_internal_get_angleThreshold() const;

constexpr float_t& __cordl_internal_get_angleThreshold() ;

constexpr ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod const& __cordl_internal_get_comparisonMethod() const;

constexpr ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod& __cordl_internal_get_comparisonMethod() ;

constexpr float_t const& __cordl_internal_get_dotThreshold() const;

constexpr float_t& __cordl_internal_get_dotThreshold() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr bool const& __cordl_internal_get_hasFired() const;

constexpr bool& __cordl_internal_get_hasFired() ;

constexpr float_t const& __cordl_internal_get_retriggerDelay() const;

constexpr float_t& __cordl_internal_get_retriggerDelay() ;

constexpr double_t const& __cordl_internal_get_thresholdCrossTime() const;

constexpr double_t& __cordl_internal_get_thresholdCrossTime() ;

constexpr ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType const& __cordl_internal_get_tiltEventType() const;

constexpr ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType& __cordl_internal_get_tiltEventType() ;

constexpr bool const& __cordl_internal_get_wasGreater() const;

constexpr bool& __cordl_internal_get_wasGreater() ;

constexpr void __cordl_internal_set_OnTiltEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_angleThreshold(float_t  value) ;

constexpr void __cordl_internal_set_comparisonMethod(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod  value) ;

constexpr void __cordl_internal_set_dotThreshold(float_t  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_hasFired(bool  value) ;

constexpr void __cordl_internal_set_retriggerDelay(float_t  value) ;

constexpr void __cordl_internal_set_thresholdCrossTime(double_t  value) ;

constexpr void __cordl_internal_set_tiltEventType(::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType  value) ;

constexpr void __cordl_internal_set_wasGreater(bool  value) ;

/// @brief Method .ctor, addr 0x580235c, size 0x38, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CosmeticTiltReactor_TiltEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CosmeticTiltReactor_TiltEvent", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CosmeticTiltReactor_TiltEvent(CosmeticTiltReactor_TiltEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CosmeticTiltReactor_TiltEvent", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CosmeticTiltReactor_TiltEvent(CosmeticTiltReactor_TiltEvent const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1675};

/// @brief Field comparisonMethod, offset: 0x10, size: 0x4, def value: None
 ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_ComparisonMethod  ___comparisonMethod;

/// @brief Field tiltEventType, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::TiltEvent_CosmeticTiltReactor_TiltEventType  ___tiltEventType;

/// [Range(0, 180)]
/// [Tooltip("Angle in degrees from the reference direction")]
/// @brief Field angleThreshold, offset: 0x18, size: 0x4, def value: None
 float_t  ___angleThreshold;

/// [Range(-1, 1)]
/// [Tooltip("Dot product compared to the reference direction")]
/// @brief Field dotThreshold, offset: 0x1c, size: 0x4, def value: None
 float_t  ___dotThreshold;

/// [Tooltip("Minimum time between events firing")]
/// @brief Field retriggerDelay, offset: 0x20, size: 0x4, def value: None
 float_t  ___retriggerDelay;

/// [Tooltip("Amount of time the angle or dot product should be less/greater than the threshold before firing an event")]
/// @brief Field duration, offset: 0x24, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field OnTiltEvent, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnTiltEvent;

/// @brief Field wasGreater, offset: 0x30, size: 0x1, def value: None
 bool  ___wasGreater;

/// @brief Field hasFired, offset: 0x31, size: 0x1, def value: None
 bool  ___hasFired;

/// @brief Field thresholdCrossTime, offset: 0x38, size: 0x8, def value: None
 double_t  ___thresholdCrossTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___comparisonMethod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___tiltEventType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___angleThreshold) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___dotThreshold) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___retriggerDelay) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___duration) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___OnTiltEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___wasGreater) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___hasFired) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent, ___thresholdCrossTime) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CosmeticTiltReactor_TiltEvent) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
