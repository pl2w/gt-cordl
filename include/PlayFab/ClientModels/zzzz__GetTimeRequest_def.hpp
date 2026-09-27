#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTimeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetTimeRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetTimeRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetTimeRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetTimeRequest*, "PlayFab.ClientModels", "GetTimeRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetTimeRequest
class CORDL_TYPE GetTimeRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ClientModels::GetTimeRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa84de38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTimeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTimeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTimeRequest(GetTimeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTimeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTimeRequest(GetTimeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20086};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ClientModels::GetTimeRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
