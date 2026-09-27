#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerStatisticVersionsResult.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_def.hpp"
CORDL_MODULE_EXPORT(GetPlayerStatisticVersionsResult)
namespace PlayFab::ClientModels {
class PlayerStatisticVersion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerStatisticVersionsResult;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerStatisticVersionsResult*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerStatisticVersionsResult*, "PlayFab.ClientModels", "GetPlayerStatisticVersionsResult");
// Dependencies PlayFab.SharedModels.PlayFabResultCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerStatisticVersionsResult
class CORDL_TYPE GetPlayerStatisticVersionsResult : public ::PlayFab::SharedModels::PlayFabResultCommon {
public:
// Declarations
/// @brief Field StatisticVersions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticVersions, put=__cordl_internal_set_StatisticVersions)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>*  StatisticVersions;

static inline ::PlayFab::ClientModels::GetPlayerStatisticVersionsResult* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>* const& __cordl_internal_get_StatisticVersions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>*& __cordl_internal_get_StatisticVersions() ;

constexpr void __cordl_internal_set_StatisticVersions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>*  value) ;

/// @brief Method .ctor, addr 0xa84dd18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerStatisticVersionsResult() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticVersionsResult", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticVersionsResult", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerStatisticVersionsResult(GetPlayerStatisticVersionsResult const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20050};

/// @brief Field StatisticVersions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::PlayerStatisticVersion*>*  ___StatisticVersions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerStatisticVersionsResult, ___StatisticVersions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerStatisticVersionsResult) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
