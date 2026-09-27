#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerStatisticsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerStatisticsResult)
namespace PlayFab::ClientModels {
class StatisticValue;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerStatisticsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerStatisticsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerStatisticsResult*, "PlayFab.ClientModels", "GetPlayerStatisticsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerStatisticsResult
class CORDL_TYPE GetPlayerStatisticsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field Statistics, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_Statistics, put=__cordl_internal_set_Statistics)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  Statistics;

static inline ::PlayFab::ClientModels::GetPlayerStatisticsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>* const& __cordl_internal_get_Statistics() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*& __cordl_internal_get_Statistics() ;

constexpr void __cordl_internal_set_Statistics(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  value) ;

/// @brief Method .ctor, addr 0xa84dd08, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerStatisticsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerStatisticsResult(GetPlayerStatisticsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerStatisticsResult(GetPlayerStatisticsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20048};

/// @brief Field Statistics, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticValue*>*  ___Statistics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerStatisticsResult, ___Statistics) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerStatisticsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
