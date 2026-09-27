#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkWindowsHelloAccountRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkWindowsHelloAccountRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkWindowsHelloAccountRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkWindowsHelloAccountRequest::*)()>(&::PlayFab::ClientModels::LinkWindowsHelloAccountRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84dfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkWindowsHelloAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_DeviceName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceName;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_DeviceName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DeviceName;
}
constexpr void PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_set_DeviceName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DeviceName = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_PublicKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKey;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_PublicKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PublicKey;
}
constexpr void PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_set_PublicKey(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PublicKey = value;
}
constexpr ::StringW& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_UserName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserName;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_get_UserName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserName;
}
constexpr void PlayFab::ClientModels::LinkWindowsHelloAccountRequest::__cordl_internal_set_UserName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserName = value;
}
inline void PlayFab::ClientModels::LinkWindowsHelloAccountRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkWindowsHelloAccountRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkWindowsHelloAccountRequest* PlayFab::ClientModels::LinkWindowsHelloAccountRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkWindowsHelloAccountRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkWindowsHelloAccountRequest::LinkWindowsHelloAccountRequest()   {
}
