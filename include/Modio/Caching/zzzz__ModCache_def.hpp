#pragma once
// IWYU pragma private; include "Modio/Caching/ModCache.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModCache)
namespace GlobalNamespace {
struct ModCache__RefreshPotentiallyHiddenCachedMods_d__18;
}
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Modio::API {
class Mods_ModioAPI_GetModsFilter;
}
namespace Modio::Caching {
class ModCache_ModQueryCachedResponse;
}
namespace Modio::Mods {
struct ModId;
}
namespace Modio::Mods {
class Mod;
}
namespace Modio {
class Error;
}
namespace Modio {
class ModIndex;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace Modio::Caching {
class ModCache;
}
namespace Modio::Caching {
class ModCache_ModQueryCachedResponse;
}
// Write type traits
MARK_REF_T(::Modio::Caching::ModCache*);
MARK_REF_T(::Modio::Caching::ModCache_ModQueryCachedResponse*);
DEFINE_IL2CPP_CLASS(::Modio::Caching::ModCache*, "Modio.Caching", "ModCache");
DEFINE_IL2CPP_CLASS(::Modio::Caching::ModCache_ModQueryCachedResponse*, "Modio.Caching", "ModCache/ModQueryCachedResponse");
// Dependencies System.Object
namespace Modio::Caching {
// Is value type: false
// CS Name: Modio.Caching.ModCache
class CORDL_TYPE ModCache : public ::System::Object {
public:
// Declarations
using _RefreshPotentiallyHiddenCachedMods_d__18 = ::GlobalNamespace::ModCache__RefreshPotentiallyHiddenCachedMods_d__18;

using ModQueryCachedResponse = ::Modio::Caching::ModCache_ModQueryCachedResponse;

/// @brief Field ModSearches, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ModSearches, put=setStaticF_ModSearches)) ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>*  ModSearches;

/// @brief Field Mods, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Mods, put=setStaticF_Mods)) ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*  Mods;

/// @brief Field SearchesNotInCache, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SearchesNotInCache, put=setStaticF_SearchesNotInCache)) int32_t  SearchesNotInCache;

/// @brief Field SearchesSavedByCache, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SearchesSavedByCache, put=setStaticF_SearchesSavedByCache)) int32_t  SearchesSavedByCache;

/// @brief Field StringBuilder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StringBuilder, put=setStaticF_StringBuilder)) ::System::Text::StringBuilder*  StringBuilder;

/// @brief Method CacheModSearch, addr 0xa060fb0, size 0x134, virtual false, abstract: false, final false
static inline void CacheModSearch(::StringW  searchKey, ::ArrayW<::Modio::Mods::Mod*>  mods, int64_t  pageIndex, int64_t  resultTotal) ;

/// @brief Method Clear, addr 0xa060d18, size 0xb4, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method ClearModSearchCache, addr 0xa06125c, size 0x88, virtual false, abstract: false, final false
static inline void ClearModSearchCache() ;

/// @brief Method ConstructFilterKey, addr 0xa0612e4, size 0x6b4, virtual false, abstract: false, final false
static inline ::StringW ConstructFilterKey(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter) ;

/// @brief Method CreateHiddenModFromCachedIndexData, addr 0xa061998, size 0xb4, virtual false, abstract: false, final false
static inline ::Modio::Mods::Mod* CreateHiddenModFromCachedIndexData(::Modio::Mods::ModId  modId, ::Modio::ModIndex*  tempIndex) ;

/// @brief Method GetCachedModSearch, addr 0xa060e4c, size 0x164, virtual false, abstract: false, final false
static inline bool GetCachedModSearch(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter, ::StringW  searchKey, ::by_ref<::ArrayW<::Modio::Mods::Mod*>>  cachedMods, ::by_ref<int64_t>  resultTotal) ;

/// @brief Method GetMod, addr 0xa060860, size 0x118, virtual false, abstract: false, final false
static inline ::Modio::Mods::Mod* GetMod(::Modio::Mods::ModId  modId) ;

/// @brief Method GetMod, addr 0xa060978, size 0x18c, virtual false, abstract: false, final false
static inline ::Modio::Mods::Mod* GetMod(::Modio::API::SchemaDefinitions::ModObject  modObject) ;

/// [AsyncStateMachine(typeof(Modio.Caching.ModCache::<RefreshPotentiallyHiddenCachedMods>d__18))]
/// @brief Method RefreshPotentiallyHiddenCachedMods, addr 0xa061a4c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* RefreshPotentiallyHiddenCachedMods() ;

/// @brief Method RemoveCachedModSearch, addr 0xa0611dc, size 0x80, virtual false, abstract: false, final false
static inline void RemoveCachedModSearch(::StringW  searchKey) ;

/// @brief Method RemoveModFromCache, addr 0xa060dcc, size 0x80, virtual false, abstract: false, final false
static inline void RemoveModFromCache(::Modio::Mods::ModId  modId) ;

/// @brief Method TryGetMod, addr 0xa060b04, size 0x90, virtual false, abstract: false, final false
static inline bool TryGetMod(::Modio::Mods::ModId  modId, ::by_ref<::Modio::Mods::Mod*>  mod) ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>* getStaticF_ModSearches() ;

static inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>* getStaticF_Mods() ;

static inline int32_t getStaticF_SearchesNotInCache() ;

static inline int32_t getStaticF_SearchesSavedByCache() ;

static inline ::System::Text::StringBuilder* getStaticF_StringBuilder() ;

static inline void setStaticF_ModSearches(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>*  value) ;

static inline void setStaticF_Mods(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*  value) ;

static inline void setStaticF_SearchesNotInCache(int32_t  value) ;

static inline void setStaticF_SearchesSavedByCache(int32_t  value) ;

static inline void setStaticF_StringBuilder(::System::Text::StringBuilder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModCache() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModCache", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModCache(ModCache && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModCache", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModCache(ModCache const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Caching::ModCache) == 0x10, "Size mismatch!");

} // namespace end def Modio::Caching
// Dependencies System.Object
namespace Modio::Caching {
// Is value type: false
// CS Name: Modio.Caching.ModCache/ModQueryCachedResponse
class CORDL_TYPE ModCache_ModQueryCachedResponse : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ResultTotal, put=set_ResultTotal)) int64_t  ResultTotal;

/// @brief Field Results, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Results, put=__cordl_internal_set_Results)) ::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>*  Results;

/// @brief Field <ResultTotal>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__ResultTotal_k__BackingField, put=__cordl_internal_set__ResultTotal_k__BackingField)) int64_t  _ResultTotal_k__BackingField;

/// @brief Method AddResults, addr 0xa06116c, size 0x70, virtual false, abstract: false, final false
inline void AddResults(::ArrayW<::Modio::Mods::Mod*>  mods, int64_t  pageIndex, int64_t  resultTotal) ;

static inline ::Modio::Caching::ModCache_ModQueryCachedResponse* New_ctor() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>* const& __cordl_internal_get_Results() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>*& __cordl_internal_get_Results() ;

constexpr int64_t const& __cordl_internal_get__ResultTotal_k__BackingField() const;

constexpr int64_t& __cordl_internal_get__ResultTotal_k__BackingField() ;

constexpr void __cordl_internal_set_Results(::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>*  value) ;

constexpr void __cordl_internal_set__ResultTotal_k__BackingField(int64_t  value) ;

/// @brief Method .ctor, addr 0xa0610e4, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_ResultTotal, addr 0xa061b38, size 0x8, virtual false, abstract: false, final false
inline int64_t get_ResultTotal() ;

/// [CompilerGenerated]
/// @brief Method set_ResultTotal, addr 0xa061b40, size 0x8, virtual false, abstract: false, final false
inline void set_ResultTotal(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModCache_ModQueryCachedResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModCache_ModQueryCachedResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModCache_ModQueryCachedResponse(ModCache_ModQueryCachedResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModCache_ModQueryCachedResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModCache_ModQueryCachedResponse(ModCache_ModQueryCachedResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17757};

/// [CompilerGenerated]
/// @brief Field <ResultTotal>k__BackingField, offset: 0x10, size: 0x8, def value: None
 int64_t  ____ResultTotal_k__BackingField;

/// @brief Field Results, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>*  ___Results;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Caching::ModCache_ModQueryCachedResponse, ____ResultTotal_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::Caching::ModCache_ModQueryCachedResponse, ___Results) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Modio::Caching::ModCache_ModQueryCachedResponse) == 0x20, "Size mismatch!");

} // namespace end def Modio::Caching
