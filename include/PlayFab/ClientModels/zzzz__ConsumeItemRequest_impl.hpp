#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ConsumeItemRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ConsumeItemRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ConsumeItemRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ConsumeItemRequest::*)()>(&::PlayFab::ClientModels::ConsumeItemRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumeItemRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_get_CharacterId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr ::StringW const& PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_get_CharacterId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterId;
}
constexpr void PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_set_CharacterId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterId = value;
}
constexpr int32_t& PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_get_ConsumeCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConsumeCount;
}
constexpr int32_t const& PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_get_ConsumeCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ConsumeCount;
}
constexpr void PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_set_ConsumeCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ConsumeCount = value;
}
constexpr ::StringW& PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_get_ItemInstanceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr ::StringW const& PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_get_ItemInstanceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemInstanceId;
}
constexpr void PlayFab::ClientModels::ConsumeItemRequest::__cordl_internal_set_ItemInstanceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemInstanceId = value;
}
inline void PlayFab::ClientModels::ConsumeItemRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ConsumeItemRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ConsumeItemRequest* PlayFab::ClientModels::ConsumeItemRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ConsumeItemRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ConsumeItemRequest::ConsumeItemRequest()   {
}
