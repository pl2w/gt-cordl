#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/EmptyResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EmptyResult_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::EmptyResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::EmptyResult::*)()>(&::PlayFab::CloudScriptModels::EmptyResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::EmptyResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void PlayFab::CloudScriptModels::EmptyResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::EmptyResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::EmptyResult* PlayFab::CloudScriptModels::EmptyResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::EmptyResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::EmptyResult::EmptyResult()   {
}
