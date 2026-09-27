#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetLeaderboardRequest)
namespace PlayFab::ClientModels {
class PlayerProfileViewConstraints;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetLeaderboardRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetLeaderboardRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetLeaderboardRequest*, "PlayFab.ClientModels", "GetLeaderboardRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetLeaderboardRequest
class CORDL_TYPE GetLeaderboardRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field MaxResultsCount, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_MaxResultsCount, put=__cordl_internal_set_MaxResultsCount)) ::System::Nullable_1<int32_t>  MaxResultsCount;

/// @brief Field ProfileConstraints, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_ProfileConstraints, put=__cordl_internal_set_ProfileConstraints)) ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ProfileConstraints;

/// @brief Field StartPosition, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartPosition, put=__cordl_internal_set_StartPosition)) int32_t  StartPosition;

/// @brief Field StatisticName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

/// @brief Field Version, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_Version, put=__cordl_internal_set_Version)) ::System::Nullable_1<int32_t>  Version;

static inline ::PlayFab::ClientModels::GetLeaderboardRequest* New_ctor() ;

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

constexpr void __cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_ProfileConstraints(::PlayFab::ClientModels::PlayerProfileViewConstraints*  value) ;

constexpr void __cordl_internal_set_StartPosition(int32_t  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

constexpr void __cordl_internal_set_Version(::System::Nullable_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xa84dc90, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLeaderboardRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLeaderboardRequest(GetLeaderboardRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLeaderboardRequest(GetLeaderboardRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20033};

/// @brief Field MaxResultsCount, offset: 0x18, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___MaxResultsCount;

/// @brief Field ProfileConstraints, offset: 0x28, size: 0x8, def value: None
 ::PlayFab::ClientModels::PlayerProfileViewConstraints*  ___ProfileConstraints;

/// @brief Field StartPosition, offset: 0x30, size: 0x4, def value: None
 int32_t  ___StartPosition;

/// @brief Field StatisticName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Field Version, offset: 0x40, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___Version;

/// @brief Size padding 0x40 - 0x50 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardRequest, ___MaxResultsCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardRequest, ___ProfileConstraints) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardRequest, ___StartPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardRequest, ___StatisticName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardRequest, ___Version) == 0x40, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetLeaderboardRequest) == 0x40, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
