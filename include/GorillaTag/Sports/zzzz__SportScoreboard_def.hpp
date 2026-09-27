#pragma once
// IWYU pragma private; include "GorillaTag/Sports/SportScoreboard.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NetworkComponent_def.hpp"
#include "GlobalNamespace/zzzz__SportScoreboardVisuals_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SportScoreboard)
namespace Fusion {
template<typename T>
struct NetworkArray_1;
}
namespace GlobalNamespace {
class SportScoreboardVisuals;
}
namespace GorillaTag::Sports {
class SportScoreboard_TeamParameters;
}
namespace GorillaTag::Sports {
class SportScoreboard__MatchEndCoroutine_d__16;
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
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTag::Sports {
class SportScoreboard;
}
namespace GorillaTag::Sports {
class SportScoreboard_TeamParameters;
}
namespace GorillaTag::Sports {
class SportScoreboard__MatchEndCoroutine_d__16;
}
// Write type traits
MARK_REF_T(::GorillaTag::Sports::SportScoreboard*);
MARK_REF_T(::GorillaTag::Sports::SportScoreboard_TeamParameters*);
MARK_REF_T(::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Sports::SportScoreboard*, "GorillaTag.Sports", "SportScoreboard");
DEFINE_IL2CPP_CLASS(::GorillaTag::Sports::SportScoreboard_TeamParameters*, "GorillaTag.Sports", "SportScoreboard/TeamParameters");
DEFINE_IL2CPP_CLASS(::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16*, "GorillaTag.Sports", "SportScoreboard/<MatchEndCoroutine>d__16");
// [RequireComponent(typeof(UnityEngine.AudioSource))]
// [NetworkBehaviourWeaved(2)]
// Dependencies NetworkComponent, SportScoreboardVisuals
namespace GorillaTag::Sports {
// Is value type: false
// CS Name: GorillaTag.Sports.SportScoreboard
class CORDL_TYPE SportScoreboard : public ::GlobalNamespace::NetworkComponent {
public:
// Declarations
using TeamParameters = ::GorillaTag::Sports::SportScoreboard_TeamParameters;

using _MatchEndCoroutine_d__16 = ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16;

/// [Networked]
/// [Capacity(2)]
/// [NetworkedWeaved(0, 2)]
/// @brief [NetworkedWeavedArray(2, 1, typeof(Fusion.ElementReaderWriterInt32))]
 __declspec(property(get=get_Data)) ::Fusion::NetworkArray_1<int32_t>  Data;

/// @brief Field Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::UnityW<::GorillaTag::Sports::SportScoreboard>  Instance;

/// @brief Field _Data, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Data, put=__cordl_internal_set__Data)) ::ArrayW<int32_t>  _Data;

/// @brief Field audioSource, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field matchEndScore, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_matchEndScore, put=__cordl_internal_set_matchEndScore)) int32_t  matchEndScore;

/// @brief Field matchEndScoreResetDelayTime, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_matchEndScoreResetDelayTime, put=__cordl_internal_set_matchEndScoreResetDelayTime)) float_t  matchEndScoreResetDelayTime;

/// @brief Field runningMatchEndCoroutine, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get_runningMatchEndCoroutine, put=__cordl_internal_set_runningMatchEndCoroutine)) bool  runningMatchEndCoroutine;

/// @brief Field scoreVisuals, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_scoreVisuals, put=__cordl_internal_set_scoreVisuals)) ::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>>  scoreVisuals;

/// @brief Field teamParameters, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamParameters, put=__cordl_internal_set_teamParameters)) ::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>*  teamParameters;

/// @brief Field teamScores, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamScores, put=__cordl_internal_set_teamScores)) ::System::Collections::Generic::List_1<int32_t>*  teamScores;

/// @brief Field teamScoresPrev, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_teamScoresPrev, put=__cordl_internal_set_teamScoresPrev)) ::System::Collections::Generic::List_1<int32_t>*  teamScoresPrev;

/// @brief Method Awake, addr 0x5d3c2b4, size 0x1d8, virtual true, abstract: false, final false
inline void Awake() ;

/// [WeaverGenerated]
/// @brief Method CopyBackingFieldsToState, addr 0x5d3cfa0, size 0xd0, virtual true, abstract: false, final false
inline void CopyBackingFieldsToState(bool  _cordl_fixed_empty_name_whitespace) ;

/// [WeaverGenerated]
/// @brief Method CopyStateToBackingFields, addr 0x5d3d070, size 0xa4, virtual true, abstract: false, final false
inline void CopyStateToBackingFields() ;

/// [IteratorStateMachine(typeof(GorillaTag.Sports.SportScoreboard::<MatchEndCoroutine>d__16))]
/// @brief Method MatchEndCoroutine, addr 0x5d3c940, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* MatchEndCoroutine(int32_t  winningTeam) ;

static inline ::GorillaTag::Sports::SportScoreboard* New_ctor() ;

/// @brief Method OnScoreUpdated, addr 0x5d3c728, size 0x218, virtual false, abstract: false, final false
inline void OnScoreUpdated() ;

/// @brief Method ReadDataFusion, addr 0x5d3cc4c, size 0xa8, virtual true, abstract: false, final false
inline void ReadDataFusion() ;

/// @brief Method ReadDataPUN, addr 0x5d3cdb8, size 0xdc, virtual true, abstract: false, final false
inline void ReadDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

/// @brief Method RegisterTeamVisual, addr 0x5d3c48c, size 0x7c, virtual false, abstract: false, final false
inline void RegisterTeamVisual(int32_t  TeamIndex, ::GlobalNamespace::SportScoreboardVisuals*  visuals) ;

/// @brief Method ResetScores, addr 0x5d3c9bc, size 0xac, virtual false, abstract: false, final false
inline void ResetScores() ;

/// @brief Method TeamScored, addr 0x5d3c154, size 0xcc, virtual false, abstract: false, final false
inline void TeamScored(int32_t  team) ;

/// @brief Method UpdateScoreboard, addr 0x5d3c508, size 0x220, virtual false, abstract: false, final false
inline void UpdateScoreboard() ;

/// @brief Method WriteDataFusion, addr 0x5d3cbb4, size 0x98, virtual true, abstract: false, final false
inline void WriteDataFusion() ;

/// @brief Method WriteDataPUN, addr 0x5d3ccf4, size 0xc4, virtual true, abstract: false, final false
inline void WriteDataPUN(::Photon::Pun::PhotonStream*  stream, ::Photon::Pun::PhotonMessageInfo  info) ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get__Data() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get__Data() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr int32_t const& __cordl_internal_get_matchEndScore() const;

constexpr int32_t& __cordl_internal_get_matchEndScore() ;

constexpr float_t const& __cordl_internal_get_matchEndScoreResetDelayTime() const;

constexpr float_t& __cordl_internal_get_matchEndScoreResetDelayTime() ;

constexpr bool const& __cordl_internal_get_runningMatchEndCoroutine() const;

constexpr bool& __cordl_internal_get_runningMatchEndCoroutine() ;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>> const& __cordl_internal_get_scoreVisuals() const;

constexpr ::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>>& __cordl_internal_get_scoreVisuals() ;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>* const& __cordl_internal_get_teamParameters() const;

constexpr ::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>*& __cordl_internal_get_teamParameters() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_teamScores() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_teamScores() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_teamScoresPrev() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_teamScoresPrev() ;

constexpr void __cordl_internal_set__Data(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_matchEndScore(int32_t  value) ;

constexpr void __cordl_internal_set_matchEndScoreResetDelayTime(float_t  value) ;

constexpr void __cordl_internal_set_runningMatchEndCoroutine(bool  value) ;

constexpr void __cordl_internal_set_scoreVisuals(::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>>  value) ;

constexpr void __cordl_internal_set_teamParameters(::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>*  value) ;

constexpr void __cordl_internal_set_teamScores(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_teamScoresPrev(::System::Collections::Generic::List_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x5d3ce94, size 0x10c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTag::Sports::SportScoreboard> getStaticF_Instance() ;

/// @brief Method get_Data, addr 0x5d3ca90, size 0x124, virtual false, abstract: false, final false
inline ::Fusion::NetworkArray_1<int32_t> get_Data() ;

static inline void setStaticF_Instance(::UnityW<::GorillaTag::Sports::SportScoreboard>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SportScoreboard() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboard", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SportScoreboard(SportScoreboard && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboard", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SportScoreboard(SportScoreboard const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4696};

/// [SerializeField]
/// @brief Field teamParameters, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GorillaTag::Sports::SportScoreboard_TeamParameters*>*  ___teamParameters;

/// [SerializeField]
/// @brief Field matchEndScore, offset: 0xa8, size: 0x4, def value: None
 int32_t  ___matchEndScore;

/// [SerializeField]
/// @brief Field matchEndScoreResetDelayTime, offset: 0xac, size: 0x4, def value: None
 float_t  ___matchEndScoreResetDelayTime;

/// @brief Field teamScores, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___teamScores;

/// @brief Field teamScoresPrev, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___teamScoresPrev;

/// @brief Field runningMatchEndCoroutine, offset: 0xc0, size: 0x1, def value: None
 bool  ___runningMatchEndCoroutine;

/// @brief Field audioSource, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field scoreVisuals, offset: 0xd0, size: 0x8, def value: None
 ::ArrayW<::UnityW<::GlobalNamespace::SportScoreboardVisuals>>  ___scoreVisuals;

/// [WeaverGenerated]
/// [SerializeField]
/// [DefaultForProperty("Data", 0, 2)]
/// [DrawIf("IsEditorWritable", true, (Fusion.CompareOperator)0, (Fusion.DrawIfMode)0)]
/// @brief Field _Data, offset: 0xd8, size: 0x8, def value: None
 ::ArrayW<int32_t>  ____Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___teamParameters) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___matchEndScore) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___matchEndScoreResetDelayTime) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___teamScores) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___teamScoresPrev) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___runningMatchEndCoroutine) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___audioSource) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ___scoreVisuals) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard, ____Data) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Sports::SportScoreboard) == 0xe0, "Size mismatch!");

} // namespace end def GorillaTag::Sports
// [CompilerGenerated]
// Dependencies System.Object
namespace GorillaTag::Sports {
// Is value type: false
// CS Name: GorillaTag.Sports.SportScoreboard/<MatchEndCoroutine>d__16
class CORDL_TYPE SportScoreboard__MatchEndCoroutine_d__16 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GorillaTag::Sports::SportScoreboard>  __4__this;

/// @brief Field winningTeam, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_winningTeam, put=__cordl_internal_set_winningTeam)) int32_t  winningTeam;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5d3d120, size 0x194, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5d3d2b4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5d3d2bc, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5d3d2f4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5d3d11c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GorillaTag::Sports::SportScoreboard>& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_winningTeam() const;

constexpr int32_t& __cordl_internal_get_winningTeam() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GorillaTag::Sports::SportScoreboard>  value) ;

constexpr void __cordl_internal_set_winningTeam(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5d3ca68, size 0x28, virtual false, abstract: false, final false
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
constexpr SportScoreboard__MatchEndCoroutine_d__16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboard__MatchEndCoroutine_d__16", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SportScoreboard__MatchEndCoroutine_d__16(SportScoreboard__MatchEndCoroutine_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboard__MatchEndCoroutine_d__16", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SportScoreboard__MatchEndCoroutine_d__16(SportScoreboard__MatchEndCoroutine_d__16 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4695};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaTag::Sports::SportScoreboard>  _____4__this;

/// @brief Field winningTeam, offset: 0x28, size: 0x4, def value: None
 int32_t  ___winningTeam;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16, ___winningTeam) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Sports::SportScoreboard__MatchEndCoroutine_d__16) == 0x30, "Size mismatch!");

} // namespace end def GorillaTag::Sports
// Dependencies System.Object
namespace GorillaTag::Sports {
// Is value type: false
// CS Name: GorillaTag.Sports.SportScoreboard/TeamParameters
class CORDL_TYPE SportScoreboard_TeamParameters : public ::System::Object {
public:
// Declarations
/// @brief Field goalScoredAudio, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_goalScoredAudio, put=__cordl_internal_set_goalScoredAudio)) ::UnityW<::UnityEngine::AudioClip>  goalScoredAudio;

/// @brief Field matchWonAudio, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_matchWonAudio, put=__cordl_internal_set_matchWonAudio)) ::UnityW<::UnityEngine::AudioClip>  matchWonAudio;

static inline ::GorillaTag::Sports::SportScoreboard_TeamParameters* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_goalScoredAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_goalScoredAudio() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_matchWonAudio() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_matchWonAudio() ;

constexpr void __cordl_internal_set_goalScoredAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_matchWonAudio(::UnityW<::UnityEngine::AudioClip>  value) ;

/// @brief Method .ctor, addr 0x5d3d114, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SportScoreboard_TeamParameters() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboard_TeamParameters", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SportScoreboard_TeamParameters(SportScoreboard_TeamParameters && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SportScoreboard_TeamParameters", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SportScoreboard_TeamParameters(SportScoreboard_TeamParameters const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4694};

/// [SerializeField]
/// @brief Field matchWonAudio, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___matchWonAudio;

/// [SerializeField]
/// @brief Field goalScoredAudio, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___goalScoredAudio;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Sports::SportScoreboard_TeamParameters, ___matchWonAudio) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Sports::SportScoreboard_TeamParameters, ___goalScoredAudio) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Sports::SportScoreboard_TeamParameters) == 0x20, "Size mismatch!");

} // namespace end def GorillaTag::Sports
