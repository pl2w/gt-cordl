#pragma once
// IWYU pragma private; include "GlobalNamespace/HitTargetNetworkState.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HitTargetNetworkState)
namespace GlobalNamespace {
class HitTargetNetworkState__ResetCo_d__27;
}
namespace GlobalNamespace {
class HitTargetNetworkState__TestPressCheck_d__15;
}
namespace GlobalNamespace {
class SlingshotProjectile;
}
namespace GorillaTag {
class WatchableIntSO;
}
namespace Photon::Pun {
struct PhotonMessageInfo;
}
namespace Photon::Pun {
class PhotonStream;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Collision;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class HitTargetNetworkState;
}
namespace GlobalNamespace {
class HitTargetNetworkState__ResetCo_d__27;
}
namespace GlobalNamespace {
class HitTargetNetworkState__TestPressCheck_d__15;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HitTargetNetworkState*);
MARK_REF_T(::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*);
MARK_REF_T(::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitTargetNetworkState*, "", "HitTargetNetworkState");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27*, "", "HitTargetNetworkState/<ResetCo>d__27");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15*, "", "HitTargetNetworkState/<TestPressCheck>d__15");
// [NetworkBehaviourWeaved(1)]
// Dependencies NetworkComponent, UnityEngine.AudioClip
namespace GlobalNamespace {
// Is value type: false
// CS Name: HitTargetNetworkState
class CORDL_TYPE HitTargetNetworkState : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using _ResetCo_d__27 = ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27;

using _TestPressCheck_d__15 = ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_Data, put=set_Data)) int32_t  Data;

/// @brief Field _Data, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) int32_t  _Data;

/// @brief Field audioClips, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClips, put=__cordl_internal_set_audioClips)) ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  audioClips;

/// @brief Field audioPlayer, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioPlayer, put=__cordl_internal_set_audioPlayer)) ::UnityW<::UnityEngine::AudioSource>  audioPlayer;

/// @brief Field hitCooldownTime, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_hitCooldownTime, put=__cordl_internal_set_hitCooldownTime)) int32_t  hitCooldownTime;

/// @brief Field networkedScore, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_networkedScore, put=__cordl_internal_set_networkedScore)) ::UnityW<::GorillaTag::WatchableIntSO>  networkedScore;

/// @brief Field nextHittableTimestamp, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextHittableTimestamp, put=__cordl_internal_set_nextHittableTimestamp)) float_t  nextHittableTimestamp;

/// @brief Field resetAfterDuration, offset 0xbc, size 0x4 
 __declspec(property(get=__cordl_internal_get_resetAfterDuration, put=__cordl_internal_set_resetAfterDuration)) float_t  resetAfterDuration;

/// @brief Field resetAtTimestamp, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_resetAtTimestamp, put=__cordl_internal_set_resetAtTimestamp)) float_t  resetAtTimestamp;

/// @brief Field resetCoroutine, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_resetCoroutine, put=__cordl_internal_set_resetCoroutine)) ::UnityEngine::Coroutine*  resetCoroutine;

/// @brief Field scoreIsDistance, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get_scoreIsDistance, put=__cordl_internal_set_scoreIsDistance)) bool  scoreIsDistance;

/// @brief Field testPress, offset 0xac, size 0x1 
 __declspec(property(get=__cordl_internal_get_testPress, put=__cordl_internal_set_testPress)) bool  testPress;

/// @brief Method Awake, addr 0x571c48c, size 0x1a4, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x571d130, size 0x20, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x571d150, size 0x24, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

static inline ::GlobalNamespace::HitTargetNetworkState* New_ctor() ;

/// @brief Method OnEnable, addr 0x571c790, size 0x124, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftRoom, addr 0x571c78c, size 0x4, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method PlayAudio, addr 0x571cd04, size 0x70, virtual false, abstract: false, final false
inline void PlayAudio(int32_t  oldScore, int32_t  newScore) ;

/// @brief Method ProjectileHitReciever, addr 0x571c948, size 0x78, virtual false, abstract: false, final false
inline void ProjectileHitReciever(::GlobalNamespace::SlingshotProjectile*  projectile, ::UnityEngine::Collision*  collision) ;

/// @brief Method ReadDataFusion, addr 0x571ce88, size 0xb0, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x571cfe0, size 0x118, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// [IteratorStateMachine(typeof(HitTargetNetworkState::<ResetCo>d__27))]
/// @brief Method ResetCo, addr 0x571cc98, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* ResetCo() ;

/// @brief Method SetInitialState, addr 0x571c724, size 0x68, virtual false, abstract: false, final false
inline void SetInitialState() ;

/// @brief Method Start, addr 0x571c630, size 0xf4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method TargetHit, addr 0x571c9c0, size 0x2d8, virtual false, abstract: false, final false
inline void TargetHit(::UnityEngine::Vector3  launchPoint, ::UnityEngine::Vector3  impactPoint) ;

/// [IteratorStateMachine(typeof(HitTargetNetworkState::<TestPressCheck>d__15))]
/// @brief Method TestPressCheck, addr 0x571c8b4, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* TestPressCheck() ;

/// @brief Method WriteDataFusion, addr 0x571ce2c, size 0x5c, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x571cf38, size 0xa8, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr int32_t const& __cordl_internal_get__Data() const;

constexpr int32_t& __cordl_internal_get__Data() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>> const& __cordl_internal_get_audioClips() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::AudioClip>>& __cordl_internal_get_audioClips() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioPlayer() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioPlayer() ;

constexpr int32_t const& __cordl_internal_get_hitCooldownTime() const;

constexpr int32_t& __cordl_internal_get_hitCooldownTime() ;

constexpr ::UnityW<::GorillaTag::WatchableIntSO> const& __cordl_internal_get_networkedScore() const;

constexpr ::UnityW<::GorillaTag::WatchableIntSO>& __cordl_internal_get_networkedScore() ;

constexpr float_t const& __cordl_internal_get_nextHittableTimestamp() const;

constexpr float_t& __cordl_internal_get_nextHittableTimestamp() ;

constexpr float_t const& __cordl_internal_get_resetAfterDuration() const;

constexpr float_t& __cordl_internal_get_resetAfterDuration() ;

constexpr float_t const& __cordl_internal_get_resetAtTimestamp() const;

constexpr float_t& __cordl_internal_get_resetAtTimestamp() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get_resetCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get_resetCoroutine() ;

constexpr bool const& __cordl_internal_get_scoreIsDistance() const;

constexpr bool& __cordl_internal_get_scoreIsDistance() ;

constexpr bool const& __cordl_internal_get_testPress() const;

constexpr bool& __cordl_internal_get_testPress() ;

constexpr void __cordl_internal_set__Data(int32_t  value) ;

constexpr void __cordl_internal_set_audioClips(::ArrayW<::UnityW<::UnityEngine::AudioClip>>  value) ;

constexpr void __cordl_internal_set_audioPlayer(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_hitCooldownTime(int32_t  value) ;

constexpr void __cordl_internal_set_networkedScore(::UnityW<::GorillaTag::WatchableIntSO>  value) ;

constexpr void __cordl_internal_set_nextHittableTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_resetAfterDuration(float_t  value) ;

constexpr void __cordl_internal_set_resetAtTimestamp(float_t  value) ;

constexpr void __cordl_internal_set_resetCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_scoreIsDistance(bool  value) ;

constexpr void __cordl_internal_set_testPress(bool  value) ;

/// @brief Method .ctor, addr 0x571d120, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Data, addr 0x571cd74, size 0x5c, virtual false, abstract: false, final false
inline int32_t get_Data() ;

/// @brief Method set_Data, addr 0x571cdd0, size 0x5c, virtual false, abstract: false, final false
inline void set_Data(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HitTargetNetworkState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitTargetNetworkState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitTargetNetworkState(HitTargetNetworkState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitTargetNetworkState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitTargetNetworkState(HitTargetNetworkState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1202};

/// [SerializeField]
/// @brief Field networkedScore, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::GorillaTag::WatchableIntSO>  ___networkedScore;

/// [SerializeField]
/// @brief Field hitCooldownTime, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___hitCooldownTime;

/// [SerializeField]
/// @brief Field testPress, offset: 0xac, size: 0x1, def value: None
 bool  ___testPress;

/// [SerializeField]
/// @brief Field audioClips, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::AudioClip>>  ___audioClips;

/// [SerializeField]
/// @brief Field scoreIsDistance, offset: 0xb8, size: 0x1, def value: None
 bool  ___scoreIsDistance;

/// [SerializeField]
/// @brief Field resetAfterDuration, offset: 0xbc, size: 0x4, def value: None
 float_t  ___resetAfterDuration;

/// @brief Field audioPlayer, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioPlayer;

/// @brief Field nextHittableTimestamp, offset: 0xc8, size: 0x4, def value: None
 float_t  ___nextHittableTimestamp;

/// @brief Field resetAtTimestamp, offset: 0xcc, size: 0x4, def value: None
 float_t  ___resetAtTimestamp;

/// @brief Field resetCoroutine, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ___resetCoroutine;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 1)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xd8, size: 0x4, def value: None
 int32_t  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___networkedScore) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___hitCooldownTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___testPress) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___audioClips) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___scoreIsDistance) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___resetAfterDuration) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___audioPlayer) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___nextHittableTimestamp) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___resetAtTimestamp) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ___resetCoroutine) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState, ____Data) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HitTargetNetworkState) == 0xe0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HitTargetNetworkState/<TestPressCheck>d__15
class CORDL_TYPE HitTargetNetworkState__TestPressCheck_d__15 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HitTargetNetworkState>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x571d2f0, size 0x134, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x571d424, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x571d42c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x571d464, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x571d2ec, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetNetworkState>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x571c920, size 0x28, virtual false, abstract: false, final false
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
constexpr HitTargetNetworkState__TestPressCheck_d__15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitTargetNetworkState__TestPressCheck_d__15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitTargetNetworkState__TestPressCheck_d__15(HitTargetNetworkState__TestPressCheck_d__15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitTargetNetworkState__TestPressCheck_d__15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitTargetNetworkState__TestPressCheck_d__15(HitTargetNetworkState__TestPressCheck_d__15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1201};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HitTargetNetworkState>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HitTargetNetworkState__TestPressCheck_d__15) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: HitTargetNetworkState/<ResetCo>d__27
class CORDL_TYPE HitTargetNetworkState__ResetCo_d__27 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::HitTargetNetworkState>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x571d178, size 0x12c, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x571d2a4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x571d2ac, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x571d2e4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x571d174, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::HitTargetNetworkState>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::HitTargetNetworkState>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x571d0f8, size 0x28, virtual false, abstract: false, final false
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
constexpr HitTargetNetworkState__ResetCo_d__27() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HitTargetNetworkState__ResetCo_d__27", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HitTargetNetworkState__ResetCo_d__27(HitTargetNetworkState__ResetCo_d__27 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HitTargetNetworkState__ResetCo_d__27", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HitTargetNetworkState__ResetCo_d__27(HitTargetNetworkState__ResetCo_d__27 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1200};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::HitTargetNetworkState>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HitTargetNetworkState__ResetCo_d__27) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
