#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/AssetTableEntry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Tables/zzzz__TableEntry_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AssetTableEntry)
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class AssetTableEntry;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::AssetTableEntry*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::AssetTableEntry*, "UnityEngine.Localization.Tables", "AssetTableEntry");
// Dependencies UnityEngine.Localization.Tables.TableEntry, UnityEngine.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.AssetTableEntry
class CORDL_TYPE AssetTableEntry : public ::UnityEngine::Localization::Tables::TableEntry {
public:
// Declarations
 __declspec(property(get=get_Address, put=set_Address)) ::StringW  Address;

 __declspec(property(get=get_AsyncOperation, put=set_AsyncOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  AsyncOperation;

 __declspec(property(get=get_Guid, put=set_Guid)) ::StringW  Guid;

 __declspec(property(get=get_IsEmpty)) bool  IsEmpty;

 __declspec(property(get=get_IsSubAsset)) bool  IsSubAsset;

 __declspec(property(get=get_PreloadAsyncOperation, put=set_PreloadAsyncOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  PreloadAsyncOperation;

 __declspec(property(get=get_SubAssetName)) ::StringW  SubAssetName;

/// @brief Field <AsyncOperation>k__BackingField, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get__AsyncOperation_k__BackingField, put=__cordl_internal_set__AsyncOperation_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _AsyncOperation_k__BackingField;

/// @brief Field <PreloadAsyncOperation>k__BackingField, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__PreloadAsyncOperation_k__BackingField, put=__cordl_internal_set__PreloadAsyncOperation_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  _PreloadAsyncOperation_k__BackingField;

/// @brief Field m_GuidCache, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GuidCache, put=__cordl_internal_set_m_GuidCache)) ::StringW  m_GuidCache;

/// @brief Field m_SubAssetNameCache, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SubAssetNameCache, put=__cordl_internal_set_m_SubAssetNameCache)) ::StringW  m_SubAssetNameCache;

/// @brief Method GetExpectedType, addr 0xb0165d0, size 0x38c, virtual false, abstract: false, final false
inline ::System::Type* GetExpectedType() ;

static inline ::UnityEngine::Localization::Tables::AssetTableEntry* New_ctor() ;

/// @brief Method RemoveFromTable, addr 0xb016428, size 0x190, virtual false, abstract: false, final false
inline void RemoveFromTable() ;

/// @brief Method SetAssetOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline void SetAssetOverride(T  asset) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get__AsyncOperation_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get__AsyncOperation_k__BackingField() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>> const& __cordl_internal_get__PreloadAsyncOperation_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>& __cordl_internal_get__PreloadAsyncOperation_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_GuidCache() const;

constexpr ::StringW& __cordl_internal_get_m_GuidCache() ;

constexpr ::StringW const& __cordl_internal_get_m_SubAssetNameCache() const;

constexpr ::StringW& __cordl_internal_get_m_SubAssetNameCache() ;

constexpr void __cordl_internal_set__AsyncOperation_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr void __cordl_internal_set__PreloadAsyncOperation_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  value) ;

constexpr void __cordl_internal_set_m_GuidCache(::StringW  value) ;

constexpr void __cordl_internal_set_m_SubAssetNameCache(::StringW  value) ;

/// @brief Method .ctor, addr 0xb016418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Address, addr 0xb016300, size 0x18, virtual false, abstract: false, final false
inline ::StringW get_Address() ;

/// [CompilerGenerated]
/// @brief Method get_AsyncOperation, addr 0xb0162c8, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_AsyncOperation() ;

/// @brief Method get_Guid, addr 0xb016358, size 0x44, virtual false, abstract: false, final false
inline ::StringW get_Guid() ;

/// @brief Method get_IsEmpty, addr 0xb0163e4, size 0x1c, virtual false, abstract: false, final false
inline bool get_IsEmpty() ;

/// @brief Method get_IsSubAsset, addr 0xb016400, size 0x18, virtual false, abstract: false, final false
inline bool get_IsSubAsset() ;

/// [CompilerGenerated]
/// @brief Method get_PreloadAsyncOperation, addr 0xb016290, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>> get_PreloadAsyncOperation() ;

/// @brief Method get_SubAssetName, addr 0xb0163a0, size 0x44, virtual false, abstract: false, final false
inline ::StringW get_SubAssetName() ;

/// @brief Method set_Address, addr 0xb016318, size 0x40, virtual false, abstract: false, final false
inline void set_Address(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_AsyncOperation, addr 0xb0162dc, size 0x24, virtual false, abstract: false, final false
inline void set_AsyncOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// @brief Method set_Guid, addr 0xb01639c, size 0x4, virtual false, abstract: false, final false
inline void set_Guid(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_PreloadAsyncOperation, addr 0xb0162a4, size 0x24, virtual false, abstract: false, final false
inline void set_PreloadAsyncOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetTableEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetTableEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetTableEntry(AssetTableEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetTableEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetTableEntry(AssetTableEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25071};

/// [CompilerGenerated]
/// @brief Field <PreloadAsyncOperation>k__BackingField, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::ArrayW<::UnityW<::UnityEngine::Object>>>  ____PreloadAsyncOperation_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <AsyncOperation>k__BackingField, offset: 0x40, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ____AsyncOperation_k__BackingField;

/// @brief Field m_GuidCache, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___m_GuidCache;

/// @brief Field m_SubAssetNameCache, offset: 0x60, size: 0x8, def value: None
 ::StringW  ___m_SubAssetNameCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::AssetTableEntry, ____PreloadAsyncOperation_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::AssetTableEntry, ____AsyncOperation_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::AssetTableEntry, ___m_GuidCache) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::AssetTableEntry, ___m_SubAssetNameCache) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::AssetTableEntry) == 0x68, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
