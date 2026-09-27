#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CustomDifferenceRuleExpansion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CustomDifferenceRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__OverrideDouble_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::*)()>(&::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*& PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::__cordl_internal_get_DifferenceOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DifferenceOverrides;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>* const& PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::__cordl_internal_get_DifferenceOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DifferenceOverrides;
}
constexpr void PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::__cordl_internal_set_DifferenceOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideDouble*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DifferenceOverrides = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr void PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::__cordl_internal_set_SecondsBetweenExpansions(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsBetweenExpansions = value;
}
inline void PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion* PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion::CustomDifferenceRuleExpansion()   {
}
