#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddFriendRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(AddFriendRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class AddFriendRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::AddFriendRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::AddFriendRequest*, "PlayFab.ClientModels", "AddFriendRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.AddFriendRequest
class CORDL_TYPE AddFriendRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field FriendEmail, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendEmail, put=__cordl_internal_set_FriendEmail)) ::StringW  FriendEmail;

/// @brief Field FriendPlayFabId, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendPlayFabId, put=__cordl_internal_set_FriendPlayFabId)) ::StringW  FriendPlayFabId;

/// @brief Field FriendTitleDisplayName, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendTitleDisplayName, put=__cordl_internal_set_FriendTitleDisplayName)) ::StringW  FriendTitleDisplayName;

/// @brief Field FriendUsername, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_FriendUsername, put=__cordl_internal_set_FriendUsername)) ::StringW  FriendUsername;

static inline ::PlayFab::ClientModels::AddFriendRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_FriendEmail() const;

constexpr ::StringW& __cordl_internal_get_FriendEmail() ;

constexpr ::StringW const& __cordl_internal_get_FriendPlayFabId() const;

constexpr ::StringW& __cordl_internal_get_FriendPlayFabId() ;

constexpr ::StringW const& __cordl_internal_get_FriendTitleDisplayName() const;

constexpr ::StringW& __cordl_internal_get_FriendTitleDisplayName() ;

constexpr ::StringW const& __cordl_internal_get_FriendUsername() const;

constexpr ::StringW& __cordl_internal_get_FriendUsername() ;

constexpr void __cordl_internal_set_FriendEmail(::StringW  value) ;

constexpr void __cordl_internal_set_FriendPlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_FriendTitleDisplayName(::StringW  value) ;

constexpr void __cordl_internal_set_FriendUsername(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84d9f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddFriendRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddFriendRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddFriendRequest(AddFriendRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddFriendRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddFriendRequest(AddFriendRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19941};

/// @brief Field FriendEmail, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___FriendEmail;

/// @brief Field FriendPlayFabId, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___FriendPlayFabId;

/// @brief Field FriendTitleDisplayName, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___FriendTitleDisplayName;

/// @brief Field FriendUsername, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___FriendUsername;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::AddFriendRequest, ___FriendEmail) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AddFriendRequest, ___FriendPlayFabId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AddFriendRequest, ___FriendTitleDisplayName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::AddFriendRequest, ___FriendUsername) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::AddFriendRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
