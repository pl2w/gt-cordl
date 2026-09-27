#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListContainerImageTagsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListContainerImageTagsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListContainerImageTagsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListContainerImageTagsRequest::*)()>(&::PlayFab::MultiplayerModels::ListContainerImageTagsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ac0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListContainerImageTagsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::ListContainerImageTagsRequest::__cordl_internal_get_ImageName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListContainerImageTagsRequest::__cordl_internal_get_ImageName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageName;
}
constexpr void PlayFab::MultiplayerModels::ListContainerImageTagsRequest::__cordl_internal_set_ImageName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImageName = value;
}
inline void PlayFab::MultiplayerModels::ListContainerImageTagsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListContainerImageTagsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListContainerImageTagsRequest* PlayFab::MultiplayerModels::ListContainerImageTagsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListContainerImageTagsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListContainerImageTagsRequest::ListContainerImageTagsRequest()   {
}
