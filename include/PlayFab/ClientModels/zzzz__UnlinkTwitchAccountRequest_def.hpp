#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkTwitchAccountRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlinkTwitchAccountRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkTwitchAccountRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkTwitchAccountRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkTwitchAccountRequest*, "PlayFab.ClientModels", "UnlinkTwitchAccountRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkTwitchAccountRequest
class CORDL_TYPE UnlinkTwitchAccountRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field AccessToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_AccessToken, put=__cordl_internal_set_AccessToken)) ::StringW  AccessToken;

static inline ::PlayFab::ClientModels::UnlinkTwitchAccountRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_AccessToken() const;

constexpr ::StringW& __cordl_internal_get_AccessToken() ;

constexpr void __cordl_internal_set_AccessToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e3a8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkTwitchAccountRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkTwitchAccountRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkTwitchAccountRequest(UnlinkTwitchAccountRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkTwitchAccountRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkTwitchAccountRequest(UnlinkTwitchAccountRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20269};

/// @brief Field AccessToken, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___AccessToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlinkTwitchAccountRequest, ___AccessToken) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlinkTwitchAccountRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
