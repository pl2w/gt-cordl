#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/GetGlobalPolicyRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(GetGlobalPolicyRequest)
// Forward declare root types
namespace PlayFab::ProfilesModels {
class GetGlobalPolicyRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::GetGlobalPolicyRequest*, "PlayFab.ProfilesModels", "GetGlobalPolicyRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.GetGlobalPolicyRequest
class CORDL_TYPE GetGlobalPolicyRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
static inline ::PlayFab::ProfilesModels::GetGlobalPolicyRequest* New_ctor() ;

/// @brief Method .ctor, addr 0xa840748, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetGlobalPolicyRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetGlobalPolicyRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetGlobalPolicyRequest(GetGlobalPolicyRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetGlobalPolicyRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetGlobalPolicyRequest(GetGlobalPolicyRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19570};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ProfilesModels::GetGlobalPolicyRequest) == 0x18, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
