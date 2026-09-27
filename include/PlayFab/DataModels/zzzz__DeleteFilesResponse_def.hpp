#pragma once
// IWYU pragma private; include "PlayFab/DataModels/DeleteFilesResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeleteFilesResponse)
namespace PlayFab::DataModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::DataModels {
class DeleteFilesResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::DeleteFilesResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::DeleteFilesResponse*, "PlayFab.DataModels", "DeleteFilesResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.DeleteFilesResponse
class CORDL_TYPE DeleteFilesResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

/// @brief Field ProfileVersion, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_ProfileVersion, put=__cordl_internal_set_ProfileVersion)) int32_t  ProfileVersion;

static inline ::PlayFab::DataModels::DeleteFilesResponse* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr int32_t const& __cordl_internal_get_ProfileVersion() const;

constexpr int32_t& __cordl_internal_get_ProfileVersion() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

constexpr void __cordl_internal_set_ProfileVersion(int32_t  value) ;

/// @brief Method .ctor, addr 0xa842e84, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteFilesResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteFilesResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteFilesResponse(DeleteFilesResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteFilesResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteFilesResponse(DeleteFilesResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19851};

/// @brief Field Entity, offset: 0x20, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

/// @brief Field ProfileVersion, offset: 0x28, size: 0x4, def value: None
 int32_t  ___ProfileVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::DeleteFilesResponse, ___Entity) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::DataModels::DeleteFilesResponse, ___ProfileVersion) == 0x28, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::DeleteFilesResponse) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::DataModels
