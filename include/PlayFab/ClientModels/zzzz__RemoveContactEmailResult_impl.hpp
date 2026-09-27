#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/RemoveContactEmailResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__RemoveContactEmailResult_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::RemoveContactEmailResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::RemoveContactEmailResult::*)()>(&::PlayFab::ClientModels::RemoveContactEmailResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveContactEmailResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::ClientModels::RemoveContactEmailResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::RemoveContactEmailResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::RemoveContactEmailResult* PlayFab::ClientModels::RemoveContactEmailResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::RemoveContactEmailResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::RemoveContactEmailResult::RemoveContactEmailResult()   {
}
