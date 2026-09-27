#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatingQuestsManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RotatingQuestsManager)
namespace GlobalNamespace {
class GorillaQuestManager;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
struct RotatingQuestList_RotatingQuestsManager___c__DisplayClass3_0;
}
namespace GlobalNamespace {
class RotatingQuest;
}
namespace GlobalNamespace {
class RotatingQuestsManager_RotatingQuestGroup;
}
namespace GlobalNamespace {
class RotatingQuestsManager_RotatingQuestList;
}
namespace GlobalNamespace {
class RotatingQuestsManager___c;
}
namespace GlobalNamespace {
struct RotatingQuestsManager___c__DisplayClass29_0;
}
namespace PlayFab {
class PlayFabError;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct DateTime;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class RotatingQuestsManager;
}
namespace GlobalNamespace {
class RotatingQuestsManager_RotatingQuestGroup;
}
namespace GlobalNamespace {
class RotatingQuestsManager_RotatingQuestList;
}
namespace GlobalNamespace {
class RotatingQuestsManager___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotatingQuestsManager*);
MARK_REF_T(::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*);
MARK_REF_T(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*);
MARK_REF_T(::GlobalNamespace::RotatingQuestsManager___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestsManager*, "", "RotatingQuestsManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*, "", "RotatingQuestsManager/RotatingQuestGroup");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*, "", "RotatingQuestsManager/RotatingQuestList");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuestsManager___c*, "", "RotatingQuestsManager/<>c");
// Dependencies System.DateTime, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatingQuestsManager
class CORDL_TYPE RotatingQuestsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RotatingQuestGroup = ::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup;

using RotatingQuestList = ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList;

using __c = ::GlobalNamespace::RotatingQuestsManager___c;

using __c__DisplayClass29_0 = ::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0;

 __declspec(property(get=get_DailyQuestCountdown, put=set_DailyQuestCountdown)) ::System::DateTime  DailyQuestCountdown;

/// @brief Field LastQuestChange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LastQuestChange, put=setStaticF_LastQuestChange)) int32_t  LastQuestChange;

/// @brief Field LastQuestDailyID, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_LastQuestDailyID, put=setStaticF_LastQuestDailyID)) int32_t  LastQuestDailyID;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

 __declspec(property(get=get_WeeklyQuestCountdown, put=set_WeeklyQuestCountdown)) ::System::DateTime  WeeklyQuestCountdown;

/// @brief Field <DailyQuestCountdown>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__DailyQuestCountdown_k__BackingField, put=__cordl_internal_set__DailyQuestCountdown_k__BackingField)) ::System::DateTime  _DailyQuestCountdown_k__BackingField;

/// @brief Field <TickRunning>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field <WeeklyQuestCountdown>k__BackingField, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__WeeklyQuestCountdown_k__BackingField, put=__cordl_internal_set__WeeklyQuestCountdown_k__BackingField)) ::System::DateTime  _WeeklyQuestCountdown_k__BackingField;

/// @brief Field _playQuestSounds, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__playQuestSounds, put=__cordl_internal_set__playQuestSounds)) bool  _playQuestSounds;

/// @brief Field _questAudio, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__questAudio, put=__cordl_internal_set__questAudio)) ::UnityW<::UnityEngine::AudioSource>  _questAudio;

/// @brief Field dailyQuestSetID, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_dailyQuestSetID, put=__cordl_internal_set_dailyQuestSetID)) int32_t  dailyQuestSetID;

/// @brief Field hasQuest, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasQuest, put=__cordl_internal_set_hasQuest)) bool  hasQuest;

/// @brief Field localQuestPath, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_localQuestPath, put=__cordl_internal_set_localQuestPath)) ::StringW  localQuestPath;

/// @brief Field nextQuestUpdateTime, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextQuestUpdateTime, put=__cordl_internal_set_nextQuestUpdateTime)) ::System::DateTime  nextQuestUpdateTime;

/// @brief Field quests, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_quests, put=__cordl_internal_set_quests)) ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*  quests;

/// @brief Field useTestLocalQuests, offset 0x22, size 0x1 
 __declspec(property(get=__cordl_internal_get_useTestLocalQuests, put=__cordl_internal_set_useTestLocalQuests)) bool  useTestLocalQuests;

/// @brief Field weeklyQuestSetID, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_weeklyQuestSetID, put=__cordl_internal_set_weeklyQuestSetID)) int32_t  weeklyQuestSetID;

/// @brief Convert operator to "::GlobalNamespace::GorillaQuestManager"
constexpr operator  ::GlobalNamespace::GorillaQuestManager*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method ClearAllQuestEventListeners, addr 0x562de4c, size 0x418, virtual true, abstract: false, final true
inline void ClearAllQuestEventListeners() ;

/// @brief Method HandleQuestCompleted, addr 0x5630064, size 0xa4, virtual true, abstract: false, final true
inline void HandleQuestCompleted(int32_t  questID) ;

/// @brief Method HandleQuestProgressChanged, addr 0x562f548, size 0x98, virtual true, abstract: false, final true
inline void HandleQuestProgressChanged(bool  initialLoad) ;

/// @brief Method LoadQuestProgress, addr 0x562f0cc, size 0x47c, virtual true, abstract: false, final true
inline void LoadQuestProgress() ;

/// @brief Method LoadQuestsFromJson, addr 0x562dc8c, size 0x19c, virtual true, abstract: false, final true
inline void LoadQuestsFromJson(::StringW  jsonString) ;

/// @brief Method LoadTestQuestsFromFile, addr 0x562dc28, size 0x64, virtual false, abstract: false, final false
inline void LoadTestQuestsFromFile() ;

static inline ::GlobalNamespace::RotatingQuestsManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x562d684, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x562d618, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ProcessAllQuests, addr 0x562d810, size 0x50, virtual false, abstract: false, final false
inline void ProcessAllQuests(::System::Action_1<::GlobalNamespace::RotatingQuest*>*  action) ;

/// @brief Method QuestLoadPostProcess, addr 0x562dadc, size 0x9c, virtual false, abstract: false, final false
inline void QuestLoadPostProcess(::GlobalNamespace::RotatingQuest*  quest) ;

/// @brief Method QuestSavePreProcess, addr 0x562db78, size 0xb0, virtual false, abstract: false, final false
inline void QuestSavePreProcess(::GlobalNamespace::RotatingQuest*  quest) ;

/// @brief Method RemoveDisabledQuests, addr 0x562fa48, size 0x30, virtual false, abstract: false, final false
inline void RemoveDisabledQuests() ;

/// @brief Method RequestQuestsFromTitleData, addr 0x562d488, size 0x190, virtual false, abstract: false, final false
inline void RequestQuestsFromTitleData() ;

/// @brief Method SaveQuestProgress, addr 0x562fc64, size 0x400, virtual true, abstract: false, final true
inline void SaveQuestProgress() ;

/// @brief Method SelectActiveQuests, addr 0x562e264, size 0xe68, virtual false, abstract: false, final false
inline void SelectActiveQuests() ;

/// @brief Method SetupAllQuestEventListeners, addr 0x562f5e0, size 0x468, virtual true, abstract: false, final true
inline void SetupAllQuestEventListeners() ;

/// @brief Method SetupQuests, addr 0x562d778, size 0x98, virtual false, abstract: false, final false
inline void SetupQuests() ;

/// @brief Method Start, addr 0x562d428, size 0x60, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method Tick, addr 0x562d6f0, size 0x88, virtual true, abstract: false, final true
inline void Tick() ;

/// [CompilerGenerated]
/// @brief Method <ProcessAllQuests>g__ProcessAllQuestsInList|29_0, addr 0x562d860, size 0x27c, virtual false, abstract: false, final false
static inline void _ProcessAllQuests_g__ProcessAllQuestsInList_29_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  questGroups, ::by_ref<::GlobalNamespace::RotatingQuestsManager___c__DisplayClass29_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <RemoveDisabledQuests>g__RemoveDisabledQuestsFromGroupList|37_0, addr 0x562fa78, size 0x1ec, virtual false, abstract: false, final false
static inline void _RemoveDisabledQuests_g__RemoveDisabledQuestsFromGroupList_37_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  questList) ;

/// [CompilerGenerated]
/// @brief Method <RequestQuestsFromTitleData>b__33_0, addr 0x5630198, size 0x4, virtual false, abstract: false, final false
inline void _RequestQuestsFromTitleData_b__33_0(::StringW  data) ;

constexpr ::System::DateTime const& __cordl_internal_get__DailyQuestCountdown_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__DailyQuestCountdown_k__BackingField() ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::System::DateTime const& __cordl_internal_get__WeeklyQuestCountdown_k__BackingField() const;

constexpr ::System::DateTime& __cordl_internal_get__WeeklyQuestCountdown_k__BackingField() ;

constexpr bool const& __cordl_internal_get__playQuestSounds() const;

constexpr bool& __cordl_internal_get__playQuestSounds() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__questAudio() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__questAudio() ;

constexpr int32_t const& __cordl_internal_get_dailyQuestSetID() const;

constexpr int32_t& __cordl_internal_get_dailyQuestSetID() ;

constexpr bool const& __cordl_internal_get_hasQuest() const;

constexpr bool& __cordl_internal_get_hasQuest() ;

constexpr ::StringW const& __cordl_internal_get_localQuestPath() const;

constexpr ::StringW& __cordl_internal_get_localQuestPath() ;

constexpr ::System::DateTime const& __cordl_internal_get_nextQuestUpdateTime() const;

constexpr ::System::DateTime& __cordl_internal_get_nextQuestUpdateTime() ;

constexpr ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList* const& __cordl_internal_get_quests() const;

constexpr ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*& __cordl_internal_get_quests() ;

constexpr bool const& __cordl_internal_get_useTestLocalQuests() const;

constexpr bool& __cordl_internal_get_useTestLocalQuests() ;

constexpr int32_t const& __cordl_internal_get_weeklyQuestSetID() const;

constexpr int32_t& __cordl_internal_get_weeklyQuestSetID() ;

constexpr void __cordl_internal_set__DailyQuestCountdown_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__WeeklyQuestCountdown_k__BackingField(::System::DateTime  value) ;

constexpr void __cordl_internal_set__playQuestSounds(bool  value) ;

constexpr void __cordl_internal_set__questAudio(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_dailyQuestSetID(int32_t  value) ;

constexpr void __cordl_internal_set_hasQuest(bool  value) ;

constexpr void __cordl_internal_set_localQuestPath(::StringW  value) ;

constexpr void __cordl_internal_set_nextQuestUpdateTime(::System::DateTime  value) ;

constexpr void __cordl_internal_set_quests(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*  value) ;

constexpr void __cordl_internal_set_useTestLocalQuests(bool  value) ;

constexpr void __cordl_internal_set_weeklyQuestSetID(int32_t  value) ;

/// @brief Method .ctor, addr 0x5630140, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_LastQuestChange() ;

static inline int32_t getStaticF_LastQuestDailyID() ;

/// [CompilerGenerated]
/// @brief Method get_DailyQuestCountdown, addr 0x562d408, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_DailyQuestCountdown() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x562d3f8, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// [CompilerGenerated]
/// @brief Method get_WeeklyQuestCountdown, addr 0x562d418, size 0x8, virtual false, abstract: false, final false
inline ::System::DateTime get_WeeklyQuestCountdown() ;

/// @brief Convert to "::GlobalNamespace::GorillaQuestManager"
constexpr ::GlobalNamespace::GorillaQuestManager* i___GlobalNamespace__GorillaQuestManager() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

static inline void setStaticF_LastQuestChange(int32_t  value) ;

static inline void setStaticF_LastQuestDailyID(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_DailyQuestCountdown, addr 0x562d410, size 0x8, virtual false, abstract: false, final false
inline void set_DailyQuestCountdown(::System::DateTime  value) ;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x562d400, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_WeeklyQuestCountdown, addr 0x562d420, size 0x8, virtual false, abstract: false, final false
inline void set_WeeklyQuestCountdown(::System::DateTime  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuestsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatingQuestsManager(RotatingQuestsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatingQuestsManager(RotatingQuestsManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{623};

/// @brief Field kDailyQuestIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kDailyQuestIDKey{u"Rotating_Quest_Daily_ID_Key"};

/// @brief Field kDailyQuestProgressKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kDailyQuestProgressKey{u"Rotating_Quest_Daily_Progress_Key"};

/// @brief Field kDailyQuestSaveCountKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kDailyQuestSaveCountKey{u"Rotating_Quest_Daily_SaveCount_Key"};

/// @brief Field kDailyQuestSetIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kDailyQuestSetIDKey{u"Rotating_Quest_Daily_SetID_Key"};

/// @brief Field kWeeklyQuestIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kWeeklyQuestIDKey{u"Rotating_Quest_Weekly_ID_Key"};

/// @brief Field kWeeklyQuestProgressKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kWeeklyQuestProgressKey{u"Rotating_Quest_Weekly_Progress_Key"};

/// @brief Field kWeeklyQuestSaveCountKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kWeeklyQuestSaveCountKey{u"Rotating_Quest_Weekly_SaveCount_Key"};

/// @brief Field kWeeklyQuestSetIDKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kWeeklyQuestSetIDKey{u"Rotating_Quest_Weekly_SetID_Key"};

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

/// @brief Field hasQuest, offset: 0x21, size: 0x1, def value: None
 bool  ___hasQuest;

/// [SerializeField]
/// @brief Field useTestLocalQuests, offset: 0x22, size: 0x1, def value: None
 bool  ___useTestLocalQuests;

/// [SerializeField]
/// @brief Field localQuestPath, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___localQuestPath;

/// @brief Field quests, offset: 0x30, size: 0x8, def value: None
 ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList*  ___quests;

/// @brief Field dailyQuestSetID, offset: 0x38, size: 0x4, def value: None
 int32_t  ___dailyQuestSetID;

/// @brief Field weeklyQuestSetID, offset: 0x3c, size: 0x4, def value: None
 int32_t  ___weeklyQuestSetID;

/// [SerializeField]
/// @brief Field _playQuestSounds, offset: 0x40, size: 0x1, def value: None
 bool  ____playQuestSounds;

/// @brief Field _questAudio, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____questAudio;

/// [CompilerGenerated]
/// @brief Field <DailyQuestCountdown>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::System::DateTime  ____DailyQuestCountdown_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <WeeklyQuestCountdown>k__BackingField, offset: 0x58, size: 0x8, def value: None
 ::System::DateTime  ____WeeklyQuestCountdown_k__BackingField;

/// @brief Field nextQuestUpdateTime, offset: 0x60, size: 0x8, def value: None
 ::System::DateTime  ___nextQuestUpdateTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ____TickRunning_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ___hasQuest) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ___useTestLocalQuests) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ___localQuestPath) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ___quests) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ___dailyQuestSetID) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ___weeklyQuestSetID) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ____playQuestSounds) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ____questAudio) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ____DailyQuestCountdown_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ____WeeklyQuestCountdown_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager, ___nextQuestUpdateTime) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuestsManager) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatingQuestsManager/<>c
class CORDL_TYPE RotatingQuestsManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::RotatingQuestsManager___c*  __9;

/// @brief Field <>9__33_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__33_1, put=setStaticF___9__33_1)) ::System::Action_1<::PlayFab::PlayFabError*>*  __9__33_1;

static inline ::GlobalNamespace::RotatingQuestsManager___c* New_ctor() ;

/// @brief Method <RequestQuestsFromTitleData>b__33_1, addr 0x5630728, size 0x8c, virtual false, abstract: false, final false
inline void _RequestQuestsFromTitleData_b__33_1(::PlayFab::PlayFabError*  e) ;

/// @brief Method .ctor, addr 0x5630720, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::RotatingQuestsManager___c* getStaticF___9() ;

static inline ::System::Action_1<::PlayFab::PlayFabError*>* getStaticF___9__33_1() ;

static inline void setStaticF___9(::GlobalNamespace::RotatingQuestsManager___c*  value) ;

static inline void setStaticF___9__33_1(::System::Action_1<::PlayFab::PlayFabError*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuestsManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatingQuestsManager___c(RotatingQuestsManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatingQuestsManager___c(RotatingQuestsManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{621};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RotatingQuestsManager___c) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatingQuestsManager/RotatingQuestList
class CORDL_TYPE RotatingQuestsManager_RotatingQuestList : public ::System::Object {
public:
// Declarations
using __c__DisplayClass3_0 = ::GlobalNamespace::RotatingQuestList_RotatingQuestsManager___c__DisplayClass3_0;

/// @brief Field DailyQuests, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DailyQuests, put=__cordl_internal_set_DailyQuests)) ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  DailyQuests;

/// @brief Field WeeklyQuests, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_WeeklyQuests, put=__cordl_internal_set_WeeklyQuests)) ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  WeeklyQuests;

/// @brief Method GetQuest, addr 0x5630108, size 0x38, virtual false, abstract: false, final false
inline ::GlobalNamespace::RotatingQuest* GetQuest(int32_t  questID) ;

/// @brief Method Init, addr 0x562de28, size 0x24, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::RotatingQuestsManager_RotatingQuestList* New_ctor() ;

/// [CompilerGenerated]
/// @brief Method <GetQuest>g__GetQuestFrom|3_0, addr 0x5630408, size 0x2a8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::RotatingQuest* _GetQuest_g__GetQuestFrom_3_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  list, ::by_ref<::GlobalNamespace::RotatingQuestList_RotatingQuestsManager___c__DisplayClass3_0>  _cordl_fixed_empty_name_whitespace) ;

/// [CompilerGenerated]
/// @brief Method <Init>g__SetIsDaily|2_0, addr 0x56301a4, size 0x264, virtual false, abstract: false, final false
static inline void _Init_g__SetIsDaily_2_0(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  questList, bool  isDaily) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* const& __cordl_internal_get_DailyQuests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*& __cordl_internal_get_DailyQuests() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>* const& __cordl_internal_get_WeeklyQuests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*& __cordl_internal_get_WeeklyQuests() ;

constexpr void __cordl_internal_set_DailyQuests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  value) ;

constexpr void __cordl_internal_set_WeeklyQuests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  value) ;

/// @brief Method .ctor, addr 0x56306b0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuestsManager_RotatingQuestList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager_RotatingQuestList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatingQuestsManager_RotatingQuestList(RotatingQuestsManager_RotatingQuestList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager_RotatingQuestList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatingQuestsManager_RotatingQuestList(RotatingQuestsManager_RotatingQuestList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{620};

/// @brief Field DailyQuests, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  ___DailyQuests;

/// @brief Field WeeklyQuests, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup*>*  ___WeeklyQuests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList, ___DailyQuests) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList, ___WeeklyQuests) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuestsManager_RotatingQuestList) == 0x20, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatingQuestsManager/RotatingQuestGroup
class CORDL_TYPE RotatingQuestsManager_RotatingQuestGroup : public ::System::Object {
public:
// Declarations
/// @brief Field name, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_name, put=__cordl_internal_set_name)) ::StringW  name;

/// @brief Field quests, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_quests, put=__cordl_internal_set_quests)) ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  quests;

/// @brief Field selectCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_selectCount, put=__cordl_internal_set_selectCount)) int32_t  selectCount;

static inline ::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_name() const;

constexpr ::StringW& __cordl_internal_get_name() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>* const& __cordl_internal_get_quests() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*& __cordl_internal_get_quests() ;

constexpr int32_t const& __cordl_internal_get_selectCount() const;

constexpr int32_t& __cordl_internal_get_selectCount() ;

constexpr void __cordl_internal_set_name(::StringW  value) ;

constexpr void __cordl_internal_set_quests(::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  value) ;

constexpr void __cordl_internal_set_selectCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x563019c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuestsManager_RotatingQuestGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager_RotatingQuestGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatingQuestsManager_RotatingQuestGroup(RotatingQuestsManager_RotatingQuestGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuestsManager_RotatingQuestGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatingQuestsManager_RotatingQuestGroup(RotatingQuestsManager_RotatingQuestGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{618};

/// @brief Field selectCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___selectCount;

/// @brief Field name, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___name;

/// @brief Field quests, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::RotatingQuest*>*  ___quests;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup, ___selectCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup, ___name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup, ___quests) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuestsManager_RotatingQuestGroup) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
