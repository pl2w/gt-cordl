#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/MultiplayerEmptyRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__MultiplayerEmptyRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::MultiplayerEmptyRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::MultiplayerEmptyRequest::*)()>(&::PlayFab::MultiplayerModels::MultiplayerEmptyRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MultiplayerEmptyRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::MultiplayerModels::MultiplayerEmptyRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::MultiplayerEmptyRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::MultiplayerEmptyRequest* PlayFab::MultiplayerModels::MultiplayerEmptyRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::MultiplayerEmptyRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::MultiplayerEmptyRequest::MultiplayerEmptyRequest()   {
}
