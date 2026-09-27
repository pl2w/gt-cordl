#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/LinkCustomIDRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__LinkCustomIDRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::LinkCustomIDRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::LinkCustomIDRequest::*)()>(&::PlayFab::ClientModels::LinkCustomIDRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84df00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkCustomIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::ClientModels::LinkCustomIDRequest::__cordl_internal_get_CustomId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomId;
}
constexpr ::StringW const& PlayFab::ClientModels::LinkCustomIDRequest::__cordl_internal_get_CustomId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___CustomId;
}
constexpr void PlayFab::ClientModels::LinkCustomIDRequest::__cordl_internal_set_CustomId(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___CustomId = value;
}
constexpr ::System::Nullable_1<bool>& PlayFab::ClientModels::LinkCustomIDRequest::__cordl_internal_get_ForceLink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr ::System::Nullable_1<bool> const& PlayFab::ClientModels::LinkCustomIDRequest::__cordl_internal_get_ForceLink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ForceLink;
}
constexpr void PlayFab::ClientModels::LinkCustomIDRequest::__cordl_internal_set_ForceLink(::System::Nullable_1<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ForceLink = value;
}
inline void PlayFab::ClientModels::LinkCustomIDRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::LinkCustomIDRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::LinkCustomIDRequest* PlayFab::ClientModels::LinkCustomIDRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::LinkCustomIDRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::LinkCustomIDRequest::LinkCustomIDRequest()   {
}
