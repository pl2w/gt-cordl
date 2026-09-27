#pragma once
// IWYU pragma private; include "PlayFab/InsightsModels/InsightsEmptyRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/InsightsModels/zzzz__InsightsEmptyRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::InsightsModels::InsightsEmptyRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::InsightsModels::InsightsEmptyRequest::*)()>(&::PlayFab::InsightsModels::InsightsEmptyRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::InsightsModels::InsightsEmptyRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::InsightsModels::InsightsEmptyRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::InsightsModels::InsightsEmptyRequest* PlayFab::InsightsModels::InsightsEmptyRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::InsightsModels::InsightsEmptyRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::InsightsModels::InsightsEmptyRequest::InsightsEmptyRequest()   {
}
