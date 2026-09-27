#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteBuildAliasRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DeleteBuildAliasRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class DeleteBuildAliasRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::DeleteBuildAliasRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::DeleteBuildAliasRequest*, "PlayFab.MultiplayerModels", "DeleteBuildAliasRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.DeleteBuildAliasRequest
class CORDL_TYPE DeleteBuildAliasRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AliasId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AliasId, put=__cordl_internal_set_AliasId)) ::StringW  AliasId;

static inline ::PlayFab::MultiplayerModels::DeleteBuildAliasRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AliasId() const;

constexpr ::StringW& __cordl_internal_get_AliasId() ;

constexpr void __cordl_internal_set_AliasId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8408e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeleteBuildAliasRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeleteBuildAliasRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DeleteBuildAliasRequest(DeleteBuildAliasRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeleteBuildAliasRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeleteBuildAliasRequest(DeleteBuildAliasRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19630};

/// @brief Field AliasId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AliasId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::DeleteBuildAliasRequest, ___AliasId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::DeleteBuildAliasRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
