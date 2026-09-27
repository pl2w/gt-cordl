#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListPartyQosServersRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListPartyQosServersRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListPartyQosServersRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListPartyQosServersRequest::*)()>(&::PlayFab::MultiplayerModels::ListPartyQosServersRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListPartyQosServersRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::ListPartyQosServersRequest::__cordl_internal_get_Version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListPartyQosServersRequest::__cordl_internal_get_Version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Version;
}
constexpr void PlayFab::MultiplayerModels::ListPartyQosServersRequest::__cordl_internal_set_Version(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Version = value;
}
inline void PlayFab::MultiplayerModels::ListPartyQosServersRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListPartyQosServersRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListPartyQosServersRequest* PlayFab::MultiplayerModels::ListPartyQosServersRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListPartyQosServersRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListPartyQosServersRequest::ListPartyQosServersRequest()   {
}
