#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DifferenceRule.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AttributeMergeFunction_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__AttributeNotSpecifiedBehavior_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DifferenceRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CustomDifferenceRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__LinearDifferenceRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__QueueRuleAttribute_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DifferenceRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DifferenceRule::*)()>(&::PlayFab::MultiplayerModels::DifferenceRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DifferenceRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute*& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Attribute()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attribute;
}
constexpr ::PlayFab::MultiplayerModels::QueueRuleAttribute* const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Attribute() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Attribute;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_Attribute(::PlayFab::MultiplayerModels::QueueRuleAttribute*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Attribute = value;
}
constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_AttributeNotSpecifiedBehavior()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeNotSpecifiedBehavior;
}
constexpr ::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_AttributeNotSpecifiedBehavior() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AttributeNotSpecifiedBehavior;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_AttributeNotSpecifiedBehavior(::PlayFab::MultiplayerModels::AttributeNotSpecifiedBehavior  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AttributeNotSpecifiedBehavior = value;
}
constexpr ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_CustomExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr ::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion* const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_CustomExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomDifferenceRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomExpansion = value;
}
constexpr ::System::Nullable_1<double_t>& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_DefaultAttributeValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultAttributeValue;
}
constexpr ::System::Nullable_1<double_t> const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_DefaultAttributeValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DefaultAttributeValue;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_DefaultAttributeValue(::System::Nullable_1<double_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DefaultAttributeValue = value;
}
constexpr double_t& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Difference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Difference;
}
constexpr double_t const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Difference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Difference;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_Difference(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Difference = value;
}
constexpr ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_LinearExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr ::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion* const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_LinearExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearDifferenceRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinearExpansion = value;
}
constexpr ::PlayFab::MultiplayerModels::AttributeMergeFunction& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_MergeFunction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MergeFunction;
}
constexpr ::PlayFab::MultiplayerModels::AttributeMergeFunction const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_MergeFunction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MergeFunction;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_MergeFunction(::PlayFab::MultiplayerModels::AttributeMergeFunction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MergeFunction = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_SecondsUntilOptional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_SecondsUntilOptional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsUntilOptional = value;
}
constexpr double_t& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr double_t const& PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_get_Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr void PlayFab::MultiplayerModels::DifferenceRule::__cordl_internal_set_Weight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight = value;
}
inline void PlayFab::MultiplayerModels::DifferenceRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DifferenceRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DifferenceRule* PlayFab::MultiplayerModels::DifferenceRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DifferenceRule*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DifferenceRule::DifferenceRule()   {
}
