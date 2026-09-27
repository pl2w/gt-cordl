#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ReportPlayerClientResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ReportPlayerClientResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ReportPlayerClientResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ReportPlayerClientResult::*)()>(&::PlayFab::ClientModels::ReportPlayerClientResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ReportPlayerClientResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& PlayFab::ClientModels::ReportPlayerClientResult::__cordl_internal_get_SubmissionsRemaining()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmissionsRemaining;
}
constexpr int32_t const& PlayFab::ClientModels::ReportPlayerClientResult::__cordl_internal_get_SubmissionsRemaining() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SubmissionsRemaining;
}
constexpr void PlayFab::ClientModels::ReportPlayerClientResult::__cordl_internal_set_SubmissionsRemaining(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SubmissionsRemaining = value;
}
inline void PlayFab::ClientModels::ReportPlayerClientResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ReportPlayerClientResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ReportPlayerClientResult* PlayFab::ClientModels::ReportPlayerClientResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ReportPlayerClientResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ReportPlayerClientResult::ReportPlayerClientResult()   {
}
