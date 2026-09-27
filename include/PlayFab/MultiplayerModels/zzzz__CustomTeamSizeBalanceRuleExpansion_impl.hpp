#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CustomTeamSizeBalanceRuleExpansion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CustomTeamSizeBalanceRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__OverrideUnsignedInt_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::*)()>(&::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>*& PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::__cordl_internal_get_DifferenceOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DifferenceOverrides;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>* const& PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::__cordl_internal_get_DifferenceOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DifferenceOverrides;
}
constexpr void PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::__cordl_internal_set_DifferenceOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DifferenceOverrides = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr void PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::__cordl_internal_set_SecondsBetweenExpansions(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsBetweenExpansions = value;
}
inline void PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion* PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion::CustomTeamSizeBalanceRuleExpansion()   {
}
