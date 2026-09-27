#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerStatisticsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetPlayerStatisticsRequest)
namespace PlayFab::ClientModels {
class StatisticNameVersion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class GetPlayerStatisticsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::GetPlayerStatisticsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::GetPlayerStatisticsRequest*, "PlayFab.ClientModels", "GetPlayerStatisticsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.GetPlayerStatisticsRequest
class CORDL_TYPE GetPlayerStatisticsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field StatisticNameVersions, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticNameVersions, put=__cordl_internal_set_StatisticNameVersions)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>*  StatisticNameVersions;

/// @brief Field StatisticNames, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_StatisticNames, put=__cordl_internal_set_StatisticNames)) ::System::Collections::Generic::List_1<::StringW>*  StatisticNames;

static inline ::PlayFab::ClientModels::GetPlayerStatisticsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>* const& __cordl_internal_get_StatisticNameVersions() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>*& __cordl_internal_get_StatisticNameVersions() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_StatisticNames() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_StatisticNames() ;

constexpr void __cordl_internal_set_StatisticNameVersions(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>*  value) ;

constexpr void __cordl_internal_set_StatisticNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0xa84dd00, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetPlayerStatisticsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetPlayerStatisticsRequest(GetPlayerStatisticsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetPlayerStatisticsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetPlayerStatisticsRequest(GetPlayerStatisticsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20047};

/// @brief Field StatisticNames, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___StatisticNames;

/// @brief Field StatisticNameVersions, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticNameVersion*>*  ___StatisticNameVersions;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::GetPlayerStatisticsRequest, ___StatisticNames) == 0x18, "Offset mismatch!");

static_assert(offsetof(::PlayFab::ClientModels::GetPlayerStatisticsRequest, ___StatisticNameVersions) == 0x20, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::GetPlayerStatisticsRequest) == 0x28, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
