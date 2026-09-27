#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/GetEntityTokenRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/AuthenticationModels/zzzz__GetEntityTokenRequest_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::AuthenticationModels::GetEntityTokenRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::AuthenticationModels::GetEntityTokenRequest::*)()>(&::PlayFab::AuthenticationModels::GetEntityTokenRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::GetEntityTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::AuthenticationModels::EntityKey*& PlayFab::AuthenticationModels::GetEntityTokenRequest::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::AuthenticationModels::EntityKey* const& PlayFab::AuthenticationModels::GetEntityTokenRequest::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::AuthenticationModels::GetEntityTokenRequest::__cordl_internal_set_Entity(::PlayFab::AuthenticationModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
inline void PlayFab::AuthenticationModels::GetEntityTokenRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::GetEntityTokenRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::AuthenticationModels::GetEntityTokenRequest* PlayFab::AuthenticationModels::GetEntityTokenRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::AuthenticationModels::GetEntityTokenRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::AuthenticationModels::GetEntityTokenRequest::GetEntityTokenRequest()   {
}
