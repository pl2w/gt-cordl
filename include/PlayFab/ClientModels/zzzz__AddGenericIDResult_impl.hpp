#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/AddGenericIDResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__AddGenericIDResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::AddGenericIDResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::AddGenericIDResult::*)()>(&::PlayFab::ClientModels::AddGenericIDResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84da08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddGenericIDResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::AddGenericIDResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::AddGenericIDResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::AddGenericIDResult* PlayFab::ClientModels::AddGenericIDResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::AddGenericIDResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::AddGenericIDResult::AddGenericIDResult()   {
}
