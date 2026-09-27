#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetLeaderboardAroundCharacterRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetLeaderboardAroundCharacterRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetLeaderboardAroundCharacterRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest*, "PlayFab.ClientModels", "GetLeaderboardAroundCharacterRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetLeaderboardAroundCharacterRequest
class CORDL_TYPE GetLeaderboardAroundCharacterRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CharacterId, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterId, put=__cordl_internal_set_CharacterId)) ::StringW  CharacterId;

/// @brief Field CharacterType, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterType, put=__cordl_internal_set_CharacterType)) ::StringW  CharacterType;

/// @brief Field MaxResultsCount, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_MaxResultsCount, put=__cordl_internal_set_MaxResultsCount)) ::System::Nullable_1<int32_t>  MaxResultsCount;

/// @brief Field StatisticName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

static inline ::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterId() const;

constexpr ::StringW& __cordl_internal_get_CharacterId() ;

constexpr ::StringW const& __cordl_internal_get_CharacterType() const;

constexpr ::StringW& __cordl_internal_get_CharacterType() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_MaxResultsCount() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_MaxResultsCount() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr void __cordl_internal_set_CharacterId(::StringW  value) ;

constexpr void __cordl_internal_set_CharacterType(::StringW  value) ;

constexpr void __cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dc60, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetLeaderboardAroundCharacterRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardAroundCharacterRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetLeaderboardAroundCharacterRequest(GetLeaderboardAroundCharacterRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetLeaderboardAroundCharacterRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetLeaderboardAroundCharacterRequest(GetLeaderboardAroundCharacterRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20027};

/// @brief Field CharacterId, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterId;

/// @brief Field CharacterType, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___CharacterType;

/// @brief Field MaxResultsCount, offset: 0x28, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___MaxResultsCount;

/// @brief Field StatisticName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest, ___CharacterId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest, ___CharacterType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest, ___MaxResultsCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest, ___StatisticName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetLeaderboardAroundCharacterRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
