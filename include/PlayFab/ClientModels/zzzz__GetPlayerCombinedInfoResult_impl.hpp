#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetPlayerCombinedInfoResult.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoResult_def.hpp"
#include "PlayFab/ClientModels/zzzz__GetPlayerCombinedInfoResultPayload_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetPlayerCombinedInfoResult._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetPlayerCombinedInfoResult::*)()>(&::PlayFab::ClientModels::GetPlayerCombinedInfoResult::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dcd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoResult*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*& PlayFab::ClientModels::GetPlayerCombinedInfoResult::__cordl_internal_get_InfoResultPayload()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoResultPayload;
}
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload* const& PlayFab::ClientModels::GetPlayerCombinedInfoResult::__cordl_internal_get_InfoResultPayload() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoResultPayload;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResult::__cordl_internal_set_InfoResultPayload(::PlayFab::ClientModels::GetPlayerCombinedInfoResultPayload*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoResultPayload = value;
}
constexpr ::StringW& PlayFab::ClientModels::GetPlayerCombinedInfoResult::__cordl_internal_get_PlayFabId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr ::StringW const& PlayFab::ClientModels::GetPlayerCombinedInfoResult::__cordl_internal_get_PlayFabId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlayFabId;
}
constexpr void PlayFab::ClientModels::GetPlayerCombinedInfoResult::__cordl_internal_set_PlayFabId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlayFabId = value;
}
inline void PlayFab::ClientModels::GetPlayerCombinedInfoResult::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetPlayerCombinedInfoResult*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetPlayerCombinedInfoResult* PlayFab::ClientModels::GetPlayerCombinedInfoResult::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetPlayerCombinedInfoResult*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetPlayerCombinedInfoResult::GetPlayerCombinedInfoResult()   {
}
