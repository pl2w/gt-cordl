#pragma once
// IWYU pragma private; include "Cosmetics/CountDrivenEvents.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CountDrivenEvents)
namespace Cosmetics {
class CountDrivenEvents_CountTrigger;
}
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
class VRRig;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityEvent_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Cosmetics {
class CountDrivenEvents;
}
namespace Cosmetics {
class CountDrivenEvents_CountTrigger;
}
// Write type traits
MARK_REF_T(::Cosmetics::CountDrivenEvents*);
MARK_REF_T(::Cosmetics::CountDrivenEvents_CountTrigger*);
DEFINE_IL2CPP_CLASS(::Cosmetics::CountDrivenEvents*, "Cosmetics", "CountDrivenEvents");
DEFINE_IL2CPP_CLASS(::Cosmetics::CountDrivenEvents_CountTrigger*, "Cosmetics", "CountDrivenEvents/CountTrigger");
// Dependencies UnityEngine.MonoBehaviour
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.CountDrivenEvents
class CORDL_TYPE CountDrivenEvents : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CountTrigger = ::Cosmetics::CountDrivenEvents_CountTrigger;

 __declspec(property(get=get_CurrentCount)) int32_t  CurrentCount;

/// @brief Field _events, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__events, put=__cordl_internal_set__events)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  _events;

/// @brief Field callLimiter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field cooldown, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_cooldown, put=__cordl_internal_set_cooldown)) float_t  cooldown;

/// @brief Field currentCount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentCount, put=__cordl_internal_set_currentCount)) int32_t  currentCount;

/// @brief Field evaluateOnEnable, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_evaluateOnEnable, put=__cordl_internal_set_evaluateOnEnable)) bool  evaluateOnEnable;

/// @brief Field lastEventTime, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastEventTime, put=__cordl_internal_set_lastEventTime)) float_t  lastEventTime;

/// @brief Field myRig, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field onCountChanged, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountChanged, put=__cordl_internal_set_onCountChanged)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onCountChanged;

/// @brief Field onCountChangedShared, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountChangedShared, put=__cordl_internal_set_onCountChangedShared)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onCountChangedShared;

/// @brief Field onCountDecreased, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountDecreased, put=__cordl_internal_set_onCountDecreased)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onCountDecreased;

/// @brief Field onCountDecreasedShared, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountDecreasedShared, put=__cordl_internal_set_onCountDecreasedShared)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onCountDecreasedShared;

/// @brief Field onCountIncreased, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountIncreased, put=__cordl_internal_set_onCountIncreased)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onCountIncreased;

/// @brief Field onCountIncreasedShared, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountIncreasedShared, put=__cordl_internal_set_onCountIncreasedShared)) ::UnityEngine::Events::UnityEvent_1<int32_t>*  onCountIncreasedShared;

/// @brief Field onCountResetToZero, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountResetToZero, put=__cordl_internal_set_onCountResetToZero)) ::UnityEngine::Events::UnityEvent*  onCountResetToZero;

/// @brief Field onCountResetToZeroShared, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountResetToZeroShared, put=__cordl_internal_set_onCountResetToZeroShared)) ::UnityEngine::Events::UnityEvent*  onCountResetToZeroShared;

/// @brief Field onReachedMaxTrigger, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReachedMaxTrigger, put=__cordl_internal_set_onReachedMaxTrigger)) ::UnityEngine::Events::UnityEvent*  onReachedMaxTrigger;

/// @brief Field onReachedMaxTriggerShared, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_onReachedMaxTriggerShared, put=__cordl_internal_set_onReachedMaxTriggerShared)) ::UnityEngine::Events::UnityEvent*  onReachedMaxTriggerShared;

/// @brief Field syncAllEvents, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_syncAllEvents, put=__cordl_internal_set_syncAllEvents)) bool  syncAllEvents;

/// @brief Field triggers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_triggers, put=__cordl_internal_set_triggers)) ::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>*  triggers;

/// @brief Field wrapCount, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_wrapCount, put=__cordl_internal_set_wrapCount)) bool  wrapCount;

/// @brief Method CheckTriggers, addr 0x5d1bfc0, size 0x2f0, virtual false, abstract: false, final false
inline void CheckTriggers(int32_t  oldCount, int32_t  newCount) ;

/// @brief Method Decrement, addr 0x5d1c890, size 0xc, virtual false, abstract: false, final false
inline void Decrement() ;

/// @brief Method GetHighestTriggerCount, addr 0x5d1c89c, size 0xbc, virtual false, abstract: false, final false
inline int32_t GetHighestTriggerCount() ;

/// @brief Method Increment, addr 0x5d1c4f8, size 0xc, virtual false, abstract: false, final false
inline void Increment() ;

/// @brief Method IsOnCooldown, addr 0x5d1bc54, size 0x40, virtual false, abstract: false, final false
inline bool IsOnCooldown() ;

static inline ::Cosmetics::CountDrivenEvents* New_ctor() ;

/// @brief Method OnCountChanged_SharedEvent, addr 0x5d1c9e4, size 0x214, virtual false, abstract: false, final false
inline void OnCountChanged_SharedEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnCountReached_SharedEvent, addr 0x5d1cbf8, size 0x1a4, virtual false, abstract: false, final false
inline void OnCountReached_SharedEvent(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method OnDisable, addr 0x5d1c2b0, size 0x1a0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d1bc94, size 0x32c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnValidate, addr 0x5d1c450, size 0xa8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// [Tooltip("Resets all \'triggerOnce\' flags, allowing one-time triggers to fire again.\n\nUse this when restarting a sequence, resetting an object,\nor testing trigger behavior multiple times in play mode.")]
/// @brief Method ResetTriggers, addr 0x5d1c958, size 0x8c, virtual false, abstract: false, final false
inline void ResetTriggers() ;

/// @brief Method SetCount, addr 0x5d1c504, size 0x38c, virtual false, abstract: false, final false
inline void SetCount(int32_t  newCount) ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get__events() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get__events() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr float_t const& __cordl_internal_get_cooldown() const;

constexpr float_t& __cordl_internal_get_cooldown() ;

constexpr int32_t const& __cordl_internal_get_currentCount() const;

constexpr int32_t& __cordl_internal_get_currentCount() ;

constexpr bool const& __cordl_internal_get_evaluateOnEnable() const;

constexpr bool& __cordl_internal_get_evaluateOnEnable() ;

constexpr float_t const& __cordl_internal_get_lastEventTime() const;

constexpr float_t& __cordl_internal_get_lastEventTime() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onCountChanged() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onCountChanged() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onCountChangedShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onCountChangedShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onCountDecreased() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onCountDecreased() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onCountDecreasedShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onCountDecreasedShared() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onCountIncreased() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onCountIncreased() ;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>* const& __cordl_internal_get_onCountIncreasedShared() const;

constexpr ::UnityEngine::Events::UnityEvent_1<int32_t>*& __cordl_internal_get_onCountIncreasedShared() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onCountResetToZero() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onCountResetToZero() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onCountResetToZeroShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onCountResetToZeroShared() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onReachedMaxTrigger() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onReachedMaxTrigger() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onReachedMaxTriggerShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onReachedMaxTriggerShared() ;

constexpr bool const& __cordl_internal_get_syncAllEvents() const;

constexpr bool& __cordl_internal_get_syncAllEvents() ;

constexpr ::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>* const& __cordl_internal_get_triggers() const;

constexpr ::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>*& __cordl_internal_get_triggers() ;

constexpr bool const& __cordl_internal_get_wrapCount() const;

constexpr bool& __cordl_internal_get_wrapCount() ;

constexpr void __cordl_internal_set__events(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_cooldown(float_t  value) ;

constexpr void __cordl_internal_set_currentCount(int32_t  value) ;

constexpr void __cordl_internal_set_evaluateOnEnable(bool  value) ;

constexpr void __cordl_internal_set_lastEventTime(float_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_onCountChanged(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onCountChangedShared(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onCountDecreased(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onCountDecreasedShared(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onCountIncreased(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onCountIncreasedShared(::UnityEngine::Events::UnityEvent_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_onCountResetToZero(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onCountResetToZeroShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onReachedMaxTrigger(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onReachedMaxTriggerShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_syncAllEvents(bool  value) ;

constexpr void __cordl_internal_set_triggers(::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>*  value) ;

constexpr void __cordl_internal_set_wrapCount(bool  value) ;

/// @brief Method .ctor, addr 0x5d1cd9c, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CurrentCount, addr 0x5d1bc4c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentCount() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountDrivenEvents() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountDrivenEvents", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountDrivenEvents(CountDrivenEvents && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountDrivenEvents", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountDrivenEvents(CountDrivenEvents const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4581};

/// [Header("Network")]
/// [SerializeField]
/// @brief Field syncAllEvents, offset: 0x20, size: 0x1, def value: None
 bool  ___syncAllEvents;

/// [Header("General Settings")]
/// [Tooltip("If true, triggers will be evaluated once on enable using the initial count.")]
/// [SerializeField]
/// @brief Field evaluateOnEnable, offset: 0x21, size: 0x1, def value: None
 bool  ___evaluateOnEnable;

/// [Tooltip("If enabled, the counter value will loop between 0 and the highest triggerCount.")]
/// [SerializeField]
/// @brief Field wrapCount, offset: 0x22, size: 0x1, def value: None
 bool  ___wrapCount;

/// [Tooltip("Minimum time (in seconds) that must pass before events can fire again")]
/// [SerializeField]
/// @brief Field cooldown, offset: 0x24, size: 0x4, def value: None
 float_t  ___cooldown;

/// [Header("Count Triggers")]
/// [SerializeField]
/// @brief Field triggers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Cosmetics::CountDrivenEvents_CountTrigger*>*  ___triggers;

/// [Header("Local and Networked Events")]
/// @brief Field onCountChanged, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onCountChanged;

/// @brief Field onCountChangedShared, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onCountChangedShared;

/// @brief Field onCountIncreased, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onCountIncreased;

/// @brief Field onCountIncreasedShared, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onCountIncreasedShared;

/// @brief Field onCountDecreased, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onCountDecreased;

/// @brief Field onCountDecreasedShared, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent_1<int32_t>*  ___onCountDecreasedShared;

/// @brief Field onCountResetToZero, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onCountResetToZero;

/// @brief Field onCountResetToZeroShared, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onCountResetToZeroShared;

/// @brief Field onReachedMaxTrigger, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onReachedMaxTrigger;

/// @brief Field onReachedMaxTriggerShared, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onReachedMaxTriggerShared;

/// [Header("Debug - Counter Settings")]
/// [SerializeField]
/// @brief Field currentCount, offset: 0x80, size: 0x4, def value: None
 int32_t  ___currentCount;

/// @brief Field _events, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ____events;

/// @brief Field myRig, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field callLimiter, offset: 0x98, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// @brief Field lastEventTime, offset: 0xa0, size: 0x4, def value: None
 float_t  ___lastEventTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___syncAllEvents) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___evaluateOnEnable) == 0x21, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___wrapCount) == 0x22, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___cooldown) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___triggers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountChangedShared) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountIncreased) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountIncreasedShared) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountDecreased) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountDecreasedShared) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountResetToZero) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onCountResetToZeroShared) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onReachedMaxTrigger) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___onReachedMaxTriggerShared) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___currentCount) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ____events) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___myRig) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___callLimiter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents, ___lastEventTime) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::CountDrivenEvents) == 0xa8, "Size mismatch!");

} // namespace end def Cosmetics
// Dependencies System.Object
namespace Cosmetics {
// Is value type: false
// CS Name: Cosmetics.CountDrivenEvents/CountTrigger
class CORDL_TYPE CountDrivenEvents_CountTrigger : public ::System::Object {
public:
// Declarations
/// @brief Field hasTriggered, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasTriggered, put=__cordl_internal_set_hasTriggered)) bool  hasTriggered;

/// @brief Field onCountReached, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountReached, put=__cordl_internal_set_onCountReached)) ::UnityEngine::Events::UnityEvent*  onCountReached;

/// @brief Field onCountReachedShared, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_onCountReachedShared, put=__cordl_internal_set_onCountReachedShared)) ::UnityEngine::Events::UnityEvent*  onCountReachedShared;

/// @brief Field triggerCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_triggerCount, put=__cordl_internal_set_triggerCount)) int32_t  triggerCount;

/// @brief Field triggerOnce, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_triggerOnce, put=__cordl_internal_set_triggerOnce)) bool  triggerOnce;

static inline ::Cosmetics::CountDrivenEvents_CountTrigger* New_ctor() ;

constexpr bool const& __cordl_internal_get_hasTriggered() const;

constexpr bool& __cordl_internal_get_hasTriggered() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onCountReached() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onCountReached() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onCountReachedShared() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onCountReachedShared() ;

constexpr int32_t const& __cordl_internal_get_triggerCount() const;

constexpr int32_t& __cordl_internal_get_triggerCount() ;

constexpr bool const& __cordl_internal_get_triggerOnce() const;

constexpr bool& __cordl_internal_get_triggerOnce() ;

constexpr void __cordl_internal_set_hasTriggered(bool  value) ;

constexpr void __cordl_internal_set_onCountReached(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_onCountReachedShared(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_triggerCount(int32_t  value) ;

constexpr void __cordl_internal_set_triggerOnce(bool  value) ;

/// @brief Method .ctor, addr 0x5d1ce70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CountDrivenEvents_CountTrigger() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CountDrivenEvents_CountTrigger", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CountDrivenEvents_CountTrigger(CountDrivenEvents_CountTrigger && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CountDrivenEvents_CountTrigger", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CountDrivenEvents_CountTrigger(CountDrivenEvents_CountTrigger const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4580};

/// [Tooltip("The count value that triggers this event")]
/// @brief Field triggerCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___triggerCount;

/// [Tooltip("Events to invoke when count reaches this value")]
/// @brief Field onCountReached, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onCountReached;

/// @brief Field onCountReachedShared, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onCountReachedShared;

/// [Tooltip("Should this trigger fire every time the count passes through this value, or only once?")]
/// @brief Field triggerOnce, offset: 0x28, size: 0x1, def value: None
 bool  ___triggerOnce;

/// @brief Field hasTriggered, offset: 0x29, size: 0x1, def value: None
 bool  ___hasTriggered;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cosmetics::CountDrivenEvents_CountTrigger, ___triggerCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents_CountTrigger, ___onCountReached) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents_CountTrigger, ___onCountReachedShared) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents_CountTrigger, ___triggerOnce) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cosmetics::CountDrivenEvents_CountTrigger, ___hasTriggered) == 0x29, "Offset mismatch!");

static_assert(sizeof(::Cosmetics::CountDrivenEvents_CountTrigger) == 0x30, "Size mismatch!");

} // namespace end def Cosmetics
