#pragma once
// IWYU pragma private; include "PlayFab/CloudScriptModels/ContactEmailInfoModel.hpp"
#include "PlayFab/CloudScriptModels/zzzz__EmailVerificationStatus_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/CloudScriptModels/zzzz__ContactEmailInfoModel_def.hpp"
//  Writing Method size for method: ::PlayFab::CloudScriptModels::ContactEmailInfoModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::CloudScriptModels::ContactEmailInfoModel::*)()>(&::PlayFab::CloudScriptModels::ContactEmailInfoModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa842f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_get_EmailAddress()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailAddress;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_get_EmailAddress() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___EmailAddress;
}
constexpr void PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_set_EmailAddress(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___EmailAddress = value;
}
constexpr ::StringW& PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_get_Name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr ::StringW const& PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_get_Name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Name;
}
constexpr void PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_set_Name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Name = value;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus>& PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_get_VerificationStatus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerificationStatus;
}
constexpr ::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus> const& PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_get_VerificationStatus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___VerificationStatus;
}
constexpr void PlayFab::CloudScriptModels::ContactEmailInfoModel::__cordl_internal_set_VerificationStatus(::System::Nullable_1<::PlayFab::CloudScriptModels::EmailVerificationStatus>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___VerificationStatus = value;
}
inline void PlayFab::CloudScriptModels::ContactEmailInfoModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::CloudScriptModels::ContactEmailInfoModel* PlayFab::CloudScriptModels::ContactEmailInfoModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::CloudScriptModels::ContactEmailInfoModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::CloudScriptModels::ContactEmailInfoModel::ContactEmailInfoModel()   {
}
