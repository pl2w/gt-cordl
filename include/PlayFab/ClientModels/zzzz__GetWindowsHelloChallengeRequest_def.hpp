#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetWindowsHelloChallengeRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetWindowsHelloChallengeRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetWindowsHelloChallengeRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetWindowsHelloChallengeRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetWindowsHelloChallengeRequest*, "PlayFab.ClientModels", "GetWindowsHelloChallengeRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetWindowsHelloChallengeRequest
class CORDL_TYPE GetWindowsHelloChallengeRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field PublicKeyHint, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_PublicKeyHint, put=__cordl_internal_set_PublicKeyHint)) ::StringW  PublicKeyHint;

/// @brief Field TitleId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_TitleId, put=__cordl_internal_set_TitleId)) ::StringW  TitleId;

static inline ::PlayFab::ClientModels::GetWindowsHelloChallengeRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_PublicKeyHint() const;

constexpr ::StringW& __cordl_internal_get_PublicKeyHint() ;

constexpr ::StringW const& __cordl_internal_get_TitleId() const;

constexpr ::StringW& __cordl_internal_get_TitleId() ;

constexpr void __cordl_internal_set_PublicKeyHint(::StringW  value) ;

constexpr void __cordl_internal_set_TitleId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dea8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetWindowsHelloChallengeRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetWindowsHelloChallengeRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetWindowsHelloChallengeRequest(GetWindowsHelloChallengeRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetWindowsHelloChallengeRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetWindowsHelloChallengeRequest(GetWindowsHelloChallengeRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20100};

/// @brief Field PublicKeyHint, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___PublicKeyHint;

/// @brief Field TitleId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___TitleId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetWindowsHelloChallengeRequest, ___PublicKeyHint) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetWindowsHelloChallengeRequest, ___TitleId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetWindowsHelloChallengeRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
