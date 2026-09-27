#pragma once
// IWYU pragma private; include "PlayFab/ProfilesModels/SetGlobalPolicyResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(SetGlobalPolicyResponse)
// Forward declare root types
namespace PlayFab::ProfilesModels {
class SetGlobalPolicyResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ProfilesModels::SetGlobalPolicyResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ProfilesModels::SetGlobalPolicyResponse*, "PlayFab.ProfilesModels", "SetGlobalPolicyResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ProfilesModels {
// Is value type: false
// CS Name: PlayFab.ProfilesModels.SetGlobalPolicyResponse
class CORDL_TYPE SetGlobalPolicyResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
static inline ::PlayFab::ProfilesModels::SetGlobalPolicyResponse* New_ctor() ;

/// @brief Method .ctor, addr 0xa840780, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SetGlobalPolicyResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SetGlobalPolicyResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SetGlobalPolicyResponse(SetGlobalPolicyResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetGlobalPolicyResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetGlobalPolicyResponse(SetGlobalPolicyResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19578};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::PlayFab::ProfilesModels::SetGlobalPolicyResponse) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ProfilesModels
