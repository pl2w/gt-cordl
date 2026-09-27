#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GrantCharacterToUserRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GrantCharacterToUserRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GrantCharacterToUserRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GrantCharacterToUserRequest::*)()>(&::PlayFab::ClientModels::GrantCharacterToUserRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GrantCharacterToUserRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_get_CatalogVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr ::StringW const& PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_get_CatalogVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CatalogVersion;
}
constexpr void PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_set_CatalogVersion(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CatalogVersion = value;
}
constexpr ::StringW& PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_get_CharacterName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterName;
}
constexpr ::StringW const& PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_get_CharacterName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CharacterName;
}
constexpr void PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_set_CharacterName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CharacterName = value;
}
constexpr ::StringW& PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_get_ItemId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr ::StringW const& PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_get_ItemId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ItemId;
}
constexpr void PlayFab::ClientModels::GrantCharacterToUserRequest::__cordl_internal_set_ItemId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ItemId = value;
}
inline void PlayFab::ClientModels::GrantCharacterToUserRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GrantCharacterToUserRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GrantCharacterToUserRequest* PlayFab::ClientModels::GrantCharacterToUserRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GrantCharacterToUserRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GrantCharacterToUserRequest::GrantCharacterToUserRequest()   {
}
