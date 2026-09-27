#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/RolloverContainerRegistryCredentialsResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__RolloverContainerRegistryCredentialsResponse_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::*)()>(&::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_get_DnsName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DnsName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_get_DnsName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DnsName;
}
constexpr void PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_set_DnsName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DnsName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_get_Password()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_get_Password() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Password;
}
constexpr void PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_set_Password(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Password = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
inline void PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse* PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::RolloverContainerRegistryCredentialsResponse::RolloverContainerRegistryCredentialsResponse()   {
}
