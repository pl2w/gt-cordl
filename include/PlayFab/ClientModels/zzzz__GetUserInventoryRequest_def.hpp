#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetUserInventoryRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetUserInventoryRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetUserInventoryRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetUserInventoryRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetUserInventoryRequest*, "PlayFab.ClientModels", "GetUserInventoryRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetUserInventoryRequest
class CORDL_TYPE GetUserInventoryRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::GetUserInventoryRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84de98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetUserInventoryRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetUserInventoryRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetUserInventoryRequest(GetUserInventoryRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetUserInventoryRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetUserInventoryRequest(GetUserInventoryRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20098};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::GetUserInventoryRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
