#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Metadata/PlatformOverride.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Metadata/zzzz__EntryOverrideType_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlatformOverride)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Localization::Metadata {
struct EntryOverrideType;
}
namespace UnityEngine::Localization::Metadata {
class IEntryOverride;
}
namespace UnityEngine::Localization::Metadata {
class IMetadata;
}
namespace UnityEngine::Localization::Metadata {
class PlatformOverride_PlatformOverrideData;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::Localization::Metadata {
class PlatformOverride;
}
namespace UnityEngine::Localization::Metadata {
class PlatformOverride_PlatformOverrideData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Metadata::PlatformOverride*);
MARK_REF_T(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::PlatformOverride*, "UnityEngine.Localization.Metadata", "PlatformOverride");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*, "UnityEngine.Localization.Metadata", "PlatformOverride/PlatformOverrideData");
// [Metadata(AllowedTypes = (UnityEngine.Localization.Metadata.MetadataType)240, AllowMultiple = false)]
// Dependencies System.Object
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.PlatformOverride
class CORDL_TYPE PlatformOverride : public ::System::Object {
public:
// Declarations
using PlatformOverrideData = ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData;

/// @brief Field m_PlatformOverrides, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PlatformOverrides, put=__cordl_internal_set_m_PlatformOverrides)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>*  m_PlatformOverrides;

/// @brief Field m_PlayerPlatformOverride, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PlayerPlatformOverride, put=__cordl_internal_set_m_PlayerPlatformOverride)) ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*  m_PlayerPlatformOverride;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IEntryOverride"
constexpr operator  ::UnityEngine::Localization::Metadata::IEntryOverride*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr operator  ::UnityEngine::Localization::Metadata::IMetadata*() noexcept;

/// @brief Method AddPlatformEntryOverride, addr 0xb0503cc, size 0x3c, virtual false, abstract: false, final false
inline void AddPlatformEntryOverride(::UnityEngine::RuntimePlatform  platform, ::UnityEngine::Localization::Tables::TableEntryReference  entry) ;

/// @brief Method AddPlatformOverride, addr 0xb05021c, size 0x1b0, virtual false, abstract: false, final false
inline void AddPlatformOverride(::UnityEngine::RuntimePlatform  platform, ::UnityEngine::Localization::Tables::TableReference  table, ::UnityEngine::Localization::Tables::TableEntryReference  entry, ::UnityEngine::Localization::Metadata::EntryOverrideType  entryOverrideType) ;

/// @brief Method AddPlatformTableOverride, addr 0xb0501e8, size 0x34, virtual false, abstract: false, final false
inline void AddPlatformTableOverride(::UnityEngine::RuntimePlatform  platform, ::UnityEngine::Localization::Tables::TableReference  table) ;

/// @brief Method GetOverride, addr 0xb0504dc, size 0x88, virtual true, abstract: false, final true
inline ::UnityEngine::Localization::Metadata::EntryOverrideType GetOverride(::by_ref<::UnityEngine::Localization::Tables::TableReference>  tableReference, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>  tableEntryReference) ;

/// @brief Method GetOverride, addr 0xb050564, size 0x118, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::EntryOverrideType GetOverride(::by_ref<::UnityEngine::Localization::Tables::TableReference>  tableReference, ::by_ref<::UnityEngine::Localization::Tables::TableEntryReference>  tableEntryReference, ::UnityEngine::RuntimePlatform  platform) ;

static inline ::UnityEngine::Localization::Metadata::PlatformOverride* New_ctor() ;

/// @brief Method OnAfterDeserialize, addr 0xb050680, size 0xf8, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb05067c, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method RemovePlatformOverride, addr 0xb050410, size 0xcc, virtual false, abstract: false, final false
inline bool RemovePlatformOverride(::UnityEngine::RuntimePlatform  platform) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>* const& __cordl_internal_get_m_PlatformOverrides() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>*& __cordl_internal_get_m_PlatformOverrides() ;

constexpr ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData* const& __cordl_internal_get_m_PlayerPlatformOverride() const;

constexpr ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*& __cordl_internal_get_m_PlayerPlatformOverride() ;

constexpr void __cordl_internal_set_m_PlatformOverrides(::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>*  value) ;

constexpr void __cordl_internal_set_m_PlayerPlatformOverride(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*  value) ;

/// @brief Method .ctor, addr 0xb050778, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IEntryOverride"
constexpr ::UnityEngine::Localization::Metadata::IEntryOverride* i___UnityEngine__Localization__Metadata__IEntryOverride() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Metadata::IMetadata"
constexpr ::UnityEngine::Localization::Metadata::IMetadata* i___UnityEngine__Localization__Metadata__IMetadata() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformOverride() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformOverride", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformOverride(PlatformOverride && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformOverride", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformOverride(PlatformOverride const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25340};

/// [SerializeField]
/// @brief Field m_PlatformOverrides, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*>*  ___m_PlatformOverrides;

/// @brief Field m_PlayerPlatformOverride, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData*  ___m_PlayerPlatformOverride;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::PlatformOverride, ___m_PlatformOverrides) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::PlatformOverride, ___m_PlayerPlatformOverride) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::PlatformOverride) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
// Dependencies System.Object, UnityEngine.Localization.Metadata.EntryOverrideType, UnityEngine.Localization.Tables.TableEntryReference, UnityEngine.Localization.Tables.TableReference, UnityEngine.RuntimePlatform
namespace UnityEngine::Localization::Metadata {
// Is value type: false
// CS Name: UnityEngine.Localization.Metadata.PlatformOverride/PlatformOverrideData
class CORDL_TYPE PlatformOverride_PlatformOverrideData : public ::System::Object {
public:
// Declarations
/// @brief Field entryOverrideType, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_entryOverrideType, put=__cordl_internal_set_entryOverrideType)) ::UnityEngine::Localization::Metadata::EntryOverrideType  entryOverrideType;

/// @brief Field platform, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_platform, put=__cordl_internal_set_platform)) ::UnityEngine::RuntimePlatform  platform;

/// @brief Field tableEntryReference, offset 0x38, size 0x18 
 __declspec(property(get=__cordl_internal_get_tableEntryReference, put=__cordl_internal_set_tableEntryReference)) ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference;

/// @brief Field tableReference, offset 0x18, size 0x20 
 __declspec(property(get=__cordl_internal_get_tableReference, put=__cordl_internal_set_tableReference)) ::UnityEngine::Localization::Tables::TableReference  tableReference;

static inline ::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData* New_ctor() ;

/// @brief Method ToString, addr 0xb050800, size 0x1f4, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType const& __cordl_internal_get_entryOverrideType() const;

constexpr ::UnityEngine::Localization::Metadata::EntryOverrideType& __cordl_internal_get_entryOverrideType() ;

constexpr ::UnityEngine::RuntimePlatform const& __cordl_internal_get_platform() const;

constexpr ::UnityEngine::RuntimePlatform& __cordl_internal_get_platform() ;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& __cordl_internal_get_tableEntryReference() const;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference& __cordl_internal_get_tableEntryReference() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_tableReference() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_tableReference() ;

constexpr void __cordl_internal_set_entryOverrideType(::UnityEngine::Localization::Metadata::EntryOverrideType  value) ;

constexpr void __cordl_internal_set_platform(::UnityEngine::RuntimePlatform  value) ;

constexpr void __cordl_internal_set_tableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value) ;

constexpr void __cordl_internal_set_tableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

/// @brief Method .ctor, addr 0xb050408, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlatformOverride_PlatformOverrideData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlatformOverride_PlatformOverrideData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformOverride_PlatformOverrideData(PlatformOverride_PlatformOverrideData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformOverride_PlatformOverrideData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformOverride_PlatformOverrideData(PlatformOverride_PlatformOverrideData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25339};

/// @brief Field platform, offset: 0x10, size: 0x4, def value: None
 ::UnityEngine::RuntimePlatform  ___platform;

/// @brief Field entryOverrideType, offset: 0x14, size: 0x4, def value: None
 ::UnityEngine::Localization::Metadata::EntryOverrideType  ___entryOverrideType;

/// @brief Field tableReference, offset: 0x18, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___tableReference;

/// @brief Field tableEntryReference, offset: 0x38, size: 0x18, def value: None
 ::UnityEngine::Localization::Tables::TableEntryReference  ___tableEntryReference;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData, ___platform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData, ___entryOverrideType) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData, ___tableReference) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData, ___tableEntryReference) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Metadata::PlatformOverride_PlatformOverrideData) == 0x50, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Metadata
