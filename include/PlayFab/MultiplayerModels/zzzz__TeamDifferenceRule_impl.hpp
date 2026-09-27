#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/TeamDifferenceRule.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__TeamDifferenceRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CustomTeamDifferenceRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__LinearTeamDifferenceRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__QueueRuleAttribute_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::TeamDifferenceRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::TeamDifferenceRule::*)()>(&::PlayFab::MultiplayerModels::TeamDifferenceRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TeamDifferenceRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute*& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_Attribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attribute;
}
constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute* const& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_Attribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attribute;
}
constexpr void PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_set_Attribute(::PlayFab::MultiplayerModels::QueueRuleAttribute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attribute = value;
}
constexpr ::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion*& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_CustomExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr ::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion* const& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_CustomExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr void PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomTeamDifferenceRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomExpansion = value;
}
constexpr double_t& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_DefaultAttributeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultAttributeValue;
}
constexpr double_t const& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_DefaultAttributeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultAttributeValue;
}
constexpr void PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_set_DefaultAttributeValue(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultAttributeValue = value;
}
constexpr double_t& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_Difference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Difference;
}
constexpr double_t const& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_Difference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Difference;
}
constexpr void PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_set_Difference(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Difference = value;
}
constexpr ::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_LinearExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr ::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion* const& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_LinearExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr void PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearTeamDifferenceRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinearExpansion = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_SecondsUntilOptional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_get_SecondsUntilOptional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr void PlayFab::MultiplayerModels::TeamDifferenceRule::__cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsUntilOptional = value;
}
inline void PlayFab::MultiplayerModels::TeamDifferenceRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::TeamDifferenceRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::TeamDifferenceRule* PlayFab::MultiplayerModels::TeamDifferenceRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::TeamDifferenceRule*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::TeamDifferenceRule::TeamDifferenceRule()   {
}
