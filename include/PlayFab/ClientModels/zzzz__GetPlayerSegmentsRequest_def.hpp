#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerSegmentsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerSegmentsRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerSegmentsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerSegmentsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerSegmentsRequest*, "PlayFab.ClientModels", "GetPlayerSegmentsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerSegmentsRequest
class CORDL_TYPE GetPlayerSegmentsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::GetPlayerSegmentsRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84dcf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerSegmentsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerSegmentsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerSegmentsRequest(GetPlayerSegmentsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerSegmentsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerSegmentsRequest(GetPlayerSegmentsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20045};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::GetPlayerSegmentsRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
