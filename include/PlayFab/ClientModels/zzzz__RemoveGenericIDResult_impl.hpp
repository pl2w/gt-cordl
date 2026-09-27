#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveGenericIDResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RemoveGenericIDResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RemoveGenericIDResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RemoveGenericIDResult::*)()>(&::PlayFab::ClientModels::RemoveGenericIDResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveGenericIDResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::RemoveGenericIDResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveGenericIDResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RemoveGenericIDResult* PlayFab::ClientModels::RemoveGenericIDResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RemoveGenericIDResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RemoveGenericIDResult::RemoveGenericIDResult()   {
}
