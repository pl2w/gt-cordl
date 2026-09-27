#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISearch)
namespace GlobalNamespace {
struct ModioUISearch__GetCurrentUserCreationsQuery_d__85;
}
namespace GlobalNamespace {
struct ModioUISearch__GetModsViaLocalQuery_d__86;
}
namespace GlobalNamespace {
struct ModioUISearch__GetModsViaStandardQuery_d__84;
}
namespace GlobalNamespace {
struct ModioUISearch__SetSearch_d__83;
}
namespace GlobalNamespace {
struct __c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d;
}
namespace Modio::Mods {
class ModSearchFilter;
}
namespace Modio::Mods {
class ModTag;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio::Mods {
struct SortModsBy;
}
namespace Modio::Unity::UI::Components {
class IModioUIPropertiesOwner;
}
namespace Modio::Unity::UI::Search {
class ModioUISearchSettings;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch___c__DisplayClass87_0;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch___c__DisplayClass89_0;
}
namespace Modio::Unity::UI::Search {
struct SpecialSearchType;
}
namespace Modio::Users {
class UserProfile;
}
namespace Modio::Users {
class User;
}
namespace Modio {
class Error;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine::Events {
class UnityEvent;
}
// Forward declare root types
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch___c__DisplayClass87_0;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch___c__DisplayClass89_0;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Search::ModioUISearch*);
MARK_REF_T(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0*);
MARK_REF_T(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Search::ModioUISearch*, "Modio.Unity.UI.Search", "ModioUISearch");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0*, "Modio.Unity.UI.Search", "ModioUISearch/<>c__DisplayClass87_0");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0*, "Modio.Unity.UI.Search", "ModioUISearch/<>c__DisplayClass89_0");
// Dependencies Modio.Unity.UI.Search.SpecialSearchType, System.ValueTuple`2<T1, T2>, System.ValueTuple`3<T1, T2, T3>, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Search {
// Is value type: false
// CS Name: Modio.Unity.UI.Search.ModioUISearch
class CORDL_TYPE ModioUISearch : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _GetCurrentUserCreationsQuery_d__85 = ::GlobalNamespace::ModioUISearch__GetCurrentUserCreationsQuery_d__85;

using _GetModsViaLocalQuery_d__86 = ::GlobalNamespace::ModioUISearch__GetModsViaLocalQuery_d__86;

using _GetModsViaStandardQuery_d__84 = ::GlobalNamespace::ModioUISearch__GetModsViaStandardQuery_d__84;

using _SetSearch_d__83 = ::GlobalNamespace::ModioUISearch__SetSearch_d__83;

using __c__DisplayClass87_0 = ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0;

using __c__DisplayClass89_0 = ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0;

/// @brief Field AppliedSearchPreset, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_AppliedSearchPreset, put=__cordl_internal_set_AppliedSearchPreset)) ::System::Action*  AppliedSearchPreset;

 __declspec(property(get=get_CanGetMoreMods)) bool  CanGetMoreMods;

 __declspec(property(get=get_DefaultPageSize)) int32_t  DefaultPageSize;

 __declspec(property(get=get_IsAdditiveSearch, put=set_IsAdditiveSearch)) bool  IsAdditiveSearch;

 __declspec(property(get=get_IsSearching, put=set_IsSearching)) bool  IsSearching;

 __declspec(property(get=get_LastSearchError, put=set_LastSearchError)) ::Modio::Error*  LastSearchError;

 __declspec(property(get=get_LastSearchFilter, put=set_LastSearchFilter)) ::Modio::Mods::ModSearchFilter*  LastSearchFilter;

 __declspec(property(get=get_LastSearchPreset)) ::Modio::Unity::UI::Search::SpecialSearchType  LastSearchPreset;

 __declspec(property(get=get_LastSearchResultModCount, put=set_LastSearchResultModCount)) int32_t  LastSearchResultModCount;

 __declspec(property(get=get_LastSearchResultMods, put=set_LastSearchResultMods)) ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  LastSearchResultMods;

 __declspec(property(get=get_LastSearchResultPageCount)) int32_t  LastSearchResultPageCount;

 __declspec(property(get=get_LastSearchSelectionIndex, put=set_LastSearchSelectionIndex)) int32_t  LastSearchSelectionIndex;

 __declspec(property(get=get_LastSearchSettingsFrom, put=set_LastSearchSettingsFrom)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  LastSearchSettingsFrom;

/// @brief Field OnSearchUpdatedUnityEvent, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSearchUpdatedUnityEvent, put=__cordl_internal_set_OnSearchUpdatedUnityEvent)) ::UnityEngine::Events::UnityEvent*  OnSearchUpdatedUnityEvent;

 __declspec(property(get=get_SortByOverriden, put=set_SortByOverriden)) bool  SortByOverriden;

/// @brief Field <Default>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__Default_k__BackingField, put=setStaticF__Default_k__BackingField)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  _Default_k__BackingField;

/// @brief Field <IsAdditiveSearch>k__BackingField, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsAdditiveSearch_k__BackingField, put=__cordl_internal_set__IsAdditiveSearch_k__BackingField)) bool  _IsAdditiveSearch_k__BackingField;

/// @brief Field <IsSearching>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSearching_k__BackingField, put=__cordl_internal_set__IsSearching_k__BackingField)) bool  _IsSearching_k__BackingField;

/// @brief Field <LastSearchError>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastSearchError_k__BackingField, put=__cordl_internal_set__LastSearchError_k__BackingField)) ::Modio::Error*  _LastSearchError_k__BackingField;

/// @brief Field <LastSearchFilter>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastSearchFilter_k__BackingField, put=__cordl_internal_set__LastSearchFilter_k__BackingField)) ::Modio::Mods::ModSearchFilter*  _LastSearchFilter_k__BackingField;

/// @brief Field <LastSearchResultModCount>k__BackingField, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastSearchResultModCount_k__BackingField, put=__cordl_internal_set__LastSearchResultModCount_k__BackingField)) int32_t  _LastSearchResultModCount_k__BackingField;

/// @brief Field <LastSearchResultMods>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastSearchResultMods_k__BackingField, put=__cordl_internal_set__LastSearchResultMods_k__BackingField)) ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  _LastSearchResultMods_k__BackingField;

/// @brief Field <LastSearchSelectionIndex>k__BackingField, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__LastSearchSelectionIndex_k__BackingField, put=__cordl_internal_set__LastSearchSelectionIndex_k__BackingField)) int32_t  _LastSearchSelectionIndex_k__BackingField;

/// @brief Field <LastSearchSettingsFrom>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__LastSearchSettingsFrom_k__BackingField, put=__cordl_internal_set__LastSearchSettingsFrom_k__BackingField)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  _LastSearchSettingsFrom_k__BackingField;

/// @brief Field <SortByOverriden>k__BackingField, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__SortByOverriden_k__BackingField, put=__cordl_internal_set__SortByOverriden_k__BackingField)) bool  _SortByOverriden_k__BackingField;

/// @brief Field _allowSearchWithoutUser, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__allowSearchWithoutUser, put=__cordl_internal_set__allowSearchWithoutUser)) bool  _allowSearchWithoutUser;

/// @brief Field _asyncSearchIndex, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get__asyncSearchIndex, put=__cordl_internal_set__asyncSearchIndex)) int32_t  _asyncSearchIndex;

/// @brief Field _baseForCustomSearch, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get__baseForCustomSearch, put=__cordl_internal_set__baseForCustomSearch)) ::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType>  _baseForCustomSearch;

/// @brief Field _defaultPageSize, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__defaultPageSize, put=__cordl_internal_set__defaultPageSize)) int32_t  _defaultPageSize;

/// @brief Field _isDefault, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__isDefault, put=__cordl_internal_set__isDefault)) bool  _isDefault;

/// @brief Field _lastLocalQueryInFull, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastLocalQueryInFull, put=__cordl_internal_set__lastLocalQueryInFull)) ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  _lastLocalQueryInFull;

/// @brief Field _lastPageIndex, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastPageIndex, put=__cordl_internal_set__lastPageIndex)) int32_t  _lastPageIndex;

/// @brief Field _resetToSearch, offset 0x98, size 0x18 
 __declspec(property(get=__cordl_internal_get__resetToSearch, put=__cordl_internal_set__resetToSearch)) ::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*>  _resetToSearch;

/// @brief Field _searchForTag, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchForTag, put=__cordl_internal_set__searchForTag)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  _searchForTag;

/// @brief Field _searchForUser, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchForUser, put=__cordl_internal_set__searchForUser)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  _searchForUser;

/// @brief Field _searchOnStart, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchOnStart, put=__cordl_internal_set__searchOnStart)) ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  _searchOnStart;

/// @brief Field _searchPreset, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__searchPreset, put=__cordl_internal_set__searchPreset)) ::Modio::Unity::UI::Search::SpecialSearchType  _searchPreset;

/// @brief Field _shareFiltersWith, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__shareFiltersWith, put=__cordl_internal_set__shareFiltersWith)) ::System::Object*  _shareFiltersWith;

/// @brief Convert operator to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr operator  ::Modio::Unity::UI::Components::IModioUIPropertiesOwner*() noexcept;

/// @brief Method AddUpdatePropertiesListener, addr 0x9f9f1d4, size 0x18, virtual true, abstract: false, final true
inline void AddUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

/// @brief Method ApplySearchPhrase, addr 0x9f9f340, size 0x9c, virtual false, abstract: false, final false
inline void ApplySearchPhrase(::StringW  query) ;

/// @brief Method ApplySortBy, addr 0x9f9f204, size 0x4c, virtual false, abstract: false, final false
inline void ApplySortBy(::Modio::Mods::SortModsBy  sortModsBy, bool  ascending) ;

/// @brief Method ApplyTagsToSearch, addr 0x9f9f3dc, size 0xc8, virtual false, abstract: false, final false
inline void ApplyTagsToSearch(::System::Collections::Generic::IEnumerable_1<::StringW>*  tags) ;

/// @brief Method Awake, addr 0x9f9eb5c, size 0xe4, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearSearch, addr 0x9f9f040, size 0xc4, virtual false, abstract: false, final false
inline void ClearSearch() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Search.ModioUISearch::<GetCurrentUserCreationsQuery>d__85))]
/// @brief Method GetCurrentUserCreationsQuery, addr 0x9f9ff90, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* GetCurrentUserCreationsQuery() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Search.ModioUISearch::<GetModsViaLocalQuery>d__86))]
/// @brief Method GetModsViaLocalQuery, addr 0x9fa0098, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* GetModsViaLocalQuery() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Search.ModioUISearch::<GetModsViaStandardQuery>d__84))]
/// @brief Method GetModsViaStandardQuery, addr 0x9f9fe88, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* GetModsViaStandardQuery() ;

/// @brief Method GetNextPageAdditivelyForLastSearch, addr 0x9f9fbf4, size 0x1dc, virtual false, abstract: false, final false
inline void GetNextPageAdditivelyForLastSearch() ;

/// @brief Method HasCustomSearch, addr 0x9f9f4a4, size 0x164, virtual false, abstract: false, final false
inline bool HasCustomSearch() ;

/// @brief Method MatchesFilter, addr 0x9fa01a0, size 0x614, virtual false, abstract: false, final false
inline bool MatchesFilter(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::Unity::UI::Search::ModioUISearch* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9f9ec40, size 0x178, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method PluginReady, addr 0x9f9ee3c, size 0x204, virtual false, abstract: false, final false
inline void PluginReady() ;

/// @brief Method PluginReady, addr 0x9f9ee38, size 0x4, virtual false, abstract: false, final false
inline void PluginReady(::Modio::Users::User*  _) ;

/// @brief Method RemoveUpdatePropertiesListener, addr 0x9f9f1ec, size 0x18, virtual true, abstract: false, final true
inline void RemoveUpdatePropertiesListener(::UnityEngine::Events::UnityAction*  listener) ;

/// @brief Method SetCustomSearchBase, addr 0x9f9fe04, size 0x84, virtual false, abstract: false, final false
inline void SetCustomSearchBase(::Modio::Mods::ModSearchFilter*  searchFilter, ::Modio::Unity::UI::Search::SpecialSearchType  searchType) ;

/// @brief Method SetPageForCurrentSearch, addr 0x9f9fdd0, size 0x34, virtual false, abstract: false, final false
inline void SetPageForCurrentSearch(int32_t  page) ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Search.ModioUISearch::<SetSearch>d__83))]
/// @brief Method SetSearch, addr 0x9f9f250, size 0xf0, virtual false, abstract: false, final false
inline void SetSearch(::Modio::Mods::ModSearchFilter*  searchFilter, bool  isAdditiveSearch, /* [TupleElementNames(new[] { "error", "mods", "totalCount" })] */ ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>*  customResultProvider) ;

/// @brief Method SetSearch, addr 0x9f9f608, size 0x318, virtual false, abstract: false, final false
inline void SetSearch(::Modio::Mods::ModSearchFilter*  searchFilter, ::Modio::Unity::UI::Search::SpecialSearchType  specialSearchType, bool  resetToThis, ::System::Object*  shareFiltersWith, ::Modio::Unity::UI::Search::ModioUISearchSettings*  settingsFrom) ;

/// @brief Method SetSearchForDependencies, addr 0x9fa09d4, size 0xc0, virtual false, abstract: false, final false
inline void SetSearchForDependencies(::Modio::Mods::Mod*  dependant) ;

/// @brief Method SetSearchForTag, addr 0x9f9fae4, size 0x110, virtual false, abstract: false, final false
inline void SetSearchForTag(::Modio::Mods::ModTag*  tag) ;

/// @brief Method SetSearchForUser, addr 0x9f9f920, size 0x10c, virtual false, abstract: false, final false
inline void SetSearchForUser(::Modio::Users::UserProfile*  user) ;

/// @brief Method SortModComparer, addr 0x9fa07bc, size 0x218, virtual false, abstract: false, final false
inline int32_t SortModComparer(::Modio::Mods::Mod*  x, ::Modio::Mods::Mod*  y) ;

/// @brief Method Start, addr 0x9f9edb8, size 0x80, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Action* const& __cordl_internal_get_AppliedSearchPreset() const;

constexpr ::System::Action*& __cordl_internal_get_AppliedSearchPreset() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_OnSearchUpdatedUnityEvent() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_OnSearchUpdatedUnityEvent() ;

constexpr bool const& __cordl_internal_get__IsAdditiveSearch_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsAdditiveSearch_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsSearching_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSearching_k__BackingField() ;

constexpr ::Modio::Error* const& __cordl_internal_get__LastSearchError_k__BackingField() const;

constexpr ::Modio::Error*& __cordl_internal_get__LastSearchError_k__BackingField() ;

constexpr ::Modio::Mods::ModSearchFilter* const& __cordl_internal_get__LastSearchFilter_k__BackingField() const;

constexpr ::Modio::Mods::ModSearchFilter*& __cordl_internal_get__LastSearchFilter_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LastSearchResultModCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastSearchResultModCount_k__BackingField() ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>* const& __cordl_internal_get__LastSearchResultMods_k__BackingField() const;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*& __cordl_internal_get__LastSearchResultMods_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__LastSearchSelectionIndex_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__LastSearchSelectionIndex_k__BackingField() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& __cordl_internal_get__LastSearchSettingsFrom_k__BackingField() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& __cordl_internal_get__LastSearchSettingsFrom_k__BackingField() ;

constexpr bool const& __cordl_internal_get__SortByOverriden_k__BackingField() const;

constexpr bool& __cordl_internal_get__SortByOverriden_k__BackingField() ;

constexpr bool const& __cordl_internal_get__allowSearchWithoutUser() const;

constexpr bool& __cordl_internal_get__allowSearchWithoutUser() ;

constexpr int32_t const& __cordl_internal_get__asyncSearchIndex() const;

constexpr int32_t& __cordl_internal_get__asyncSearchIndex() ;

constexpr ::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType> const& __cordl_internal_get__baseForCustomSearch() const;

constexpr ::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType>& __cordl_internal_get__baseForCustomSearch() ;

constexpr int32_t const& __cordl_internal_get__defaultPageSize() const;

constexpr int32_t& __cordl_internal_get__defaultPageSize() ;

constexpr bool const& __cordl_internal_get__isDefault() const;

constexpr bool& __cordl_internal_get__isDefault() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>* const& __cordl_internal_get__lastLocalQueryInFull() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*& __cordl_internal_get__lastLocalQueryInFull() ;

constexpr int32_t const& __cordl_internal_get__lastPageIndex() const;

constexpr int32_t& __cordl_internal_get__lastPageIndex() ;

constexpr ::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*> const& __cordl_internal_get__resetToSearch() const;

constexpr ::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*>& __cordl_internal_get__resetToSearch() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& __cordl_internal_get__searchForTag() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& __cordl_internal_get__searchForTag() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& __cordl_internal_get__searchForUser() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& __cordl_internal_get__searchForUser() ;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> const& __cordl_internal_get__searchOnStart() const;

constexpr ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>& __cordl_internal_get__searchOnStart() ;

constexpr ::Modio::Unity::UI::Search::SpecialSearchType const& __cordl_internal_get__searchPreset() const;

constexpr ::Modio::Unity::UI::Search::SpecialSearchType& __cordl_internal_get__searchPreset() ;

constexpr ::System::Object* const& __cordl_internal_get__shareFiltersWith() const;

constexpr ::System::Object*& __cordl_internal_get__shareFiltersWith() ;

constexpr void __cordl_internal_set_AppliedSearchPreset(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSearchUpdatedUnityEvent(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set__IsAdditiveSearch_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__IsSearching_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__LastSearchError_k__BackingField(::Modio::Error*  value) ;

constexpr void __cordl_internal_set__LastSearchFilter_k__BackingField(::Modio::Mods::ModSearchFilter*  value) ;

constexpr void __cordl_internal_set__LastSearchResultModCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__LastSearchResultMods_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set__LastSearchSelectionIndex_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__LastSearchSettingsFrom_k__BackingField(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value) ;

constexpr void __cordl_internal_set__SortByOverriden_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__allowSearchWithoutUser(bool  value) ;

constexpr void __cordl_internal_set__asyncSearchIndex(int32_t  value) ;

constexpr void __cordl_internal_set__baseForCustomSearch(::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType>  value) ;

constexpr void __cordl_internal_set__defaultPageSize(int32_t  value) ;

constexpr void __cordl_internal_set__isDefault(bool  value) ;

constexpr void __cordl_internal_set__lastLocalQueryInFull(::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  value) ;

constexpr void __cordl_internal_set__lastPageIndex(int32_t  value) ;

constexpr void __cordl_internal_set__resetToSearch(::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*>  value) ;

constexpr void __cordl_internal_set__searchForTag(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value) ;

constexpr void __cordl_internal_set__searchForUser(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value) ;

constexpr void __cordl_internal_set__searchOnStart(::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  value) ;

constexpr void __cordl_internal_set__searchPreset(::Modio::Unity::UI::Search::SpecialSearchType  value) ;

constexpr void __cordl_internal_set__shareFiltersWith(::System::Object*  value) ;

/// @brief Method .ctor, addr 0x9fa0ba4, size 0x11c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_AppliedSearchPreset, addr 0x9f9ea24, size 0x9c, virtual false, abstract: false, final false
inline void add_AppliedSearchPreset(::System::Action*  value) ;

static inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> getStaticF__Default_k__BackingField() ;

/// @brief Method get_CanGetMoreMods, addr 0x9f9e928, size 0xb4, virtual false, abstract: false, final false
inline bool get_CanGetMoreMods() ;

/// [CompilerGenerated]
/// @brief Method get_Default, addr 0x9f9e708, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearch> get_Default() ;

/// @brief Method get_DefaultPageSize, addr 0x9f9ea1c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_DefaultPageSize() ;

/// [CompilerGenerated]
/// @brief Method get_IsAdditiveSearch, addr 0x9f9e7d0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsAdditiveSearch() ;

/// [CompilerGenerated]
/// @brief Method get_IsSearching, addr 0x9f9e7c0, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSearching() ;

/// [CompilerGenerated]
/// @brief Method get_LastSearchError, addr 0x9f9e9dc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Error* get_LastSearchError() ;

/// [CompilerGenerated]
/// @brief Method get_LastSearchFilter, addr 0x9f9e7a8, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModSearchFilter* get_LastSearchFilter() ;

/// @brief Method get_LastSearchPreset, addr 0x9f9e7b8, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Unity::UI::Search::SpecialSearchType get_LastSearchPreset() ;

/// [CompilerGenerated]
/// @brief Method get_LastSearchResultModCount, addr 0x9f9e7f0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LastSearchResultModCount() ;

/// [CompilerGenerated]
/// @brief Method get_LastSearchResultMods, addr 0x9f9e7e0, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>* get_LastSearchResultMods() ;

/// @brief Method get_LastSearchResultPageCount, addr 0x9f9e800, size 0x128, virtual false, abstract: false, final false
inline int32_t get_LastSearchResultPageCount() ;

/// [CompilerGenerated]
/// @brief Method get_LastSearchSelectionIndex, addr 0x9f9e9ec, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LastSearchSelectionIndex() ;

/// [CompilerGenerated]
/// @brief Method get_LastSearchSettingsFrom, addr 0x9f9e9fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings> get_LastSearchSettingsFrom() ;

/// [CompilerGenerated]
/// @brief Method get_SortByOverriden, addr 0x9f9ea0c, size 0x8, virtual false, abstract: false, final false
inline bool get_SortByOverriden() ;

/// @brief Convert to "::Modio::Unity::UI::Components::IModioUIPropertiesOwner"
constexpr ::Modio::Unity::UI::Components::IModioUIPropertiesOwner* i___Modio__Unity__UI__Components__IModioUIPropertiesOwner() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_AppliedSearchPreset, addr 0x9f9eac0, size 0x9c, virtual false, abstract: false, final false
inline void remove_AppliedSearchPreset(::System::Action*  value) ;

static inline void setStaticF__Default_k__BackingField(::UnityW<::Modio::Unity::UI::Search::ModioUISearch>  value) ;

/// [CompilerGenerated]
/// @brief Method set_Default, addr 0x9f9e750, size 0x58, virtual false, abstract: false, final false
static inline void set_Default(::Modio::Unity::UI::Search::ModioUISearch*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsAdditiveSearch, addr 0x9f9e7d8, size 0x8, virtual false, abstract: false, final false
inline void set_IsAdditiveSearch(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsSearching, addr 0x9f9e7c8, size 0x8, virtual false, abstract: false, final false
inline void set_IsSearching(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastSearchError, addr 0x9f9e9e4, size 0x8, virtual false, abstract: false, final false
inline void set_LastSearchError(::Modio::Error*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastSearchFilter, addr 0x9f9e7b0, size 0x8, virtual false, abstract: false, final false
inline void set_LastSearchFilter(::Modio::Mods::ModSearchFilter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastSearchResultModCount, addr 0x9f9e7f8, size 0x8, virtual false, abstract: false, final false
inline void set_LastSearchResultModCount(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastSearchResultMods, addr 0x9f9e7e8, size 0x8, virtual false, abstract: false, final false
inline void set_LastSearchResultMods(::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastSearchSelectionIndex, addr 0x9f9e9f4, size 0x8, virtual false, abstract: false, final false
inline void set_LastSearchSelectionIndex(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_LastSearchSettingsFrom, addr 0x9f9ea04, size 0x8, virtual false, abstract: false, final false
inline void set_LastSearchSettingsFrom(::Modio::Unity::UI::Search::ModioUISearchSettings*  value) ;

/// [CompilerGenerated]
/// @brief Method set_SortByOverriden, addr 0x9f9ea14, size 0x8, virtual false, abstract: false, final false
inline void set_SortByOverriden(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearch() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearch", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearch(ModioUISearch && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearch", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearch(ModioUISearch const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27042};

/// [SerializeField]
/// @brief Field _isDefault, offset: 0x20, size: 0x1, def value: None
 bool  ____isDefault;

/// [Header("Optional Overrides")]
/// [SerializeField]
/// @brief Field _searchOnStart, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  ____searchOnStart;

/// [SerializeField]
/// @brief Field _searchForUser, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  ____searchForUser;

/// [SerializeField]
/// @brief Field _searchForTag, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  ____searchForTag;

/// [SerializeField]
/// @brief Field _defaultPageSize, offset: 0x40, size: 0x4, def value: None
 int32_t  ____defaultPageSize;

/// [SerializeField]
/// [Tooltip("Allow search to run before we have an authenticated user")]
/// @brief Field _allowSearchWithoutUser, offset: 0x44, size: 0x1, def value: None
 bool  ____allowSearchWithoutUser;

/// @brief Field _searchPreset, offset: 0x48, size: 0x4, def value: None
 ::Modio::Unity::UI::Search::SpecialSearchType  ____searchPreset;

/// [CompilerGenerated]
/// @brief Field <LastSearchFilter>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Modio::Mods::ModSearchFilter*  ____LastSearchFilter_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsSearching>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsSearching_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsAdditiveSearch>k__BackingField, offset: 0x59, size: 0x1, def value: None
 bool  ____IsAdditiveSearch_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastSearchResultMods>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*  ____LastSearchResultMods_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastSearchResultModCount>k__BackingField, offset: 0x68, size: 0x4, def value: None
 int32_t  ____LastSearchResultModCount_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastSearchError>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Modio::Error*  ____LastSearchError_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastSearchSelectionIndex>k__BackingField, offset: 0x78, size: 0x4, def value: None
 int32_t  ____LastSearchSelectionIndex_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <LastSearchSettingsFrom>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Modio::Unity::UI::Search::ModioUISearchSettings>  ____LastSearchSettingsFrom_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SortByOverriden>k__BackingField, offset: 0x88, size: 0x1, def value: None
 bool  ____SortByOverriden_k__BackingField;

/// @brief Field OnSearchUpdatedUnityEvent, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___OnSearchUpdatedUnityEvent;

/// [TupleElementNames(new[] { "searchFilter", "specialSearchType", "shareFiltersWith" })]
/// @brief Field _resetToSearch, offset: 0x98, size: 0x18, def value: None
 ::System::ValueTuple_3<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType,::System::Object*>  ____resetToSearch;

/// [TupleElementNames(new[] { "searchFilter", "specialSearchType" })]
/// @brief Field _baseForCustomSearch, offset: 0xb0, size: 0x10, def value: None
 ::System::ValueTuple_2<::Modio::Mods::ModSearchFilter*,::Modio::Unity::UI::Search::SpecialSearchType>  ____baseForCustomSearch;

/// @brief Field _lastPageIndex, offset: 0xc0, size: 0x4, def value: None
 int32_t  ____lastPageIndex;

/// @brief Field _asyncSearchIndex, offset: 0xc4, size: 0x4, def value: None
 int32_t  ____asyncSearchIndex;

/// @brief Field _shareFiltersWith, offset: 0xc8, size: 0x8, def value: None
 ::System::Object*  ____shareFiltersWith;

/// @brief Field _lastLocalQueryInFull, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Mods::Mod*>*  ____lastLocalQueryInFull;

/// [CompilerGenerated]
/// @brief Field AppliedSearchPreset, offset: 0xd8, size: 0x8, def value: None
 ::System::Action*  ___AppliedSearchPreset;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____isDefault) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____searchOnStart) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____searchForUser) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____searchForTag) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____defaultPageSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____allowSearchWithoutUser) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____searchPreset) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____LastSearchFilter_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____IsSearching_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____IsAdditiveSearch_k__BackingField) == 0x59, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____LastSearchResultMods_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____LastSearchResultModCount_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____LastSearchError_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____LastSearchSelectionIndex_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____LastSearchSettingsFrom_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____SortByOverriden_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ___OnSearchUpdatedUnityEvent) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____resetToSearch) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____baseForCustomSearch) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____lastPageIndex) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____asyncSearchIndex) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____shareFiltersWith) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ____lastLocalQueryInFull) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch, ___AppliedSearchPreset) == 0xd8, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Search::ModioUISearch) == 0xe0, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Search
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Search {
// Is value type: false
// CS Name: Modio.Unity.UI.Search.ModioUISearch/<>c__DisplayClass89_0
class CORDL_TYPE ModioUISearch___c__DisplayClass89_0 : public ::System::Object {
public:
// Declarations
using __SetSearchForDependencies_g__GetModsViaDependencies_0_d = ::GlobalNamespace::__c__DisplayClass89_0_ModioUISearch___SetSearchForDependencies_g__GetModsViaDependencies_0_d;

/// @brief Field dependant, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_dependant, put=__cordl_internal_set_dependant)) ::Modio::Mods::Mod*  dependant;

static inline ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0* New_ctor() ;

/// [AsyncStateMachine(typeof(Modio.Unity.UI.Search.ModioUISearch::<>c__DisplayClass89_0::<<SetSearchForDependencies>g__GetModsViaDependencies|0>d))]
/// @brief Method <SetSearchForDependencies>g__GetModsViaDependencies|0, addr 0x9fa0a9c, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_3<::Modio::Error*,::System::Collections::Generic::IReadOnlyList_1<::Modio::Mods::Mod*>*,int32_t>>* _SetSearchForDependencies_g__GetModsViaDependencies_0() ;

constexpr ::Modio::Mods::Mod* const& __cordl_internal_get_dependant() const;

constexpr ::Modio::Mods::Mod*& __cordl_internal_get_dependant() ;

constexpr void __cordl_internal_set_dependant(::Modio::Mods::Mod*  value) ;

/// @brief Method .ctor, addr 0x9fa0a94, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearch___c__DisplayClass89_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearch___c__DisplayClass89_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearch___c__DisplayClass89_0(ModioUISearch___c__DisplayClass89_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearch___c__DisplayClass89_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearch___c__DisplayClass89_0(ModioUISearch___c__DisplayClass89_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27037};

/// @brief Field dependant, offset: 0x10, size: 0x8, def value: None
 ::Modio::Mods::Mod*  ___dependant;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0, ___dependant) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass89_0) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Search
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Unity::UI::Search {
// Is value type: false
// CS Name: Modio.Unity.UI.Search.ModioUISearch/<>c__DisplayClass87_0
class CORDL_TYPE ModioUISearch___c__DisplayClass87_0 : public ::System::Object {
public:
// Declarations
/// @brief Field tag, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_tag, put=__cordl_internal_set_tag)) ::StringW  tag;

static inline ::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0* New_ctor() ;

/// @brief Method <MatchesFilter>b__0, addr 0x9fa0cc0, size 0x20, virtual false, abstract: false, final false
inline bool _MatchesFilter_b__0(::Modio::Mods::ModTag*  modTag) ;

constexpr ::StringW const& __cordl_internal_get_tag() const;

constexpr ::StringW& __cordl_internal_get_tag() ;

constexpr void __cordl_internal_set_tag(::StringW  value) ;

/// @brief Method .ctor, addr 0x9fa07b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearch___c__DisplayClass87_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearch___c__DisplayClass87_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearch___c__DisplayClass87_0(ModioUISearch___c__DisplayClass87_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearch___c__DisplayClass87_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearch___c__DisplayClass87_0(ModioUISearch___c__DisplayClass87_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27035};

/// @brief Field tag, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___tag;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0, ___tag) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Search::ModioUISearch___c__DisplayClass87_0) == 0x18, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Search
