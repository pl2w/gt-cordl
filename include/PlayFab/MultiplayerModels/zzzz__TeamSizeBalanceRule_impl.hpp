#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TeamSizeBalanceRule.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TeamSizeBalanceRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CustomTeamSizeBalanceRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__LinearTeamSizeBalanceRuleExpansion_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::TeamSizeBalanceRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::TeamSizeBalanceRule::*)()>(&::PlayFab::MultiplayerModels::TeamSizeBalanceRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TeamSizeBalanceRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_CustomExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr ::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion* const& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_CustomExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr void PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomTeamSizeBalanceRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomExpansion = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_Difference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Difference;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_Difference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Difference;
}
constexpr void PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_set_Difference(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Difference = value;
}
constexpr ::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_LinearExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr ::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion* const& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_LinearExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr void PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearTeamSizeBalanceRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinearExpansion = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_SecondsUntilOptional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_get_SecondsUntilOptional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr void PlayFab::MultiplayerModels::TeamSizeBalanceRule::__cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsUntilOptional = value;
}
inline void PlayFab::MultiplayerModels::TeamSizeBalanceRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TeamSizeBalanceRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::TeamSizeBalanceRule* PlayFab::MultiplayerModels::TeamSizeBalanceRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::TeamSizeBalanceRule*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::TeamSizeBalanceRule::TeamSizeBalanceRule()   {
}
