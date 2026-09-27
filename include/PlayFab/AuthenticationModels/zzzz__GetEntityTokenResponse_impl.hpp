#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/GetEntityTokenResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/AuthenticationModels/zzzz__GetEntityTokenResponse_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::AuthenticationModels::GetEntityTokenResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::AuthenticationModels::GetEntityTokenResponse::*)()>(&::PlayFab::AuthenticationModels::GetEntityTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::AuthenticationModels::EntityKey*& PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::AuthenticationModels::EntityKey* const& PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_set_Entity(::PlayFab::AuthenticationModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_get_EntityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr ::StringW const& PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_get_EntityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr void PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_set_EntityToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityToken = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_get_TokenExpiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenExpiration;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_get_TokenExpiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenExpiration;
}
constexpr void PlayFab::AuthenticationModels::GetEntityTokenResponse::__cordl_internal_set_TokenExpiration(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TokenExpiration = value;
}
inline void PlayFab::AuthenticationModels::GetEntityTokenResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::AuthenticationModels::GetEntityTokenResponse* PlayFab::AuthenticationModels::GetEntityTokenResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::AuthenticationModels::GetEntityTokenResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::AuthenticationModels::GetEntityTokenResponse::GetEntityTokenResponse()   {
}
