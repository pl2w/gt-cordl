#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetWindowsHelloChallengeResponse.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetWindowsHelloChallengeResponse)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetWindowsHelloChallengeResponse;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetWindowsHelloChallengeResponse*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetWindowsHelloChallengeResponse*, "PlayFab.ClientModels", "GetWindowsHelloChallengeResponse");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetWindowsHelloChallengeResponse
class CORDL_TYPE GetWindowsHelloChallengeResponse : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Challenge, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Challenge, put=__cordl_internal_set_Challenge)) ::StringW  Challenge;

static inline ::PlayFab::ClientModels::GetWindowsHelloChallengeResponse* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_Challenge() const;

constexpr ::StringW& __cordl_internal_get_Challenge() ;

constexpr void __cordl_internal_set_Challenge(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84deb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetWindowsHelloChallengeResponse() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetWindowsHelloChallengeResponse", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetWindowsHelloChallengeResponse(GetWindowsHelloChallengeResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetWindowsHelloChallengeResponse", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetWindowsHelloChallengeResponse(GetWindowsHelloChallengeResponse const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20101};

/// @brief Field Challenge, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___Challenge;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetWindowsHelloChallengeResponse, ___Challenge) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetWindowsHelloChallengeResponse) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
