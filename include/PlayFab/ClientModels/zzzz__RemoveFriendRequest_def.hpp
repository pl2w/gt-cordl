#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveFriendRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(RemoveFriendRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class RemoveFriendRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::RemoveFriendRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::RemoveFriendRequest*, "PlayFab.ClientModels", "RemoveFriendRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.RemoveFriendRequest
class CORDL_TYPE RemoveFriendRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FriendPlayFabId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendPlayFabId, put=__cordl_internal_set_FriendPlayFabId)) ::StringW  FriendPlayFabId;

static inline ::PlayFab::ClientModels::RemoveFriendRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FriendPlayFabId() const;

constexpr ::StringW& __cordl_internal_get_FriendPlayFabId() ;

constexpr void __cordl_internal_set_FriendPlayFabId(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84e1a0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RemoveFriendRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RemoveFriendRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RemoveFriendRequest(RemoveFriendRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RemoveFriendRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RemoveFriendRequest(RemoveFriendRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20199};

/// @brief Field FriendPlayFabId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FriendPlayFabId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::RemoveFriendRequest, ___FriendPlayFabId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::RemoveFriendRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
