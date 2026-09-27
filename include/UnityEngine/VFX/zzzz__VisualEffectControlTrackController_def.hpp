#pragma once
// IWYU pragma private; include "UnityEngine/VFX/VisualEffectControlTrackController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Chunk_def.hpp"
#include "UnityEngine/VFX/zzzz__VisualEffectControlTrackController_Event_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(VisualEffectControlTrackController)
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Chunk;
}
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Clip;
}
namespace GlobalNamespace {
struct VisualEffectControlTrackController_Event;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::VFX {
struct EventAttributes;
}
namespace UnityEngine::VFX {
class VFXEventAttribute;
}
namespace UnityEngine::VFX {
class VisualEffectControlPlayableBehaviour;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController__ComputeRuntimeEvent_d__21;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController___c;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrack;
}
namespace UnityEngine::VFX {
struct VisualEffectPlayableSerializedEvent;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX {
class VisualEffectControlTrackController;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController__ComputeRuntimeEvent_d__21;
}
namespace UnityEngine::VFX {
class VisualEffectControlTrackController___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*);
MARK_REF_T(::UnityEngine::VFX::VisualEffectControlTrackController___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController*, "UnityEngine.VFX", "VisualEffectControlTrackController");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer*, "UnityEngine.VFX", "VisualEffectControlTrackController/VisualEffectControlPlayableBehaviourComparer");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21*, "UnityEngine.VFX", "VisualEffectControlTrackController/<ComputeRuntimeEvent>d__21");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::VisualEffectControlTrackController___c*, "UnityEngine.VFX", "VisualEffectControlTrackController/<>c");
// Dependencies System.Object, UnityEngine.VFX.VisualEffectControlTrackController::Chunk
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController
class CORDL_TYPE VisualEffectControlTrackController : public ::System::Object {
public:
// Declarations
using Chunk = ::GlobalNamespace::VisualEffectControlTrackController_Chunk;

using Clip = ::GlobalNamespace::VisualEffectControlTrackController_Clip;

using Event = ::GlobalNamespace::VisualEffectControlTrackController_Event;

using VisualEffectControlPlayableBehaviourComparer = ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer;

using _ComputeRuntimeEvent_d__21 = ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21;

using __c = ::UnityEngine::VFX::VisualEffectControlTrackController___c;

/// @brief Field kEpsilonEvent, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kEpsilonEvent, put=setStaticF_kEpsilonEvent)) double_t  kEpsilonEvent;

/// @brief Field m_BackupReseedOnPlay, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_BackupReseedOnPlay, put=__cordl_internal_set_m_BackupReseedOnPlay)) bool  m_BackupReseedOnPlay;

/// @brief Field m_BackupStartSeed, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BackupStartSeed, put=__cordl_internal_set_m_BackupStartSeed)) uint32_t  m_BackupStartSeed;

/// @brief Field m_Chunks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Chunks, put=__cordl_internal_set_m_Chunks)) ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Chunk>  m_Chunks;

/// @brief Field m_EventListIndexCache, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EventListIndexCache, put=__cordl_internal_set_m_EventListIndexCache)) ::System::Collections::Generic::List_1<int32_t>*  m_EventListIndexCache;

/// @brief Field m_LastChunk, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastChunk, put=__cordl_internal_set_m_LastChunk)) int32_t  m_LastChunk;

/// @brief Field m_LastEvent, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LastEvent, put=__cordl_internal_set_m_LastEvent)) int32_t  m_LastEvent;

/// @brief Field m_LastPlayableTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastPlayableTime, put=__cordl_internal_set_m_LastPlayableTime)) double_t  m_LastPlayableTime;

/// @brief Field m_Target, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Target, put=__cordl_internal_set_m_Target)) ::UnityW<::UnityEngine::VFX::VisualEffect>  m_Target;

/// @brief Method ComputeAttribute, addr 0xb3da8a4, size 0xa0, virtual false, abstract: false, final false
static inline ::UnityEngine::VFX::VFXEventAttribute* ComputeAttribute(::UnityEngine::VFX::VisualEffect*  vfx, ::UnityEngine::VFX::EventAttributes  attributes) ;

/// [IteratorStateMachine(typeof(UnityEngine.VFX.VisualEffectControlTrackController::<ComputeRuntimeEvent>d__21))]
/// @brief Method ComputeRuntimeEvent, addr 0xb3da944, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::VisualEffectControlTrackController_Event>* ComputeRuntimeEvent(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  behavior, ::UnityEngine::VFX::VisualEffect*  vfx) ;

/// @brief Method GetEventsIndex, addr 0xb3da718, size 0x130, virtual false, abstract: false, final false
static inline void GetEventsIndex(::GlobalNamespace::VisualEffectControlTrackController_Chunk  chunk, double_t  minTime, double_t  maxTime, int32_t  lastIndex, ::System::Collections::Generic::List_1<int32_t>*  eventListIndex) ;

/// @brief Method Init, addr 0xb3daa14, size 0x135c, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Playables::Playable  playable, ::UnityEngine::VFX::VisualEffect*  vfx, ::UnityEngine::VFX::VisualEffectControlTrack*  parentTrack) ;

/// @brief Method IsTimeInChunk, addr 0xb3d9e2c, size 0x44, virtual false, abstract: false, final false
inline bool IsTimeInChunk(double_t  time, int32_t  index) ;

static inline ::UnityEngine::VFX::VisualEffectControlTrackController* New_ctor() ;

/// @brief Method OnEnterChunk, addr 0xb3d985c, size 0xe0, virtual false, abstract: false, final false
inline void OnEnterChunk(int32_t  currentChunk) ;

/// @brief Method OnLeaveChunk, addr 0xb3d993c, size 0x138, virtual false, abstract: false, final false
inline void OnLeaveChunk(int32_t  previousChunkIndex, bool  leavingGoingBeforeClip) ;

/// @brief Method ProcessEvent, addr 0xb3da848, size 0x5c, virtual false, abstract: false, final false
inline void ProcessEvent(int32_t  eventIndex, ::GlobalNamespace::VisualEffectControlTrackController_Chunk  currentChunk) ;

/// @brief Method ProcessNoScrubbingEvents, addr 0xb3d9a74, size 0x2ec, virtual false, abstract: false, final false
inline void ProcessNoScrubbingEvents(::GlobalNamespace::VisualEffectControlTrackController_Chunk  chunk, double_t  oldTime, double_t  newTime) ;

/// @brief Method Release, addr 0xb3dbe0c, size 0xc, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method RestoreVFXState, addr 0xb3d9d60, size 0xcc, virtual false, abstract: false, final false
inline void RestoreVFXState(bool  restorePause, bool  restoreSeedState) ;

/// @brief Method Update, addr 0xb3d9e70, size 0x8a8, virtual false, abstract: false, final false
inline void Update(double_t  playableTime, float_t  deltaTime) ;

constexpr bool const& __cordl_internal_get_m_BackupReseedOnPlay() const;

constexpr bool& __cordl_internal_get_m_BackupReseedOnPlay() ;

constexpr uint32_t const& __cordl_internal_get_m_BackupStartSeed() const;

constexpr uint32_t& __cordl_internal_get_m_BackupStartSeed() ;

constexpr ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Chunk> const& __cordl_internal_get_m_Chunks() const;

constexpr ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Chunk>& __cordl_internal_get_m_Chunks() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_EventListIndexCache() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_EventListIndexCache() ;

constexpr int32_t const& __cordl_internal_get_m_LastChunk() const;

constexpr int32_t& __cordl_internal_get_m_LastChunk() ;

constexpr int32_t const& __cordl_internal_get_m_LastEvent() const;

constexpr int32_t& __cordl_internal_get_m_LastEvent() ;

constexpr double_t const& __cordl_internal_get_m_LastPlayableTime() const;

constexpr double_t& __cordl_internal_get_m_LastPlayableTime() ;

constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get_m_Target() const;

constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get_m_Target() ;

constexpr void __cordl_internal_set_m_BackupReseedOnPlay(bool  value) ;

constexpr void __cordl_internal_set_m_BackupStartSeed(uint32_t  value) ;

constexpr void __cordl_internal_set_m_Chunks(::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Chunk>  value) ;

constexpr void __cordl_internal_set_m_EventListIndexCache(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_LastChunk(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastEvent(int32_t  value) ;

constexpr void __cordl_internal_set_m_LastPlayableTime(double_t  value) ;

constexpr void __cordl_internal_set_m_Target(::UnityW<::UnityEngine::VFX::VisualEffect>  value) ;

/// @brief Method .ctor, addr 0xb3dbe18, size 0x98, virtual false, abstract: false, final false
inline void _ctor() ;

static inline double_t getStaticF_kEpsilonEvent() ;

static inline void setStaticF_kEpsilonEvent(double_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrackController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectControlTrackController(VisualEffectControlTrackController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectControlTrackController(VisualEffectControlTrackController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30041};

/// @brief Field kErrorIndex offset 0xffffffff size 0x4
static constexpr int32_t  kErrorIndex{static_cast<int32_t>(0x80000000)};

/// @brief Field m_LastChunk, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_LastChunk;

/// @brief Field m_LastEvent, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_LastEvent;

/// @brief Field m_LastPlayableTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_LastPlayableTime;

/// @brief Field m_EventListIndexCache, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_EventListIndexCache;

/// @brief Field m_Target, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::VFX::VisualEffect>  ___m_Target;

/// @brief Field m_BackupReseedOnPlay, offset: 0x30, size: 0x1, def value: None
 bool  ___m_BackupReseedOnPlay;

/// @brief Field m_BackupStartSeed, offset: 0x34, size: 0x4, def value: None
 uint32_t  ___m_BackupStartSeed;

/// @brief Field m_Chunks, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::VisualEffectControlTrackController_Chunk>  ___m_Chunks;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_LastChunk) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_LastEvent) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_LastPlayableTime) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_EventListIndexCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_Target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_BackupReseedOnPlay) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_BackupStartSeed) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController, ___m_Chunks) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController) == 0x40, "Size mismatch!");

} // namespace end def UnityEngine::VFX
// [CompilerGenerated]
// Dependencies System.Object, UnityEngine.VFX.VisualEffectControlTrackController::Event
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/<ComputeRuntimeEvent>d__21
class CORDL_TYPE VisualEffectControlTrackController__ComputeRuntimeEvent_d__21 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__get_Current)) ::GlobalNamespace::VisualEffectControlTrackController_Event  System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::GlobalNamespace::VisualEffectControlTrackController_Event  __2__current;

/// @brief Field <>3__behavior, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__behavior, put=__cordl_internal_set___3__behavior)) ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  __3__behavior;

/// @brief Field <>3__vfx, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get___3__vfx, put=__cordl_internal_set___3__vfx)) ::UnityW<::UnityEngine::VFX::VisualEffect>  __3__vfx;

/// @brief Field <>7__wrap1, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*  __7__wrap1;

/// @brief Field <>l__initialThreadId, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field behavior, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_behavior, put=__cordl_internal_set_behavior)) ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  behavior;

/// @brief Field vfx, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_vfx, put=__cordl_internal_set_vfx)) ::UnityW<::UnityEngine::VFX::VisualEffect>  vfx;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::VisualEffectControlTrackController_Event>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::VisualEffectControlTrackController_Event>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::VisualEffectControlTrackController_Event>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::VisualEffectControlTrackController_Event>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb3dbfe4, size 0x3ac, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.VFX.VisualEffectControlTrackController.Event>.GetEnumerator, addr 0xb3dc4e8, size 0xb4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::VisualEffectControlTrackController_Event>* System_Collections_Generic_IEnumerable_UnityEngine_VFX_VisualEffectControlTrackController_Event__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.VFX.VisualEffectControlTrackController.Event>.get_Current, addr 0xb3dc440, size 0x10, virtual true, abstract: false, final true
inline ::GlobalNamespace::VisualEffectControlTrackController_Event System_Collections_Generic_IEnumerator_UnityEngine_VFX_VisualEffectControlTrackController_Event__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0xb3dc59c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb3dc450, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb3dc488, size 0x60, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb3dbfc8, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::GlobalNamespace::VisualEffectControlTrackController_Event const& __cordl_internal_get___2__current() const;

constexpr ::GlobalNamespace::VisualEffectControlTrackController_Event& __cordl_internal_get___2__current() ;

constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* const& __cordl_internal_get___3__behavior() const;

constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*& __cordl_internal_get___3__behavior() ;

constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get___3__vfx() const;

constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get___3__vfx() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>* const& __cordl_internal_get___7__wrap1() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*& __cordl_internal_get___7__wrap1() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour* const& __cordl_internal_get_behavior() const;

constexpr ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*& __cordl_internal_get_behavior() ;

constexpr ::UnityW<::UnityEngine::VFX::VisualEffect> const& __cordl_internal_get_vfx() const;

constexpr ::UnityW<::UnityEngine::VFX::VisualEffect>& __cordl_internal_get_vfx() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::GlobalNamespace::VisualEffectControlTrackController_Event  value) ;

constexpr void __cordl_internal_set___3__behavior(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  value) ;

constexpr void __cordl_internal_set___3__vfx(::UnityW<::UnityEngine::VFX::VisualEffect>  value) ;

constexpr void __cordl_internal_set___7__wrap1(::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set_behavior(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  value) ;

constexpr void __cordl_internal_set_vfx(::UnityW<::UnityEngine::VFX::VisualEffect>  value) ;

/// @brief Method <>m__Finally1, addr 0xb3dc390, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb3da9e0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::VisualEffectControlTrackController_Event>"
constexpr ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::VisualEffectControlTrackController_Event>* i___System__Collections__Generic__IEnumerable_1___GlobalNamespace__VisualEffectControlTrackController_Event_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::VisualEffectControlTrackController_Event>"
constexpr ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::VisualEffectControlTrackController_Event>* i___System__Collections__Generic__IEnumerator_1___GlobalNamespace__VisualEffectControlTrackController_Event_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrackController__ComputeRuntimeEvent_d__21() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController__ComputeRuntimeEvent_d__21", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectControlTrackController__ComputeRuntimeEvent_d__21(VisualEffectControlTrackController__ComputeRuntimeEvent_d__21 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController__ComputeRuntimeEvent_d__21", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectControlTrackController__ComputeRuntimeEvent_d__21(VisualEffectControlTrackController__ComputeRuntimeEvent_d__21 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30040};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x20, def value: None
 ::GlobalNamespace::VisualEffectControlTrackController_Event  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x38, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field behavior, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  ___behavior;

/// @brief Field <>3__behavior, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  _____3__behavior;

/// @brief Field vfx, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::VFX::VisualEffect>  ___vfx;

/// @brief Field <>3__vfx, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::VFX::VisualEffect>  _____3__vfx;

/// @brief Field <>7__wrap1, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::UnityEngine::VFX::VisualEffectPlayableSerializedEvent>*  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____l__initialThreadId) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, ___behavior) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____3__behavior) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, ___vfx) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____3__vfx) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21, _____7__wrap1) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController__ComputeRuntimeEvent_d__21) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::VFX
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/<>c
class CORDL_TYPE VisualEffectControlTrackController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::VFX::VisualEffectControlTrackController___c*  __9;

/// @brief Field <>9__24_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_0, put=setStaticF___9__24_0)) ::System::Comparison_1<::GlobalNamespace::VisualEffectControlTrackController_Event>*  __9__24_0;

/// @brief Field <>9__24_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__24_1, put=setStaticF___9__24_1)) ::System::Comparison_1<::System::ValueTuple_2<::GlobalNamespace::VisualEffectControlTrackController_Event,int32_t>>*  __9__24_1;

static inline ::UnityEngine::VFX::VisualEffectControlTrackController___c* New_ctor() ;

/// @brief Method <Init>b__24_0, addr 0xb3dbfb8, size 0x10, virtual false, abstract: false, final false
inline int32_t _Init_b__24_0(::GlobalNamespace::VisualEffectControlTrackController_Event  x, ::GlobalNamespace::VisualEffectControlTrackController_Event  y) ;

/// @brief Method <Init>b__24_1, addr 0xb3dbfa8, size 0x10, virtual false, abstract: false, final false
inline int32_t _Init_b__24_1(/* [TupleElementNames(new[] { "evt", "sourceIndex" })] */ ::System::ValueTuple_2<::GlobalNamespace::VisualEffectControlTrackController_Event,int32_t>  x, /* [TupleElementNames(new[] { "evt", "sourceIndex" })] */ ::System::ValueTuple_2<::GlobalNamespace::VisualEffectControlTrackController_Event,int32_t>  y) ;

/// @brief Method .ctor, addr 0xb3dbfa0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::VFX::VisualEffectControlTrackController___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::VisualEffectControlTrackController_Event>* getStaticF___9__24_0() ;

static inline ::System::Comparison_1<::System::ValueTuple_2<::GlobalNamespace::VisualEffectControlTrackController_Event,int32_t>>* getStaticF___9__24_1() ;

static inline void setStaticF___9(::UnityEngine::VFX::VisualEffectControlTrackController___c*  value) ;

static inline void setStaticF___9__24_0(::System::Comparison_1<::GlobalNamespace::VisualEffectControlTrackController_Event>*  value) ;

static inline void setStaticF___9__24_1(::System::Comparison_1<::System::ValueTuple_2<::GlobalNamespace::VisualEffectControlTrackController_Event,int32_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrackController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectControlTrackController___c(VisualEffectControlTrackController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectControlTrackController___c(VisualEffectControlTrackController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30039};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::VFX
// Dependencies System.Object
namespace UnityEngine::VFX {
// Is value type: false
// CS Name: UnityEngine.VFX.VisualEffectControlTrackController/VisualEffectControlPlayableBehaviourComparer
class CORDL_TYPE VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>"
constexpr operator  ::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>*() noexcept;

/// @brief Method Compare, addr 0xb3dbf08, size 0x30, virtual true, abstract: false, final true
inline int32_t Compare(::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  x, ::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*  y) ;

static inline ::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer* New_ctor() ;

/// @brief Method .ctor, addr 0xb3dbd70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>"
constexpr ::System::Collections::Generic::IComparer_1<::UnityEngine::VFX::VisualEffectControlPlayableBehaviour*>* i___System__Collections__Generic__IComparer_1___UnityEngine__VFX__VisualEffectControlPlayableBehaviour__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer(VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer(VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30038};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::VisualEffectControlTrackController_VisualEffectControlPlayableBehaviourComparer) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::VFX
