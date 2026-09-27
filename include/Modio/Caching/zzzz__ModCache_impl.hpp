#pragma once
// IWYU pragma private; include "Modio/Caching/ModCache.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Caching/zzzz__ModCache_def.hpp"
#include "Modio/API/SchemaDefinitions/zzzz__ModObject_def.hpp"
#include "Modio/API/zzzz__ModioAPI_def.hpp"
#include "Modio/Caching/zzzz__ModCache__RefreshPotentiallyHiddenCachedMods_d__18_def.hpp"
#include "Modio/Caching/zzzz__ModCache_def.hpp"
#include "Modio/Mods/zzzz__ModId_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/zzzz__Error_def.hpp"
#include "Modio/zzzz__ModIndex_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::Modio::Caching::ModCache.GetMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (*)(::Modio::Mods::ModId)>(&::Modio::Caching::ModCache::GetMod)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa060860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.GetMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (*)(::Modio::API::SchemaDefinitions::ModObject)>(&::Modio::Caching::ModCache::GetMod)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xa060978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.TryGetMod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::Mods::ModId, ::by_ref<::Modio::Mods::Mod*>)>(&::Modio::Caching::ModCache::TryGetMod)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa060b04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"TryGetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::by_ref<::Modio::Mods::Mod*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Caching::ModCache::Clear)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa060d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.RemoveModFromCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::Mods::ModId)>(&::Modio::Caching::ModCache::RemoveModFromCache)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa060dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"RemoveModFromCache", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.GetCachedModSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Modio::API::Mods_ModioAPI_GetModsFilter*, ::StringW, ::by_ref<::ArrayW<::Modio::Mods::Mod*>>, ::by_ref<int64_t>)>(&::Modio::Caching::ModCache::GetCachedModSearch)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa060e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"GetCachedModSearch", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::Modio::Mods::Mod*>>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.CacheModSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::ArrayW<::Modio::Mods::Mod*>, int64_t, int64_t)>(&::Modio::Caching::ModCache::CacheModSearch)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa060fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"CacheModSearch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::Mods::Mod*>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.RemoveCachedModSearch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::Modio::Caching::ModCache::RemoveCachedModSearch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa0611dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"RemoveCachedModSearch", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.ClearModSearchCache
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Modio::Caching::ModCache::ClearModSearchCache)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa06125c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"ClearModSearchCache", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.ConstructFilterKey
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::Modio::API::Mods_ModioAPI_GetModsFilter*)>(&::Modio::Caching::ModCache::ConstructFilterKey)> {
  constexpr static std::size_t size = 0x6b4;
  constexpr static std::size_t addrs = 0xa0612e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"ConstructFilterKey", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.CreateHiddenModFromCachedIndexData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::Mods::Mod* (*)(::Modio::Mods::ModId, ::Modio::ModIndex*)>(&::Modio::Caching::ModCache::CreateHiddenModFromCachedIndexData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa061998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"CreateHiddenModFromCachedIndexData", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::Modio::ModIndex*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache.RefreshPotentiallyHiddenCachedMods
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Modio::Error*>* (*)()>(&::Modio::Caching::ModCache::RefreshPotentiallyHiddenCachedMods)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa061a4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"RefreshPotentiallyHiddenCachedMods", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::Caching::ModCache::setStaticF_Mods(::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*, "Mods", ::Modio::Caching::ModCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>* Modio::Caching::ModCache::getStaticF_Mods()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::Modio::Mods::ModId,::Modio::Mods::Mod*>*, "Mods", ::Modio::Caching::ModCache*>();
}
inline void Modio::Caching::ModCache::setStaticF_ModSearches(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>*, "ModSearches", ::Modio::Caching::ModCache*>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>* Modio::Caching::ModCache::getStaticF_ModSearches()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::Caching::ModCache_ModQueryCachedResponse*>*, "ModSearches", ::Modio::Caching::ModCache*>();
}
inline void Modio::Caching::ModCache::setStaticF_SearchesNotInCache(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SearchesNotInCache", ::Modio::Caching::ModCache*>(std::forward<int32_t>(value));
}
inline int32_t Modio::Caching::ModCache::getStaticF_SearchesNotInCache()  {
return ::cordl_internals::getStaticField<int32_t, "SearchesNotInCache", ::Modio::Caching::ModCache*>();
}
inline void Modio::Caching::ModCache::setStaticF_SearchesSavedByCache(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "SearchesSavedByCache", ::Modio::Caching::ModCache*>(std::forward<int32_t>(value));
}
inline int32_t Modio::Caching::ModCache::getStaticF_SearchesSavedByCache()  {
return ::cordl_internals::getStaticField<int32_t, "SearchesSavedByCache", ::Modio::Caching::ModCache*>();
}
inline void Modio::Caching::ModCache::setStaticF_StringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setStaticField<::System::Text::StringBuilder*, "StringBuilder", ::Modio::Caching::ModCache*>(std::forward<::System::Text::StringBuilder*>(value));
}
inline ::System::Text::StringBuilder* Modio::Caching::ModCache::getStaticF_StringBuilder()  {
return ::cordl_internals::getStaticField<::System::Text::StringBuilder*, "StringBuilder", ::Modio::Caching::ModCache*>();
}
inline ::Modio::Mods::Mod* Modio::Caching::ModCache::GetMod(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(nullptr, ___internal_method, modId);
}
inline ::Modio::Mods::Mod* Modio::Caching::ModCache::GetMod(::Modio::API::SchemaDefinitions::ModObject  modObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"GetMod", {}, {::i2c::type_of<::Modio::API::SchemaDefinitions::ModObject>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(nullptr, ___internal_method, modObject);
}
inline bool Modio::Caching::ModCache::TryGetMod(::Modio::Mods::ModId  modId, ::by_ref<::Modio::Mods::Mod*>  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"TryGetMod", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::by_ref<::Modio::Mods::Mod*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, modId, mod);
}
inline void Modio::Caching::ModCache::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Modio::Caching::ModCache::RemoveModFromCache(::Modio::Mods::ModId  modId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"RemoveModFromCache", {}, {::i2c::type_of<::Modio::Mods::ModId>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, modId);
}
inline bool Modio::Caching::ModCache::GetCachedModSearch(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter, ::StringW  searchKey, ::by_ref<::ArrayW<::Modio::Mods::Mod*>>  cachedMods, ::by_ref<int64_t>  resultTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"GetCachedModSearch", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::ArrayW<::Modio::Mods::Mod*>>>(), ::i2c::type_of<::by_ref<int64_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, filter, searchKey, cachedMods, resultTotal);
}
inline void Modio::Caching::ModCache::CacheModSearch(::StringW  searchKey, ::ArrayW<::Modio::Mods::Mod*>  mods, int64_t  pageIndex, int64_t  resultTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"CacheModSearch", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::Modio::Mods::Mod*>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, searchKey, mods, pageIndex, resultTotal);
}
inline void Modio::Caching::ModCache::RemoveCachedModSearch(::StringW  searchKey)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"RemoveCachedModSearch", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, searchKey);
}
inline void Modio::Caching::ModCache::ClearModSearchCache()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"ClearModSearchCache", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::StringW Modio::Caching::ModCache::ConstructFilterKey(::Modio::API::Mods_ModioAPI_GetModsFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"ConstructFilterKey", {}, {::i2c::type_of<::Modio::API::Mods_ModioAPI_GetModsFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, filter);
}
inline ::Modio::Mods::Mod* Modio::Caching::ModCache::CreateHiddenModFromCachedIndexData(::Modio::Mods::ModId  modId, ::Modio::ModIndex*  tempIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"CreateHiddenModFromCachedIndexData", {}, {::i2c::type_of<::Modio::Mods::ModId>(), ::i2c::type_of<::Modio::ModIndex*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::Mods::Mod*>(nullptr, ___internal_method, modId, tempIndex);
}
inline ::System::Threading::Tasks::Task_1<::Modio::Error*>* Modio::Caching::ModCache::RefreshPotentiallyHiddenCachedMods()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache*>(),
                        {"RefreshPotentiallyHiddenCachedMods", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Modio::Error*>*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Modio::Caching::ModCache::ModCache()   {
}
//  Writing Method size for method: ::Modio::Caching::ModCache_ModQueryCachedResponse.get_ResultTotal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::Modio::Caching::ModCache_ModQueryCachedResponse::*)()>(&::Modio::Caching::ModCache_ModQueryCachedResponse::get_ResultTotal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa061b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {"get_ResultTotal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache_ModQueryCachedResponse.set_ResultTotal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Caching::ModCache_ModQueryCachedResponse::*)(int64_t)>(&::Modio::Caching::ModCache_ModQueryCachedResponse::set_ResultTotal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa061b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {"set_ResultTotal", {}, {::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache_ModQueryCachedResponse.AddResults
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Caching::ModCache_ModQueryCachedResponse::*)(::ArrayW<::Modio::Mods::Mod*>, int64_t, int64_t)>(&::Modio::Caching::ModCache_ModQueryCachedResponse::AddResults)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa06116c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {"AddResults", {}, {::i2c::type_of<::ArrayW<::Modio::Mods::Mod*>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Caching::ModCache_ModQueryCachedResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Caching::ModCache_ModQueryCachedResponse::*)()>(&::Modio::Caching::ModCache_ModQueryCachedResponse::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa0610e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int64_t& Modio::Caching::ModCache_ModQueryCachedResponse::__cordl_internal_get__ResultTotal_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultTotal_k__BackingField;
}
constexpr int64_t const& Modio::Caching::ModCache_ModQueryCachedResponse::__cordl_internal_get__ResultTotal_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ResultTotal_k__BackingField;
}
constexpr void Modio::Caching::ModCache_ModQueryCachedResponse::__cordl_internal_set__ResultTotal_k__BackingField(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ResultTotal_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>*& Modio::Caching::ModCache_ModQueryCachedResponse::__cordl_internal_get_Results()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Results;
}
constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>* const& Modio::Caching::ModCache_ModQueryCachedResponse::__cordl_internal_get_Results() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Results;
}
constexpr void Modio::Caching::ModCache_ModQueryCachedResponse::__cordl_internal_set_Results(::System::Collections::Generic::Dictionary_2<int64_t,::ArrayW<::Modio::Mods::Mod*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Results = value;
}
inline int64_t Modio::Caching::ModCache_ModQueryCachedResponse::get_ResultTotal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {"get_ResultTotal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void Modio::Caching::ModCache_ModQueryCachedResponse::set_ResultTotal(int64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {"set_ResultTotal", {}, {::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::Caching::ModCache_ModQueryCachedResponse::AddResults(::ArrayW<::Modio::Mods::Mod*>  mods, int64_t  pageIndex, int64_t  resultTotal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {"AddResults", {}, {::i2c::type_of<::ArrayW<::Modio::Mods::Mod*>>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mods, pageIndex, resultTotal);
}
inline void Modio::Caching::ModCache_ModQueryCachedResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Caching::ModCache_ModQueryCachedResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Caching::ModCache_ModQueryCachedResponse* Modio::Caching::ModCache_ModQueryCachedResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Caching::ModCache_ModQueryCachedResponse*>());
}
// Ctor Parameters []
constexpr ::Modio::Caching::ModCache_ModQueryCachedResponse::ModCache_ModQueryCachedResponse()   {
}
