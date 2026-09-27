#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedAssetDatabase.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedAssetDatabase_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__FallbackBehavior_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTableEntry_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__AssetTable_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedAssetDatabase.ReleaseTableContents
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedAssetDatabase::*)(::UnityEngine::Localization::Tables::AssetTable*)>(&::UnityEngine::Localization::Settings::LocalizedAssetDatabase::ReleaseTableContents)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb01c314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(),
                    {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Settings::LocalizedAssetDatabase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Settings::LocalizedAssetDatabase::*)()>(&::UnityEngine::Localization::Settings::LocalizedAssetDatabase::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb01c328;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::Settings::LocalizedAssetDatabase::GetLocalizedAssetAsync(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(),
                    {"GetLocalizedAssetAsync", {::i2c::class_of<TObject>()}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>(), ::i2c::type_of<::UnityEngine::Localization::Settings::FallbackBehavior>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, tableEntryReference, locale, fallbackBehavior);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline TObject UnityEngine::Localization::Settings::LocalizedAssetDatabase::GetLocalizedAsset(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(),
                    {"GetLocalizedAsset", {::i2c::class_of<TObject>()}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableEntryReference>(), ::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TObject>()}
                )));
return ::cordl_internals::RunMethodRethrow<TObject>(this, ___internal_method, tableEntryReference, locale);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::Settings::LocalizedAssetDatabase::GetLocalizedAssetAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(), 19}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, tableReference, tableEntryReference, locale, fallbackBehavior);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline TObject UnityEngine::Localization::Settings::LocalizedAssetDatabase::GetLocalizedAsset(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(), 20}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<TObject>(this, ___internal_method, tableReference, tableEntryReference, locale);
}
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> UnityEngine::Localization::Settings::LocalizedAssetDatabase::GetLocalizedAssetAsyncInternal(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(), 21}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TObject>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>(this, ___internal_method, tableReference, tableEntryReference, locale, fallbackBehavior);
}
inline void UnityEngine::Localization::Settings::LocalizedAssetDatabase::ReleaseTableContents(::UnityEngine::Localization::Tables::AssetTable*  table)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, table);
}
inline void UnityEngine::Localization::Settings::LocalizedAssetDatabase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* UnityEngine::Localization::Settings::LocalizedAssetDatabase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Localization::Settings::LocalizedAssetDatabase*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Settings::LocalizedAssetDatabase::LocalizedAssetDatabase()   {
}
