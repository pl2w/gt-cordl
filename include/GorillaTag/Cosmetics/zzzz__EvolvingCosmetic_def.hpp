#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/EvolvingCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_EvolutionStage_EventAtTime_Type_def.hpp"
#include "GorillaTag/Cosmetics/zzzz__EvolvingCosmetic_EvolutionStage_ProgressionFlags_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(EvolvingCosmetic)
namespace GlobalNamespace {
class CallLimiter;
}
namespace GlobalNamespace {
struct EventAtTime_EvolutionStage_EvolvingCosmetic_Type;
}
namespace GlobalNamespace {
struct EvolutionStage_EvolvingCosmetic_ProgressionFlags;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GlobalNamespace {
struct PhotonMessageInfoWrapped;
}
namespace GlobalNamespace {
class RubberDuckEvents;
}
namespace GlobalNamespace {
class ThermalReceiver;
}
namespace GlobalNamespace {
class VRRig;
}
namespace GorillaTag::Cosmetics {
class ContinuousPropertyArray;
}
namespace GorillaTag::Cosmetics {
class EvolutionStage_EvolvingCosmetic_EventAtTime;
}
namespace GorillaTag::Cosmetics {
class EvolvingCosmetic_EvolutionStage;
}
namespace GorillaTag::Cosmetics {
class EvolvingCosmetic__SendElapsedTimeDelayed_d__33;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class EvolutionStage_EvolvingCosmetic_EventAtTime;
}
namespace GorillaTag::Cosmetics {
class EvolvingCosmetic;
}
namespace GorillaTag::Cosmetics {
class EvolvingCosmetic_EvolutionStage;
}
namespace GorillaTag::Cosmetics {
class EvolvingCosmetic__SendElapsedTimeDelayed_d__33;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*);
MARK_REF_T(::GorillaTag::Cosmetics::EvolvingCosmetic*);
MARK_REF_T(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*);
MARK_REF_T(::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*, "GorillaTag.Cosmetics", "EvolvingCosmetic/EvolutionStage/EventAtTime");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EvolvingCosmetic*, "GorillaTag.Cosmetics", "EvolvingCosmetic");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*, "GorillaTag.Cosmetics", "EvolvingCosmetic/EvolutionStage");
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33*, "GorillaTag.Cosmetics", "EvolvingCosmetic/<SendElapsedTimeDelayed>d__33");
// [Obsolete]
// Dependencies GorillaTag.Cosmetics.EvolvingCosmetic::EvolutionStage, UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EvolvingCosmetic
class CORDL_TYPE EvolvingCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using EvolutionStage = ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage;

using _SendElapsedTimeDelayed_d__33 = ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33;

 __declspec(property(get=get_LoopMaxValue)) int32_t  LoopMaxValue;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field activeStage, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_activeStage, put=__cordl_internal_set_activeStage)) ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*  activeStage;

/// @brief Field activeStageIndex, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_activeStageIndex, put=__cordl_internal_set_activeStageIndex)) int32_t  activeStageIndex;

/// @brief Field callLimiter, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_callLimiter, put=__cordl_internal_set_callLimiter)) ::GlobalNamespace::CallLimiter*  callLimiter;

/// @brief Field enableLooping, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_enableLooping, put=__cordl_internal_set_enableLooping)) bool  enableLooping;

/// @brief Field loopDuration, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopDuration, put=__cordl_internal_set_loopDuration)) float_t  loopDuration;

/// @brief Field loopToStageOnComplete, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopToStageOnComplete, put=__cordl_internal_set_loopToStageOnComplete)) int32_t  loopToStageOnComplete;

/// @brief Field myRig, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_myRig, put=__cordl_internal_set_myRig)) ::UnityW<::GlobalNamespace::VRRig>  myRig;

/// @brief Field networkEvents, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkEvents, put=__cordl_internal_set_networkEvents)) ::UnityW<::GlobalNamespace::RubberDuckEvents>  networkEvents;

/// @brief Field nextEvent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextEvent, put=__cordl_internal_set_nextEvent)) ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*  nextEvent;

/// @brief Field nextEventIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextEventIndex, put=__cordl_internal_set_nextEventIndex)) int32_t  nextEventIndex;

/// @brief Field sendProgressDelayCoroutine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_sendProgressDelayCoroutine, put=__cordl_internal_set_sendProgressDelayCoroutine)) ::UnityEngine::Coroutine*  sendProgressDelayCoroutine;

/// @brief Field stages, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_stages, put=__cordl_internal_set_stages)) ::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>  stages;

/// @brief Field timeAtLoopStart, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeAtLoopStart, put=__cordl_internal_set_timeAtLoopStart)) float_t  timeAtLoopStart;

/// @brief Field totalDuration, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalDuration, put=__cordl_internal_set_totalDuration)) float_t  totalDuration;

/// @brief Field totalElapsedTime, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalElapsedTime, put=__cordl_internal_set_totalElapsedTime)) float_t  totalElapsedTime;

/// @brief Field totalTimeOfPreviousStages, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_totalTimeOfPreviousStages, put=__cordl_internal_set_totalTimeOfPreviousStages)) float_t  totalTimeOfPreviousStages;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x5d94174, size 0x180, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CompleteManualStage, addr 0x5d94c2c, size 0x24, virtual false, abstract: false, final false
inline void CompleteManualStage() ;

/// @brief Method DecrementStage, addr 0x5d95160, size 0xc, virtual false, abstract: false, final false
inline void DecrementStage() ;

/// @brief Method FirstStage, addr 0x5d94594, size 0x88, virtual false, abstract: false, final false
inline void FirstStage() ;

/// @brief Method ForceNextStage, addr 0x5d94c50, size 0x38, virtual false, abstract: false, final false
inline void ForceNextStage() ;

/// @brief Method HandleStages, addr 0x5d94878, size 0x2c8, virtual false, abstract: false, final false
inline void HandleStages() ;

/// @brief Method IncrementStage, addr 0x5d95154, size 0xc, virtual false, abstract: false, final false
inline void IncrementStage() ;

/// @brief Method JumpToFirstStage, addr 0x5d9516c, size 0x8, virtual false, abstract: false, final false
inline void JumpToFirstStage() ;

/// @brief Method JumpToLastStage, addr 0x5d95174, size 0x1c, virtual false, abstract: false, final false
inline void JumpToLastStage() ;

/// @brief Method JumpToStageIndex, addr 0x5d95198, size 0x4, virtual false, abstract: false, final false
inline void JumpToStageIndex(int32_t  index) ;

/// @brief Method Log, addr 0x5d94840, size 0x4, virtual false, abstract: false, final false
inline void Log(bool  isComplete, bool  isEvent) ;

static inline ::GorillaTag::Cosmetics::EvolvingCosmetic* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d9461c, size 0x224, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d94310, size 0x284, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReceiveElapsedTime, addr 0x5d94d70, size 0x180, virtual false, abstract: false, final false
inline void ReceiveElapsedTime(int32_t  sender, int32_t  target, ::ArrayW<::System::Object*>  args, ::GlobalNamespace::PhotonMessageInfoWrapped  info) ;

/// @brief Method RestartCurrentStage, addr 0x5d95190, size 0x8, virtual false, abstract: false, final false
inline void RestartCurrentStage() ;

/// @brief Method RestartStageInternal, addr 0x5d9514c, size 0x8, virtual false, abstract: false, final false
inline void RestartStageInternal() ;

/// @brief Method SendElapsedTime, addr 0x5d94c88, size 0x54, virtual false, abstract: false, final false
inline void SendElapsedTime(::GlobalNamespace::NetPlayer*  player) ;

/// [IteratorStateMachine(typeof(GorillaTag.Cosmetics.EvolvingCosmetic::<SendElapsedTimeDelayed>d__33))]
/// @brief Method SendElapsedTimeDelayed, addr 0x5d94cdc, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* SendElapsedTimeDelayed() ;

/// @brief Method SetStage, addr 0x5d94ef0, size 0x25c, virtual false, abstract: false, final false
inline void SetStage(int32_t  targetIndex) ;

/// @brief Method Tick, addr 0x5d94b60, size 0x74, virtual true, abstract: false, final true
inline void Tick() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage* const& __cordl_internal_get_activeStage() const;

constexpr ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*& __cordl_internal_get_activeStage() ;

constexpr int32_t const& __cordl_internal_get_activeStageIndex() const;

constexpr int32_t& __cordl_internal_get_activeStageIndex() ;

constexpr ::GlobalNamespace::CallLimiter* const& __cordl_internal_get_callLimiter() const;

constexpr ::GlobalNamespace::CallLimiter*& __cordl_internal_get_callLimiter() ;

constexpr bool const& __cordl_internal_get_enableLooping() const;

constexpr bool& __cordl_internal_get_enableLooping() ;

constexpr float_t const& __cordl_internal_get_loopDuration() const;

constexpr float_t& __cordl_internal_get_loopDuration() ;

constexpr int32_t const& __cordl_internal_get_loopToStageOnComplete() const;

constexpr int32_t& __cordl_internal_get_loopToStageOnComplete() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_myRig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_myRig() ;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents> const& __cordl_internal_get_networkEvents() const;

constexpr ::UnityW<::GlobalNamespace::RubberDuckEvents>& __cordl_internal_get_networkEvents() ;

constexpr ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime* const& __cordl_internal_get_nextEvent() const;

constexpr ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*& __cordl_internal_get_nextEvent() ;

constexpr int32_t const& __cordl_internal_get_nextEventIndex() const;

constexpr int32_t& __cordl_internal_get_nextEventIndex() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_sendProgressDelayCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_sendProgressDelayCoroutine() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*> const& __cordl_internal_get_stages() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>& __cordl_internal_get_stages() ;

constexpr float_t const& __cordl_internal_get_timeAtLoopStart() const;

constexpr float_t& __cordl_internal_get_timeAtLoopStart() ;

constexpr float_t const& __cordl_internal_get_totalDuration() const;

constexpr float_t& __cordl_internal_get_totalDuration() ;

constexpr float_t const& __cordl_internal_get_totalElapsedTime() const;

constexpr float_t& __cordl_internal_get_totalElapsedTime() ;

constexpr float_t const& __cordl_internal_get_totalTimeOfPreviousStages() const;

constexpr float_t& __cordl_internal_get_totalTimeOfPreviousStages() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_activeStage(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*  value) ;

constexpr void __cordl_internal_set_activeStageIndex(int32_t  value) ;

constexpr void __cordl_internal_set_callLimiter(::GlobalNamespace::CallLimiter*  value) ;

constexpr void __cordl_internal_set_enableLooping(bool  value) ;

constexpr void __cordl_internal_set_loopDuration(float_t  value) ;

constexpr void __cordl_internal_set_loopToStageOnComplete(int32_t  value) ;

constexpr void __cordl_internal_set_myRig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_networkEvents(::UnityW<::GlobalNamespace::RubberDuckEvents>  value) ;

constexpr void __cordl_internal_set_nextEvent(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*  value) ;

constexpr void __cordl_internal_set_nextEventIndex(int32_t  value) ;

constexpr void __cordl_internal_set_sendProgressDelayCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_stages(::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>  value) ;

constexpr void __cordl_internal_set_timeAtLoopStart(float_t  value) ;

constexpr void __cordl_internal_set_totalDuration(float_t  value) ;

constexpr void __cordl_internal_set_totalElapsedTime(float_t  value) ;

constexpr void __cordl_internal_set_totalTimeOfPreviousStages(float_t  value) ;

/// @brief Method .ctor, addr 0x5d9519c, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_LoopMaxValue, addr 0x5d9415c, size 0x18, virtual false, abstract: false, final false
inline int32_t get_LoopMaxValue() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x5d94b50, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x5d94b58, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmetic(EvolvingCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmetic(EvolvingCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4929};

/// [SerializeField]
/// @brief Field enableLooping, offset: 0x20, size: 0x1, def value: None
 bool  ___enableLooping;

/// [SerializeField]
/// @brief Field loopToStageOnComplete, offset: 0x24, size: 0x4, def value: None
 int32_t  ___loopToStageOnComplete;

/// [SerializeField]
/// @brief Field stages, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*>  ___stages;

/// @brief Field networkEvents, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::RubberDuckEvents>  ___networkEvents;

/// @brief Field myRig, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___myRig;

/// @brief Field callLimiter, offset: 0x40, size: 0x8, def value: None
 ::GlobalNamespace::CallLimiter*  ___callLimiter;

/// @brief Field activeStageIndex, offset: 0x48, size: 0x4, def value: None
 int32_t  ___activeStageIndex;

/// @brief Field activeStage, offset: 0x50, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage*  ___activeStage;

/// @brief Field nextEventIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___nextEventIndex;

/// @brief Field nextEvent, offset: 0x60, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*  ___nextEvent;

/// @brief Field totalElapsedTime, offset: 0x68, size: 0x4, def value: None
 float_t  ___totalElapsedTime;

/// @brief Field totalTimeOfPreviousStages, offset: 0x6c, size: 0x4, def value: None
 float_t  ___totalTimeOfPreviousStages;

/// @brief Field totalDuration, offset: 0x70, size: 0x4, def value: None
 float_t  ___totalDuration;

/// @brief Field timeAtLoopStart, offset: 0x74, size: 0x4, def value: None
 float_t  ___timeAtLoopStart;

/// @brief Field loopDuration, offset: 0x78, size: 0x4, def value: None
 float_t  ___loopDuration;

/// @brief Field sendProgressDelayCoroutine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___sendProgressDelayCoroutine;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x88, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___enableLooping) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___loopToStageOnComplete) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___stages) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___networkEvents) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___myRig) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___callLimiter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___activeStageIndex) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___activeStage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___nextEventIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___nextEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___totalElapsedTime) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___totalTimeOfPreviousStages) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___totalDuration) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___timeAtLoopStart) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___loopDuration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ___sendProgressDelayCoroutine) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic, ____TickRunning_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EvolvingCosmetic) == 0x90, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EvolvingCosmetic/<SendElapsedTimeDelayed>d__33
class CORDL_TYPE EvolvingCosmetic__SendElapsedTimeDelayed_d__33 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d95328, size 0x16c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d95494, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d9549c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d954d4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d95324, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d94d48, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmetic__SendElapsedTimeDelayed_d__33() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic__SendElapsedTimeDelayed_d__33", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmetic__SendElapsedTimeDelayed_d__33(EvolvingCosmetic__SendElapsedTimeDelayed_d__33 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic__SendElapsedTimeDelayed_d__33", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmetic__SendElapsedTimeDelayed_d__33(EvolvingCosmetic__SendElapsedTimeDelayed_d__33 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4928};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Cosmetics::EvolvingCosmetic>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EvolvingCosmetic__SendElapsedTimeDelayed_d__33) == 0x28, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.EvolvingCosmetic::EvolutionStage::EventAtTime, GorillaTag.Cosmetics.EvolvingCosmetic::EvolutionStage::ProgressionFlags, System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EvolvingCosmetic/EvolutionStage
class CORDL_TYPE EvolvingCosmetic_EvolutionStage : public ::System::Object {
public:
// Declarations
using ProgressionFlags = ::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags;

using EventAtTime = ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime;

 __declspec(property(get=get_Duration)) float_t  Duration;

 __declspec(property(get=get_HasDuration)) bool  HasDuration;

 __declspec(property(get=get_HasTemperature)) bool  HasTemperature;

 __declspec(property(get=get_HasTime)) bool  HasTime;

/// @brief Field celsiusSpeedupMult, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_celsiusSpeedupMult, put=__cordl_internal_set_celsiusSpeedupMult)) ::UnityEngine::AnimationCurve*  celsiusSpeedupMult;

/// @brief Field continuousProperties, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuousProperties, put=__cordl_internal_set_continuousProperties)) ::GorillaTag::Cosmetics::ContinuousPropertyArray*  continuousProperties;

/// @brief Field debugName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugName, put=__cordl_internal_set_debugName)) ::StringW  debugName;

/// @brief Field durationSeconds, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_durationSeconds, put=__cordl_internal_set_durationSeconds)) float_t  durationSeconds;

/// @brief Field events, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>  events;

/// @brief Field progressionFlags, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_progressionFlags, put=__cordl_internal_set_progressionFlags)) ::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags  progressionFlags;

/// @brief Field thermalReceiver, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_thermalReceiver, put=__cordl_internal_set_thermalReceiver)) ::UnityW<::GlobalNamespace::ThermalReceiver>  thermalReceiver;

/// @brief Method DeltaTime, addr 0x5d94bd4, size 0x58, virtual false, abstract: false, final false
inline float_t DeltaTime(float_t  deltaTime) ;

/// @brief Method GetEventOrNull, addr 0x5d94844, size 0x34, virtual false, abstract: false, final false
inline ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime* GetEventOrNull(int32_t  index) ;

/// @brief Method HasAnyFlag, addr 0x5d9521c, size 0x10, virtual false, abstract: false, final false
inline bool HasAnyFlag(::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags  flag) ;

static inline ::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage* New_ctor() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_celsiusSpeedupMult() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_celsiusSpeedupMult() ;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray* const& __cordl_internal_get_continuousProperties() const;

constexpr ::GorillaTag::Cosmetics::ContinuousPropertyArray*& __cordl_internal_get_continuousProperties() ;

constexpr ::StringW const& __cordl_internal_get_debugName() const;

constexpr ::StringW& __cordl_internal_get_debugName() ;

constexpr float_t const& __cordl_internal_get_durationSeconds() const;

constexpr float_t& __cordl_internal_get_durationSeconds() ;

constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*> const& __cordl_internal_get_events() const;

constexpr ::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>& __cordl_internal_get_events() ;

constexpr ::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags const& __cordl_internal_get_progressionFlags() const;

constexpr ::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags& __cordl_internal_get_progressionFlags() ;

constexpr ::UnityW<::GlobalNamespace::ThermalReceiver> const& __cordl_internal_get_thermalReceiver() const;

constexpr ::UnityW<::GlobalNamespace::ThermalReceiver>& __cordl_internal_get_thermalReceiver() ;

constexpr void __cordl_internal_set_celsiusSpeedupMult(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_continuousProperties(::GorillaTag::Cosmetics::ContinuousPropertyArray*  value) ;

constexpr void __cordl_internal_set_debugName(::StringW  value) ;

constexpr void __cordl_internal_set_durationSeconds(float_t  value) ;

constexpr void __cordl_internal_set_events(::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>  value) ;

constexpr void __cordl_internal_set_progressionFlags(::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags  value) ;

constexpr void __cordl_internal_set_thermalReceiver(::UnityW<::GlobalNamespace::ThermalReceiver>  value) ;

/// @brief Method .ctor, addr 0x5d95244, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Duration, addr 0x5d942f4, size 0x1c, virtual false, abstract: false, final false
inline float_t get_Duration() ;

/// @brief Method get_HasDuration, addr 0x5d94b40, size 0x10, virtual false, abstract: false, final false
inline bool get_HasDuration() ;

/// @brief Method get_HasTemperature, addr 0x5d95238, size 0xc, virtual false, abstract: false, final false
inline bool get_HasTemperature() ;

/// @brief Method get_HasTime, addr 0x5d9522c, size 0xc, virtual false, abstract: false, final false
inline bool get_HasTime() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolvingCosmetic_EvolutionStage() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic_EvolutionStage", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolvingCosmetic_EvolutionStage(EvolvingCosmetic_EvolutionStage && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolvingCosmetic_EvolutionStage", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolvingCosmetic_EvolutionStage(EvolvingCosmetic_EvolutionStage const& ) = delete;

/// @brief Field MIN_STAGE_TIME offset 0xffffffff size 0x4
static constexpr float_t  MIN_STAGE_TIME{static_cast<float_t>(0.01f)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4927};

/// @brief Field debugName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___debugName;

/// @brief Field progressionFlags, offset: 0x18, size: 0x4, def value: None
 ::GlobalNamespace::EvolutionStage_EvolvingCosmetic_ProgressionFlags  ___progressionFlags;

/// [SerializeField]
/// @brief Field durationSeconds, offset: 0x1c, size: 0x4, def value: None
 float_t  ___durationSeconds;

/// @brief Field thermalReceiver, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThermalReceiver>  ___thermalReceiver;

/// @brief Field celsiusSpeedupMult, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___celsiusSpeedupMult;

/// @brief Field continuousProperties, offset: 0x30, size: 0x8, def value: None
 ::GorillaTag::Cosmetics::ContinuousPropertyArray*  ___continuousProperties;

/// [SerializeField]
/// @brief Field events, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>  ___events;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage, ___debugName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage, ___progressionFlags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage, ___durationSeconds) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage, ___thermalReceiver) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage, ___celsiusSpeedupMult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage, ___continuousProperties) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage, ___events) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EvolvingCosmetic_EvolutionStage) == 0x40, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
// Dependencies GorillaTag.Cosmetics.EvolvingCosmetic::EvolutionStage::EventAtTime::Type, System.Object
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.EvolvingCosmetic/EvolutionStage/EventAtTime
class CORDL_TYPE EvolutionStage_EvolvingCosmetic_EventAtTime : public ::System::Object {
public:
// Declarations
using Type = ::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type;

 __declspec(property(get=get_DynamicTimeLabel)) ::StringW  DynamicTimeLabel;

/// @brief Field absoluteTime, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_absoluteTime, put=__cordl_internal_set_absoluteTime)) float_t  absoluteTime;

/// @brief Field debugName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_debugName, put=__cordl_internal_set_debugName)) ::StringW  debugName;

/// @brief Field onTimeReached, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onTimeReached, put=__cordl_internal_set_onTimeReached)) ::UnityEngine::Events::UnityEvent*  onTimeReached;

/// @brief Field time, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) float_t  time;

/// @brief Field type, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type  type;

/// @brief Convert operator to "::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>"
constexpr operator  ::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>*() noexcept;

/// @brief Method CompareTo, addr 0x5d95300, size 0x1c, virtual true, abstract: false, final true
inline int32_t CompareTo(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*  other) ;

static inline ::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime* New_ctor() ;

constexpr float_t const& __cordl_internal_get_absoluteTime() const;

constexpr float_t& __cordl_internal_get_absoluteTime() ;

constexpr ::StringW const& __cordl_internal_get_debugName() const;

constexpr ::StringW& __cordl_internal_get_debugName() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_onTimeReached() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_onTimeReached() ;

constexpr float_t const& __cordl_internal_get_time() const;

constexpr float_t& __cordl_internal_get_time() ;

constexpr ::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type const& __cordl_internal_get_type() const;

constexpr ::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_absoluteTime(float_t  value) ;

constexpr void __cordl_internal_set_debugName(::StringW  value) ;

constexpr void __cordl_internal_set_onTimeReached(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_time(float_t  value) ;

constexpr void __cordl_internal_set_type(::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type  value) ;

/// @brief Method .ctor, addr 0x5d9531c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_DynamicTimeLabel, addr 0x5d95294, size 0x6c, virtual false, abstract: false, final false
inline ::StringW get_DynamicTimeLabel() ;

/// @brief Convert to "::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>"
constexpr ::System::IComparable_1<::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime*>* i___System__IComparable_1___GorillaTag__Cosmetics__EvolutionStage_EvolvingCosmetic_EventAtTime__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EvolutionStage_EvolvingCosmetic_EventAtTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EvolutionStage_EvolvingCosmetic_EventAtTime", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EvolutionStage_EvolvingCosmetic_EventAtTime(EvolutionStage_EvolvingCosmetic_EventAtTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EvolutionStage_EvolvingCosmetic_EventAtTime", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EvolutionStage_EvolvingCosmetic_EventAtTime(EvolutionStage_EvolvingCosmetic_EventAtTime const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4926};

/// @brief Field debugName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___debugName;

/// @brief Field time, offset: 0x18, size: 0x4, def value: None
 float_t  ___time;

/// @brief Field type, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::EventAtTime_EvolutionStage_EvolvingCosmetic_Type  ___type;

/// @brief Field absoluteTime, offset: 0x20, size: 0x4, def value: None
 float_t  ___absoluteTime;

/// @brief Field onTimeReached, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___onTimeReached;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime, ___debugName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime, ___time) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime, ___type) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime, ___absoluteTime) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime, ___onTimeReached) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::EvolutionStage_EvolvingCosmetic_EventAtTime) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
