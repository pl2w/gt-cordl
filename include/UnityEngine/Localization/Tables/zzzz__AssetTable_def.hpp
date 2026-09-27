#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/AssetTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Tables/zzzz__DetailedLocalizationTable_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AssetTable)
namespace UnityEngine::Localization::Tables {
class AssetTableEntry;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization {
class IPreloadRequired;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class AssetTable;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::AssetTable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::AssetTable*, "UnityEngine.Localization.Tables", "AssetTable");
// Dependencies UnityEngine.Localization.Tables.DetailedLocalizationTable`1<TEntry>, UnityEngine.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.AssetTable
class CORDL_TYPE AssetTable : public ::UnityEngine::Localization::Tables::DetailedLocalizationTable_1<::UnityEngine::Localization::Tables::AssetTableEntry*> {
public:
// Declarations
 __declspec(property(get=get_PreloadOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  PreloadOperation;

 __declspec(property(get=get_ResourceManager)) ::UnityEngine::ResourceManagement::ResourceManager*  ResourceManager;

/// @brief Field m_PreloadOperationHandle, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PreloadOperationHandle, put=__cordl_internal_set_m_PreloadOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_PreloadOperationHandle;

/// @brief Convert operator to "::UnityEngine::Localization::IPreloadRequired"
constexpr operator  ::UnityEngine::Localization::IPreloadRequired*() noexcept;

/// @brief Method CreateTableEntry, addr 0xb017478, size 0xa4, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Tables::AssetTableEntry* CreateTableEntry() ;

/// @brief Method GetAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> GetAssetAsync(::UnityEngine::Localization::Tables::AssetTableEntry*  entry) ;

/// @brief Method GetAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TObject>
requires(::cordl_internals::type_constraint<TObject, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> GetAssetAsync(::UnityEngine::Localization::Tables::TableEntryReference  entryReference) ;

static inline ::UnityEngine::Localization::Tables::AssetTable* New_ctor() ;

/// @brief Method PreloadAssets, addr 0xb0169cc, size 0x60c, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle PreloadAssets() ;

/// @brief Method ReleaseAsset, addr 0xb0172c4, size 0x138, virtual false, abstract: false, final false
inline void ReleaseAsset(::UnityEngine::Localization::Tables::AssetTableEntry*  entry) ;

/// @brief Method ReleaseAsset, addr 0xb0173fc, size 0x7c, virtual false, abstract: false, final false
inline void ReleaseAsset(::UnityEngine::Localization::Tables::TableEntryReference  entry) ;

/// @brief Method ReleaseAssets, addr 0xb016fd8, size 0x2ec, virtual false, abstract: false, final false
inline void ReleaseAssets() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get_m_PreloadOperationHandle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get_m_PreloadOperationHandle() ;

constexpr void __cordl_internal_set_m_PreloadOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// @brief Method .ctor, addr 0xb017588, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_PreloadOperation, addr 0xb016960, size 0x6c, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_PreloadOperation() ;

/// @brief Method get_ResourceManager, addr 0xb01695c, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::ResourceManager* get_ResourceManager() ;

/// @brief Convert to "::UnityEngine::Localization::IPreloadRequired"
constexpr ::UnityEngine::Localization::IPreloadRequired* i___UnityEngine__Localization__IPreloadRequired() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetTable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetTable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetTable(AssetTable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetTable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetTable(AssetTable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25072};

/// @brief Field m_PreloadOperationHandle, offset: 0x48, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ___m_PreloadOperationHandle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::AssetTable, ___m_PreloadOperationHandle) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::AssetTable) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
