#pragma once
// IWYU pragma private; include "GlobalNamespace/ConditionalTrigger.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TimeSince_def.hpp"
#include "GlobalNamespace/zzzz__TriggerCondition_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ConditionalTrigger)
namespace GlobalNamespace {
class IRigAware;
}
namespace GlobalNamespace {
struct TriggerCondition;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class ConditionalTrigger;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConditionalTrigger*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConditionalTrigger*, "", "ConditionalTrigger");
// Dependencies TimeSince, TriggerCondition, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConditionalTrigger
class CORDL_TYPE ConditionalTrigger : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _distance, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__distance, put=__cordl_internal_set__distance)) float_t  _distance;

/// @brief Field _from, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__from, put=__cordl_internal_set__from)) ::UnityW<::UnityEngine::Transform>  _from;

/// @brief Field _interval, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__interval, put=__cordl_internal_set__interval)) float_t  _interval;

/// @brief Field _maxDistance, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxDistance, put=__cordl_internal_set__maxDistance)) float_t  _maxDistance;

/// @brief Field _rig, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__rig, put=__cordl_internal_set__rig)) ::UnityW<::GlobalNamespace::VRRig>  _rig;

/// @brief Field _timeSince, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__timeSince, put=__cordl_internal_set__timeSince)) ::GlobalNamespace::TimeSince  _timeSince;

/// @brief Field _to, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__to, put=__cordl_internal_set__to)) ::UnityW<::UnityEngine::Transform>  _to;

/// @brief Field _tracking, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__tracking, put=__cordl_internal_set__tracking)) ::GlobalNamespace::TriggerCondition  _tracking;

 __declspec(property(get=get_intValue)) int32_t  intValue;

/// @brief Field onMaxDistance, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onMaxDistance, put=__cordl_internal_set_onMaxDistance)) ::UnityEngine::Events::UnityEvent*  onMaxDistance;

/// @brief Field onTimeElapsed, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimeElapsed, put=__cordl_internal_set_onTimeElapsed)) ::UnityEngine::Events::UnityEvent*  onTimeElapsed;

/// @brief Convert operator to "::GlobalNamespace::IRigAware"
constexpr operator  ::GlobalNamespace::IRigAware*() noexcept;

/// @brief Method FindRig, addr 0x57e34f4, size 0xf4, virtual false, abstract: false, final false
static inline void FindRig(::by_ref<::GlobalNamespace::VRRig*>  rig) ;

/// @brief Method IsTracking, addr 0x57e37d0, size 0x10, virtual false, abstract: false, final false
inline bool IsTracking(::GlobalNamespace::TriggerCondition  condition) ;

static inline ::GlobalNamespace::ConditionalTrigger* New_ctor() ;

/// @brief Method OnEnable, addr 0x57e3778, size 0x20, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method SetProximityFrom, addr 0x57e3710, size 0x8, virtual false, abstract: false, final false
inline void SetProximityFrom(::UnityEngine::Transform*  from) ;

/// @brief Method SetProximityFromRig, addr 0x57e33cc, size 0x128, virtual false, abstract: false, final false
inline void SetProximityFromRig() ;

/// @brief Method SetProximityToRig, addr 0x57e35e8, size 0x128, virtual false, abstract: false, final false
inline void SetProximityToRig() ;

/// @brief Method SetProxmityTo, addr 0x57e3718, size 0x8, virtual false, abstract: false, final false
inline void SetProxmityTo(::UnityEngine::Transform*  to) ;

/// @brief Method SetRig, addr 0x57e398c, size 0x8, virtual true, abstract: false, final true
inline void SetRig(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method TrackProximity, addr 0x57e381c, size 0x170, virtual false, abstract: false, final false
inline void TrackProximity() ;

/// @brief Method TrackTimeElapsed, addr 0x57e37e0, size 0x3c, virtual false, abstract: false, final false
inline void TrackTimeElapsed() ;

/// @brief Method TrackedAdd, addr 0x57e3728, size 0x10, virtual false, abstract: false, final false
inline void TrackedAdd(::GlobalNamespace::TriggerCondition  conditions) ;

/// @brief Method TrackedAdd, addr 0x57e3750, size 0x10, virtual false, abstract: false, final false
inline void TrackedAdd(int32_t  conditions) ;

/// @brief Method TrackedClear, addr 0x57e3770, size 0x8, virtual false, abstract: false, final false
inline void TrackedClear() ;

/// @brief Method TrackedRemove, addr 0x57e3738, size 0x10, virtual false, abstract: false, final false
inline void TrackedRemove(::GlobalNamespace::TriggerCondition  conditions) ;

/// @brief Method TrackedRemove, addr 0x57e3760, size 0x10, virtual false, abstract: false, final false
inline void TrackedRemove(int32_t  conditions) ;

/// @brief Method TrackedSet, addr 0x57e3720, size 0x8, virtual false, abstract: false, final false
inline void TrackedSet(::GlobalNamespace::TriggerCondition  conditions) ;

/// @brief Method TrackedSet, addr 0x57e3748, size 0x8, virtual false, abstract: false, final false
inline void TrackedSet(int32_t  conditions) ;

/// @brief Method Update, addr 0x57e3798, size 0x38, virtual false, abstract: false, final false
inline void Update() ;

constexpr float_t const& __cordl_internal_get__distance() const;

constexpr float_t& __cordl_internal_get__distance() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__from() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__from() ;

constexpr float_t const& __cordl_internal_get__interval() const;

constexpr float_t& __cordl_internal_get__interval() ;

constexpr float_t const& __cordl_internal_get__maxDistance() const;

constexpr float_t& __cordl_internal_get__maxDistance() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get__rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get__rig() ;

constexpr ::GlobalNamespace::TimeSince const& __cordl_internal_get__timeSince() const;

constexpr ::GlobalNamespace::TimeSince& __cordl_internal_get__timeSince() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__to() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__to() ;

constexpr ::GlobalNamespace::TriggerCondition const& __cordl_internal_get__tracking() const;

constexpr ::GlobalNamespace::TriggerCondition& __cordl_internal_get__tracking() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onMaxDistance() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onMaxDistance() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTimeElapsed() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTimeElapsed() ;

constexpr void __cordl_internal_set__distance(float_t  value) ;

constexpr void __cordl_internal_set__from(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__interval(float_t  value) ;

constexpr void __cordl_internal_set__maxDistance(float_t  value) ;

constexpr void __cordl_internal_set__rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set__timeSince(::GlobalNamespace::TimeSince  value) ;

constexpr void __cordl_internal_set__to(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__tracking(::GlobalNamespace::TriggerCondition  value) ;

constexpr void __cordl_internal_set_onMaxDistance(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onTimeElapsed(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method .ctor, addr 0x57e3994, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_intValue, addr 0x57e33c4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_intValue() ;

/// @brief Convert to "::GlobalNamespace::IRigAware"
constexpr ::GlobalNamespace::IRigAware* i___GlobalNamespace__IRigAware() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConditionalTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConditionalTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConditionalTrigger(ConditionalTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConditionalTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConditionalTrigger(ConditionalTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1651};

/// [Space]
/// [SerializeField]
/// @brief Field _tracking, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::TriggerCondition  ____tracking;

/// [Space]
/// [SerializeField]
/// @brief Field _from, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____from;

/// [SerializeField]
/// @brief Field _to, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____to;

/// [SerializeField]
/// @brief Field _maxDistance, offset: 0x38, size: 0x4, def value: None
 float_t  ____maxDistance;

/// @brief Field _distance, offset: 0x3c, size: 0x4, def value: None
 float_t  ____distance;

/// [Space]
/// @brief Field onMaxDistance, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onMaxDistance;

/// [SerializeField]
/// @brief Field _interval, offset: 0x48, size: 0x4, def value: None
 float_t  ____interval;

/// @brief Field _timeSince, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::TimeSince  ____timeSince;

/// [Space]
/// @brief Field onTimeElapsed, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTimeElapsed;

/// [Space]
/// @brief Field _rig, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ____rig;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____tracking) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____from) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____to) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____maxDistance) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____distance) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ___onMaxDistance) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____interval) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____timeSince) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ___onTimeElapsed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConditionalTrigger, ____rig) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConditionalTrigger) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
