#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MatchTotalRuleExpansion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MatchTotalRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__OverrideDouble_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::MatchTotalRuleExpansion::*)()>(&::PlayFab::MultiplayerModels::MatchTotalRuleExpansion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*& PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_get_MaxOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxOverrides;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>* const& PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_get_MaxOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxOverrides;
}
constexpr void PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_set_MaxOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxOverrides = value;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*& PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_get_MinOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinOverrides;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>* const& PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_get_MinOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinOverrides;
}
constexpr void PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_set_MinOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinOverrides = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr void PlayFab::MultiplayerModels::MatchTotalRuleExpansion::__cordl_internal_set_SecondsBetweenExpansions(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsBetweenExpansions = value;
}
inline void PlayFab::MultiplayerModels::MatchTotalRuleExpansion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion* PlayFab::MultiplayerModels::MatchTotalRuleExpansion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::MatchTotalRuleExpansion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::MatchTotalRuleExpansion::MatchTotalRuleExpansion()   {
}
