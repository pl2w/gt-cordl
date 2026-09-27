#pragma once
// IWYU pragma private; include "GlobalNamespace/GorillaScoreboardTotalUpdater.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GorillaScoreboardTotalUpdater)
namespace GlobalNamespace {
class GorillaPlayerScoreboardLine;
}
namespace GlobalNamespace {
class GorillaScoreBoard;
}
namespace GlobalNamespace {
struct GorillaScoreboardTotalUpdater_PlayerReports;
}
namespace GlobalNamespace {
class GorillaScoreboardTotalUpdater___c;
}
namespace GlobalNamespace {
class IGorillaSliceableSimple;
}
namespace GlobalNamespace {
class NetPlayer;
}
namespace GorillaTag {
template<typename T>
class ObjectPool_1;
}
namespace GorillaTag {
class ReportMuteTimer;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GorillaScoreboardTotalUpdater;
}
namespace GlobalNamespace {
class GorillaScoreboardTotalUpdater___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GorillaScoreboardTotalUpdater*);
MARK_REF_T(::GlobalNamespace::GorillaScoreboardTotalUpdater___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaScoreboardTotalUpdater*, "", "GorillaScoreboardTotalUpdater");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GorillaScoreboardTotalUpdater___c*, "", "GorillaScoreboardTotalUpdater/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaScoreboardTotalUpdater
class CORDL_TYPE GorillaScoreboardTotalUpdater : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerReports = ::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports;

using __c = ::GlobalNamespace::GorillaScoreboardTotalUpdater___c;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>  _instance;

/// @brief Field allScoreboardLines, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allScoreboardLines, put=setStaticF_allScoreboardLines)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*  allScoreboardLines;

/// @brief Field allScoreboards, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_allScoreboards, put=setStaticF_allScoreboards)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>*  allScoreboards;

/// @brief Field joinedRoom, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_joinedRoom, put=__cordl_internal_set_joinedRoom)) bool  joinedRoom;

/// @brief Field lineIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_lineIndex, put=setStaticF_lineIndex)) int32_t  lineIndex;

/// @brief Field m_reportMuteTimerDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_reportMuteTimerDict, put=setStaticF_m_reportMuteTimerDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>*  m_reportMuteTimerDict;

/// @brief Field m_reportMuteTimerPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_reportMuteTimerPool, put=setStaticF_m_reportMuteTimerPool)) ::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>*  m_reportMuteTimerPool;

/// @brief Field offlineTextErrorString, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_offlineTextErrorString, put=__cordl_internal_set_offlineTextErrorString)) ::StringW  offlineTextErrorString;

/// @brief Field playersInRoom, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_playersInRoom, put=__cordl_internal_set_playersInRoom)) ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  playersInRoom;

/// @brief Field reportDict, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_reportDict, put=__cordl_internal_set_reportDict)) ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*  reportDict;

/// @brief Field wasGameManagerNull, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_wasGameManagerNull, put=__cordl_internal_set_wasGameManagerNull)) bool  wasGameManagerNull;

/// @brief Convert operator to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr operator  ::GlobalNamespace::IGorillaSliceableSimple*() noexcept;

/// @brief Method Awake, addr 0x599fe98, size 0x190, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearOfflineFailureText, addr 0x59a07a0, size 0x20, virtual false, abstract: false, final false
inline void ClearOfflineFailureText() ;

/// @brief Method CreateManager, addr 0x599fd14, size 0xfc, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> CreateManager() ;

/// @brief Method JoinedRoom, addr 0x59a0ca4, size 0x324, virtual false, abstract: false, final false
inline void JoinedRoom() ;

static inline ::GlobalNamespace::GorillaScoreboardTotalUpdater* New_ctor() ;

/// @brief Method OnDisable, addr 0x59a07cc, size 0xc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59a07c0, size 0xc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLeftRoom, addr 0x59a0fc8, size 0x360, virtual false, abstract: false, final false
inline void OnLeftRoom() ;

/// @brief Method OnPlayerEnteredRoom, addr 0x59a09d0, size 0x124, virtual false, abstract: false, final false
inline void OnPlayerEnteredRoom(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method OnPlayerLeftRoom, addr 0x59a0af4, size 0x1b0, virtual false, abstract: false, final false
inline void OnPlayerLeftRoom(::GlobalNamespace::NetPlayer*  netPlayer) ;

/// @brief Method RegisterSL, addr 0x599cf78, size 0x124, virtual false, abstract: false, final false
static inline void RegisterSL(::GlobalNamespace::GorillaPlayerScoreboardLine*  sL) ;

/// @brief Method RegisterScoreboard, addr 0x59a0274, size 0x130, virtual false, abstract: false, final false
static inline void RegisterScoreboard(::GlobalNamespace::GorillaScoreBoard*  sB) ;

/// @brief Method ReportMute, addr 0x599be0c, size 0x1c8, virtual false, abstract: false, final false
static inline void ReportMute(::GlobalNamespace::NetPlayer*  player, int32_t  muted) ;

/// @brief Method SetOfflineFailureText, addr 0x59a0784, size 0x1c, virtual false, abstract: false, final false
inline void SetOfflineFailureText(::StringW  failureText) ;

/// @brief Method SliceUpdate, addr 0x59a07d8, size 0x1f8, virtual true, abstract: false, final true
inline void SliceUpdate() ;

/// @brief Method Start, addr 0x59a0028, size 0x24c, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method UnregisterSL, addr 0x599d0f0, size 0xd0, virtual false, abstract: false, final false
static inline void UnregisterSL(::GlobalNamespace::GorillaPlayerScoreboardLine*  sL) ;

/// @brief Method UnregisterScoreboard, addr 0x59a06b4, size 0xd0, virtual false, abstract: false, final false
static inline void UnregisterScoreboard(::GlobalNamespace::GorillaScoreBoard*  sB) ;

/// @brief Method UpdateActiveScoreboards, addr 0x59946a8, size 0xdc, virtual false, abstract: false, final false
inline void UpdateActiveScoreboards() ;

/// @brief Method UpdateLineState, addr 0x599cd38, size 0x12c, virtual false, abstract: false, final false
inline void UpdateLineState(::GlobalNamespace::GorillaPlayerScoreboardLine*  line) ;

/// @brief Method UpdateScoreboard, addr 0x59a03a4, size 0x310, virtual false, abstract: false, final false
inline void UpdateScoreboard(::GlobalNamespace::GorillaScoreBoard*  sB) ;

constexpr bool const& __cordl_internal_get_joinedRoom() const;

constexpr bool& __cordl_internal_get_joinedRoom() ;

constexpr ::StringW const& __cordl_internal_get_offlineTextErrorString() const;

constexpr ::StringW& __cordl_internal_get_offlineTextErrorString() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>* const& __cordl_internal_get_playersInRoom() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*& __cordl_internal_get_playersInRoom() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>* const& __cordl_internal_get_reportDict() const;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*& __cordl_internal_get_reportDict() ;

constexpr bool const& __cordl_internal_get_wasGameManagerNull() const;

constexpr bool& __cordl_internal_get_wasGameManagerNull() ;

constexpr void __cordl_internal_set_joinedRoom(bool  value) ;

constexpr void __cordl_internal_set_offlineTextErrorString(::StringW  value) ;

constexpr void __cordl_internal_set_playersInRoom(::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  value) ;

constexpr void __cordl_internal_set_reportDict(::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*  value) ;

constexpr void __cordl_internal_set_wasGameManagerNull(bool  value) ;

/// @brief Method .ctor, addr 0x59a1328, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> getStaticF__instance() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>* getStaticF_allScoreboardLines() ;

static inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>* getStaticF_allScoreboards() ;

static inline int32_t getStaticF_lineIndex() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>* getStaticF_m_reportMuteTimerDict() ;

static inline ::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>* getStaticF_m_reportMuteTimerPool() ;

/// @brief Method get_hasInstance, addr 0x599fe10, size 0x88, virtual false, abstract: false, final false
static inline bool get_hasInstance() ;

/// @brief Method get_instance, addr 0x5994618, size 0x90, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater> get_instance() ;

/// @brief Convert to "::GlobalNamespace::IGorillaSliceableSimple"
constexpr ::GlobalNamespace::IGorillaSliceableSimple* i___GlobalNamespace__IGorillaSliceableSimple() noexcept;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::GorillaScoreboardTotalUpdater>  value) ;

static inline void setStaticF_allScoreboardLines(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaPlayerScoreboardLine>>*  value) ;

static inline void setStaticF_allScoreboards(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::GorillaScoreBoard>>*  value) ;

static inline void setStaticF_lineIndex(int32_t  value) ;

static inline void setStaticF_m_reportMuteTimerDict(::System::Collections::Generic::Dictionary_2<int32_t,::GorillaTag::ReportMuteTimer*>*  value) ;

static inline void setStaticF_m_reportMuteTimerPool(::GorillaTag::ObjectPool_1<::GorillaTag::ReportMuteTimer*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaScoreboardTotalUpdater() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardTotalUpdater", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaScoreboardTotalUpdater(GorillaScoreboardTotalUpdater && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardTotalUpdater", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaScoreboardTotalUpdater(GorillaScoreboardTotalUpdater const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2619};

/// @brief Field linesPerFrame offset 0xffffffff size 0x4
static constexpr int32_t  linesPerFrame{static_cast<int32_t>(0x2)};

/// @brief Field playersInRoom, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::NetPlayer*>*  ___playersInRoom;

/// @brief Field joinedRoom, offset: 0x28, size: 0x1, def value: None
 bool  ___joinedRoom;

/// @brief Field wasGameManagerNull, offset: 0x29, size: 0x1, def value: None
 bool  ___wasGameManagerNull;

/// @brief Field offlineTextErrorString, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___offlineTextErrorString;

/// @brief Field reportDict, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::GlobalNamespace::GorillaScoreboardTotalUpdater_PlayerReports>*  ___reportDict;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater, ___playersInRoom) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater, ___joinedRoom) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater, ___wasGameManagerNull) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater, ___offlineTextErrorString) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GorillaScoreboardTotalUpdater, ___reportDict) == 0x38, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GorillaScoreboardTotalUpdater) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GorillaScoreboardTotalUpdater/<>c
class CORDL_TYPE GorillaScoreboardTotalUpdater___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::GorillaScoreboardTotalUpdater___c*  __9;

/// @brief Field <>9__32_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__32_0, put=setStaticF___9__32_0)) ::System::Comparison_1<::GlobalNamespace::NetPlayer*>*  __9__32_0;

static inline ::GlobalNamespace::GorillaScoreboardTotalUpdater___c* New_ctor() ;

/// @brief Method <JoinedRoom>b__32_0, addr 0x59a16cc, size 0x60, virtual false, abstract: false, final false
inline int32_t _JoinedRoom_b__32_0(::GlobalNamespace::NetPlayer*  x, ::GlobalNamespace::NetPlayer*  y) ;

/// @brief Method .ctor, addr 0x59a16c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::GorillaScoreboardTotalUpdater___c* getStaticF___9() ;

static inline ::System::Comparison_1<::GlobalNamespace::NetPlayer*>* getStaticF___9__32_0() ;

static inline void setStaticF___9(::GlobalNamespace::GorillaScoreboardTotalUpdater___c*  value) ;

static inline void setStaticF___9__32_0(::System::Comparison_1<::GlobalNamespace::NetPlayer*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GorillaScoreboardTotalUpdater___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardTotalUpdater___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GorillaScoreboardTotalUpdater___c(GorillaScoreboardTotalUpdater___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GorillaScoreboardTotalUpdater___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GorillaScoreboardTotalUpdater___c(GorillaScoreboardTotalUpdater___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2618};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GorillaScoreboardTotalUpdater___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
