#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetAccountInfoResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetAccountInfoResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__UserAccountInfo_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetAccountInfoResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetAccountInfoResult::*)()>(&::PlayFab::ClientModels::GetAccountInfoResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dbc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetAccountInfoResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::UserAccountInfo*& PlayFab::ClientModels::GetAccountInfoResult::__cordl_internal_get_AccountInfo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountInfo;
}
constexpr ::PlayFab::ClientModels::UserAccountInfo* const& PlayFab::ClientModels::GetAccountInfoResult::__cordl_internal_get_AccountInfo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AccountInfo;
}
constexpr void PlayFab::ClientModels::GetAccountInfoResult::__cordl_internal_set_AccountInfo(::PlayFab::ClientModels::UserAccountInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AccountInfo = value;
}
inline void PlayFab::ClientModels::GetAccountInfoResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetAccountInfoResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetAccountInfoResult* PlayFab::ClientModels::GetAccountInfoResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetAccountInfoResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetAccountInfoResult::GetAccountInfoResult()   {
}
