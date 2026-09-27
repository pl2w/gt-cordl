#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/ContactEmailInfoModel.hpp"
#include "PlayFab/ClientModels/zzzz__EmailVerificationStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__ContactEmailInfoModel_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::ContactEmailInfoModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::ContactEmailInfoModel::*)()>(&::PlayFab::ClientModels::ContactEmailInfoModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84db10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ContactEmailInfoModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_get_EmailAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailAddress;
}
constexpr ::StringW const& PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_get_EmailAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailAddress;
}
constexpr void PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_set_EmailAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmailAddress = value;
}
constexpr ::StringW& PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::EmailVerificationStatus>& PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_get_VerificationStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerificationStatus;
}
constexpr ::System::Nullable_1<::PlayFab::ClientModels::EmailVerificationStatus> const& PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_get_VerificationStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerificationStatus;
}
constexpr void PlayFab::ClientModels::ContactEmailInfoModel::__cordl_internal_set_VerificationStatus(::System::Nullable_1<::PlayFab::ClientModels::EmailVerificationStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerificationStatus = value;
}
inline void PlayFab::ClientModels::ContactEmailInfoModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::ContactEmailInfoModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::ContactEmailInfoModel* PlayFab::ClientModels::ContactEmailInfoModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::ContactEmailInfoModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::ContactEmailInfoModel::ContactEmailInfoModel()   {
}
