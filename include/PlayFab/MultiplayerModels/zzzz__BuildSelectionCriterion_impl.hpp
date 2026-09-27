#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/BuildSelectionCriterion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__BuildSelectionCriterion_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::BuildSelectionCriterion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::BuildSelectionCriterion::*)()>(&::PlayFab::MultiplayerModels::BuildSelectionCriterion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa8407d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*& PlayFab::MultiplayerModels::BuildSelectionCriterion::__cordl_internal_get_BuildWeightDistribution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildWeightDistribution;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>* const& PlayFab::MultiplayerModels::BuildSelectionCriterion::__cordl_internal_get_BuildWeightDistribution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BuildWeightDistribution;
}
constexpr void PlayFab::MultiplayerModels::BuildSelectionCriterion::__cordl_internal_set_BuildWeightDistribution(::System::Collections::Generic::Dictionary_2<::StringW,uint32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BuildWeightDistribution = value;
}
inline void PlayFab::MultiplayerModels::BuildSelectionCriterion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::BuildSelectionCriterion* PlayFab::MultiplayerModels::BuildSelectionCriterion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::BuildSelectionCriterion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::BuildSelectionCriterion::BuildSelectionCriterion()   {
}
