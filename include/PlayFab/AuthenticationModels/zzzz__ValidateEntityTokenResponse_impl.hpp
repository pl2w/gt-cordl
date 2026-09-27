#pragma once
// IWYU pragma private; include "PlayFab/AuthenticationModels/ValidateEntityTokenResponse.hpp"
#include "PlayFab/AuthenticationModels/zzzz__LoginIdentityProvider_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/AuthenticationModels/zzzz__ValidateEntityTokenResponse_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__EntityKey_def.hpp"
#include "PlayFab/AuthenticationModels/zzzz__EntityLineage_def.hpp"
//  Writing Method size for method: ::PlayFab::AuthenticationModels::ValidateEntityTokenResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::AuthenticationModels::ValidateEntityTokenResponse::*)()>(&::PlayFab::AuthenticationModels::ValidateEntityTokenResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84e704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::PlayFab::AuthenticationModels::EntityKey*& PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_get_Entity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr ::PlayFab::AuthenticationModels::EntityKey* const& PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_get_Entity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Entity;
}
constexpr void PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_set_Entity(::PlayFab::AuthenticationModels::EntityKey*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Entity = value;
}
constexpr ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider>& PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_get_IdentityProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdentityProvider;
}
constexpr ::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider> const& PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_get_IdentityProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___IdentityProvider;
}
constexpr void PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_set_IdentityProvider(::System::Nullable_1<::PlayFab::AuthenticationModels::LoginIdentityProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___IdentityProvider = value;
}
constexpr ::PlayFab::AuthenticationModels::EntityLineage*& PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_get_Lineage()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lineage;
}
constexpr ::PlayFab::AuthenticationModels::EntityLineage* const& PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_get_Lineage() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Lineage;
}
constexpr void PlayFab::AuthenticationModels::ValidateEntityTokenResponse::__cordl_internal_set_Lineage(::PlayFab::AuthenticationModels::EntityLineage*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Lineage = value;
}
inline void PlayFab::AuthenticationModels::ValidateEntityTokenResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::AuthenticationModels::ValidateEntityTokenResponse* PlayFab::AuthenticationModels::ValidateEntityTokenResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::AuthenticationModels::ValidateEntityTokenResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::AuthenticationModels::ValidateEntityTokenResponse::ValidateEntityTokenResponse()   {
}
