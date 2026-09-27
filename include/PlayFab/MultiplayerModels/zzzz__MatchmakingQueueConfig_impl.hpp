#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchmakingQueueConfig.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingQueueConfig_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DifferenceRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchTotalRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchmakingQueueTeam_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__RegionSelectionRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__SetIntersectionRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__StatisticsVisibilityToPlayers_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__StringEqualityRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TeamDifferenceRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TeamSizeBalanceRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TeamTicketSizeSimilarityRule_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::MatchmakingQueueConfig._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::MatchmakingQueueConfig::*)()>(&::PlayFab::MultiplayerModels::MatchmakingQueueConfig::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_BuildId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_BuildId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildId;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_BuildId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildId = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_DifferenceRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DifferenceRules;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_DifferenceRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DifferenceRules;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_DifferenceRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::DifferenceRule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DifferenceRules = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MatchTotalRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchTotalRules;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MatchTotalRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MatchTotalRules;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_MatchTotalRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchTotalRule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MatchTotalRules = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MaxMatchSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMatchSize;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MaxMatchSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxMatchSize;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_MaxMatchSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxMatchSize = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MaxTicketSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTicketSize;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MaxTicketSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxTicketSize;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_MaxTicketSize(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxTicketSize = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MinMatchSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinMatchSize;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_MinMatchSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinMatchSize;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_MinMatchSize(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinMatchSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::PlayFab::MultiplayerModels::RegionSelectionRule*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_RegionSelectionRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionSelectionRule;
}
constexpr ::PlayFab::MultiplayerModels::RegionSelectionRule* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_RegionSelectionRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___RegionSelectionRule;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_RegionSelectionRule(::PlayFab::MultiplayerModels::RegionSelectionRule*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___RegionSelectionRule = value;
}
constexpr bool& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_ServerAllocationEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerAllocationEnabled;
}
constexpr bool const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_ServerAllocationEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ServerAllocationEnabled;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_ServerAllocationEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ServerAllocationEnabled = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_SetIntersectionRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetIntersectionRules;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_SetIntersectionRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SetIntersectionRules;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_SetIntersectionRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::SetIntersectionRule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SetIntersectionRules = value;
}
constexpr ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_StatisticsVisibilityToPlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticsVisibilityToPlayers;
}
constexpr ::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_StatisticsVisibilityToPlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StatisticsVisibilityToPlayers;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_StatisticsVisibilityToPlayers(::PlayFab::MultiplayerModels::StatisticsVisibilityToPlayers*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StatisticsVisibilityToPlayers = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_StringEqualityRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StringEqualityRules;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_StringEqualityRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StringEqualityRules;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_StringEqualityRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::StringEqualityRule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StringEqualityRules = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_TeamDifferenceRules()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamDifferenceRules;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_TeamDifferenceRules() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamDifferenceRules;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_TeamDifferenceRules(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::TeamDifferenceRule*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeamDifferenceRules = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_Teams()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Teams;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_Teams() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Teams;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_Teams(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::MatchmakingQueueTeam*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Teams = value;
}
constexpr ::PlayFab::MultiplayerModels::TeamSizeBalanceRule*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_TeamSizeBalanceRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamSizeBalanceRule;
}
constexpr ::PlayFab::MultiplayerModels::TeamSizeBalanceRule* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_TeamSizeBalanceRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamSizeBalanceRule;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_TeamSizeBalanceRule(::PlayFab::MultiplayerModels::TeamSizeBalanceRule*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeamSizeBalanceRule = value;
}
constexpr ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_TeamTicketSizeSimilarityRule()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamTicketSizeSimilarityRule;
}
constexpr ::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule* const& PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_get_TeamTicketSizeSimilarityRule() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TeamTicketSizeSimilarityRule;
}
constexpr void PlayFab::MultiplayerModels::MatchmakingQueueConfig::__cordl_internal_set_TeamTicketSizeSimilarityRule(::PlayFab::MultiplayerModels::TeamTicketSizeSimilarityRule*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TeamTicketSizeSimilarityRule = value;
}
inline void PlayFab::MultiplayerModels::MatchmakingQueueConfig::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::MatchmakingQueueConfig* PlayFab::MultiplayerModels::MatchmakingQueueConfig::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::MatchmakingQueueConfig*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::MatchmakingQueueConfig::MatchmakingQueueConfig()   {
}
