#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/SharedTableEntryMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedTableEntryMetadata)
namespace GlobalNamespace {
struct SharedTableEntryMetadata_Entry;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Tables {
class TableEntry;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class SharedTableEntryMetadata;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata*, "UnityEngine.Localization.Metadata", "SharedTableEntryMetadata");
// Dependencies System.Object
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.SharedTableEntryMetadata
class CORDL_TYPE SharedTableEntryMetadata : public ::System::Object {
public:
// Declarations
using Entry = ::GlobalNamespace::SharedTableEntryMetadata_Entry;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field m_Entries, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Entries, put=__cordl_internal_set_m_Entries)) ::System::Collections::Generic::List_1<int64_t>*  m_Entries;

/// @brief Field m_EntriesLookup, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EntriesLookup, put=__cordl_internal_set_m_EntriesLookup)) ::System::Collections::Generic::HashSet_1<int64_t>*  m_EntriesLookup;

/// @brief Field m_SharedEntries, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SharedEntries, put=__cordl_internal_set_m_SharedEntries)) ::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>*  m_SharedEntries;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

/// @brief Method IsRegistered, addr 0xb050e54, size 0x64, virtual false, abstract: false, final false
inline bool IsRegistered(::UnityEngine::Localization::Tables::TableEntry*  entry) ;

static inline ::UnityEngine::Localization::Metadata::SharedTableEntryMetadata* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb051148, size 0x324, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb050f80, size 0x1c8, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method Register, addr 0xb050eb8, size 0x64, virtual false, abstract: false, final false
inline void Register(::UnityEngine::Localization::Tables::TableEntry*  entry) ;

/// @brief Method Unregister, addr 0xb050f1c, size 0x64, virtual false, abstract: false, final false
inline void Unregister(::UnityEngine::Localization::Tables::TableEntry*  entry) ;

constexpr ::System::Collections::Generic::List_1<int64_t>* const& __cordl_internal_get_m_Entries() const;

constexpr ::System::Collections::Generic::List_1<int64_t>*& __cordl_internal_get_m_Entries() ;

constexpr ::System::Collections::Generic::HashSet_1<int64_t>* const& __cordl_internal_get_m_EntriesLookup() const;

constexpr ::System::Collections::Generic::HashSet_1<int64_t>*& __cordl_internal_get_m_EntriesLookup() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>* const& __cordl_internal_get_m_SharedEntries() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>*& __cordl_internal_get_m_SharedEntries() ;

constexpr void __cordl_internal_set_m_Entries(::System::Collections::Generic::List_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_m_EntriesLookup(::System::Collections::Generic::HashSet_1<int64_t>*  value) ;

constexpr void __cordl_internal_set_m_SharedEntries(::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>*  value) ;

/// @brief Method .ctor, addr 0xb05146c, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0xb050e0c, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SharedTableEntryMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SharedTableEntryMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SharedTableEntryMetadata(SharedTableEntryMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SharedTableEntryMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SharedTableEntryMetadata(SharedTableEntryMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25346};

/// [SerializeField]
/// @brief Field m_Entries, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int64_t>*  ___m_Entries;

/// [SerializeField]
/// @brief Field m_SharedEntries, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::SharedTableEntryMetadata_Entry>*  ___m_SharedEntries;

/// @brief Field m_EntriesLookup, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<int64_t>*  ___m_EntriesLookup;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata, ___m_Entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata, ___m_SharedEntries) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata, ___m_EntriesLookup) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::SharedTableEntryMetadata) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
