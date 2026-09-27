#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/StringEqualityRuleExpansion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__StringEqualityRuleExpansion_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::StringEqualityRuleExpansion::*)()>(&::PlayFab::MultiplayerModels::StringEqualityRuleExpansion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<bool>*& PlayFab::MultiplayerModels::StringEqualityRuleExpansion::__cordl_internal_get_EnabledOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnabledOverrides;
}
constexpr ::System::Collections::Generic::List_1<bool>* const& PlayFab::MultiplayerModels::StringEqualityRuleExpansion::__cordl_internal_get_EnabledOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EnabledOverrides;
}
constexpr void PlayFab::MultiplayerModels::StringEqualityRuleExpansion::__cordl_internal_set_EnabledOverrides(::System::Collections::Generic::List_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EnabledOverrides = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::StringEqualityRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::StringEqualityRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr void PlayFab::MultiplayerModels::StringEqualityRuleExpansion::__cordl_internal_set_SecondsBetweenExpansions(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsBetweenExpansions = value;
}
inline void PlayFab::MultiplayerModels::StringEqualityRuleExpansion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion* PlayFab::MultiplayerModels::StringEqualityRuleExpansion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::StringEqualityRuleExpansion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::StringEqualityRuleExpansion::StringEqualityRuleExpansion()   {
}
