#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableEntryData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TableEntryData)
namespace UnityEngine::Localization::Metadata {
class MetadataCollection;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
class TableEntryData;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Tables::TableEntryData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::TableEntryData*, "UnityEngine.Localization.Tables", "TableEntryData");
// Dependencies System.Object
namespace UnityEngine::Localization::Tables {
// Is value type: false
// CS Name: UnityEngine.Localization.Tables.TableEntryData
class CORDL_TYPE TableEntryData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Id, put=set_Id)) int64_t  Id;

 __declspec(property(get=get_Localized, put=set_Localized)) ::StringW  Localized;

 __declspec(property(get=get_Metadata, put=set_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  Metadata;

/// @brief Field m_Id, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Id, put=__cordl_internal_set_m_Id)) int64_t  m_Id;

/// @brief Field m_Localized, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Localized, put=__cordl_internal_set_m_Localized)) ::StringW  m_Localized;

/// @brief Field m_Metadata, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metadata, put=__cordl_internal_set_m_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  m_Metadata;

static inline ::UnityEngine::Localization::Tables::TableEntryData* New_ctor() ;

static inline ::UnityEngine::Localization::Tables::TableEntryData* New_ctor(int64_t  id) ;

static inline ::UnityEngine::Localization::Tables::TableEntryData* New_ctor(int64_t  id, ::StringW  localized) ;

constexpr int64_t const& __cordl_internal_get_m_Id() const;

constexpr int64_t& __cordl_internal_get_m_Id() ;

constexpr ::StringW const& __cordl_internal_get_m_Localized() const;

constexpr ::StringW& __cordl_internal_get_m_Localized() ;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& __cordl_internal_get_m_Metadata() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& __cordl_internal_get_m_Metadata() ;

constexpr void __cordl_internal_set_m_Id(int64_t  value) ;

constexpr void __cordl_internal_set_m_Localized(::StringW  value) ;

constexpr void __cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

/// @brief Method .ctor, addr 0xb01751c, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0xb01ab90, size 0x80, virtual false, abstract: false, final false
inline void _ctor(int64_t  id) ;

/// @brief Method .ctor, addr 0xb01ac10, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int64_t  id, ::StringW  localized) ;

/// @brief Method get_Id, addr 0xb01ab60, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Id() ;

/// @brief Method get_Localized, addr 0xb01ab70, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Localized() ;

/// @brief Method get_Metadata, addr 0xb01ab80, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::MetadataCollection* get_Metadata() ;

/// @brief Method set_Id, addr 0xb01ab68, size 0x8, virtual false, abstract: false, final false
inline void set_Id(int64_t  value) ;

/// @brief Method set_Localized, addr 0xb01ab78, size 0x8, virtual false, abstract: false, final false
inline void set_Localized(::StringW  value) ;

/// @brief Method set_Metadata, addr 0xb01ab88, size 0x8, virtual false, abstract: false, final false
inline void set_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TableEntryData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TableEntryData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TableEntryData(TableEntryData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TableEntryData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TableEntryData(TableEntryData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25086};

/// [SerializeField]
/// @brief Field m_Id, offset: 0x10, size: 0x8, def value: None
 int64_t  ___m_Id;

/// [SerializeField]
/// @brief Field m_Localized, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___m_Localized;

/// [SerializeField]
/// @brief Field m_Metadata, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::Metadata::MetadataCollection*  ___m_Metadata;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntryData, ___m_Id) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntryData, ___m_Localized) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntryData, ___m_Metadata) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::TableEntryData) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
