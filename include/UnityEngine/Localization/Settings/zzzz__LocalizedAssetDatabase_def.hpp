#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedAssetDatabase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalizedAssetDatabase)
namespace UnityEngine::Localization::Settings {
struct FallbackBehavior;
}
namespace UnityEngine::Localization::Tables {
class AssetTableEntry;
}
namespace UnityEngine::Localization::Tables {
class AssetTable;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class LocalizedAssetDatabase;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*, "UnityEngine.Localization.Settings", "LocalizedAssetDatabase");
// Dependencies UnityEngine.Localization.Settings.LocalizedDatabase`2<TTable, TEntry>, UnityEngine.Object
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.LocalizedAssetDatabase
class CORDL_TYPE LocalizedAssetDatabase : public ::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*> {
public:
// Declarations
/// @brief Method GetLocalizedAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline TObject GetLocalizedAsset(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method GetLocalizedAsset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline TObject GetLocalizedAsset(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method GetLocalizedAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> GetLocalizedAssetAsync(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

/// @brief Method GetLocalizedAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> GetLocalizedAssetAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

/// @brief Method GetLocalizedAssetAsyncInternal, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> GetLocalizedAssetAsyncInternal(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

static inline ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* New_ctor() ;

/// @brief Method ReleaseTableContents, addr 0xb01c314, size 0x14, virtual true, abstract: false, final false
inline void ReleaseTableContents(::UnityEngine::Localization::Tables::AssetTable*  table) ;

/// @brief Method .ctor, addr 0xb01c328, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAssetDatabase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetDatabase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAssetDatabase(LocalizedAssetDatabase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAssetDatabase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAssetDatabase(LocalizedAssetDatabase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25091};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Settings::LocalizedAssetDatabase) == 0x90, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
