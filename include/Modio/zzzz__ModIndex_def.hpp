#pragma once
// IWYU pragma private; include "Modio/ModIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Modio/Mods/zzzz__ModFileState_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ModIndex)
namespace GlobalNamespace {
struct ModIndex__CreateIndexFromScan_d__7;
}
namespace GlobalNamespace {
struct ModIndex__RefreshIndexModObjects_d__16;
}
namespace GlobalNamespace {
struct ModIndex__UpdateIndexForMod_d__9;
}
namespace GlobalNamespace {
struct ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8;
}
namespace Modio::API::SchemaDefinitions {
struct ModObject;
}
namespace Modio::Mods {
struct ModChangeType;
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
class ModIndex_IndexEntry;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Modio {
class ModIndex;
}
namespace Modio {
class ModIndex_IndexEntry;
}
// Write type traits
MARK_REF_T(::Modio::ModIndex*);
MARK_REF_T(::Modio::ModIndex_IndexEntry*);
DEFINE_IL2CPP_CLASS(::Modio::ModIndex*, "Modio", "ModIndex");
DEFINE_IL2CPP_CLASS(::Modio::ModIndex_IndexEntry*, "Modio", "ModIndex/IndexEntry");
// Dependencies System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModIndex
class CORDL_TYPE ModIndex : public ::System::Object {
public:
// Declarations
using _CreateIndexFromScan_d__7 = ::GlobalNamespace::ModIndex__CreateIndexFromScan_d__7;

using _RefreshIndexModObjects_d__16 = ::GlobalNamespace::ModIndex__RefreshIndexModObjects_d__16;

using _UpdateIndexForMod_d__9 = ::GlobalNamespace::ModIndex__UpdateIndexForMod_d__9;

using _UpdateIndexWithMissingEntriesFromScan_d__8 = ::GlobalNamespace::ModIndex__UpdateIndexWithMissingEntriesFromScan_d__8;

using IndexEntry = ::Modio::ModIndex_IndexEntry;

/// @brief Field Index, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Index, put=__cordl_internal_set_Index)) ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>*  Index;

/// @brief [JsonIgnore]
 __declspec(property(get=get_IsDirty, put=set_IsDirty)) bool  IsDirty;

/// @brief Field ModObjectCache, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ModObjectCache, put=__cordl_internal_set_ModObjectCache)) ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>*  ModObjectCache;

/// @brief Field <IsDirty>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsDirty_k__BackingField, put=__cordl_internal_set__IsDirty_k__BackingField)) bool  _IsDirty_k__BackingField;

/// [AsyncStateMachine(typeof(Modio.ModIndex::<CreateIndexFromScan>d__7))]
/// @brief Method CreateIndexFromScan, addr 0xa004ff0, size 0xec, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::Modio::Error*,::Modio::ModIndex*>>* CreateIndexFromScan() ;

/// @brief Method GetEntry, addr 0xa005308, size 0x140, virtual false, abstract: false, final false
inline ::Modio::ModIndex_IndexEntry* GetEntry(::Modio::Mods::Mod*  mod) ;

static inline ::Modio::ModIndex* New_ctor() ;

/// @brief Method OnModObjectUpdate, addr 0xa0056d4, size 0xcc, virtual false, abstract: false, final false
inline void OnModObjectUpdate(::Modio::Mods::Mod*  mod, ::Modio::Mods::ModChangeType  changeType) ;

/// [AsyncStateMachine(typeof(Modio.ModIndex::<RefreshIndexModObjects>d__16))]
/// @brief Method RefreshIndexModObjects, addr 0xa0057a0, size 0xf0, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* RefreshIndexModObjects(bool  installedOnly) ;

/// @brief Method RemoveEntry, addr 0xa005574, size 0xb8, virtual false, abstract: false, final false
inline void RemoveEntry(::Modio::Mods::Mod*  mod) ;

/// @brief Method Shutdown, addr 0xa00562c, size 0xa8, virtual false, abstract: false, final false
inline void Shutdown() ;

/// @brief Method TryGetEntry, addr 0xa00550c, size 0x68, virtual false, abstract: false, final false
inline bool TryGetEntry(::Modio::Mods::ModId  modId, ::by_ref<::Modio::ModIndex_IndexEntry*>  entry) ;

/// [AsyncStateMachine(typeof(Modio.ModIndex::<UpdateIndexForMod>d__9))]
/// @brief Method UpdateIndexForMod, addr 0xa0051e8, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<bool,int64_t>>* UpdateIndexForMod(::Modio::Mods::Mod*  mod) ;

/// [AsyncStateMachine(typeof(Modio.ModIndex::<UpdateIndexWithMissingEntriesFromScan>d__8))]
/// @brief Method UpdateIndexWithMissingEntriesFromScan, addr 0xa0050dc, size 0x10c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* UpdateIndexWithMissingEntriesFromScan() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>* const& __cordl_internal_get_Index() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>*& __cordl_internal_get_Index() ;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>* const& __cordl_internal_get_ModObjectCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>*& __cordl_internal_get_ModObjectCache() ;

constexpr bool const& __cordl_internal_get__IsDirty_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsDirty_k__BackingField() ;

constexpr void __cordl_internal_set_Index(::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>*  value) ;

constexpr void __cordl_internal_set_ModObjectCache(::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>*  value) ;

constexpr void __cordl_internal_set__IsDirty_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0xa004e94, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsDirty, addr 0xa004e84, size 0x8, virtual false, abstract: false, final false
inline bool get_IsDirty() ;

/// [CompilerGenerated]
/// @brief Method set_IsDirty, addr 0xa004e8c, size 0x8, virtual false, abstract: false, final false
inline void set_IsDirty(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIndex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIndex", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIndex(ModIndex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIndex", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIndex(ModIndex const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17456};

/// [JsonProperty]
/// @brief Field Index, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::ModIndex_IndexEntry*>*  ___Index;

/// [JsonProperty]
/// @brief Field ModObjectCache, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int64_t,::Modio::API::SchemaDefinitions::ModObject>*  ___ModObjectCache;

/// [CompilerGenerated]
/// @brief Field <IsDirty>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsDirty_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModIndex, ___Index) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::ModIndex, ___ModObjectCache) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::ModIndex, ____IsDirty_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Modio::ModIndex) == 0x28, "Size mismatch!");

} // namespace end def Modio
// Dependencies Modio.Mods.ModFileState, System.DateTime, System.Object
namespace Modio {
// Is value type: false
// CS Name: Modio.ModIndex/IndexEntry
class CORDL_TYPE ModIndex_IndexEntry : public ::System::Object {
public:
// Declarations
/// @brief Field DownloadedModfileId, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_DownloadedModfileId, put=__cordl_internal_set_DownloadedModfileId)) int64_t  DownloadedModfileId;

/// @brief Field ExpiresAfter, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ExpiresAfter, put=__cordl_internal_set_ExpiresAfter)) ::System::DateTime  ExpiresAfter;

/// @brief Field FileState, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_FileState, put=__cordl_internal_set_FileState)) ::Modio::Mods::ModFileState  FileState;

/// @brief Field InstallationSize, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_InstallationSize, put=__cordl_internal_set_InstallationSize)) int64_t  InstallationSize;

/// @brief Field InstalledModfileId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InstalledModfileId, put=__cordl_internal_set_InstalledModfileId)) int64_t  InstalledModfileId;

/// @brief Field Subscribers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Subscribers, put=__cordl_internal_set_Subscribers)) ::System::Collections::Generic::List_1<int64_t>*  Subscribers;

static inline ::Modio::ModIndex_IndexEntry* New_ctor() ;

constexpr int64_t const& __cordl_internal_get_DownloadedModfileId() const;

constexpr int64_t& __cordl_internal_get_DownloadedModfileId() ;

constexpr ::System::DateTime const& __cordl_internal_get_ExpiresAfter() const;

constexpr ::System::DateTime& __cordl_internal_get_ExpiresAfter() ;

constexpr ::Modio::Mods::ModFileState const& __cordl_internal_get_FileState() const;

constexpr ::Modio::Mods::ModFileState& __cordl_internal_get_FileState() ;

constexpr int64_t const& __cordl_internal_get_InstallationSize() const;

constexpr int64_t& __cordl_internal_get_InstallationSize() ;

constexpr int64_t const& __cordl_internal_get_InstalledModfileId() const;

constexpr int64_t& __cordl_internal_get_InstalledModfileId() ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_Subscribers() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_Subscribers() ;

constexpr void __cordl_internal_set_DownloadedModfileId(int64_t  value) ;

constexpr void __cordl_internal_set_ExpiresAfter(::System::DateTime  value) ;

constexpr void __cordl_internal_set_FileState(::Modio::Mods::ModFileState  value) ;

constexpr void __cordl_internal_set_InstallationSize(int64_t  value) ;

constexpr void __cordl_internal_set_InstalledModfileId(int64_t  value) ;

constexpr void __cordl_internal_set_Subscribers(::System::Collections::Generic::List_1<int64_t>*  value) ;

/// @brief Method .ctor, addr 0xa005448, size 0xc4, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModIndex_IndexEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModIndex_IndexEntry", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModIndex_IndexEntry(ModIndex_IndexEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModIndex_IndexEntry", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModIndex_IndexEntry(ModIndex_IndexEntry const& ) = delete;

/// @brief Field ID_NONE offset 0xffffffff size 0x8
static constexpr int64_t  ID_NONE{static_cast<int64_t>(0xffffffffffffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17451};

/// @brief Field DownloadedModfileId, offset: 0x10, size: 0x8, def value: None
 int64_t  ___DownloadedModfileId;

/// @brief Field InstalledModfileId, offset: 0x18, size: 0x8, def value: None
 int64_t  ___InstalledModfileId;

/// @brief Field InstallationSize, offset: 0x20, size: 0x8, def value: None
 int64_t  ___InstallationSize;

/// @brief Field Subscribers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___Subscribers;

/// @brief Field ExpiresAfter, offset: 0x30, size: 0x8, def value: None
 ::System::DateTime  ___ExpiresAfter;

/// @brief Field FileState, offset: 0x38, size: 0x4, def value: None
 ::Modio::Mods::ModFileState  ___FileState;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::ModIndex_IndexEntry, ___DownloadedModfileId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Modio::ModIndex_IndexEntry, ___InstalledModfileId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Modio::ModIndex_IndexEntry, ___InstallationSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::ModIndex_IndexEntry, ___Subscribers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Modio::ModIndex_IndexEntry, ___ExpiresAfter) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Modio::ModIndex_IndexEntry, ___FileState) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Modio::ModIndex_IndexEntry) == 0x40, "Size mismatch!");

} // namespace end def Modio
