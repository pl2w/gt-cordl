#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/LinearSetIntersectionRuleExpansion.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__LinearSetIntersectionRuleExpansion_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::*)()>(&::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr uint32_t& PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::__cordl_internal_get_Delta()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delta;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::__cordl_internal_get_Delta() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Delta;
}
constexpr void PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::__cordl_internal_set_Delta(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Delta = value;
}
constexpr uint32_t& PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr uint32_t const& PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::__cordl_internal_get_SecondsBetweenExpansions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SecondsBetweenExpansions;
}
constexpr void PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::__cordl_internal_set_SecondsBetweenExpansions(uint32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SecondsBetweenExpansions = value;
}
inline void PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion* PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::LinearSetIntersectionRuleExpansion::LinearSetIntersectionRuleExpansion()   {
}
