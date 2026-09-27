#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/CustomSetIntersectionRuleExpansion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__CustomSetIntersectionRuleExpansion_def.hpp"
#include "PlayFab/MultiplayerModels/zzzz__OverrideUnsignedInt_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::*)()>(&::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8408c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>*& PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::__cordl_internal_get_MinIntersectionSizeOverrides()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinIntersectionSizeOverrides;
}
constexpr ::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>* const& PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::__cordl_internal_get_MinIntersectionSizeOverrides() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinIntersectionSizeOverrides;
}
constexpr void PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::__cordl_internal_set_MinIntersectionSizeOverrides(::System::Collections::Generic::List_1<::PlayFab::MultiplayerModels::OverrideUnsignedInt*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinIntersectionSizeOverrides = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr void PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::__cordl_internal_set_SecondsBetweenExpansions(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsBetweenExpansions = value;
}
inline void PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion* PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::CustomSetIntersectionRuleExpansion::CustomSetIntersectionRuleExpansion()   {
}
