#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkedPlatformAccountModel.hpp"
#include "PlayFab/ClientModels/zzzz__LoginIdentityProvider_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkedPlatformAccountModel_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkedPlatformAccountModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkedPlatformAccountModel::*)()>(&::PlayFab::ClientModels::LinkedPlatformAccountModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkedPlatformAccountModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_Email()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_Email() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Email;
}
constexpr void PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_set_Email(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Email = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_Platform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider> const& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_Platform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Platform;
}
constexpr void PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_set_Platform(::System::Nullable_1<::PlayFab::ClientModels::LoginIdentityProvider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Platform = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_PlatformUserId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformUserId;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_PlatformUserId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PlatformUserId;
}
constexpr void PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_set_PlatformUserId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PlatformUserId = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_Username()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_get_Username() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Username;
}
constexpr void PlayFab::ClientModels::LinkedPlatformAccountModel::__cordl_internal_set_Username(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Username = value;
}
inline void PlayFab::ClientModels::LinkedPlatformAccountModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkedPlatformAccountModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkedPlatformAccountModel* PlayFab::ClientModels::LinkedPlatformAccountModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkedPlatformAccountModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkedPlatformAccountModel::LinkedPlatformAccountModel()   {
}
