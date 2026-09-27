#pragma once
// IWYU pragma private; include "PlayFab/DataModels/GetFilesRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetFilesRequest)
namespace PlayFab::DataModels {
class EntityKey;
}
// Forward declare root types
namespace PlayFab::DataModels {
class GetFilesRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::DataModels::GetFilesRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::DataModels::GetFilesRequest*, "PlayFab.DataModels", "GetFilesRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::DataModels {
// Is value type: false
// CS Name: PlayFab.DataModels.GetFilesRequest
class CORDL_TYPE GetFilesRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Entity, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Entity, put=__cordl_internal_set_Entity)) ::PlayFab::DataModels::EntityKey*  Entity;

static inline ::PlayFab::DataModels::GetFilesRequest* New_ctor() ;

constexpr ::PlayFab::DataModels::EntityKey* const& __cordl_internal_get_Entity() const;

constexpr ::PlayFab::DataModels::EntityKey*& __cordl_internal_get_Entity() ;

constexpr void __cordl_internal_set_Entity(::PlayFab::DataModels::EntityKey*  value) ;

/// @brief Method .ctor, addr 0xa842eac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetFilesRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetFilesRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetFilesRequest(GetFilesRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetFilesRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetFilesRequest(GetFilesRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19856};

/// @brief Field Entity, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::DataModels::EntityKey*  ___Entity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::DataModels::GetFilesRequest, ___Entity) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::DataModels::GetFilesRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::DataModels
