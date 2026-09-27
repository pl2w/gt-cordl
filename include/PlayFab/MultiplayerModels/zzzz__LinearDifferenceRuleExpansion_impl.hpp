#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/LinearDifferenceRuleExpansion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__LinearDifferenceRuleExpansion_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::*)()>(&::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr double_t& PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_get_Delta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delta;
}
constexpr double_t const& PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_get_Delta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delta;
}
constexpr void PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_set_Delta(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delta = value;
}
constexpr ::System::Nullable_1<double_t>& PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_get_Limit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Limit;
}
constexpr ::System::Nullable_1<double_t> const& PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_get_Limit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Limit;
}
constexpr void PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_set_Limit(::System::Nullable_1<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Limit = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr void PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::__cordl_internal_set_SecondsBetweenExpansions(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsBetweenExpansions = value;
}
inline void PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion* PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion::LinearDifferenceRuleExpansion()   {
}
