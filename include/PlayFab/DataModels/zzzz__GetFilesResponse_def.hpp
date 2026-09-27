#pragma once
// IWYU pragma private; include "PlayFab/DataModels/GetFilesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetFilesResponse)
namespace PlayFab::DataModels {
class EntityKey;
}
namespace PlayFab::DataModels {
class GetFileMetadata;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace PlayFab::DataModels {
class GetFilesResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::GetFilesResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::GetFilesResponse*, "PlayFab.DataModels", "GetFilesResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.GetFilesResponse
class CORDL_TYPE GetFilesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

/// @brief Field Metadata, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_Metadata, put=__cordl_internal_set_Metadata)) ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>*  Metadata;

/// @brief Field ProfileVersion, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

static inline ::PlayFab::DataModels::GetFilesResponse* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>* const& __cordl_internal_get_Metadata() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>*& __cordl_internal_get_Metadata() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_Metadata(::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>*  value) ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

/// @brief Method .ctor, addr 0xa842eb4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetFilesResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetFilesResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetFilesResponse(GetFilesResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetFilesResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetFilesResponse(GetFilesResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19857};

/// @brief Field Entity, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

/// @brief Field Metadata, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::PlayFab::DataModels::GetFileMetadata*>*  ___Metadata;

/// @brief Field ProfileVersion, offset: 0x30, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::GetFilesResponse, ___Entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::GetFilesResponse, ___Metadata) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::GetFilesResponse, ___ProfileVersion) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::GetFilesResponse) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::DataModels
