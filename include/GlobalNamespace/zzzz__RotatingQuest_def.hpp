#pragma once
// IWYU pragma private; include "GlobalNamespace/RotatingQuest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTZone_def.hpp"
#include "GlobalNamespace/zzzz__QuestCategory_def.hpp"
#include "GlobalNamespace/zzzz__QuestType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RotatingQuest)
namespace GlobalNamespace {
struct GTZone;
}
namespace GlobalNamespace {
class GorillaQuestManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class RotatingQuest;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::RotatingQuest*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RotatingQuest*, "", "RotatingQuest");
// Dependencies GTZone, QuestCategory, QuestType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RotatingQuest
class CORDL_TYPE RotatingQuest : public ::System::Object {
public:
// Declarations
/// @brief [JsonIgnore]
 __declspec(property(get=get_IsMovementQuest)) bool  IsMovementQuest;

/// @brief [JsonIgnore]
 __declspec(property(get=get_RequiredZone, put=set_RequiredZone)) ::GlobalNamespace::GTZone  RequiredZone;

/// @brief Field <RequiredZone>k__BackingField, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__RequiredZone_k__BackingField, put=__cordl_internal_set__RequiredZone_k__BackingField)) ::GlobalNamespace::GTZone  _RequiredZone_k__BackingField;

/// @brief Field category, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_category, put=__cordl_internal_set_category)) ::GlobalNamespace::QuestCategory  category;

/// @brief Field disable, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_disable, put=__cordl_internal_set_disable)) bool  disable;

/// @brief Field isDailyQuest, offset 0x4a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDailyQuest, put=__cordl_internal_set_isDailyQuest)) bool  isDailyQuest;

/// @brief Field isQuestActive, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isQuestActive, put=__cordl_internal_set_isQuestActive)) bool  isQuestActive;

/// @brief Field isQuestComplete, offset 0x49, size 0x1 
 __declspec(property(get=__cordl_internal_get_isQuestComplete, put=__cordl_internal_set_isQuestComplete)) bool  isQuestComplete;

/// @brief Field lastChange, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastChange, put=__cordl_internal_set_lastChange)) int32_t  lastChange;

/// @brief Field moveDistance, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_moveDistance, put=__cordl_internal_set_moveDistance)) float_t  moveDistance;

/// @brief Field occurenceCount, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_occurenceCount, put=__cordl_internal_set_occurenceCount)) int32_t  occurenceCount;

/// @brief Field questID, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_questID, put=__cordl_internal_set_questID)) int32_t  questID;

/// @brief Field questManager, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_questManager, put=__cordl_internal_set_questManager)) ::GlobalNamespace::GorillaQuestManager*  questManager;

/// @brief Field questName, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_questName, put=__cordl_internal_set_questName)) ::StringW  questName;

/// @brief Field questOccurenceFilter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_questOccurenceFilter, put=__cordl_internal_set_questOccurenceFilter)) ::StringW  questOccurenceFilter;

/// @brief Field questType, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_questType, put=__cordl_internal_set_questType)) ::GlobalNamespace::QuestType  questType;

/// @brief Field requiredOccurenceCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_requiredOccurenceCount, put=__cordl_internal_set_requiredOccurenceCount)) int32_t  requiredOccurenceCount;

/// @brief Field requiredZones, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_requiredZones, put=__cordl_internal_set_requiredZones)) ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  requiredZones;

/// @brief Field weight, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_weight, put=__cordl_internal_set_weight)) float_t  weight;

/// @brief Method AddEventListener, addr 0x562c5bc, size 0x3b0, virtual false, abstract: false, final false
inline void AddEventListener() ;

/// @brief Method ApplySavedProgress, addr 0x562cd14, size 0x88, virtual false, abstract: false, final false
inline void ApplySavedProgress(int32_t  progress) ;

/// @brief Method Complete, addr 0x562d0a0, size 0xd0, virtual false, abstract: false, final false
inline void Complete() ;

/// @brief Method GetProgress, addr 0x562cd9c, size 0x84, virtual false, abstract: false, final false
inline int32_t GetProgress() ;

/// @brief Method GetProgressText, addr 0x562d2d0, size 0xb8, virtual false, abstract: false, final false
inline ::StringW GetProgressText() ;

/// @brief Method GetTextDescription, addr 0x562bcd8, size 0x50, virtual false, abstract: false, final false
inline ::StringW GetTextDescription() ;

static inline ::GlobalNamespace::RotatingQuest* New_ctor() ;

/// @brief Method OnGameEventOccurence, addr 0x562ce20, size 0x8, virtual false, abstract: false, final false
inline void OnGameEventOccurence(::StringW  eventName) ;

/// @brief Method OnGameEventOccurence, addr 0x562ce28, size 0x78, virtual false, abstract: false, final false
inline void OnGameEventOccurence(::StringW  eventName, int32_t  count) ;

/// @brief Method OnGameMoveEvent, addr 0x562cfa8, size 0xf8, virtual false, abstract: false, final false
inline void OnGameMoveEvent(float_t  distance, float_t  speed) ;

/// @brief Method RemoveEventListener, addr 0x562c96c, size 0x3a8, virtual false, abstract: false, final false
inline void RemoveEventListener() ;

/// @brief Method SetProgress, addr 0x562cea0, size 0x108, virtual false, abstract: false, final false
inline void SetProgress(int32_t  progress) ;

/// @brief Method SetRequiredZone, addr 0x562c530, size 0x8c, virtual false, abstract: false, final false
inline void SetRequiredZone() ;

/// [CompilerGenerated]
/// @brief Method <GetTextDescription>g__GetActionName|32_0, addr 0x562d170, size 0xc0, virtual false, abstract: false, final false
inline ::StringW _GetTextDescription_g__GetActionName_32_0() ;

/// [CompilerGenerated]
/// @brief Method <GetTextDescription>g__GetLocationText|32_1, addr 0x562d230, size 0xa0, virtual false, abstract: false, final false
inline ::StringW _GetTextDescription_g__GetLocationText_32_1() ;

constexpr ::GlobalNamespace::GTZone const& __cordl_internal_get__RequiredZone_k__BackingField() const;

constexpr ::GlobalNamespace::GTZone& __cordl_internal_get__RequiredZone_k__BackingField() ;

constexpr ::GlobalNamespace::QuestCategory const& __cordl_internal_get_category() const;

constexpr ::GlobalNamespace::QuestCategory& __cordl_internal_get_category() ;

constexpr bool const& __cordl_internal_get_disable() const;

constexpr bool& __cordl_internal_get_disable() ;

constexpr bool const& __cordl_internal_get_isDailyQuest() const;

constexpr bool& __cordl_internal_get_isDailyQuest() ;

constexpr bool const& __cordl_internal_get_isQuestActive() const;

constexpr bool& __cordl_internal_get_isQuestActive() ;

constexpr bool const& __cordl_internal_get_isQuestComplete() const;

constexpr bool& __cordl_internal_get_isQuestComplete() ;

constexpr int32_t const& __cordl_internal_get_lastChange() const;

constexpr int32_t& __cordl_internal_get_lastChange() ;

constexpr float_t const& __cordl_internal_get_moveDistance() const;

constexpr float_t& __cordl_internal_get_moveDistance() ;

constexpr int32_t const& __cordl_internal_get_occurenceCount() const;

constexpr int32_t& __cordl_internal_get_occurenceCount() ;

constexpr int32_t const& __cordl_internal_get_questID() const;

constexpr int32_t& __cordl_internal_get_questID() ;

constexpr ::GlobalNamespace::GorillaQuestManager* const& __cordl_internal_get_questManager() const;

constexpr ::GlobalNamespace::GorillaQuestManager*& __cordl_internal_get_questManager() ;

constexpr ::StringW const& __cordl_internal_get_questName() const;

constexpr ::StringW& __cordl_internal_get_questName() ;

constexpr ::StringW const& __cordl_internal_get_questOccurenceFilter() const;

constexpr ::StringW& __cordl_internal_get_questOccurenceFilter() ;

constexpr ::GlobalNamespace::QuestType const& __cordl_internal_get_questType() const;

constexpr ::GlobalNamespace::QuestType& __cordl_internal_get_questType() ;

constexpr int32_t const& __cordl_internal_get_requiredOccurenceCount() const;

constexpr int32_t& __cordl_internal_get_requiredOccurenceCount() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>* const& __cordl_internal_get_requiredZones() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*& __cordl_internal_get_requiredZones() ;

constexpr float_t const& __cordl_internal_get_weight() const;

constexpr float_t& __cordl_internal_get_weight() ;

constexpr void __cordl_internal_set__RequiredZone_k__BackingField(::GlobalNamespace::GTZone  value) ;

constexpr void __cordl_internal_set_category(::GlobalNamespace::QuestCategory  value) ;

constexpr void __cordl_internal_set_disable(bool  value) ;

constexpr void __cordl_internal_set_isDailyQuest(bool  value) ;

constexpr void __cordl_internal_set_isQuestActive(bool  value) ;

constexpr void __cordl_internal_set_isQuestComplete(bool  value) ;

constexpr void __cordl_internal_set_lastChange(int32_t  value) ;

constexpr void __cordl_internal_set_moveDistance(float_t  value) ;

constexpr void __cordl_internal_set_occurenceCount(int32_t  value) ;

constexpr void __cordl_internal_set_questID(int32_t  value) ;

constexpr void __cordl_internal_set_questManager(::GlobalNamespace::GorillaQuestManager*  value) ;

constexpr void __cordl_internal_set_questName(::StringW  value) ;

constexpr void __cordl_internal_set_questOccurenceFilter(::StringW  value) ;

constexpr void __cordl_internal_set_questType(::GlobalNamespace::QuestType  value) ;

constexpr void __cordl_internal_set_requiredOccurenceCount(int32_t  value) ;

constexpr void __cordl_internal_set_requiredZones(::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  value) ;

constexpr void __cordl_internal_set_weight(float_t  value) ;

/// @brief Method .ctor, addr 0x562d388, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsMovementQuest, addr 0x562c50c, size 0x14, virtual false, abstract: false, final false
inline bool get_IsMovementQuest() ;

/// [CompilerGenerated]
/// @brief Method get_RequiredZone, addr 0x562c520, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::GTZone get_RequiredZone() ;

/// [CompilerGenerated]
/// @brief Method set_RequiredZone, addr 0x562c528, size 0x8, virtual false, abstract: false, final false
inline void set_RequiredZone(::GlobalNamespace::GTZone  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RotatingQuest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RotatingQuest(RotatingQuest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RotatingQuest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RotatingQuest(RotatingQuest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{617};

/// @brief Field disable, offset: 0x10, size: 0x1, def value: None
 bool  ___disable;

/// @brief Field questID, offset: 0x14, size: 0x4, def value: None
 int32_t  ___questID;

/// @brief Field weight, offset: 0x18, size: 0x4, def value: None
 float_t  ___weight;

/// @brief Field category, offset: 0x1c, size: 0x4, def value: None
 ::GlobalNamespace::QuestCategory  ___category;

/// @brief Field questName, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___questName;

/// @brief Field questType, offset: 0x28, size: 0x4, def value: None
 ::GlobalNamespace::QuestType  ___questType;

/// @brief Field questOccurenceFilter, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___questOccurenceFilter;

/// @brief Field requiredOccurenceCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___requiredOccurenceCount;

/// [JsonProperty(ItemConverterType = typeof(Newtonsoft.Json.Converters.StringEnumConverter))]
/// @brief Field requiredZones, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::GTZone>*  ___requiredZones;

/// [Space]
/// @brief Field isQuestActive, offset: 0x48, size: 0x1, def value: None
 bool  ___isQuestActive;

/// @brief Field isQuestComplete, offset: 0x49, size: 0x1, def value: None
 bool  ___isQuestComplete;

/// @brief Field isDailyQuest, offset: 0x4a, size: 0x1, def value: None
 bool  ___isDailyQuest;

/// @brief Field lastChange, offset: 0x4c, size: 0x4, def value: None
 int32_t  ___lastChange;

/// [CompilerGenerated]
/// @brief Field <RequiredZone>k__BackingField, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::GTZone  ____RequiredZone_k__BackingField;

/// @brief Field occurenceCount, offset: 0x54, size: 0x4, def value: None
 int32_t  ___occurenceCount;

/// @brief Field moveDistance, offset: 0x58, size: 0x4, def value: None
 float_t  ___moveDistance;

/// @brief Field questManager, offset: 0x60, size: 0x8, def value: None
 ::GlobalNamespace::GorillaQuestManager*  ___questManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___disable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___questID) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___weight) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___category) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___questName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___questType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___questOccurenceFilter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___requiredOccurenceCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___requiredZones) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___isQuestActive) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___isQuestComplete) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___isDailyQuest) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___lastChange) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ____RequiredZone_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___occurenceCount) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___moveDistance) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RotatingQuest, ___questManager) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RotatingQuest) == 0x68, "Size mismatch!");

} // namespace end def GlobalNamespace
