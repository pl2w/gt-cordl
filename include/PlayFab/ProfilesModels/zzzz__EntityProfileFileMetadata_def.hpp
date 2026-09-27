#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/EntityProfileFileMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntityProfileFileMetadata)
// Forward declare root types
namespace PlayFab::ProfilesModels {
class EntityProfileFileMetadata;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::EntityProfileFileMetadata*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::EntityProfileFileMetadata*, "PlayFab.ProfilesModels", "EntityProfileFileMetadata");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel, System.DateTime
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.EntityProfileFileMetadata
class CORDL_TYPE EntityProfileFileMetadata : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field Checksum, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Checksum, put=__cordl_internal_set_Checksum)) ::StringW  Checksum;

/// @brief Field FileName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileName, put=__cordl_internal_set_FileName)) ::StringW  FileName;

/// @brief Field LastModified, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_LastModified, put=__cordl_internal_set_LastModified)) ::System::DateTime  LastModified;

/// @brief Field Size, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_Size, put=__cordl_internal_set_Size)) int32_t  Size;

static inline ::PlayFab::ProfilesModels::EntityProfileFileMetadata* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Checksum() const;

constexpr ::StringW& __cordl_internal_get_Checksum() ;

constexpr ::StringW const& __cordl_internal_get_FileName() const;

constexpr ::StringW& __cordl_internal_get_FileName() ;

constexpr ::System::DateTime const& __cordl_internal_get_LastModified() const;

constexpr ::System::DateTime& __cordl_internal_get_LastModified() ;

constexpr int32_t const& __cordl_internal_get_Size() const;

constexpr int32_t& __cordl_internal_get_Size() ;

constexpr void __cordl_internal_set_Checksum(::StringW  value) ;

constexpr void __cordl_internal_set_FileName(::StringW  value) ;

constexpr void __cordl_internal_set_LastModified(::System::DateTime  value) ;

constexpr void __cordl_internal_set_Size(int32_t  value) ;

/// @brief Method .ctor, addr 0xa840710, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EntityProfileFileMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EntityProfileFileMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EntityProfileFileMetadata(EntityProfileFileMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EntityProfileFileMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EntityProfileFileMetadata(EntityProfileFileMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19563};

/// @brief Field Checksum, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___Checksum;

/// @brief Field FileName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FileName;

/// @brief Field LastModified, offset: 0x20, size: 0x8, def value: None
 ::System::DateTime  ___LastModified;

/// @brief Field Size, offset: 0x28, size: 0x4, def value: None
 int32_t  ___Size;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileFileMetadata, ___Checksum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileFileMetadata, ___FileName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileFileMetadata, ___LastModified) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ProfilesModels::EntityProfileFileMetadata, ___Size) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ProfilesModels::EntityProfileFileMetadata) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
