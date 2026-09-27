#pragma once
// IWYU pragma private; include "PlayFab/DataModels/InitiateFileUploadsResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(InitiateFileUploadsResponse)
namespace PlayFab::DataModels {
class EntityKey;
}
namespace PlayFab::DataModels {
class InitiateFileUploadMetadata;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::DataModels {
class InitiateFileUploadsResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::InitiateFileUploadsResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::InitiateFileUploadsResponse*, "PlayFab.DataModels", "InitiateFileUploadsResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.InitiateFileUploadsResponse
class CORDL_TYPE InitiateFileUploadsResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

/// @brief Field ProfileVersion, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

/// @brief Field UploadDetails, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_UploadDetails, put=__cordl_internal_set_UploadDetails)) ::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>*  UploadDetails;

static inline ::PlayFab::DataModels::InitiateFileUploadsResponse* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>* const& __cordl_internal_get_UploadDetails() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>*& __cordl_internal_get_UploadDetails() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

constexpr void __cordl_internal_set_UploadDetails(::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>*  value) ;

/// @brief Method .ctor, addr 0xa842edc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitiateFileUploadsResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitiateFileUploadsResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitiateFileUploadsResponse(InitiateFileUploadsResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitiateFileUploadsResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitiateFileUploadsResponse(InitiateFileUploadsResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19862};

/// @brief Field Entity, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

/// @brief Field ProfileVersion, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

/// @brief Field UploadDetails, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::DataModels::InitiateFileUploadMetadata*>*  ___UploadDetails;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::InitiateFileUploadsResponse, ___Entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::InitiateFileUploadsResponse, ___ProfileVersion) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::InitiateFileUploadsResponse, ___UploadDetails) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::InitiateFileUploadsResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::DataModels
