#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetFriendsListResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetFriendsListResult)
namespace PlayFab::ClientModels {
class FriendInfo;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetFriendsListResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetFriendsListResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetFriendsListResult*, "PlayFab.ClientModels", "GetFriendsListResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetFriendsListResult
class CORDL_TYPE GetFriendsListResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Friends, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Friends, put=__cordl_internal_set_Friends)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*  Friends;

static inline ::PlayFab::ClientModels::GetFriendsListResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>* const& __cordl_internal_get_Friends() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*& __cordl_internal_get_Friends() ;

constexpr void __cordl_internal_set_Friends(::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*  value) ;

/// @brief Method .ctor, addr 0xa84dc58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetFriendsListResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetFriendsListResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetFriendsListResult(GetFriendsListResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetFriendsListResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetFriendsListResult(GetFriendsListResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20026};

/// @brief Field Friends, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::FriendInfo*>*  ___Friends;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetFriendsListResult, ___Friends) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetFriendsListResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
