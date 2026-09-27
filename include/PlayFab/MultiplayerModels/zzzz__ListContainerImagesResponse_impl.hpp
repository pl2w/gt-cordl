#pragma once
// IWYU pragma private; include "PlayFab/MultiplayerModels/ListContainerImagesResponse.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabResultCommon_impl.hpp"
#include "PlayFab/MultiplayerModels/zzzz__ListContainerImagesResponse_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::PlayFab::MultiplayerModels::ListContainerImagesResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::MultiplayerModels::ListContainerImagesResponse::*)()>(&::PlayFab::MultiplayerModels::ListContainerImagesResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa840ab8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListContainerImagesResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::StringW>*& PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_get_Images()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Images;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_get_Images() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Images;
}
constexpr void PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_set_Images(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Images = value;
}
constexpr int32_t& PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_get_PageSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr int32_t const& PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_get_PageSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PageSize;
}
constexpr void PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_set_PageSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PageSize = value;
}
constexpr ::StringW& PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_get_SkipToken()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr ::StringW const& PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_get_SkipToken() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SkipToken;
}
constexpr void PlayFab::MultiplayerModels::ListContainerImagesResponse::__cordl_internal_set_SkipToken(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SkipToken = value;
}
inline void PlayFab::MultiplayerModels::ListContainerImagesResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::MultiplayerModels::ListContainerImagesResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::MultiplayerModels::ListContainerImagesResponse* PlayFab::MultiplayerModels::ListContainerImagesResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::MultiplayerModels::ListContainerImagesResponse*>());
}
// Ctor Parameters []
constexpr ::PlayFab::MultiplayerModels::ListContainerImagesResponse::ListContainerImagesResponse()   {
}
