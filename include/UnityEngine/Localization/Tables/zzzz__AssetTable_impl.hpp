#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/AssetTable.hpp"
#include "UnityEngine/Localization/Tables/zzzz__DetailedLocalizationTable_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/zzzz__IPreloadRequired_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable.get_ResourceManager
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::ResourceManager* (::UnityEngine::Localization::Tables::AssetTable::*)()>(&::UnityEngine::Localization::Tables::AssetTable::get_ResourceManager)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb01695c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"get_ResourceManager", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable.get_PreloadOperation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::Tables::AssetTable::*)()>(&::UnityEngine::Localization::Tables::AssetTable::get_PreloadOperation)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb016960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable.PreloadAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle (::UnityEngine::Localization::Tables::AssetTable::*)()>(&::UnityEngine::Localization::Tables::AssetTable::PreloadAssets)> {
  constexpr static std::size_t size = 0x60c;
  constexpr static std::size_t addrs = 0xb0169cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"PreloadAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable.ReleaseAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::AssetTable::*)()>(&::UnityEngine::Localization::Tables::AssetTable::ReleaseAssets)> {
  constexpr static std::size_t size = 0x2ec;
  constexpr static std::size_t addrs = 0xb016fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"ReleaseAssets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable.ReleaseAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::AssetTable::*)(::UnityEngine::Localization::Tables::AssetTableEntry*)>(&::UnityEngine::Localization::Tables::AssetTable::ReleaseAsset)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0xb0172c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"ReleaseAsset", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::AssetTableEntry*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable.ReleaseAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::AssetTable::*)(::UnityEngine::Localization::Tables::TableEntryReference)>(&::UnityEngine::Localization::Tables::AssetTable::ReleaseAsset)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb0173fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"ReleaseAsset", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable.CreateTableEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::AssetTableEntry* (::UnityEngine::Localization::Tables::AssetTable::*)()>(&::UnityEngine::Localization::Tables::AssetTable::CreateTableEntry)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb017478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::AssetTable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::AssetTable::*)()>(&::UnityEngine::Localization::Tables::AssetTable::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb017588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& UnityEngine::Localization::Tables::AssetTable::__cordl_internal_get_m_PreloadOperationHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadOperationHandle;
}
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& UnityEngine::Localization::Tables::AssetTable::__cordl_internal_get_m_PreloadOperationHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreloadOperationHandle;
}
constexpr void UnityEngine::Localization::Tables::AssetTable::__cordl_internal_set_m_PreloadOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PreloadOperationHandle = value;
}
inline ::UnityEngine::ResourceManagement::ResourceManager* UnityEngine::Localization::Tables::AssetTable::get_ResourceManager()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"get_ResourceManager", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::ResourceManager*>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Tables::AssetTable::get_PreloadOperation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle UnityEngine::Localization::Tables::AssetTable::PreloadAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"PreloadAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>(this, ___internal_method);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::Tables::AssetTable::GetAssetAsync(::UnityEngine::Localization::Tables::TableEntryReference  entryReference)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                    {"GetAssetAsync", {::i2c::class_of<TObject>()}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, entryReference);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::Tables::AssetTable::GetAssetAsync(::UnityEngine::Localization::Tables::AssetTableEntry*  entry)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                    {"GetAssetAsync", {::i2c::class_of<TObject>()}, {::i2c::type_of<::UnityEngine::Localization::Tables::AssetTableEntry*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, entry);
}
inline void UnityEngine::Localization::Tables::AssetTable::ReleaseAssets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"ReleaseAssets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::AssetTable::ReleaseAsset(::UnityEngine::Localization::Tables::AssetTableEntry*  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"ReleaseAsset", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::AssetTableEntry*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline void UnityEngine::Localization::Tables::AssetTable::ReleaseAsset(::UnityEngine::Localization::Tables::TableEntryReference  entry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {"ReleaseAsset", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, entry);
}
inline ::UnityEngine::Localization::Tables::AssetTableEntry* UnityEngine::Localization::Tables::AssetTable::CreateTableEntry()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::AssetTableEntry*>(this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::AssetTable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::AssetTable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::AssetTable* UnityEngine::Localization::Tables::AssetTable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Tables::AssetTable*>());
}
/// @brief Convert operator to "::UnityEngine::Localization::IPreloadRequired"
constexpr  UnityEngine::Localization::Tables::AssetTable::operator ::UnityEngine::Localization::IPreloadRequired*() noexcept {
return static_cast<::UnityEngine::Localization::IPreloadRequired*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Localization::IPreloadRequired"
constexpr ::UnityEngine::Localization::IPreloadRequired* UnityEngine::Localization::Tables::AssetTable::i___UnityEngine__Localization__IPreloadRequired() noexcept {
return static_cast<::UnityEngine::Localization::IPreloadRequired*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::AssetTable::AssetTable()   {
}
