#pragma once
// IWYU pragma private; include "Modio/Mods/ModSearchFilter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__RevenueType_def.hpp"
#include "Modio/Mods/zzzz__SearchFilterPlatformStatus_def.hpp"
#include "Modio/Mods/zzzz__SortModsBy_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModSearchFilter)
namespace Modio::API {
struct Filtering;
}
namespace Modio::API {
class Mods_ModioAPI_GetModsFilter;
}
namespace Modio::Mods {
class ModSearchFilter___c;
}
namespace Modio::Mods {
struct RevenueType;
}
namespace Modio::Mods {
struct SearchFilterPlatformStatus;
}
namespace Modio::Mods {
struct SortModsBy;
}
namespace Modio::Users {
class UserProfile;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace Modio::Mods {
class ModSearchFilter;
}
namespace Modio::Mods {
class ModSearchFilter___c;
}
// Write type traits
MARK_REF_T(::Modio::Mods::ModSearchFilter*);
MARK_REF_T(::Modio::Mods::ModSearchFilter___c*);
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModSearchFilter*, "Modio.Mods", "ModSearchFilter");
DEFINE_IL2CPP_CLASS(::Modio::Mods::ModSearchFilter___c*, "Modio.Mods", "ModSearchFilter/<>c");
// Dependencies Modio.Mods.RevenueType, Modio.Mods.SearchFilterPlatformStatus, Modio.Mods.SortModsBy, System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.ModSearchFilter
class CORDL_TYPE ModSearchFilter : public ::System::Object {
public:
// Declarations
using __c = ::Modio::Mods::ModSearchFilter___c;

 __declspec(property(get=get_IsSortAscending, put=set_IsSortAscending)) bool  IsSortAscending;

 __declspec(property(get=get_PageIndex, put=set_PageIndex)) int32_t  PageIndex;

 __declspec(property(get=get_PageSize, put=set_PageSize)) int32_t  PageSize;

 __declspec(property(get=get_PlatformStatus, put=set_PlatformStatus)) ::Modio::Mods::SearchFilterPlatformStatus  PlatformStatus;

 __declspec(property(get=get_RevenueType, put=set_RevenueType)) ::Modio::Mods::RevenueType  RevenueType;

 __declspec(property(get=get_ShowMatureContent, put=set_ShowMatureContent)) bool  ShowMatureContent;

 __declspec(property(get=get_SortBy, put=set_SortBy)) ::Modio::Mods::SortModsBy  SortBy;

/// @brief Field <IsSortAscending>k__BackingField, offset 0x34, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsSortAscending_k__BackingField, put=__cordl_internal_set__IsSortAscending_k__BackingField)) bool  _IsSortAscending_k__BackingField;

/// @brief Field <PlatformStatus>k__BackingField, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__PlatformStatus_k__BackingField, put=__cordl_internal_set__PlatformStatus_k__BackingField)) ::Modio::Mods::SearchFilterPlatformStatus  _PlatformStatus_k__BackingField;

/// @brief Field <RevenueType>k__BackingField, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__RevenueType_k__BackingField, put=__cordl_internal_set__RevenueType_k__BackingField)) ::Modio::Mods::RevenueType  _RevenueType_k__BackingField;

/// @brief Field <ShowMatureContent>k__BackingField, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__ShowMatureContent_k__BackingField, put=__cordl_internal_set__ShowMatureContent_k__BackingField)) bool  _ShowMatureContent_k__BackingField;

/// @brief Field <SortBy>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__SortBy_k__BackingField, put=__cordl_internal_set__SortBy_k__BackingField)) ::Modio::Mods::SortModsBy  _SortBy_k__BackingField;

/// @brief Field _pageIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__pageIndex, put=__cordl_internal_set__pageIndex)) int32_t  _pageIndex;

/// @brief Field _pageSize, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__pageSize, put=__cordl_internal_set__pageSize)) int32_t  _pageSize;

/// @brief Field _searchPhrases, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__searchPhrases, put=__cordl_internal_set__searchPhrases)) ::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>*  _searchPhrases;

/// @brief Field _tags, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tags, put=__cordl_internal_set__tags)) ::System::Collections::Generic::List_1<::StringW>*  _tags;

/// @brief Field _users, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__users, put=__cordl_internal_set__users)) ::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>*  _users;

/// @brief Method AddSearchPhrase, addr 0xa030e40, size 0x1bc, virtual false, abstract: false, final false
inline void AddSearchPhrase(::StringW  phrase, ::Modio::API::Filtering  filtering) ;

/// @brief Method AddSearchPhrases, addr 0xa030ffc, size 0x1d0, virtual false, abstract: false, final false
inline void AddSearchPhrases(::System::Collections::Generic::ICollection_1<::StringW>*  phrase, ::Modio::API::Filtering  filtering) ;

/// @brief Method AddTag, addr 0xa031360, size 0x100, virtual false, abstract: false, final false
inline void AddTag(::StringW  tag) ;

/// @brief Method AddTags, addr 0xa031460, size 0xac, virtual false, abstract: false, final false
inline void AddTags(::System::Collections::Generic::IEnumerable_1<::StringW>*  tags) ;

/// @brief Method AddUser, addr 0xa031618, size 0x100, virtual false, abstract: false, final false
inline void AddUser(::Modio::Users::UserProfile*  user) ;

/// @brief Method ClearSearchPhrases, addr 0xa0311cc, size 0x58, virtual false, abstract: false, final false
inline void ClearSearchPhrases() ;

/// @brief Method ClearSearchPhrases, addr 0xa031224, size 0x60, virtual false, abstract: false, final false
inline void ClearSearchPhrases(::Modio::API::Filtering  filtering) ;

/// @brief Method ClearTags, addr 0xa03150c, size 0x6c, virtual false, abstract: false, final false
inline void ClearTags() ;

/// @brief Method GetModsFilter, addr 0xa0294f4, size 0x438, virtual false, abstract: false, final false
inline ::Modio::API::Mods_ModioAPI_GetModsFilter* GetModsFilter() ;

/// @brief Method GetSearchPhrase, addr 0xa031284, size 0xdc, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::StringW>* GetSearchPhrase(::Modio::API::Filtering  filtering) ;

/// @brief Method GetTags, addr 0xa031578, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::StringW>* GetTags() ;

/// @brief Method GetUsers, addr 0xa031718, size 0xa0, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::Modio::Users::UserProfile*>* GetUsers() ;

static inline ::Modio::Mods::ModSearchFilter* New_ctor(int32_t  pageIndex, int32_t  pageSize) ;

constexpr bool const& __cordl_internal_get__IsSortAscending_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsSortAscending_k__BackingField() ;

constexpr ::Modio::Mods::SearchFilterPlatformStatus const& __cordl_internal_get__PlatformStatus_k__BackingField() const;

constexpr ::Modio::Mods::SearchFilterPlatformStatus& __cordl_internal_get__PlatformStatus_k__BackingField() ;

constexpr ::Modio::Mods::RevenueType const& __cordl_internal_get__RevenueType_k__BackingField() const;

constexpr ::Modio::Mods::RevenueType& __cordl_internal_get__RevenueType_k__BackingField() ;

constexpr bool const& __cordl_internal_get__ShowMatureContent_k__BackingField() const;

constexpr bool& __cordl_internal_get__ShowMatureContent_k__BackingField() ;

constexpr ::Modio::Mods::SortModsBy const& __cordl_internal_get__SortBy_k__BackingField() const;

constexpr ::Modio::Mods::SortModsBy& __cordl_internal_get__SortBy_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__pageIndex() const;

constexpr int32_t& __cordl_internal_get__pageIndex() ;

constexpr int32_t const& __cordl_internal_get__pageSize() const;

constexpr int32_t& __cordl_internal_get__pageSize() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>* const& __cordl_internal_get__searchPhrases() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>*& __cordl_internal_get__searchPhrases() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__tags() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__tags() ;

constexpr ::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>* const& __cordl_internal_get__users() const;

constexpr ::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>*& __cordl_internal_get__users() ;

constexpr void __cordl_internal_set__IsSortAscending_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__PlatformStatus_k__BackingField(::Modio::Mods::SearchFilterPlatformStatus  value) ;

constexpr void __cordl_internal_set__RevenueType_k__BackingField(::Modio::Mods::RevenueType  value) ;

constexpr void __cordl_internal_set__ShowMatureContent_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SortBy_k__BackingField(::Modio::Mods::SortModsBy  value) ;

constexpr void __cordl_internal_set__pageIndex(int32_t  value) ;

constexpr void __cordl_internal_set__pageSize(int32_t  value) ;

constexpr void __cordl_internal_set__searchPhrases(::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>*  value) ;

constexpr void __cordl_internal_set__tags(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set__users(::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>*  value) ;

/// @brief Method .ctor, addr 0xa030dec, size 0x54, virtual false, abstract: false, final false
inline void _ctor(int32_t  pageIndex, int32_t  pageSize) ;

/// [CompilerGenerated]
/// @brief Method get_IsSortAscending, addr 0xa030dcc, size 0x8, virtual false, abstract: false, final false
inline bool get_IsSortAscending() ;

/// @brief Method get_PageIndex, addr 0xa030d4c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PageIndex() ;

/// @brief Method get_PageSize, addr 0xa030d6c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_PageSize() ;

/// [CompilerGenerated]
/// @brief Method get_PlatformStatus, addr 0xa030dac, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::SearchFilterPlatformStatus get_PlatformStatus() ;

/// [CompilerGenerated]
/// @brief Method get_RevenueType, addr 0xa030ddc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::RevenueType get_RevenueType() ;

/// [CompilerGenerated]
/// @brief Method get_ShowMatureContent, addr 0xa030d9c, size 0x8, virtual false, abstract: false, final false
inline bool get_ShowMatureContent() ;

/// [CompilerGenerated]
/// @brief Method get_SortBy, addr 0xa030dbc, size 0x8, virtual false, abstract: false, final false
inline ::Modio::Mods::SortModsBy get_SortBy() ;

/// [CompilerGenerated]
/// @brief Method set_IsSortAscending, addr 0xa030dd4, size 0x8, virtual false, abstract: false, final false
inline void set_IsSortAscending(bool  value) ;

/// @brief Method set_PageIndex, addr 0xa030d54, size 0x18, virtual false, abstract: false, final false
inline void set_PageIndex(int32_t  value) ;

/// @brief Method set_PageSize, addr 0xa030d74, size 0x28, virtual false, abstract: false, final false
inline void set_PageSize(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_PlatformStatus, addr 0xa030db4, size 0x8, virtual false, abstract: false, final false
inline void set_PlatformStatus(::Modio::Mods::SearchFilterPlatformStatus  value) ;

/// [CompilerGenerated]
/// @brief Method set_RevenueType, addr 0xa030de4, size 0x8, virtual false, abstract: false, final false
inline void set_RevenueType(::Modio::Mods::RevenueType  value) ;

/// [CompilerGenerated]
/// @brief Method set_ShowMatureContent, addr 0xa030da4, size 0x8, virtual false, abstract: false, final false
inline void set_ShowMatureContent(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_SortBy, addr 0xa030dc4, size 0x8, virtual false, abstract: false, final false
inline void set_SortBy(::Modio::Mods::SortModsBy  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModSearchFilter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModSearchFilter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModSearchFilter(ModSearchFilter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModSearchFilter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModSearchFilter(ModSearchFilter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17601};

/// @brief Field _searchPhrases, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Modio::API::Filtering,::System::Collections::Generic::List_1<::StringW>*>*  ____searchPhrases;

/// @brief Field _tags, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ____tags;

/// @brief Field _users, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Modio::Users::UserProfile*>*  ____users;

/// [CompilerGenerated]
/// @brief Field <ShowMatureContent>k__BackingField, offset: 0x28, size: 0x1, def value: None
 bool  ____ShowMatureContent_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <PlatformStatus>k__BackingField, offset: 0x2c, size: 0x4, def value: None
 ::Modio::Mods::SearchFilterPlatformStatus  ____PlatformStatus_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SortBy>k__BackingField, offset: 0x30, size: 0x4, def value: None
 ::Modio::Mods::SortModsBy  ____SortBy_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsSortAscending>k__BackingField, offset: 0x34, size: 0x1, def value: None
 bool  ____IsSortAscending_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <RevenueType>k__BackingField, offset: 0x38, size: 0x4, def value: None
 ::Modio::Mods::RevenueType  ____RevenueType_k__BackingField;

/// @brief Field _pageSize, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____pageSize;

/// @brief Field _pageIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ____pageIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____searchPhrases) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____tags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____users) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____ShowMatureContent_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____PlatformStatus_k__BackingField) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____SortBy_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____IsSortAscending_k__BackingField) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____RevenueType_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____pageSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Modio::Mods::ModSearchFilter, ____pageIndex) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Modio::Mods::ModSearchFilter) == 0x48, "Size mismatch!");

} // namespace end def Modio::Mods
// [CompilerGenerated]
// Dependencies System.Object
namespace Modio::Mods {
// Is value type: false
// CS Name: Modio.Mods.ModSearchFilter/<>c
class CORDL_TYPE ModSearchFilter___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Modio::Mods::ModSearchFilter___c*  __9;

/// @brief Field <>9__43_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__43_0, put=setStaticF___9__43_0)) ::System::Func_2<::Modio::Users::UserProfile*,int64_t>*  __9__43_0;

static inline ::Modio::Mods::ModSearchFilter___c* New_ctor() ;

/// @brief Method <GetModsFilter>b__43_0, addr 0xa031828, size 0x14, virtual false, abstract: false, final false
inline int64_t _GetModsFilter_b__43_0(::Modio::Users::UserProfile*  u) ;

/// @brief Method .ctor, addr 0xa031820, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Modio::Mods::ModSearchFilter___c* getStaticF___9() ;

static inline ::System::Func_2<::Modio::Users::UserProfile*,int64_t>* getStaticF___9__43_0() ;

static inline void setStaticF___9(::Modio::Mods::ModSearchFilter___c*  value) ;

static inline void setStaticF___9__43_0(::System::Func_2<::Modio::Users::UserProfile*,int64_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModSearchFilter___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModSearchFilter___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModSearchFilter___c(ModSearchFilter___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModSearchFilter___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModSearchFilter___c(ModSearchFilter___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17600};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Mods::ModSearchFilter___c) == 0x10, "Size mismatch!");

} // namespace end def Modio::Mods
