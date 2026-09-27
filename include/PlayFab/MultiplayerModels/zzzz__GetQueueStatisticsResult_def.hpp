#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/GetQueueStatisticsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GetQueueStatisticsResult)
namespace PlayFab::MultiplayerModels {
class Statistics;
}
// Forward declare root types
namespace PlayFab::MultiplayerModels {
class GetQueueStatisticsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::MultiplayerModels::GetQueueStatisticsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::MultiplayerModels::GetQueueStatisticsResult*, "PlayFab.MultiplayerModels", "GetQueueStatisticsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon, System.Nullable`1<T>
namespace PlayFab::MultiplayerModels {
// Is value type: false
// CS Name: PlayFab.MultiplayerModels.GetQueueStatisticsResult
class CORDL_TYPE GetQueueStatisticsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field NumberOfPlayersMatching, offset 0x20, size 0x10 
 __declspec(property(get=__cordl_internal_get_NumberOfPlayersMatching, put=__cordl_internal_set_NumberOfPlayersMatching)) ::System::Nullable_1<uint32_t>  NumberOfPlayersMatching;

/// @brief Field TimeToMatchStatisticsInSeconds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_TimeToMatchStatisticsInSeconds, put=__cordl_internal_set_TimeToMatchStatisticsInSeconds)) ::PlayFab::MultiplayerModels::Statistics*  TimeToMatchStatisticsInSeconds;

static inline ::PlayFab::MultiplayerModels::GetQueueStatisticsResult* New_ctor() ;

constexpr ::System::Nullable_1<uint32_t> const& __cordl_internal_get_NumberOfPlayersMatching() const;

constexpr ::System::Nullable_1<uint32_t>& __cordl_internal_get_NumberOfPlayersMatching() ;

constexpr ::PlayFab::MultiplayerModels::Statistics* const& __cordl_internal_get_TimeToMatchStatisticsInSeconds() const;

constexpr ::PlayFab::MultiplayerModels::Statistics*& __cordl_internal_get_TimeToMatchStatisticsInSeconds() ;

constexpr void __cordl_internal_set_NumberOfPlayersMatching(::System::Nullable_1<uint32_t>  value) ;

constexpr void __cordl_internal_set_TimeToMatchStatisticsInSeconds(::PlayFab::MultiplayerModels::Statistics*  value) ;

/// @brief Method .ctor, addr 0xa8409f0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetQueueStatisticsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetQueueStatisticsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetQueueStatisticsResult(GetQueueStatisticsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetQueueStatisticsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetQueueStatisticsResult(GetQueueStatisticsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19664};

/// @brief Field NumberOfPlayersMatching, offset: 0x20, size: 0x10, def value: None
 ::System::Nullable_1<uint32_t>  ___NumberOfPlayersMatching;

/// @brief Field TimeToMatchStatisticsInSeconds, offset: 0x30, size: 0x8, def value: None
 ::PlayFab::MultiplayerModels::Statistics*  ___TimeToMatchStatisticsInSeconds;

/// @brief Size padding 0x30 - 0x38 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::MultiplayerModels::GetQueueStatisticsResult, ___NumberOfPlayersMatching) == 0x20, "Offset mismatch!");

static_assert(offsetof(::PlayFab::MultiplayerModels::GetQueueStatisticsResult, ___TimeToMatchStatisticsInSeconds) == 0x30, "Offset mismatch!");

static_assert(sizeof(::PlayFab::MultiplayerModels::GetQueueStatisticsResult) == 0x30, "Size mismatch!");

} // namespace end def PlayFab::MultiplayerModels
