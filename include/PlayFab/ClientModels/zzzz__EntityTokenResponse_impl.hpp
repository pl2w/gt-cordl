#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/EntityTokenResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__EntityTokenResponse_def.hpp"
#include "PlayFab/ClientModels/zzzz__EntityKey_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::EntityTokenResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::EntityTokenResponse::*)()>(&::PlayFab::ClientModels::EntityTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::EntityTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::ClientModels::EntityKey*& PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::ClientModels::EntityKey* const& PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_set_Entity(::PlayFab::ClientModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::StringW& PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_get_EntityToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr ::StringW const& PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_get_EntityToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EntityToken;
}
constexpr void PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_set_EntityToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EntityToken = value;
}
constexpr ::System::Nullable_1<::System::DateTime>& PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_get_TokenExpiration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenExpiration;
}
constexpr ::System::Nullable_1<::System::DateTime> const& PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_get_TokenExpiration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TokenExpiration;
}
constexpr void PlayFab::ClientModels::EntityTokenResponse::__cordl_internal_set_TokenExpiration(::System::Nullable_1<::System::DateTime>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TokenExpiration = value;
}
inline void PlayFab::ClientModels::EntityTokenResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::EntityTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::EntityTokenResponse* PlayFab::ClientModels::EntityTokenResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::EntityTokenResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::EntityTokenResponse::EntityTokenResponse()   {
}
