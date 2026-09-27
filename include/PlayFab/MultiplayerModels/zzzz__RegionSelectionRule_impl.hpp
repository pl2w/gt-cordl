#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/RegionSelectionRule.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__RegionSelectionRule_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CustomRegionSelectionRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__LinearRegionSelectionRuleExpansion_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::RegionSelectionRule._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::RegionSelectionRule::*)()>(&::PlayFab::MultiplayerModels::RegionSelectionRule::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840bc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RegionSelectionRule*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion*& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_CustomExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr ::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion* const& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_CustomExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomExpansion;
}
constexpr void PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_set_CustomExpansion(::PlayFab::MultiplayerModels::CustomRegionSelectionRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomExpansion = value;
}
constexpr ::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_LinearExpansion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr ::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion* const& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_LinearExpansion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinearExpansion;
}
constexpr void PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_set_LinearExpansion(::PlayFab::MultiplayerModels::LinearRegionSelectionRuleExpansion*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinearExpansion = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_MaxLatency()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLatency;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_MaxLatency() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MaxLatency;
}
constexpr void PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_set_MaxLatency(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MaxLatency = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_Path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_Path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Path;
}
constexpr void PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_set_Path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Path = value;
}
constexpr ::System::Nullable_1<uint32_t>& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_SecondsUntilOptional()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr ::System::Nullable_1<uint32_t> const& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_SecondsUntilOptional() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsUntilOptional;
}
constexpr void PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_set_SecondsUntilOptional(::System::Nullable_1<uint32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsUntilOptional = value;
}
constexpr double_t& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_Weight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr double_t const& PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_get_Weight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Weight;
}
constexpr void PlayFab::MultiplayerModels::RegionSelectionRule::__cordl_internal_set_Weight(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Weight = value;
}
inline void PlayFab::MultiplayerModels::RegionSelectionRule::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RegionSelectionRule*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::RegionSelectionRule* PlayFab::MultiplayerModels::RegionSelectionRule::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::RegionSelectionRule*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::RegionSelectionRule::RegionSelectionRule()   {
}
