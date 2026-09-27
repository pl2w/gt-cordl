#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/UntagContainerImageRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__UntagContainerImageRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::UntagContainerImageRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::UntagContainerImageRequest::*)()>(&::PlayFab::MultiplayerModels::UntagContainerImageRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UntagContainerImageRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::UntagContainerImageRequest::__cordl_internal_get_ImageName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::UntagContainerImageRequest::__cordl_internal_get_ImageName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageName;
}
constexpr void PlayFab::MultiplayerModels::UntagContainerImageRequest::__cordl_internal_set_ImageName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImageName = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::UntagContainerImageRequest::__cordl_internal_get_Tag()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tag;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::UntagContainerImageRequest::__cordl_internal_get_Tag() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tag;
}
constexpr void PlayFab::MultiplayerModels::UntagContainerImageRequest::__cordl_internal_set_Tag(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tag = value;
}
inline void PlayFab::MultiplayerModels::UntagContainerImageRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::UntagContainerImageRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::UntagContainerImageRequest* PlayFab::MultiplayerModels::UntagContainerImageRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::UntagContainerImageRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::UntagContainerImageRequest::UntagContainerImageRequest()   {
}
