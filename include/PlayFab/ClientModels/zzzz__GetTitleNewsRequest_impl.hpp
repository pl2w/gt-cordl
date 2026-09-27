#pragma once
// IWYU pragma private; include "PlayFab/ClientModels/GetTitleNewsRequest.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabRequestCommon_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "PlayFab/ClientModels/zzzz__GetTitleNewsRequest_def.hpp"
//  Writing Method size for method: ::PlayFab::ClientModels::GetTitleNewsRequest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::ClientModels::GetTitleNewsRequest::*)()>(&::PlayFab::ClientModels::GetTitleNewsRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa84de58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitleNewsRequest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Nullable_1<int32_t>& PlayFab::ClientModels::GetTitleNewsRequest::__cordl_internal_get_Count()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr ::System::Nullable_1<int32_t> const& PlayFab::ClientModels::GetTitleNewsRequest::__cordl_internal_get_Count() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Count;
}
constexpr void PlayFab::ClientModels::GetTitleNewsRequest::__cordl_internal_set_Count(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Count = value;
}
inline void PlayFab::ClientModels::GetTitleNewsRequest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::ClientModels::GetTitleNewsRequest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::ClientModels::GetTitleNewsRequest* PlayFab::ClientModels::GetTitleNewsRequest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::ClientModels::GetTitleNewsRequest*>());
}
// Ctor Parameters []
constexpr ::PlayFab::ClientModels::GetTitleNewsRequest::GetTitleNewsRequest()   {
}
