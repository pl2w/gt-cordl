#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/WriteEventResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__WriteEventResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::WriteEventResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::WriteEventResponse::*)()>(&::PlayFab::ClientModels::WriteEventResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::WriteEventResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::WriteEventResponse::__cordl_internal_get_EventId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventId;
}
constexpr ::StringW const& PlayFab::ClientModels::WriteEventResponse::__cordl_internal_get_EventId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EventId;
}
constexpr void PlayFab::ClientModels::WriteEventResponse::__cordl_internal_set_EventId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EventId = value;
}
inline void PlayFab::ClientModels::WriteEventResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::WriteEventResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::WriteEventResponse* PlayFab::ClientModels::WriteEventResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::WriteEventResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::WriteEventResponse::WriteEventResponse()   {
}
