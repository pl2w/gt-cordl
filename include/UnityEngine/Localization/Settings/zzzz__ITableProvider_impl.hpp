#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/ITableProvider.hpp"
#include "UnityEngine/Localization/Tables/zzzz__LocalizationTable_impl.hpp"
#include "UnityEngine/Localization/Settings/zzzz__ITableProvider_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
template<typename TTable>
requires(::cordl_internals::type_constraint<TTable, ::UnityEngine::Localization::Tables::LocalizationTable*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> UnityEngine::Localization::Settings::ITableProvider::ProvideTableAsync(::StringW  tableCollectionName, ::UnityEngine::Localization::Locale*  locale)  {
auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                                reinterpret_cast<Il2CppObject*>(this)->klass,
                                {::i2c::class_of<::UnityEngine::Localization::Settings::ITableProvider*>(), 0}
                            )));
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::make_generic(
                                ___internal_method_base,
                                {::i2c::class_of<TTable>()}
                            ));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>(this, ___internal_method, tableCollectionName, locale);
}
