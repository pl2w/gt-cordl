#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetCharacterLeaderboardRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetCharacterLeaderboardRequest)
// Forward declare root types
namespace PlayFab::ClientModels {
class GetCharacterLeaderboardRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetCharacterLeaderboardRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetCharacterLeaderboardRequest*, "PlayFab.ClientModels", "GetCharacterLeaderboardRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon, System.Nullable`1<T>
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetCharacterLeaderboardRequest
class CORDL_TYPE GetCharacterLeaderboardRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field CharacterType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_CharacterType, put=__cordl_internal_set_CharacterType)) ::StringW  CharacterType;

/// @brief Field MaxResultsCount, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_MaxResultsCount, put=__cordl_internal_set_MaxResultsCount)) ::System::Nullable_1<int32_t>  MaxResultsCount;

/// @brief Field StartPosition, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_StartPosition, put=__cordl_internal_set_StartPosition)) int32_t  StartPosition;

/// @brief Field StatisticName, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticName, put=__cordl_internal_set_StatisticName)) ::StringW  StatisticName;

static inline ::PlayFab::ClientModels::GetCharacterLeaderboardRequest* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_CharacterType() const;

constexpr ::StringW& __cordl_internal_get_CharacterType() ;

constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get_MaxResultsCount() const;

constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get_MaxResultsCount() ;

constexpr int32_t const& __cordl_internal_get_StartPosition() const;

constexpr int32_t& __cordl_internal_get_StartPosition() ;

constexpr ::StringW const& __cordl_internal_get_StatisticName() const;

constexpr ::StringW& __cordl_internal_get_StatisticName() ;

constexpr void __cordl_internal_set_CharacterType(::StringW  value) ;

constexpr void __cordl_internal_set_MaxResultsCount(::System::Nullable_1<int32_t>  value) ;

constexpr void __cordl_internal_set_StartPosition(int32_t  value) ;

constexpr void __cordl_internal_set_StatisticName(::StringW  value) ;

/// @brief Method .ctor, addr 0xa84dc08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetCharacterLeaderboardRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterLeaderboardRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetCharacterLeaderboardRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetCharacterLeaderboardRequest(GetCharacterLeaderboardRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20016};

/// @brief Field CharacterType, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___CharacterType;

/// @brief Field MaxResultsCount, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<int32_t>  ___MaxResultsCount;

/// @brief Field StartPosition, offset: 0x30, size: 0x4, def value: None
 int32_t  ___StartPosition;

/// @brief Field StatisticName, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___StatisticName;

/// @brief Size padding 0x38 - 0x40 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetCharacterLeaderboardRequest, ___CharacterType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterLeaderboardRequest, ___MaxResultsCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterLeaderboardRequest, ___StartPosition) == 0x30, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetCharacterLeaderboardRequest, ___StatisticName) == 0x38, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetCharacterLeaderboardRequest) == 0x38, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
