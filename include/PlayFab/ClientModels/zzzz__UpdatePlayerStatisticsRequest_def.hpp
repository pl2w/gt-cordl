#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/UpdatePlayerStatisticsRequest.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_def.hpp"
CORDL_MODULE_EXPORT(UpdatePlayerStatisticsRequest)
namespace PlayFab::ClientModels {
class StatisticUpdate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace PlayFab::ClientModels {
class UpdatePlayerStatisticsRequest;
}
// Write type traits
MARK_REF_T(::PlayFab::ClientModels::UpdatePlayerStatisticsRequest*);
DEFINE_IL2CPP_CLASS(::PlayFab::ClientModels::UpdatePlayerStatisticsRequest*, "PlayFab.ClientModels", "UpdatePlayerStatisticsRequest");
// Dependencies PlayFab.SharedModels.PlayFabRequestCommon
namespace PlayFab::ClientModels {
// Is value type: false
// CS Name: PlayFab.ClientModels.UpdatePlayerStatisticsRequest
class CORDL_TYPE UpdatePlayerStatisticsRequest : public ::PlayFab::SharedModels::PlayFabRequestCommon {
public:
// Declarations
/// @brief Field Statistics, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Statistics, put=__cordl_internal_set_Statistics)) ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>*  Statistics;

static inline ::PlayFab::ClientModels::UpdatePlayerStatisticsRequest* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>* const& __cordl_internal_get_Statistics() const;

constexpr ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>*& __cordl_internal_get_Statistics() ;

constexpr void __cordl_internal_set_Statistics(::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>*  value) ;

/// @brief Method .ctor, addr 0xa84e418, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdatePlayerStatisticsRequest() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdatePlayerStatisticsRequest", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdatePlayerStatisticsRequest(UpdatePlayerStatisticsRequest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdatePlayerStatisticsRequest", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdatePlayerStatisticsRequest(UpdatePlayerStatisticsRequest const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20283};

/// @brief Field Statistics, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::PlayFab::ClientModels::StatisticUpdate*>*  ___Statistics;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::PlayFab::ClientModels::UpdatePlayerStatisticsRequest, ___Statistics) == 0x18, "Offset mismatch!");

static_assert(sizeof(::PlayFab::ClientModels::UpdatePlayerStatisticsRequest) == 0x20, "Size mismatch!");

} // namespace end def PlayFab::ClientModels
