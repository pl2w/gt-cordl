#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UnlinkOpenIdConnectRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UnlinkOpenIdConnectRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class UnlinkOpenIdConnectRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UnlinkOpenIdConnectRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UnlinkOpenIdConnectRequest*, "PlayFab.ClientModels", "UnlinkOpenIdConnectRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UnlinkOpenIdConnectRequest
class CORDL_TYPE UnlinkOpenIdConnectRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field ConnectionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_ConnectionId, put=__cordl_internal_set_ConnectionId)) ::StringW  ConnectionId;

static inline ::PlayFab::ClientModels::UnlinkOpenIdConnectRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_ConnectionId() const;

constexpr ::StringW& __cordl_internal_get_ConnectionId() ;

constexpr void __cordl_internal_set_ConnectionId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e380, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnlinkOpenIdConnectRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnlinkOpenIdConnectRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnlinkOpenIdConnectRequest(UnlinkOpenIdConnectRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnlinkOpenIdConnectRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnlinkOpenIdConnectRequest(UnlinkOpenIdConnectRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20264};

/// @brief Field ConnectionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___ConnectionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UnlinkOpenIdConnectRequest, ___ConnectionId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UnlinkOpenIdConnectRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
