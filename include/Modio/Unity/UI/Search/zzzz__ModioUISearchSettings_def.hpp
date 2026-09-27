#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Search/ModioUISearchSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__RevenueType_def.hpp"
#include "Modio/Mods/zzzz__SortModsBy_def.hpp"
#include "Modio/Unity/UI/Search/zzzz__SpecialSearchType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModioUISearchSettings)
namespace Modio::Mods {
class ModSearchFilter;
}
namespace Modio::Unity::UI::Search {
class ModioUISearch;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace Modio::Unity::UI::Search {
class ModioUISearchSettings;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Search::ModioUISearchSettings*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Search::ModioUISearchSettings*, "Modio.Unity.UI.Search", "ModioUISearchSettings");
// Dependencies Modio.Mods.RevenueType, Modio.Mods.SortModsBy, Modio.Unity.UI.Search.SpecialSearchType, UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Search {
// Is value type: false
// CS Name: Modio.Unity.UI.Search.ModioUISearchSettings
class CORDL_TYPE ModioUISearchSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field DisplayAs, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayAs, put=__cordl_internal_set_DisplayAs)) ::StringW  DisplayAs;

/// @brief Field DisplayAsLocalisedKey, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_DisplayAsLocalisedKey, put=__cordl_internal_set_DisplayAsLocalisedKey)) ::StringW  DisplayAsLocalisedKey;

/// @brief Field HiddenIfMonetizationDisabled, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_HiddenIfMonetizationDisabled, put=__cordl_internal_set_HiddenIfMonetizationDisabled)) bool  HiddenIfMonetizationDisabled;

/// @brief Field Icon, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Icon, put=__cordl_internal_set_Icon)) ::UnityW<::UnityEngine::Sprite>  Icon;

/// @brief Field filterRevenueType, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_filterRevenueType, put=__cordl_internal_set_filterRevenueType)) ::Modio::Mods::RevenueType  filterRevenueType;

/// @brief Field isAscending, offset 0x55, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAscending, put=__cordl_internal_set_isAscending)) bool  isAscending;

/// @brief Field searchPhrase, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchPhrase, put=__cordl_internal_set_searchPhrase)) ::StringW  searchPhrase;

/// @brief Field searchTags, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchTags, put=__cordl_internal_set_searchTags)) ::System::Collections::Generic::List_1<::StringW>*  searchTags;

/// @brief Field searchType, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get_searchType, put=__cordl_internal_set_searchType)) ::Modio::Unity::UI::Search::SpecialSearchType  searchType;

/// @brief Field shareFilterSettingsWith, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_shareFilterSettingsWith, put=__cordl_internal_set_shareFilterSettingsWith)) ::UnityW<::UnityEngine::Object>  shareFilterSettingsWith;

/// @brief Field showMatureContent, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_showMatureContent, put=__cordl_internal_set_showMatureContent)) bool  showMatureContent;

/// @brief Field sortModsBy, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_sortModsBy, put=__cordl_internal_set_sortModsBy)) ::Modio::Mods::SortModsBy  sortModsBy;

/// @brief Method GetSearchFilter, addr 0x9f9fa2c, size 0xb8, virtual false, abstract: false, final false
inline ::Modio::Mods::ModSearchFilter* GetSearchFilter(int32_t  paginationSize) ;

static inline ::Modio::Unity::UI::Search::ModioUISearchSettings* New_ctor() ;

/// @brief Method Search, addr 0x9f9f104, size 0xd0, virtual false, abstract: false, final false
inline void Search(::Modio::Unity::UI::Search::ModioUISearch*  searchWith) ;

/// @brief Method SetAsCustomSearchBase, addr 0x9fa2e8c, size 0xc4, virtual false, abstract: false, final false
inline void SetAsCustomSearchBase(::Modio::Unity::UI::Search::ModioUISearch*  searchWith) ;

constexpr ::StringW const& __cordl_internal_get_DisplayAs() const;

constexpr ::StringW& __cordl_internal_get_DisplayAs() ;

constexpr ::StringW const& __cordl_internal_get_DisplayAsLocalisedKey() const;

constexpr ::StringW& __cordl_internal_get_DisplayAsLocalisedKey() ;

constexpr bool const& __cordl_internal_get_HiddenIfMonetizationDisabled() const;

constexpr bool& __cordl_internal_get_HiddenIfMonetizationDisabled() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_Icon() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_Icon() ;

constexpr ::Modio::Mods::RevenueType const& __cordl_internal_get_filterRevenueType() const;

constexpr ::Modio::Mods::RevenueType& __cordl_internal_get_filterRevenueType() ;

constexpr bool const& __cordl_internal_get_isAscending() const;

constexpr bool& __cordl_internal_get_isAscending() ;

constexpr ::StringW const& __cordl_internal_get_searchPhrase() const;

constexpr ::StringW& __cordl_internal_get_searchPhrase() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_searchTags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_searchTags() ;

constexpr ::Modio::Unity::UI::Search::SpecialSearchType const& __cordl_internal_get_searchType() const;

constexpr ::Modio::Unity::UI::Search::SpecialSearchType& __cordl_internal_get_searchType() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_shareFilterSettingsWith() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_shareFilterSettingsWith() ;

constexpr bool const& __cordl_internal_get_showMatureContent() const;

constexpr bool& __cordl_internal_get_showMatureContent() ;

constexpr ::Modio::Mods::SortModsBy const& __cordl_internal_get_sortModsBy() const;

constexpr ::Modio::Mods::SortModsBy& __cordl_internal_get_sortModsBy() ;

constexpr void __cordl_internal_set_DisplayAs(::StringW  value) ;

constexpr void __cordl_internal_set_DisplayAsLocalisedKey(::StringW  value) ;

constexpr void __cordl_internal_set_HiddenIfMonetizationDisabled(bool  value) ;

constexpr void __cordl_internal_set_Icon(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set_filterRevenueType(::Modio::Mods::RevenueType  value) ;

constexpr void __cordl_internal_set_isAscending(bool  value) ;

constexpr void __cordl_internal_set_searchPhrase(::StringW  value) ;

constexpr void __cordl_internal_set_searchTags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_searchType(::Modio::Unity::UI::Search::SpecialSearchType  value) ;

constexpr void __cordl_internal_set_shareFilterSettingsWith(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_showMatureContent(bool  value) ;

constexpr void __cordl_internal_set_sortModsBy(::Modio::Mods::SortModsBy  value) ;

/// @brief Method .ctor, addr 0x9fa2f50, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUISearchSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUISearchSettings(ModioUISearchSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUISearchSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUISearchSettings(ModioUISearchSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27045};

/// @brief Field DisplayAs, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___DisplayAs;

/// @brief Field DisplayAsLocalisedKey, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___DisplayAsLocalisedKey;

/// @brief Field Icon, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ___Icon;

/// @brief Field HiddenIfMonetizationDisabled, offset: 0x38, size: 0x1, def value: None
 bool  ___HiddenIfMonetizationDisabled;

/// @brief Field searchType, offset: 0x3c, size: 0x4, def value: None
 ::Modio::Unity::UI::Search::SpecialSearchType  ___searchType;

/// @brief Field searchPhrase, offset: 0x40, size: 0x8, def value: None
 ::StringW  ___searchPhrase;

/// @brief Field searchTags, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___searchTags;

/// @brief Field sortModsBy, offset: 0x50, size: 0x4, def value: None
 ::Modio::Mods::SortModsBy  ___sortModsBy;

/// @brief Field showMatureContent, offset: 0x54, size: 0x1, def value: None
 bool  ___showMatureContent;

/// @brief Field isAscending, offset: 0x55, size: 0x1, def value: None
 bool  ___isAscending;

/// @brief Field filterRevenueType, offset: 0x58, size: 0x4, def value: None
 ::Modio::Mods::RevenueType  ___filterRevenueType;

/// @brief Field shareFilterSettingsWith, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___shareFilterSettingsWith;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___DisplayAs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___DisplayAsLocalisedKey) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___Icon) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___HiddenIfMonetizationDisabled) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___searchType) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___searchPhrase) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___searchTags) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___sortModsBy) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___showMatureContent) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___isAscending) == 0x55, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___filterRevenueType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Search::ModioUISearchSettings, ___shareFilterSettingsWith) == 0x60, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Search::ModioUISearchSettings) == 0x68, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Search
