#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerCombinedInfoRequest)
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequestParams;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerCombinedInfoRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerCombinedInfoRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerCombinedInfoRequest*, "PlayFab.ClientModels", "GetPlayerCombinedInfoRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerCombinedInfoRequest
class CORDL_TYPE GetPlayerCombinedInfoRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field InfoRequestParameters, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_InfoRequestParameters, put=__cordl_internal_set_InfoRequestParameters)) ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  InfoRequestParameters;

/// @brief Field PlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

static inline ::PlayFab::ClientModels::GetPlayerCombinedInfoRequest* New_ctor() ;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams* const& __cordl_internal_get_InfoRequestParameters() const;

constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*& __cordl_internal_get_InfoRequestParameters() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr void __cordl_internal_set_InfoRequestParameters(::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dcc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerCombinedInfoRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerCombinedInfoRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerCombinedInfoRequest(GetPlayerCombinedInfoRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20039};

/// @brief Field InfoRequestParameters, offset: 0x18, size: 0x8, def value: None
 ::PlayFab::ClientModels::GetPlayerCombinedInfoRequestParams*  ___InfoRequestParameters;

/// @brief Field PlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequest, ___InfoRequestParameters) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequest, ___PlayFabId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerCombinedInfoRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
