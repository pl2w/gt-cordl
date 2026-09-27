#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetMultiplayerSessionLogsBySessionIdRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetMultiplayerSessionLogsBySessionIdRequest)
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetMultiplayerSessionLogsBySessionIdRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest*, "PlayFab.MultiplayerModels", "GetMultiplayerSessionLogsBySessionIdRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetMultiplayerSessionLogsBySessionIdRequest
class CORDL_TYPE GetMultiplayerSessionLogsBySessionIdRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field SessionId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_SessionId, put=__cordl_internal_set_SessionId)) ::StringW  SessionId;

static inline ::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_SessionId() const;

constexpr ::StringW& __cordl_internal_get_SessionId() ;

constexpr void __cordl_internal_set_SessionId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa8409e0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetMultiplayerSessionLogsBySessionIdRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetMultiplayerSessionLogsBySessionIdRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetMultiplayerSessionLogsBySessionIdRequest(GetMultiplayerSessionLogsBySessionIdRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetMultiplayerSessionLogsBySessionIdRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetMultiplayerSessionLogsBySessionIdRequest(GetMultiplayerSessionLogsBySessionIdRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19662};

/// @brief Field SessionId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___SessionId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest, ___SessionId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetMultiplayerSessionLogsBySessionIdRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
