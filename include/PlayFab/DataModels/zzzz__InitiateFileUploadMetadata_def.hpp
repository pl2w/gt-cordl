#pragma once
// IWYU pragma private; include "PlayFab/DataModels/InitiateFileUploadMetadata.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(InitiateFileUploadMetadata)
// Forward declare root types
namespace PlayFab::DataModels {
class InitiateFileUploadMetadata;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::InitiateFileUploadMetadata*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::InitiateFileUploadMetadata*, "PlayFab.DataModels", "InitiateFileUploadMetadata");
// Dependencies PlayFab.SharedModels.PlayFabBaseModel
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.InitiateFileUploadMetadata
class CORDL_TYPE InitiateFileUploadMetadata : public ::PlayFab::SharedModels::PlayFabBaseModel {
public:
// Declarations
/// @brief Field FileName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_FileName, put=__cordl_internal_set_FileName)) ::StringW  FileName;

/// @brief Field UploadUrl, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_UploadUrl, put=__cordl_internal_set_UploadUrl)) ::StringW  UploadUrl;

static inline ::PlayFab::DataModels::InitiateFileUploadMetadata* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FileName() const;

constexpr ::StringW& __cordl_internal_get_FileName() ;

constexpr ::StringW const& __cordl_internal_get_UploadUrl() const;

constexpr ::StringW& __cordl_internal_get_UploadUrl() ;

constexpr void __cordl_internal_set_FileName(::StringW  value) ;

constexpr void __cordl_internal_set_UploadUrl(::StringW  value) ;

/// @brief Method .ctor, addr 0xa842ecc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitiateFileUploadMetadata() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitiateFileUploadMetadata", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitiateFileUploadMetadata(InitiateFileUploadMetadata && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitiateFileUploadMetadata", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitiateFileUploadMetadata(InitiateFileUploadMetadata const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19860};

/// @brief Field FileName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___FileName;

/// @brief Field UploadUrl, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___UploadUrl;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::InitiateFileUploadMetadata, ___FileName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::InitiateFileUploadMetadata, ___UploadUrl) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::InitiateFileUploadMetadata) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::DataModels
