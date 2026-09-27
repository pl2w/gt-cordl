#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkIOSDeviceIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkIOSDeviceIDRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkIOSDeviceIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkIOSDeviceIDRequest::*)()>(&::PlayFab::ClientModels::LinkIOSDeviceIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkIOSDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_DeviceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceId;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_DeviceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceId;
}
constexpr void PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_set_DeviceId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceId = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_DeviceModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceModel;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_DeviceModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceModel;
}
constexpr void PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_set_DeviceModel(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceModel = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_OS()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_get_OS() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OS;
}
constexpr void PlayFab::ClientModels::LinkIOSDeviceIDRequest::__cordl_internal_set_OS(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OS = value;
}
inline void PlayFab::ClientModels::LinkIOSDeviceIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkIOSDeviceIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkIOSDeviceIDRequest* PlayFab::ClientModels::LinkIOSDeviceIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkIOSDeviceIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkIOSDeviceIDRequest::LinkIOSDeviceIDRequest()   {
}
