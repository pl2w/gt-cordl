#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardAroundPlayerRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetLeaderboardAroundPlayerRequest)
namespace PlayFab::ClientModels {
class PlayerProfileViewConstraints;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetLeaderboardAroundPlayerRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest*, "PlayFab.ClientModels", "GetLeaderboardAroundPlayerRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetLeaderboardAroundPlayerRequest
class CORDL_TYPE GetLeaderboardAroundPlayerRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field MaxResultsCount, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_MaxResultsCount, put=__cordl_internal_set_MaxResultsCount)) ::System::Nullable_1<int32_t>  MaxResultsCount;

/// @brief Field PlayFabId, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_PlayFabId, put=__cordl_internal_set_PlayFabId)) ::StringW  PlayFabId;

/// @brief Field ProfileConstraints, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileConstraints, put=__cordl_internal_set_ProfileConstraints)) ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ProfileConstraints;

/// @brief Field StatisticName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field Version, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) ::System::Nullable_1<int32_t>  Version;

static inline ::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest* New_ctor() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_MaxResultsCount() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_MaxResultsCount() ;

constexpr ::StringW const& __cordl_internal_get_PlayFabId() const;

constexpr ::StringW& __cordl_internal_get_PlayFabId() ;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints* const& __cordl_internal_get_ProfileConstraints() const;

constexpr ::PlayFab::ClientModels::PlayerProfileViewConstraints*& __cordl_internal_get_ProfileConstraints() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_Version() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_Version() ;

constexpr void __cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_PlayFabId(::StringW  value) ;

constexpr void __cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_Version(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa84dc70, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLeaderboardAroundPlayerRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardAroundPlayerRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLeaderboardAroundPlayerRequest(GetLeaderboardAroundPlayerRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardAroundPlayerRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLeaderboardAroundPlayerRequest(GetLeaderboardAroundPlayerRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20029};

/// @brief Field MaxResultsCount, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___MaxResultsCount;

/// @brief Field PlayFabId, offset: 0x28, size: 0x8, def value: None
 ::StringW  ___PlayFabId;

/// @brief Field ProfileConstraints, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ___ProfileConstraints;

/// @brief Field StatisticName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field Version, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___Version;

/// @brief Size padding 0x40 - 0x50 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest, ___MaxResultsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest, ___PlayFabId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest, ___ProfileConstraints) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest, ___StatisticName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest, ___Version) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetLeaderboardAroundPlayerRequest) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
