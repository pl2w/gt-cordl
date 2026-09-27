#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetFriendLeaderboardRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetFriendLeaderboardRequest)
namespace PlayFab::ClientModels {
class PlayerProfileViewConstraints;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetFriendLeaderboardRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetFriendLeaderboardRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetFriendLeaderboardRequest*, "PlayFab.ClientModels", "GetFriendLeaderboardRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetFriendLeaderboardRequest
class CORDL_TYPE GetFriendLeaderboardRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field IncludeFacebookFriends, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_IncludeFacebookFriends, put=__cordl_internal_set_IncludeFacebookFriends)) ::System::Nullable_1<bool>  IncludeFacebookFriends;

/// @brief Field IncludeSteamFriends, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_IncludeSteamFriends, put=__cordl_internal_set_IncludeSteamFriends)) ::System::Nullable_1<bool>  IncludeSteamFriends;

/// @brief Field MaxResultsCount, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_MaxResultsCount, put=__cordl_internal_set_MaxResultsCount)) ::System::Nullable_1<int32_t>  MaxResultsCount;

/// @brief Field ProfileConstraints, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileConstraints, put=__cordl_internal_set_ProfileConstraints)) ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ProfileConstraints;

/// @brief Field StartPosition, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartPosition, put=__cordl_internal_set_StartPosition)) int32_t  StartPosition;

/// @brief Field StatisticName, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field Version, offset 0x60, size 0x10 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) ::System::Nullable_1<int32_t>  Version;

/// @brief Field XboxToken, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_XboxToken, put=__cordl_internal_set_XboxToken)) ::StringW  XboxToken;

static inline ::PlayFab::ClientModels::GetFriendLeaderboardRequest* New_ctor() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_IncludeFacebookFriends() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_IncludeFacebookFriends() ;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get_IncludeSteamFriends() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get_IncludeSteamFriends() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_MaxResultsCount() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_MaxResultsCount() ;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& __cordl_internal_get_ProfileConstraints() const;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& __cordl_internal_get_ProfileConstraints() ;

constexpr int32_t const& __cordl_internal_get_StartPosition() const;

constexpr int32_t& __cordl_internal_get_StartPosition() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_Version() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_Version() ;

constexpr ::StringW const& __cordl_internal_get_XboxToken() const;

constexpr ::StringW& __cordl_internal_get_XboxToken() ;

constexpr void __cordl_internal_set_IncludeFacebookFriends(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_IncludeSteamFriends(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value) ;

constexpr void __cordl_internal_set_StartPosition(int32_t  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_Version(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_XboxToken(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dc48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetFriendLeaderboardRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetFriendLeaderboardRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetFriendLeaderboardRequest(GetFriendLeaderboardRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetFriendLeaderboardRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetFriendLeaderboardRequest(GetFriendLeaderboardRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20024};

/// @brief Field IncludeFacebookFriends, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___IncludeFacebookFriends;

/// @brief Field IncludeSteamFriends, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<bool>  ___IncludeSteamFriends;

/// @brief Field MaxResultsCount, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___MaxResultsCount;

/// @brief Field ProfileConstraints, offset: 0x48, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ___ProfileConstraints;

/// @brief Field StartPosition, offset: 0x50, size: 0x4, def value: None
 int32_t  ___StartPosition;

/// @brief Size padding 0x50 - 0x78 = 0x28, packed as 0x28
 uint8_t  _cordl_size_padding[0x28];

/// @brief Field StatisticName, offset: 0x58, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field Version, offset: 0x60, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___Version;

/// @brief Field XboxToken, offset: 0x70, size: 0x8, def value: None
 ::StringW  ___XboxToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___IncludeFacebookFriends) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___IncludeSteamFriends) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___MaxResultsCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___ProfileConstraints) == 0x48, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___StartPosition) == 0x50, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___StatisticName) == 0x58, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___Version) == 0x60, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetFriendLeaderboardRequest, ___XboxToken) == 0x70, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetFriendLeaderboardRequest) == 0x50, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
