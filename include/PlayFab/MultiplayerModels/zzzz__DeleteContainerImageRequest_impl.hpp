#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/DeleteContainerImageRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__DeleteContainerImageRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::DeleteContainerImageRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::DeleteContainerImageRequest::*)()>(&::PlayFab::MultiplayerModels::DeleteContainerImageRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteContainerImageRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& PlayFab::MultiplayerModels::DeleteContainerImageRequest::__cordl_internal_get_ImageName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageName;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::DeleteContainerImageRequest::__cordl_internal_get_ImageName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ImageName;
}
constexpr void PlayFab::MultiplayerModels::DeleteContainerImageRequest::__cordl_internal_set_ImageName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ImageName = value;
}
inline void PlayFab::MultiplayerModels::DeleteContainerImageRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::DeleteContainerImageRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::DeleteContainerImageRequest* PlayFab::MultiplayerModels::DeleteContainerImageRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::DeleteContainerImageRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::DeleteContainerImageRequest::DeleteContainerImageRequest()   {
}
